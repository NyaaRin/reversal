// 0x180269200  FUN_180269200
// size=139 thunk=false
// signature: undefined FUN_180269200()
// status: ok


uint FUN_180269200(int *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
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
    return puVar3[2];
  }
  return param_3;
}


