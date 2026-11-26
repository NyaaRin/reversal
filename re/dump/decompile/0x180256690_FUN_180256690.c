// 0x180256690  FUN_180256690
// size=181 thunk=false
// signature: undefined FUN_180256690()
// status: ok


ulonglong * FUN_180256690(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*param_3 == 0) {
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    return param_2;
  }
  uVar3 = *param_3 - 1;
  if (uVar3 != 0) {
    do {
      if ((ulonglong)((param_1[1] - *param_1) / 0x60) <= uVar3) goto LAB_180256740;
    } while ((*(char *)(uVar3 * 0x60 + 0x22 + *param_1) == '\x03') &&
            (uVar3 = uVar3 - 1, uVar3 != 0));
  }
  lVar1 = *param_1;
  uVar2 = (param_1[1] - lVar1 >> 5) * -0x5555555555555555;
  if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
    *param_2 = uVar3;
    param_2[1] = *(longlong *)(uVar3 * 0x60 + 8 + lVar1) - *(longlong *)(uVar3 * 0x60 + lVar1) >> 4;
    return param_2;
  }
LAB_180256740:
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}


