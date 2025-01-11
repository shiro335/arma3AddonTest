class MSK_moduleNuke {
    scope = 2;
    displayName = "lightning";
    category = "Effects";

    function = "MSK_fnc_moduleNuke";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 1;
    is3DEN = 0;

    class test{
        expression = "_this setVariable ['%s', _value, true]";
        property = "test2";
        displayName = "test1";
        tooltip = "test0";
        defaultValue = 10;
        typeName = "NUMBER";

    };
};

//     scope = 2;
//     displayName = "lightning";
//     category = "Effects";

//     function = "MSK_fnc_moduleNuke";
//     functionPriority = 1;
//     isGlobal = 1;
//     isTriggerActivated = 1;
//     isDisposable = 1;
//     is3DEN = 0;
//     ////////////////////////////////////////////////////////
//     // GUI EDITOR OUTPUT START (by Smith modding, v1.063, #Xonolo)
//     ////////////////////////////////////////////////////////

//     class RscButtonMenuOK_2600: RscButtonMenuOK
//     {
//         x = 4 * GUI_GRID_W + GUI_GRID_X;
//         y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
//         w = 11 * GUI_GRID_W;
//         h = 2 * GUI_GRID_H;
//     };
//     class RscButtonMenuCancel_2700: RscButtonMenuCancel
//     {
//         x = 23 * GUI_GRID_W + GUI_GRID_X;
//         y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
//         w = 13 * GUI_GRID_W;
//         h = 2 * GUI_GRID_H;
//     };
//     class RscText_1000: RscText
//     {
//         idc = 1000;
//         x = 0 * GUI_GRID_W + GUI_GRID_X;
//         y = 0 * GUI_GRID_H + GUI_GRID_Y;
//         w = 40 * GUI_GRID_W;
//         h = 25 * GUI_GRID_H;
//         colorBackground[] = {0,0,0,0.25};
//     };
//     class RscText_1001: RscText
//     {
//         idc = 1001;
//         text = "Lightning"; //--- ToDo: Localize;
//         x = 0 * GUI_GRID_W + GUI_GRID_X;
//         y = 0 * GUI_GRID_H + GUI_GRID_Y;
//         w = 40 * GUI_GRID_W;
//         h = 2 * GUI_GRID_H;
//         colorBackground[] = {0.25,0,0,1};
//     };
//     class Test: RscEdit
//     {
//         idc = 1400;
//         x = 12 * GUI_GRID_W + GUI_GRID_X;
//         y = 11 * GUI_GRID_H + GUI_GRID_Y;
//         w = 13.5 * GUI_GRID_W;
//         h = 2 * GUI_GRID_H;
//         colorText[] = {1,0,0,1};
//         defaultValue = 10;
//         typeName = "NUMBER";
//     };
//     ////////////////////////////////////////////////////////
//     // GUI EDITOR OUTPUT END
//     ////////////////////////////////////////////////////////

// };