// 0x180269290  FUN_180269290
// size=170 thunk=false
// signature: undefined FUN_180269290()
// status: ok


uint * FUN_180269290(int *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint local_18 [2];
  undefined4 local_10;
  
  uVar3 = (longlong)*param_1;
  puVar4 = *(uint **)(param_1 + 2);
  while (uVar1 = uVar3, uVar1 != 0) {
    uVar3 = uVar1 >> 1;
    if (puVar4[uVar3 * 4] < param_2) {
      puVar4 = puVar4 + uVar3 * 4 + 4;
      uVar3 = uVar1 + (-1 - uVar3);
    }
  }
  if ((puVar4 != *(uint **)(param_1 + 2) + (longlong)*param_1 * 4) && (*puVar4 == param_2)) {
    return puVar4 + 2;
  }
  local_10 = 0xffffffff;
  local_18[0] = param_2;
  lVar2 = FUN_18028a9f0(param_1,puVar4,local_18);
  return (uint *)(lVar2 + 8);
}


