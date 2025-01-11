class CfgPatches
{
	class MSK_Nuke
	{
		units[] = { "MSK_ModuleNuke" };
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};

class CfgFactionClasses
{
	class MSK_tools;
	class MSK_explosions: MSK_tools
	{
		displayName = "Explosions";
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		// Description base classes (for more information see below):
		class ModuleDescription
		{
			class AnyBrain;
		};

	};

	#include "\z\MSK\addons\modules\display\moduleNuke.hpp"
};






// class CfgFunctions
// {
// 	class MSK
// 	{
// 		class MSK_tools
// 		{
			
// 			file = "\z\MSK\addons\modules\functions";
// 			class moduleNuke {
// 				class Test{
// 					displayName = "test";
// 					description = "test";
// 					typeName = "NUMBER";
// 					defaultValue = 0;
//             	};
// 			};
// 			class init{
// 				init = 1;
// 			};
// 		};
// 	};
// };







// class MSK_ModuleNuke : Module_F
// {
// 	// Standard object definitions:
// 	scope = 2;										// Editor visibility; 2 will show it in the menu, 1 will hide it.
// 	displayName = "Nuclear Explosion";				// Name displayed in the menu
// 	//icon = "\MSK_Nuke\data\icon_Nuke_ca.paa";	// Map icon. Delete this entry to use the default icon.
// 	category = "Effects";

// 	function = "MSK_fnc_moduleNuke";	// Name of function triggered once conditions are met
// 	functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
// 	isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
// 	isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
// 	isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
// 	is3DEN = 0;							// 1 to run init function in Eden Editor as well
// 	curatorCanAttach = 1;				// 1 to allow Zeus to attach the module to an entity
// 	scopeCurator = 2; //found on reddit
// 	//curatorInfoType = "\z\MSK\modules\display\moduleNuke.hpp"; // Menu displayed when the module is placed or double-clicked on by Zeus




// };