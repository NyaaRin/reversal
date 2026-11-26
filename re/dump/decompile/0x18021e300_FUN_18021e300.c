// 0x18021e300  FUN_18021e300
// size=522 thunk=false
// signature: undefined FUN_18021e300()
// status: ok


undefined8 *
FUN_18021e300(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  void *pvVar12;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar10 = auStack_58;
  puVar11 = auStack_58;
  pvVar12 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar3 + uVar2;
  if ((uVar3 <= param_3[3] - uVar2) && ((ulonglong)param_4[3] <= (ulonglong)param_3[3])) {
    uVar5 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar5;
    uVar5 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar5;
    param_3[2] = 0;
    param_3[3] = 7;
    *(undefined2 *)param_3 = 0;
    puVar6 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar6 = (undefined8 *)*param_1;
    }
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    memcpy((void *)((longlong)puVar6 + uVar2 * 2),param_4,uVar3 * 2 + 2);
    param_1[2] = uVar1;
    return param_1;
  }
  if (uVar2 <= param_4[3] - uVar3) {
    uVar5 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = uVar5;
    uVar5 = param_4[3];
    param_1[2] = param_4[2];
    param_1[3] = uVar5;
    param_4[2] = 0;
    param_4[3] = 7;
    *(undefined2 *)param_4 = 0;
    pvVar12 = (void *)*param_1;
    memmove((void *)((longlong)pvVar12 + uVar2 * 2),pvVar12,uVar3 * 2 + 2);
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    memcpy(pvVar12,param_3,uVar2 * 2);
    param_1[2] = uVar1;
    return param_1;
  }
  if (0x7ffffffffffffffe - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar7 = uVar1 | 7;
  if (uVar7 < 0x7fffffffffffffff) {
    if (uVar7 < 10) {
      uVar7 = 10;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto LAB_18021e506;
    uVar9 = (uVar7 + 1) * 2;
    if (uVar9 == 0) goto LAB_18021e4a4;
  }
  else {
    uVar9 = 0xfffffffffffffffe;
    uVar7 = 0x7ffffffffffffffe;
  }
  if (uVar9 < 0x1000) {
    pvVar12 = (void *)FUN_1802d8350();
    puVar11 = auStack_58;
  }
  else {
    if (uVar9 + 0x27 <= uVar9) {
LAB_18021e506:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar8 = FUN_1802d8350(uVar9 + 0x27);
    if (lVar8 == 0) {
      pcVar4 = (code *)swi(0x29);
      lVar8 = (*pcVar4)(5);
      puVar10 = auStack_50;
    }
    pvVar12 = (void *)(lVar8 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar12 - 8) = lVar8;
    puVar11 = puVar10;
  }
LAB_18021e4a4:
  *param_1 = pvVar12;
  param_1[2] = uVar1;
  param_1[3] = uVar7;
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined8 *)(puVar11 + -8) = 0x18021e4ca;
  memcpy(pvVar12,param_3,uVar2 * 2);
  if (7 < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  *(undefined8 *)(puVar11 + -8) = 0x18021e4e8;
  memcpy((void *)((longlong)pvVar12 + uVar2 * 2),param_4,uVar3 * 2 + 2);
  return param_1;
}


