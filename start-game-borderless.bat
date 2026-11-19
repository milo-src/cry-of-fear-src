@echo off
call "%~dp0launch.bat" --borderless --width 1920 --height 1080 %*
exit /b %errorlevel%
