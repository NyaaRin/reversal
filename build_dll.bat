@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 exit /b 1
cd /d "%~dp0"
if not exist "build" mkdir "build"
if not exist "build\imgui" mkdir "build\imgui"
if exist "build\Skyfall.pdb" del /q "build\Skyfall.pdb"

cl /nologo /O2 /MD /W3 /std:c++17 /EHsc /DNDEBUG /D_CRT_SECURE_NO_WARNINGS /I third_party\imgui /I third_party\imgui\backends ^
    /Fo:build\imgui\ /c ^
    third_party\imgui\imgui.cpp third_party\imgui\imgui_draw.cpp ^
    third_party\imgui\imgui_tables.cpp third_party\imgui\imgui_widgets.cpp ^
    third_party\imgui\backends\imgui_impl_dx9.cpp
if errorlevel 1 exit /b 1

cl /nologo /LD /O2 /MD /Zi /W4 /std:c++17 /EHsc /DNDEBUG /D_CRT_SECURE_NO_WARNINGS /experimental:deterministic /pathmap:"%~dp0=." /I third_party\imgui /I third_party\imgui\backends ^
    /Fo:build\ /Fd:build\vc140.pdb ^
    src\runtime\skyfall.cpp src\runtime\config.cpp ^
    src\features\renderer\dependencies.cpp src\features\renderer\log_writer.cpp ^
    src\features\renderer\renderer.cpp src\features\renderer\renderer_ui_imGui.cpp ^
    src\features\renderer\renderer_runtime.cpp ^
    src\features\renderer\ui_widgets.cpp src\features\renderer\ui_helpers.cpp ^
    build\imgui\imgui.obj build\imgui\imgui_draw.obj ^
    build\imgui\imgui_tables.obj build\imgui\imgui_widgets.obj ^
    build\imgui\imgui_impl_dx9.obj ^
    /Fe:build\Skyfall.dll ^
    /link /DEBUG /INCREMENTAL:NO /Brepro /PDBALTPATH:Skyfall.pdb /PDB:"build\Skyfall.pdb" /MAP:"build\Skyfall.map" /SUBSYSTEM:WINDOWS user32.lib comdlg32.lib d3d9.lib
if errorlevel 1 exit /b 1
echo Built %~dp0build\Skyfall.dll
