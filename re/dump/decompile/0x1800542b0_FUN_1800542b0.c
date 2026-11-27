// 0x1800542b0  FUN_1800542b0
// size=145 thunk=false
// signature: undefined FUN_1800542b0()
// status: ok


undefined1
FUN_1800542b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  HANDLE hMem;
  char *_Str;
  size_t sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  uVar4 = 0;
  hMem = GetClipboardData(1);
  if (hMem != (HANDLE)0x0) {
    _Str = GlobalLock(hMem);
    if (_Str != (char *)0x0) {
      sVar2 = strlen(_Str);
      FUN_180212700(param_1,_Str,sVar2,param_4,uVar4);
      uVar3 = 1;
      GlobalUnlock(hMem);
    }
  }
  CloseClipboard();
  return uVar3;
}


