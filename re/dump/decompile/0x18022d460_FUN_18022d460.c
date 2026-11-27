// 0x18022d460  FUN_18022d460
// size=534 thunk=false
// signature: undefined FUN_18022d460()
// status: ok


void FUN_18022d460(void)

{
  size_t sVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  void *unaff_RBP;
  size_t sVar8;
  void *pvVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar3 = DAT_1805c7c40;
  uVar6 = 1;
  if (DAT_1805c7c38 != 0) {
    uVar6 = DAT_1805c7c38;
  }
  for (; (uVar6 == DAT_1805c7c38 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0xc0c0c0c0c0c0c0 - uVar6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180235da0();
    }
  }
  if (0x1fffffffffffffff < uVar6) {
LAB_18022d66c:
                    /* WARNING: Subroutine does not return */
    FUN_180012fe0();
  }
  uVar5 = uVar6 * 8;
  if (uVar5 == 0) {
    unaff_RBP = (void *)0x0;
LAB_18022d522:
    sVar1 = uVar3 * 8;
    uVar5 = uVar6 >> 1;
    for (; uVar6 <= uVar5; uVar6 = uVar6 * 2) {
    }
    uVar6 = uVar6 - DAT_1805c7c38;
    sVar8 = (DAT_1805c7c38 * 8 - (longlong)(sVar1 + (longlong)DAT_1805c7c30)) +
            (longlong)DAT_1805c7c30;
    memmove((void *)(sVar1 + (longlong)unaff_RBP),(void *)(sVar1 + (longlong)DAT_1805c7c30),sVar8);
    pvVar9 = (void *)((longlong)(sVar1 + (longlong)unaff_RBP) + sVar8);
    if (uVar6 < uVar3) {
      sVar8 = uVar6 * 8;
      memmove(pvVar9,DAT_1805c7c30,sVar8);
      sVar1 = (sVar1 - (longlong)(sVar8 + (longlong)DAT_1805c7c30)) + (longlong)DAT_1805c7c30;
      memmove(unaff_RBP,(void *)(sVar8 + (longlong)DAT_1805c7c30),sVar1);
      pvVar9 = (void *)(sVar1 + (longlong)unaff_RBP);
    }
    else {
      memmove(pvVar9,DAT_1805c7c30,sVar1);
      memset((void *)((longlong)pvVar9 + sVar1),0,(uVar6 - uVar3) * 8);
      pvVar9 = unaff_RBP;
      sVar8 = sVar1;
    }
    memset(pvVar9,0,sVar8);
    if (DAT_1805c7c30 == (void *)0x0) goto LAB_18022d64e;
    pvVar9 = DAT_1805c7c30;
    puVar7 = auStack_38;
    if ((0xfff < DAT_1805c7c38 * 8) &&
       (pvVar9 = *(void **)((longlong)DAT_1805c7c30 + -8), puVar7 = auStack_38,
       0x1f < (ulonglong)((longlong)DAT_1805c7c30 + (-8 - (longlong)pvVar9)))) goto LAB_18022d63c;
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_RBP = (void *)FUN_1802d8350();
      goto LAB_18022d522;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_18022d66c;
    lVar4 = FUN_1802d8350(uVar5 + 0x27);
    if (lVar4 != 0) {
      unaff_RBP = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RBP - 8) = lVar4;
      goto LAB_18022d522;
    }
LAB_18022d63c:
    pvVar9 = (void *)0x5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar7 = auStack_30;
  }
  *(undefined8 *)(puVar7 + -8) = 0x18022d64e;
  free(pvVar9);
LAB_18022d64e:
  DAT_1805c7c38 = DAT_1805c7c38 + uVar6;
  DAT_1805c7c30 = unaff_RBP;
  return;
}


