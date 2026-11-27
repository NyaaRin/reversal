// 0x18022cba0  FUN_18022cba0
// size=542 thunk=false
// signature: undefined FUN_18022cba0()
// status: ok


void FUN_18022cba0(void)

{
  size_t sVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  void *unaff_RBP;
  ulonglong uVar7;
  size_t sVar8;
  void *pvVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar5 = 1;
  if (DAT_18056ff98 != 0) {
    uVar5 = DAT_18056ff98;
  }
  for (; (uVar5 == DAT_18056ff98 || (uVar5 < 8)); uVar5 = uVar5 * 2) {
    if (0xfffffffffffffff - uVar5 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_180235da0();
    }
  }
  uVar7 = DAT_18056ffa0 >> 2;
  if (0x1fffffffffffffff < uVar5) {
LAB_18022cdb4:
                    /* WARNING: Subroutine does not return */
    FUN_180012fe0();
  }
  uVar4 = uVar5 * 8;
  if (uVar4 == 0) {
    unaff_RBP = (void *)0x0;
LAB_18022cc66:
    sVar1 = uVar7 * 8;
    uVar4 = uVar5 >> 1;
    for (; uVar5 <= uVar4; uVar5 = uVar5 * 2) {
    }
    uVar5 = uVar5 - DAT_18056ff98;
    sVar8 = (DAT_18056ff98 * 8 - (longlong)(sVar1 + (longlong)DAT_18056ff90)) +
            (longlong)DAT_18056ff90;
    memmove((void *)(sVar1 + (longlong)unaff_RBP),(void *)(sVar1 + (longlong)DAT_18056ff90),sVar8);
    pvVar9 = (void *)((longlong)(sVar1 + (longlong)unaff_RBP) + sVar8);
    if (uVar5 < uVar7) {
      sVar8 = uVar5 * 8;
      memmove(pvVar9,DAT_18056ff90,sVar8);
      sVar1 = (sVar1 - (longlong)(sVar8 + (longlong)DAT_18056ff90)) + (longlong)DAT_18056ff90;
      memmove(unaff_RBP,(void *)(sVar8 + (longlong)DAT_18056ff90),sVar1);
      pvVar9 = (void *)(sVar1 + (longlong)unaff_RBP);
    }
    else {
      memmove(pvVar9,DAT_18056ff90,sVar1);
      memset((void *)((longlong)pvVar9 + sVar1),0,(uVar5 - uVar7) * 8);
      pvVar9 = unaff_RBP;
      sVar8 = sVar1;
    }
    memset(pvVar9,0,sVar8);
    if (DAT_18056ff90 == (void *)0x0) goto LAB_18022cd96;
    pvVar9 = DAT_18056ff90;
    puVar6 = auStack_38;
    if ((0xfff < DAT_18056ff98 * 8) &&
       (pvVar9 = *(void **)((longlong)DAT_18056ff90 + -8), puVar6 = auStack_38,
       0x1f < (ulonglong)((longlong)DAT_18056ff90 + (-8 - (longlong)pvVar9)))) goto LAB_18022cd84;
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RBP = (void *)FUN_1802d8350();
      goto LAB_18022cc66;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_18022cdb4;
    lVar3 = FUN_1802d8350(uVar4 + 0x27);
    if (lVar3 != 0) {
      unaff_RBP = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RBP - 8) = lVar3;
      goto LAB_18022cc66;
    }
LAB_18022cd84:
    pvVar9 = (void *)0x5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar6 = auStack_30;
  }
  *(undefined8 *)(puVar6 + -8) = 0x18022cd96;
  free(pvVar9);
LAB_18022cd96:
  DAT_18056ff98 = DAT_18056ff98 + uVar5;
  DAT_18056ff90 = unaff_RBP;
  return;
}


