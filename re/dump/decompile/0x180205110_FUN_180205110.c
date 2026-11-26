// 0x180205110  FUN_180205110
// size=334 thunk=false
// signature: undefined FUN_180205110()
// status: ok


ulonglong * FUN_180205110(ulonglong *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [48];
  
  puVar6 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  if (param_2 == param_3) {
    *(short *)param_1 = 0;
    return param_1;
  }
  uVar8 = (longlong)param_3 - (longlong)param_2;
  if (0x7ffffffffffffffe < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  puVar7 = auStack_48;
  if (7 < uVar8) {
    uVar3 = uVar8 | 7;
    if (uVar3 < 0x7fffffffffffffff) goto LAB_1802051b5;
    uVar5 = 0xfffffffffffffffe;
    puVar6 = auStack_48;
    uVar3 = 0x7ffffffffffffffe;
    do {
      if (uVar5 < 0x1000) {
        *(undefined8 *)(puVar6 + -8) = 0x1802051f3;
        uVar5 = FUN_1802d8350();
        goto LAB_1802051f3;
      }
      if (uVar5 + 0x27 <= uVar5) {
LAB_180205254:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_180205259;
        FUN_180012fe0();
      }
      *(undefined8 *)(puVar6 + -8) = 0x1802051a6;
      lVar4 = FUN_1802d8350(uVar5 + 0x27);
      if (lVar4 != 0) {
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar4;
        goto LAB_1802051f3;
      }
      pcVar1 = (code *)swi(0x29);
      uVar3 = (*pcVar1)(5);
      puVar6 = puVar6 + 8;
LAB_1802051b5:
      if (uVar3 < 10) {
        uVar3 = 10;
      }
      if (0x7fffffffffffffff < uVar3 + 1) goto LAB_180205254;
      uVar5 = (uVar3 + 1) * 2;
    } while (uVar5 != 0);
    uVar5 = 0;
LAB_1802051f3:
    *param_1 = uVar5;
    param_1[3] = uVar3;
    puVar7 = puVar6;
  }
  *(ulonglong **)(puVar7 + 0x20) = param_1;
  uVar3 = uVar8;
  puVar2 = param_1;
  puVar9 = param_1;
  if (7 < param_1[3]) {
    puVar2 = (ulonglong *)*param_1;
    puVar9 = (ulonglong *)*param_1;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(short *)puVar2 = (short)*param_2;
    param_2 = param_2 + 1;
    puVar2 = (ulonglong *)((longlong)puVar2 + 2);
  }
  param_1[2] = uVar8;
  *(short *)((longlong)puVar9 + uVar8 * 2) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  return param_1;
}


