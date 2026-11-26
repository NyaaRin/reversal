// 0x180070e60  FUN_180070e60
// size=394 thunk=false
// signature: undefined FUN_180070e60()
// status: ok


undefined8 *
FUN_180070e60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  if (((param_3[2] == 0) ||
      (lVar3 = param_3[2] + (longlong)puVar6,
      lVar2 = thunk_FUN_1802d5c20(puVar6,lVar3,0x22,param_4,0,param_2), lVar2 == lVar3)) ||
     (uVar5 = lVar2 - (longlong)puVar6, uVar5 == 0xffffffffffffffff)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,&DAT_18033e5ea,0);
    return param_2;
  }
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar4 = 0xffffffffffffffff;
  if (param_3[2] != 0) {
    lVar2 = param_3[2] + -1;
    lVar3 = -1;
    if (lVar2 != -1) {
      lVar3 = lVar2;
    }
    lVar2 = lVar3 + 1 + (longlong)puVar6;
    lVar3 = thunk_FUN_1802d5fe0(puVar6,lVar2,0x22);
    if (lVar3 != lVar2) {
      uVar4 = lVar3 - (longlong)puVar6;
    }
  }
  if (uVar4 <= uVar5) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,&DAT_18033e5ea,0);
    return param_2;
  }
  uVar1 = uVar5 + 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (uVar1 <= (ulonglong)param_3[2]) {
    uVar5 = (uVar4 - uVar5) - 1;
    uVar4 = param_3[2] - uVar1;
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_18001d080(param_2,uVar1 + (longlong)param_3,uVar5);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18022ec00();
}


