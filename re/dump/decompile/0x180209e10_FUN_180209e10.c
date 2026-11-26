// 0x180209e10  FUN_180209e10
// size=532 thunk=false
// signature: undefined FUN_180209e10()
// status: ok


void FUN_180209e10(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  puVar6 = auStack_38;
  uVar4 = DAT_1803e9ac0 - (longlong)DAT_1803e9ab0 >> 3;
  if (param_2 <= uVar4) {
    uVar4 = (longlong)DAT_1803e9ab8 - (longlong)DAT_1803e9ab0 >> 3;
    if (param_2 <= uVar4) {
      pvVar2 = (void *)((longlong)DAT_1803e9ab0 + param_2 * 8);
      FUN_180215f20(DAT_1803e9ab0,pvVar2);
      DAT_1803e9ab8 = pvVar2;
      return;
    }
    FUN_180215f20();
    plVar7 = DAT_1803e9ab8;
    lVar3 = param_2 - uVar4;
    if (*param_3 != 0) {
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        *DAT_1803e9ab8 = *param_3;
        DAT_1803e9ab8 = DAT_1803e9ab8 + 1;
      }
      return;
    }
    memset(DAT_1803e9ab8,0,lVar3 * 8);
    DAT_1803e9ab8 = plVar7 + lVar3;
    return;
  }
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar8 = 0x1fffffffffffffff;
  }
  else {
    uVar8 = uVar4 + (uVar4 >> 1);
    if (uVar8 < param_2) {
      uVar8 = param_2;
    }
  }
  if (DAT_1803e9ab0 == (void *)0x0) {
LAB_180209ec3:
    if (0x1fffffffffffffff < uVar8) {
LAB_18020a01a:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar8 = uVar8 * 8;
    if (uVar8 == 0) {
      plVar7 = (longlong *)0x0;
      puVar6 = auStack_38;
      goto LAB_180209f1d;
    }
    if (uVar8 < 0x1000) {
      plVar7 = (longlong *)FUN_1802d8350(uVar8);
      goto LAB_180209f1d;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_18020a01a;
    lVar3 = FUN_1802d8350();
    if (lVar3 == 0) goto LAB_180209efd;
  }
  else {
    pvVar2 = DAT_1803e9ab0;
    if ((uVar4 * 8 < 0x1000) ||
       (pvVar2 = *(void **)((longlong)DAT_1803e9ab0 + -8),
       (ulonglong)((longlong)DAT_1803e9ab0 + (-8 - (longlong)pvVar2)) < 0x20)) {
      free(pvVar2);
      DAT_1803e9ac0 = 0;
      DAT_1803e9ab0 = (void *)0x0;
      DAT_1803e9ab8 = (longlong *)0x0;
      goto LAB_180209ec3;
    }
LAB_180209efd:
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar5 = auStack_30;
  }
  plVar7 = (longlong *)(lVar3 + 0x27U & 0xffffffffffffffe0);
  plVar7[-1] = lVar3;
  puVar6 = puVar5;
LAB_180209f1d:
  DAT_1803e9ac0 = uVar8 + (longlong)plVar7;
  DAT_1803e9ab0 = plVar7;
  if (*param_3 == 0) {
    *(undefined8 *)(puVar6 + -8) = 0x180209f51;
    DAT_1803e9ab8 = plVar7;
    memset(plVar7,0,param_2 * 8);
    plVar7 = plVar7 + param_2;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *plVar7 = *param_3;
      plVar7 = plVar7 + 1;
    }
  }
  DAT_1803e9ab8 = plVar7;
  return;
}


