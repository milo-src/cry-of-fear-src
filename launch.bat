@echo off
cd /d "%~dp0"
python tools\run_game.py %*
if errorlevel 1 (
    pause
    exit /b 1
)
