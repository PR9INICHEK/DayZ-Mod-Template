[WorkbenchPluginAttribute("Build Mod", "Builds current mod", "F8", "", {"ResourceManager", "ScriptEditor"})]
class BuildMod: DayZProjectManager
{
	override void Run()
	{
		RunDayZBatList({
			string.Format("E:\\%1\\Workbench\\Batchfiles\\Exit.bat", ModName), 
			string.Format("E:\\%1\\Workbench\\Batchfiles\\ZBinarizeDeploy.bat", ModName)
		});
	}
}

[WorkbenchPluginAttribute("Build Mod and Launch Offline", "Builds current mod", "Ctrl+F8", "", {"ResourceManager", "ScriptEditor"})]
class BuildModAndLaunch: DayZProjectManager
{
	override void Run()
	{
		RunDayZBatList({
			string.Format("E:\\%1\\Workbench\\Batchfiles\\Exit.bat", ModName), 
			string.Format("E:\\%1\\Workbench\\Batchfiles\\ZBinarizeDeploy.bat", ModName), 
			string.Format("E:\\%1\\Workbench\\Batchfiles\\LaunchOffline.bat", ModName)
		});
	}
}

[WorkbenchPluginAttribute("Launch Client + Server", "Launches Server", "F6", "", {"ResourceManager", "ScriptEditor"})]
class LaunchServer: DayZProjectManager
{
	override void Run()
	{
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\Exit.bat", ModName), true);
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\LaunchServer.bat", ModName));
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\LaunchLocalMP.bat", ModName));
	}
}

[WorkbenchPluginAttribute("Launch and Build Client + Server", "Launches Server", "Ctrl+F6", "", {"ResourceManager", "ScriptEditor"})]
class LaunchBuildServer: DayZProjectManager
{
	override void Run()
	{
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\Exit.bat", ModName), true);
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\ZBinarizeDeploy.bat", ModName), true);
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\LaunchServer.bat", ModName));
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\LaunchLocalMP.bat", ModName));
	}
}

[WorkbenchPluginAttribute("Launch ONLY Server", "Launch Only Server with Server Mod", "", "", {"ScriptEditor"})]
class LaunchOnlyServer: DayZProjectManager
{
	override void Run()
	{
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\Exit.bat", ModName), true);
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\LaunchServer.bat", ModName));
	}
}

[WorkbenchPluginAttribute("DayZ Kill", "Just for testing", "Ctrl+3", "", {"ScriptEditor"})]
class KillDayzTool: DayZProjectManager
{
	[Attribute("day_z_data_missions/killDayZ.bat", "fileeditbox", "Path to missions dir", "")]
	
	override void Run()
	{
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\Exit.bat", ModName), true);
	}
}