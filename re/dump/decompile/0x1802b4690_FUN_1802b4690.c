// 0x1802b4690  FUN_1802b4690
// size=176 thunk=false
// signature: undefined FUN_1802b4690()
// status: ok


ulonglong FUN_1802b4690(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  if (*(char *)(*param_1 + 0x79) != '\0') {
    uVar3 = FUN_1802b44d0(param_1,param_2);
    return uVar3;
  }
  iVar2 = (int)param_1[3];
  if (param_2 < iVar2) {
    iVar2 = FUN_180268c20(local_res8,(longlong)param_2 + param_1[4],(longlong)iVar2 + param_1[4]);
    uVar4 = param_2 + iVar2;
  }
  else {
    uVar4 = iVar2 + 1;
  }
  uVar1 = *(uint *)(param_1 + 3);
  iVar2 = uVar4 - uVar1;
  if ((int)uVar4 < (int)uVar1) {
    do {
      iVar2 = FUN_1802b4300(param_1,uVar4);
      if (iVar2 != 0) break;
      iVar2 = (int)param_1[3];
      if ((int)uVar4 < iVar2) {
        iVar2 = FUN_180268c20(local_res8,(longlong)(int)uVar4 + param_1[4],
                              (longlong)iVar2 + param_1[4]);
        uVar4 = uVar4 + iVar2;
      }
      else {
        uVar4 = iVar2 + 1;
      }
    } while ((int)uVar4 < (int)uVar1);
    iVar2 = uVar4 - uVar1;
  }
  if (uVar4 != uVar1 && SBORROW4(uVar4,uVar1) == iVar2 < 0) {
    uVar4 = uVar1;
  }
  return (ulonglong)uVar4;
}


