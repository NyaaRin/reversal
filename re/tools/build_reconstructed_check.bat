@echo off
setlocal
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 1
pushd "%~dp0..\.."
if not exist build\reconstructed mkdir build\reconstructed

for %%f in (src\reconstructed\chunks\*.cpp) do (
  cl /nologo /std:c++17 /EHsc /W4 /c /Fo:build\reconstructed\%%~nf.obj "%%f"
  if errorlevel 1 (
    popd
    exit /b 1
  )
)

cl /nologo /std:c++17 /EHsc /W4 /Fo:build\reconstructed\ /Fe:build\reconstructed_check.exe src\reconstructed\compile_check.cpp
if errorlevel 1 (
  popd
  exit /b 1
)
popd
exit /b 0
