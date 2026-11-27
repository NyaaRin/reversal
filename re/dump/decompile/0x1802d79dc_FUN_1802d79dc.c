// 0x1802d79dc  FUN_1802d79dc
// size=48 thunk=false
// signature: undefined FUN_1802d79dc()
// status: ok


undefined8 FUN_1802d79dc(HANDLE param_1,LPWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  undefined4 uStack_14;
  
  DVar1 = GetFinalPathNameByHandleW(param_1,param_2,param_3,param_4);
  if (DVar1 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,DVar1);
}


