@echo off
setlocal
cd /d "%~dp0"

if not exist "imclass_host.exe" (
    echo imclass_host.exe missing - run build_imclass_tools.bat first
    exit /b 1
)

start "imclass host" "%~dp0imclass_host.exe" "%~dp0..\..\m64.dll" --hold
timeout /t 1 /nobreak >nul
start "" "%~dp0..\..\..\..\.tools\ImClass\ImClass.exe"

echo Attach ImClass to imclass_host.exe, then paste 0x180000000 + vtable RVA.
echo The address index is in re\dump\imclass\class_index.md.
