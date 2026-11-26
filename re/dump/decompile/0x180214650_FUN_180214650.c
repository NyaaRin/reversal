// 0x180214650  FUN_180214650
// size=830 thunk=false
// signature: undefined FUN_180214650()
// status: ok


void FUN_180214650(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  void *_Memory;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  ulonglong local_78;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong *local_48;
  
  puVar9 = auStack_98;
  puVar8 = auStack_98;
  uVar10 = *param_1;
  uVar7 = ((longlong)(param_1[2] - uVar10) >> 3) * -0x79435e50d79435e5;
  if (param_3 <= uVar7) {
    uVar7 = param_1[1];
    lVar6 = (longlong)(uVar7 - uVar10) >> 3;
    if ((ulonglong)(lVar6 * -0x79435e50d79435e5) < param_3) {
      if (uVar10 != uVar7) {
        lVar3 = *param_2;
        uVar5 = param_2[1];
        do {
          FUN_18021ed30(uVar10,*(undefined8 *)
                                (*(longlong *)(lVar3 + 8) +
                                (*(longlong *)(lVar3 + 0x10) - 1U & uVar5) * 8));
          uVar10 = uVar10 + 0x98;
          uVar5 = uVar5 + 1;
          uVar7 = param_1[1];
        } while (uVar10 != uVar7);
        param_2[1] = uVar5;
      }
      lVar3 = *param_2;
      uVar10 = param_2[1];
      local_58 = uVar7;
      local_48 = param_1;
      for (lVar6 = param_3 + lVar6 * 0x79435e50d79435e5; uStack_50 = uVar7, lVar6 != 0;
          lVar6 = lVar6 + -1) {
        FUN_18023a180(uVar7,*(undefined8 *)
                             (*(longlong *)(lVar3 + 8) +
                             (*(longlong *)(lVar3 + 0x10) - 1U & uVar10) * 8));
        uVar7 = uVar7 + 0x98;
        uVar10 = uVar10 + 1;
      }
      local_58 = uVar7;
      FUN_180217fc0(uVar7,uVar7);
      param_1[1] = uVar7;
      return;
    }
    uVar5 = param_3 * 0x98 + uVar10;
    lVar6 = *param_2;
    uVar7 = param_2[1];
    for (; param_3 != 0; param_3 = param_3 - 1) {
      FUN_18021ed30(uVar10,*(undefined8 *)
                            (*(longlong *)(lVar6 + 8) +
                            (*(longlong *)(lVar6 + 0x10) - 1U & uVar7) * 8));
      uVar10 = uVar10 + 0x98;
      uVar7 = uVar7 + 1;
    }
    uVar7 = param_1[1];
    for (uVar10 = uVar5; uVar10 != uVar7; uVar10 = uVar10 + 0x98) {
      local_78 = uVar10;
      FUN_18020e450(uVar10 + 0x70);
      FUN_18020e450(uVar10 + 0x50);
      FUN_18020e450(uVar10 + 0x28);
      FUN_18020e450(uVar10 + 8);
    }
    param_1[1] = uVar5;
    return;
  }
  if (0x1af286bca1af286 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = 0x1af286bca1af286 - (uVar7 >> 1);
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar7 + (uVar7 >> 1);
    if (uVar7 < param_3) {
      uVar7 = param_3;
    }
  }
  else {
    uVar7 = 0x1af286bca1af286;
  }
  uVar5 = 0;
  if (uVar10 == 0) {
LAB_180214729:
    if (0x1af286bca1af286 < uVar7) {
LAB_180214984:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar10 = uVar7 * 0x98;
    if (uVar10 == 0) goto LAB_180214783;
    if (uVar10 < 0x1000) {
      uVar5 = FUN_1802d8350(uVar10);
      puVar9 = auStack_98;
      goto LAB_180214783;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_180214984;
    lVar6 = FUN_1802d8350();
    if (lVar6 == 0) goto LAB_180214763;
  }
  else {
    FUN_180217fc0(uVar10,param_1[1]);
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if (((ulonglong)(((longlong)(param_1[2] - (longlong)pvVar1) >> 3) * 8) < 0x1000) ||
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)) < 0x20)) {
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_180214729;
    }
LAB_180214763:
    pcVar4 = (code *)swi(0x29);
    lVar6 = (*pcVar4)(5);
    puVar8 = auStack_90;
  }
  uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar6;
  puVar9 = puVar8;
LAB_180214783:
  *param_1 = uVar5;
  param_1[1] = uVar5;
  param_1[2] = uVar5 + uVar10;
  lVar6 = *param_2;
  uVar7 = param_2[1];
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined8 *)(puVar9 + 0x30) = 0;
  *(undefined8 *)(puVar9 + 0x38) = 0;
  *(ulonglong *)(puVar9 + 0x28) = uVar5;
  *(ulonglong *)(puVar9 + 0x30) = uVar5;
  *(ulonglong **)(puVar9 + 0x38) = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar2 = *(undefined8 *)
             (*(longlong *)(lVar6 + 8) + (*(longlong *)(lVar6 + 0x10) - 1U & uVar7) * 8);
    *(undefined8 *)(puVar9 + -8) = 0x1802147da;
    FUN_18023a180(uVar5,uVar2);
    uVar5 = uVar5 + 0x98;
    *(ulonglong *)(puVar9 + 0x30) = uVar5;
    uVar7 = uVar7 + 1;
  }
  *(ulonglong *)(puVar9 + 0x28) = uVar5;
  *(undefined8 *)(puVar9 + -8) = 0x1802147ff;
  FUN_180217fc0(uVar5,uVar5);
  param_1[1] = uVar5;
  return;
}


