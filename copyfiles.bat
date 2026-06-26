@echo off
setlocal

set "TARGET_DIR=%USERPROFILE%\Desktop\cof_xash"
set "CONFIG=Release"

if not "%~1"=="" set "TARGET_DIR=%~1"
if not "%~2"=="" set "CONFIG=%~2"

powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0scripts\copy-built-files.ps1" -DeployDir "%TARGET_DIR%" -Configuration "%CONFIG%"
exit /b %errorlevel%
