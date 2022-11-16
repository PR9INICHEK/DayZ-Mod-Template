
class CfgPatches
{
	class ModTemplate_Scripts
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class DZ_ModTemplate
	{
		name = "Mod Template";
		dir = "ModTemplate";
		credits = "";
		author = "";
		creditsJson = "ModTemplate/Scripts/Data/Credits.json";
		versionPath = "ModTemplate/Scripts/Data/Version.hpp";
		inputs = "ModTemplate/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] = { "Game", "World", "Mission" };
		class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class engineScriptModule
			{
				value = "";
				files[] = {"ModTemplate/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				value="";
				files[] = {"ModTemplate/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value="";
				files[] = {"ModTemplate/Scripts/4_World"};
			};

			class missionScriptModule 
			{
				value="";
				files[] = {"ModTemplate/Scripts/5_Mission"};
			};
		};
	};
};
