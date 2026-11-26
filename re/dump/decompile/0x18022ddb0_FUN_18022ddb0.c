// 0x18022ddb0  FUN_18022ddb0
// size=501 thunk=false
// signature: undefined FUN_18022ddb0()
// status: ok


void FUN_18022ddb0(longlong param_1)

{
  size_t sVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Memory;
  ulonglong uVar6;
  undefined1 *puVar7;
  size_t sVar8;
  void *pvVar9;
  void *unaff_R14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = 1;
  if (uVar2 != 0) {
    uVar6 = uVar2;
  }
  for (; (uVar6 == uVar2 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x7ffffffffffffff - uVar6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180235da0();
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar6) {
LAB_18022df9b:
                    /* WARNING: Subroutine does not return */
    FUN_180012fe0();
  }
  uVar5 = uVar6 * 8;
  if (uVar5 == 0) {
    unaff_R14 = (void *)0x0;
LAB_18022de6a:
    sVar1 = uVar2 * 8;
    uVar5 = uVar6 >> 1;
    for (; uVar6 <= uVar5; uVar6 = uVar6 * 2) {
    }
    uVar6 = uVar6 - *(longlong *)(param_1 + 0x10);
    pvVar9 = (void *)(*(longlong *)(param_1 + 8) + sVar1);
    sVar8 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar9) + *(longlong *)(param_1 + 8);
    memmove((void *)(sVar1 + (longlong)unaff_R14),pvVar9,sVar8);
    pvVar9 = (void *)(sVar8 + (longlong)(sVar1 + (longlong)unaff_R14));
    if (uVar6 < uVar2) {
      sVar8 = uVar6 * 8;
      memmove(pvVar9,*(void **)(param_1 + 8),sVar8);
      pvVar9 = (void *)(sVar8 + *(longlong *)(param_1 + 8));
      sVar1 = (*(longlong *)(param_1 + 8) - (longlong)pvVar9) + sVar1;
      memmove(unaff_R14,pvVar9,sVar1);
      pvVar9 = (void *)(sVar1 + (longlong)unaff_R14);
    }
    else {
      memmove(pvVar9,*(void **)(param_1 + 8),sVar1);
      memset((void *)((longlong)pvVar9 + sVar1),0,(uVar6 - uVar2) * 8);
      pvVar9 = unaff_R14;
      sVar8 = sVar1;
    }
    memset(pvVar9,0,sVar8);
    pvVar9 = *(void **)(param_1 + 8);
    if (pvVar9 == (void *)0x0) goto LAB_18022df82;
    _Memory = pvVar9;
    puVar7 = auStack_48;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar9 + -8), puVar7 = auStack_48,
       0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)_Memory)))) goto LAB_18022df70;
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_R14 = (void *)FUN_1802d8350();
      goto LAB_18022de6a;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_18022df9b;
    lVar4 = FUN_1802d8350(uVar5 + 0x27);
    if (lVar4 != 0) {
      unaff_R14 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_R14 - 8) = lVar4;
      goto LAB_18022de6a;
    }
LAB_18022df70:
    _Memory = (void *)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar7 = auStack_40;
  }
  *(undefined8 *)(puVar7 + -8) = 0x18022df82;
  free(_Memory);
LAB_18022df82:
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6;
  *(void **)(param_1 + 8) = unaff_R14;
  return;
}


