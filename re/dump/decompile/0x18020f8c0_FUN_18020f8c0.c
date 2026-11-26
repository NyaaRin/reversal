// 0x18020f8c0  FUN_18020f8c0
// size=178 thunk=false
// signature: undefined FUN_18020f8c0()
// status: ok


undefined8 * FUN_18020f8c0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if ((((byte)*(uint *)(param_1 + 0x78) & 0x22) == 2) ||
     (uVar3 = **(ulonglong **)(param_1 + 0x48), uVar3 == 0)) {
    if ((*(uint *)(param_1 + 0x78) & 4) != 0) {
      return param_2;
    }
    param_4 = **(longlong **)(param_1 + 0x40);
    if (param_4 == 0) {
      return param_2;
    }
    lVar1 = **(longlong **)(param_1 + 0x20);
    lVar2 = (**(int **)(param_1 + 0x58) - lVar1) + param_4;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x28);
    if (uVar3 < *(ulonglong *)(param_1 + 0x70)) {
      uVar3 = *(ulonglong *)(param_1 + 0x70);
    }
    lVar2 = uVar3 - lVar1;
  }
  if (lVar1 != 0) {
    FUN_180212700(param_2,lVar1,lVar2,param_4,2,param_2);
  }
  return param_2;
}


