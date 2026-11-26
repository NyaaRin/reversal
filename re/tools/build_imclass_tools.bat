@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 1
cd /d "%~dp0"

cl /nologo /std:c++20 /EHsc /W4 /O2 /MD imclass_host.cpp /Fe:imclass_host.exe
if errorlevel 1 exit /b 1

cl /nologo /std:c++20 /EHsc /W4 /O2 /MD /DUNICODE /D_UNICODE ^
   /I "..\..\..\..\.tools\ImClass\src\ImClass-main" ^
   imclass_dump.cpp /Fe:imclass_dump.exe
exit /b %errorlevel%
