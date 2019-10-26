/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    A simple task finite state machine.  This FSM just takes a queue
    of BIS_fnc_taskCreate arguments and executes them to completion
    in order.  Each argument in the queue is coupled with an event
    variable.  When the event variable is non-nil, the task is marked
    as successful and the next task is created.  When all the tasks
    are complete the mission ends with success.

    The caller can also pass a queue of failure debriefing class names
    that are coupled with an event variable.  All of the event variables
    in this list are monitored.  If any become non-nil, the mission
    fails using the debriefing class name that the variable is coupled
    with.

    This function must be called on the server as it operates globally.

    Parameter(s):

    0: ARRAY - An array of BIS_fnc_taskCreate arguments and event
    variables.  Each element in the array is an array of the following
    format:
        [[[<arguments to BIS_fnc_taskCreate>],"<event variable name>"], ...]

    1: (Optional) ARRAY - An array of failure debriefing names and event
    variables.  Each element in the array has the following format:
        [[<debriefing class name>, "<event variable>"], ...]

    Returns: true on mission completion

    Example:

    _taskQueue = [
        [[blufor,"FindTask", "Find", "hostageMarker","CREATED",1,true,"move"], "hostageFound"],
        [[blufor,"FreeTask", "Free", objNull,        "CREATED",1,true,"help"], "hostageFree"],
        [[blufor,"exfilTask","Exfil","exfilMarker",  "CREATED",1,true,"move"], "hostageExfil"]
    ];

    [_taskQueue] call den_fnc_taskFsm;
*/
#include "..\..\macros.hpp"

params [
    ["_taskQueue", [], [[]]],
    ["_failQueue", [], [[]]]
];

// trick linter - This shadows the argument parameter passed by CBA
// event handler so the linter doesn't warn _thisArgs is not private.
private _thisArgs = [];
/*
 * Trigger a taskCreate call anytime a new player is initialized.
 * This is necessary because when a new player joins, they switch
 * form the player slot unit, into the dynamic one.  This can cause
 * tasks to go missing.  The root cause for this is not fully understood.
 * However, it's likely a race between the player switch call and the
 * coordination of the BI task framework. Forcing a call to
 * BIS_fnc_taskCreate seems to solve this problem.
 */
[
    "den_taskFsmNewPlayer",
    {
        {
            private _taskArgs   = +(_x select 0);
            private _taskName   = _taskArgs select 1;
            private _taskExists = [_taskName] call BIS_fnc_taskExists;

            if (_taskExists) then {
                private _state = [_TaskName] call BIS_fnc_taskState;
                _taskArgs set [4, _state];
                _taskArgs set [6, false];
                _taskArgs call BIS_fnc_taskCreate;
            };
        } forEach _thisArgs;
    },
    _taskQueue
] call CBA_fnc_addEventHandlerArgs;

[_taskQueue, _failQueue] spawn {
    params ["_taskQueue", "_failQueue"];

    private _ok   = true;
    private _head = 0;
    private _end  = (count _taskQueue);

    while {_head < _end && _ok}  do {
        private _task      = _taskQueue select _head;
        private _taskArgs  = _task select 0;
        private _taskEvent = _task select 1;

        _taskArgs call BIS_fnc_taskCreate;

        while {_ok} do {
            if (!isNil _taskEvent) exitWith {
                private _taskName = _taskArgs select 1;
                if (missionNamespace getVariable _taskEvent) then {
                    [_taskName, "SUCCEEDED"] call BIS_fnc_taskSetState;
                } else {
                    [_taskName, "FAILED"] call BIS_fnc_taskSetState;
                };
                _head = _head + 1;
                sleep 4;
            };

            {
                private _debrief   = _x select 0;
                private _failEvent = _x select 1;
                if (!isNil _failEvent) exitWith {
                    _ok = false;
                    [_debrief, false] remoteExec ["BIS_fnc_endMission", 0, true];
                };
            } forEach _failQueue;

            sleep 1;
        };
    };

    if (_ok) then {
        ["end1"] remoteExec ["BIS_fnc_endMission", 0, true];
    };
};

true;
