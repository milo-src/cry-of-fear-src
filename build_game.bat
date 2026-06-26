@echo off
setlocal

pushd "%~dp0" >nul

powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0scripts\build-game.ps1" -Jobs %NUMBER_OF_PROCESSORS% -DeployDir "%USERPROFILE%\Desktop\cof_xash" %*
set "BUILD_EXIT=%errorlevel%"

popd >nul
exit /b %BUILD_EXIT%
