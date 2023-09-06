class CfgPatches
{
	class Decay
	{
		units[] = {};
		weapons[] = {};

		requiredVersion = 0.1;

		requiredAddons[] = {};
	};
};

class CfgMods
{
	class Decay
	{
		author = "rx";
		type = "mod";

		dependencies[] =
		{
			"Mission"
		};

		class defs
		{
			class missionScriptModule
			{
				files[] =
				{
					"Decay/scripts/5_Mission"
				};
			};
		};
	};
};
