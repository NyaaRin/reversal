// 0x180269340  FUN_180269340
// size=170 thunk=false
// signature: undefined FUN_180269340()
// status: ok


void FUN_180269340(int *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint local_18 [2];
  uint local_10;
  
  uVar2 = (longlong)*param_1;
  puVar3 = *(uint **)(param_1 + 2);
  while (uVar1 = uVar2, uVar1 != 0) {
    uVar2 = uVar1 >> 1;
    if (puVar3[uVar2 * 4] < param_2) {
      puVar3 = puVar3 + uVar2 * 4 + 4;
      uVar2 = uVar1 + (-1 - uVar2);
    }
  }
  if ((puVar3 != *(uint **)(param_1 + 2) + (longlong)*param_1 * 4) && (*puVar3 == param_2)) {
    puVar3[2] = param_3;
    return;
  }
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_18028a9f0(param_1,puVar3,local_18);
  return;
}


