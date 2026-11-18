@echo off
python "%~dp0waf" %*
exit /b %errorlevel%
