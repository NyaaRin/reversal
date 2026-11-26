@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 exit /b 1
cd /d "%~dp0"
if not exist build mkdir build
ml64 /nologo /c /Fo"build\hook.obj" hook.asm
if errorlevel 1 exit /b 1
cl /nologo /LD /O2 /MD /Zi /std:c++17 /EHsc /DNDEBUG /D_CRT_SECURE_NO_WARNINGS ^
    /I"..\..\VenomHook\ImGui" dllmain.cpp "build\hook.obj" ^
    /Fe:build\SkyfallLogo.dll ^
    /link /DEBUG /INCREMENTAL:NO /Brepro /PDBALTPATH:SkyfallLogo.pdb ^
    /PDB:"build\SkyfallLogo.pdb" /SUBSYSTEM:WINDOWS d3d9.lib gdiplus.lib shlwapi.lib user32.lib
if errorlevel 1 exit /b 1
echo Built %~dp0build\SkyfallLogo.dll
