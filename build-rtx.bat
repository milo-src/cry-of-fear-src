@echo off
cd /d "%~dp0"
python tools\build_rtx.py %*
if errorlevel 1 (
    echo RTX build failed. See build\engine-rtx-build.log.
    pause
    exit /b 1
)
