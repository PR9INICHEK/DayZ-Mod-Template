[WorkbenchPluginAttribute("Open Log Files", "Opens logfiles in NPP", "F4", "", {"ResourceManager", "ScriptEditor"})]
class OpenLogFiles: DayZProjectManager
{
	
	override void Run()
	{
		RunDayZBat(string.Format("E:\\%1\\Workbench\\Batchfiles\\OpenLogs.bat", ModName), true);
	}
}