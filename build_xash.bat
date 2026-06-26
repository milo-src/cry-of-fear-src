@echo off
setlocal

pushd "%~dp0" >nul

if not exist "deps\sdl2\SDL2-2.32.10\include\SDL.h" (
    powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0scripts\fetch-sdl2.ps1"
    if errorlevel 1 (
        popd >nul
        exit /b 1
    )
)

powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0scripts\build-xash3d.ps1" -Jobs %NUMBER_OF_PROCESSORS% -GameDir cryoffear -DeployDir "%USERPROFILE%\Desktop\cof_xash" %*
set "BUILD_EXIT=%errorlevel%"

popd >nul
exit /b %BUILD_EXIT%
