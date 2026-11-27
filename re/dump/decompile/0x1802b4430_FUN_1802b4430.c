// 0x1802b4430  FUN_1802b4430
// size=153 thunk=false
// signature: undefined FUN_1802b4430()
// status: ok


uint FUN_1802b4430(longlong param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_2 < 1) {
LAB_1802b44b0:
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar6 = (longlong)param_2 + uVar2;
    do {
      uVar4 = uVar2;
      if (uVar6 <= uVar2) break;
      pbVar1 = (byte *)(uVar6 - 1);
      uVar6 = uVar6 - 1;
      uVar4 = uVar6;
    } while ((*pbVar1 & 0xc0) == 0x80);
    uVar5 = (int)uVar4 - *(int *)(param_1 + 0x20);
    while ((-1 < (int)uVar5 && (iVar3 = FUN_1802b4300(param_1,uVar5), iVar3 == 0))) {
      if (uVar5 == 0) goto LAB_1802b44b0;
      uVar2 = *(ulonglong *)(param_1 + 0x20);
      uVar6 = uVar5 + uVar2;
      do {
        uVar4 = uVar2;
        if (uVar6 <= uVar2) break;
        pbVar1 = (byte *)(uVar6 - 1);
        uVar6 = uVar6 - 1;
        uVar4 = uVar6;
      } while ((*pbVar1 & 0xc0) == 0x80);
      uVar5 = (int)uVar4 - *(int *)(param_1 + 0x20);
    }
  }
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  return uVar5;
}


