@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 1
cd /d "%~dp0..\dump\vtables"
cl /nologo /std:c++17 /EHsc /c compile_check.cpp
exit /b %errorlevel%
