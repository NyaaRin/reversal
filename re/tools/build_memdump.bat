@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 exit /b 1
cd /d "%~dp0"
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD memdump.cpp /Fe:memdump.exe /link dbghelp.lib psapi.lib
exit /b %errorlevel%
