@echo off
setlocal
rem Builds the reconstructed subsystems and runs their self-tests.
rem Uses the same toolchain the other payloads in this repo build with.
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 exit /b 1
cd /d "%~dp0"

if not exist build mkdir build
if not exist build\shot mkdir build\shot
if not exist build\prediction mkdir build\prediction
if not exist build\autowall mkdir build\autowall
if not exist build\aim mkdir build\aim
if not exist build\visual mkdir build\visual
if not exist build\movement mkdir build\movement
if not exist build\hvh mkdir build\hvh
if not exist build\backtrack mkdir build\backtrack
if not exist build\lua mkdir build\lua
if not exist build\account mkdir build\account
if not exist build\config mkdir build\config
if not exist build\sqlite mkdir build\sqlite
if not exist build\renderer mkdir build\renderer
if not exist build\renderer\imgui mkdir build\renderer\imgui
if not exist build\resolver mkdir build\resolver

echo === building nospread self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\ ^
   /Fe:build\nospread_selftest.exe ^
   src\features\nospread\selftest.cpp
if errorlevel 1 exit /b 1

echo === building weapon/seed self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\shot\ ^
   /Fe:build\shot_selftest.exe ^
   src\features\shot\selftest.cpp
if errorlevel 1 exit /b 1

echo === building prediction self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\prediction\ ^
   /Fe:build\prediction_selftest.exe ^
   src\features\prediction\selftest.cpp
if errorlevel 1 exit /b 1

echo === building autowall self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\autowall\ ^
   /Fe:build\autowall_selftest.exe ^
   src\features\autowall\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running nospread self-test ===
build\nospread_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === running weapon/seed self-test ===
build\shot_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === running prediction self-test ===
build\prediction_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === running autowall self-test ===
build\autowall_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building aim self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\aim\ ^
   /Fe:build\aim_selftest.exe ^
   src\features\aim\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running aim self-test ===
build\aim_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building visual self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\visual\ ^
   /Fe:build\visual_selftest.exe ^
   src\features\visual\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running visual self-test ===
build\visual_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building movement self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\movement\ ^
   /Fe:build\movement_selftest.exe ^
   src\features\movement\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running movement self-test ===
build\movement_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building hvh self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\hvh\ ^
   /Fe:build\hvh_selftest.exe ^
   src\features\hvh\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running hvh self-test ===
build\hvh_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building backtrack self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\backtrack\ ^
   /Fe:build\backtrack_selftest.exe ^
   src\features\backtrack\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running backtrack self-test ===
build\backtrack_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building lua self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\lua\ ^
   /Fe:build\lua_selftest.exe ^
   src\features\lua\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running lua self-test ===
build\lua_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building account self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\account\ ^
   /Fe:build\account_selftest.exe ^
   src\features\account\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running account self-test ===
build\account_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building config self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\config\ ^
   /Fe:build\config_selftest.exe ^
   src\features\config\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running config self-test ===
build\config_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building sqlite decode self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\sqlite\ ^
   /Fe:build\sqlite_selftest.exe ^
   src\features\config\sqlite_selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running sqlite decode self-test ===
build\sqlite_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building renderer helper self-test ===
cl /nologo /std:c++17 /EHsc /W3 /O2 /MD /I third_party\imgui ^
   /Fo:build\renderer\imgui\ ^
   /c third_party\imgui\imgui.cpp ^
      third_party\imgui\imgui_draw.cpp ^
      third_party\imgui\imgui_tables.cpp ^
      third_party\imgui\imgui_widgets.cpp
if errorlevel 1 exit /b 1
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD /I third_party\imgui ^
   /Fo:build\renderer\ ^
   /Fe:build\renderer_selftest.exe ^
   src\features\renderer\selftest.cpp ^
   src\features\renderer\dependencies.cpp ^
   src\features\renderer\renderer.cpp ^
   src\features\renderer\ui_helpers.cpp ^
   src\features\renderer\ui_widgets.cpp ^
   src\features\renderer\log_writer.cpp ^
   build\renderer\imgui\imgui.obj ^
   build\renderer\imgui\imgui_draw.obj ^
   build\renderer\imgui\imgui_tables.obj ^
   build\renderer\imgui\imgui_widgets.obj ^
   /link comdlg32.lib
if errorlevel 1 exit /b 1

echo.
echo === running renderer helper self-test ===
build\renderer_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building resolver self-test ===
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\resolver\ ^
   /Fe:build\resolver_selftest.exe ^
   src\features\resolver\selftest.cpp
if errorlevel 1 exit /b 1

echo.
echo === running resolver self-test ===
build\resolver_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo === building runtime self-test ===
if not exist build\runtime mkdir build\runtime
cl /nologo /std:c++17 /EHsc /W4 /O2 /MD ^
   /Fo:build\runtime\ ^
   /Fe:build\runtime_selftest.exe ^
   src\runtime\selftest.cpp ^
   src\runtime\config.cpp
if errorlevel 1 exit /b 1

echo.
echo === running runtime self-test ===
build\runtime_selftest.exe
if errorlevel 1 exit /b 1

echo.
echo All reconstructed subsystems built and verified.
