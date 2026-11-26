// 0x1802d760c  FUN_1802d760c
// size=72 thunk=false
// signature: undefined FUN_1802d760c()
// status: ok


undefined8 FUN_1802d760c(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,iVar1);
}


