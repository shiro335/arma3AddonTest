params [
    ["_module", objNull, [objNull]],        // Argument 0 is module logic
    ["_units", [], [[]]],                // Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
    ["_activated", true, [true]]        // True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];

private _pos = ASLToAGL (getPosASL _module);
//private _testVar = _module getVariable ["Test", 10];

amount = random[1,0,100];

while {amount >= 0} do {
	private _hit = _pos getPos [50 * sqrt random 1, random 360];

	private _tempTarget = createSimpleObject ["Land_HelipadEmpty_F", _hit];

	[_tempTarget, nil, true] spawn BIS_fnc_moduleLightning;

	uiSleep random 5;

	amount = amount - 1;
};

deleteVehicle _module;
//systemChat _testVar;
true;

