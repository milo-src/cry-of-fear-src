@echo off
cd /d "%~dp0"
python tools\build_all.py %*
if errorlevel 1 (
    echo Build failed. See the error above.
    pause
    exit /b 1
)
