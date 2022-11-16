@echo off
TITLE Log Viewer
color 0A
SETLOCAL EnableDelayedExpansion


REM ////SET THESE FILES////
set "NPP_Directory="C:\Users\Phil\AppData\Local\Programs\Microsoft VS Code\"
set LogsDir=E:\Missions\SP\Logs\
REM ///////////////////////

set "LatestFile="
set "SecondLatestFile="

for /F "delims=|" %%I in ('dir %LogsDir%\*.log /B /O:D') do ( 
	set SecondLatestFile=!LatestFile!
	set LatestFile=%%I
)

CD /D %NPP_Directory%
Code %LogsDir%\%LatestFile%
Code %LogsDir%\%SecondLatestFile%
