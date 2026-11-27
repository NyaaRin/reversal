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

rem Each chunk is compiled on its own; that per-TU compilation is what
rem type-checks every accessor expression.  The chunks reference the DLL image
rem through extern declarations, so a full link would need placeholder
rem definitions for 9,745 image symbols and would prove nothing further about
rem the recovered expressions.
cl /nologo /std:c++17 /EHsc /W4 /Fo:build\reconstructed\ /Fe:build\reconstructed_check.exe src\reconstructed\compile_check.cpp
if errorlevel 1 (
  popd
  exit /b 1
)
popd
exit /b 0
