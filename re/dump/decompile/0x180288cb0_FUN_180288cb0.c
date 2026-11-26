// 0x180288cb0  FUN_180288cb0
// size=304 thunk=false
// signature: undefined FUN_180288cb0()
// status: ok


undefined8 FUN_180288cb0(longlong param_1)

{
  BOOL BVar1;
  int cbMultiByte;
  HANDLE hMem;
  LPCWSTR lpWideCharStr;
  
  if (*(longlong *)(param_1 + 0x26e8) != 0) {
    *(undefined8 *)(param_1 + 0x26e0) = 0;
    FUN_18026f680();
    *(undefined8 *)(param_1 + 0x26e8) = 0;
  }
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 != 0) {
    hMem = GetClipboardData(0xd);
    if (hMem != (HANDLE)0x0) {
      lpWideCharStr = GlobalLock(hMem);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
        FUN_18028a8d0(param_1 + 0x26e0,cbMultiByte);
        WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,*(LPSTR *)(param_1 + 0x26e8),cbMultiByte,
                            (LPCSTR)0x0,(LPBOOL)0x0);
      }
      GlobalUnlock(hMem);
      CloseClipboard();
      return *(undefined8 *)(param_1 + 0x26e8);
    }
    CloseClipboard();
    return 0;
  }
  return 0;
}


