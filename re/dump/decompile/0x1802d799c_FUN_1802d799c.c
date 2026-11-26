// 0x1802d799c  FUN_1802d799c
// size=61 thunk=false
// signature: undefined FUN_1802d799c()
// status: ok


undefined8 FUN_1802d799c(DWORD param_1,LPWSTR param_2)

{
  DWORD DVar1;
  undefined4 uStackX_1c;
  
  DVar1 = GetCurrentDirectoryW(param_1,param_2);
  if ((DVar1 == 0) || (param_1 < DVar1)) {
    uStackX_1c = GetLastError();
  }
  else {
    uStackX_1c = 0;
  }
  return CONCAT44(uStackX_1c,DVar1);
}


