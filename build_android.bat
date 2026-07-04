@echo off
setlocal

pushd "%~dp0" >nul

powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0scripts\build-android.ps1" -Jobs %NUMBER_OF_PROCESSORS% %*
set "BUILD_EXIT=%errorlevel%"

popd >nul
exit /b %BUILD_EXIT%
