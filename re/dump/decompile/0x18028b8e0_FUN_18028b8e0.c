// 0x18028b8e0  FUN_18028b8e0
// size=170 thunk=false
// signature: undefined FUN_18028b8e0()
// status: ok


int FUN_18028b8e0(longlong param_1,uint param_2,char *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)((ulonglong)param_2 + 4 + param_1) * 0x100 +
          (uint)*(byte *)((ulonglong)param_2 + 5 + param_1);
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      pbVar1 = (byte *)((ulonglong)(iVar2 * 0x10 + param_2 + 0xc) + param_1);
      if (((((uint)*pbVar1 == (int)*param_3) && ((uint)pbVar1[1] == (int)param_3[1])) &&
          ((uint)pbVar1[2] == (int)param_3[2])) && ((uint)pbVar1[3] == (int)param_3[3])) {
        return (uint)pbVar1[9] * 0x10000 + (uint)pbVar1[10] * 0x100 + (uint)pbVar1[8] * 0x1000000 +
               (uint)pbVar1[0xb];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return 0;
}


