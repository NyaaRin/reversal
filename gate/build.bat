@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 exit /b 1
cd /d "%~dp0"
if not exist build mkdir build
cl /nologo /LD /O2 /MD /Zi /std:c++17 /EHsc /DNDEBUG /D_CRT_SECURE_NO_WARNINGS ^
    /experimental:deterministic /pathmap:"%~dp0=." dllmain.cpp ^
    /Fe:build\SkyfallGate.dll ^
    /link /DEBUG /INCREMENTAL:NO /Brepro /PDBALTPATH:SkyfallGate.pdb ^
    /PDB:"build\SkyfallGate.pdb" /SUBSYSTEM:WINDOWS winhttp.lib
if errorlevel 1 exit /b 1
echo Built %~dp0build\SkyfallGate.dll
