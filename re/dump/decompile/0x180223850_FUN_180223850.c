// 0x180223850  FUN_180223850
// size=438 thunk=false
// signature: undefined FUN_180223850()
// status: ok


void FUN_180223850(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *_Dst;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [80];
  
  puVar6 = auStack_88;
  puVar7 = auStack_88;
  if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar3 = (longlong)DAT_1803eb370 - (longlong)DAT_1803eb360 >> 5;
  uVar4 = uVar3 >> 1;
  if ((uVar3 <= 0x7ffffffffffffff - uVar4) &&
     ((uVar3 = uVar3 + uVar4, uVar8 = param_2, uVar3 < param_2 ||
      (uVar8 = uVar3, uVar3 < 0x800000000000000)))) {
    lVar9 = (longlong)DAT_1803eb368 - (longlong)DAT_1803eb360;
    uVar3 = uVar8 * 0x20;
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
      puVar7 = auStack_88;
    }
    else if (uVar3 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(uVar3);
    }
    else {
      if (uVar3 + 0x27 <= uVar3) goto LAB_180223a02;
      lVar2 = FUN_1802d8350();
      if (lVar2 == 0) {
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)(5);
        puVar6 = auStack_80;
      }
      _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar2;
      puVar7 = puVar6;
    }
    lVar9 = lVar9 >> 5;
    pvVar5 = (void *)(lVar9 * 0x20 + (longlong)_Dst);
    *(void ***)(puVar7 + 0x20) = &DAT_1803eb360;
    *(void **)(puVar7 + 0x28) = _Dst;
    *(ulonglong *)(puVar7 + 0x30) = uVar8;
    *(void **)(puVar7 + 0x38) = pvVar5;
    *(void **)(puVar7 + 0x40) = pvVar5;
    lVar9 = param_2 - lVar9;
    if (lVar9 != 0) {
      *(undefined8 *)(puVar7 + -8) = 0x180223955;
      memset(pvVar5,(uint)uVar4 & 0xffffff00,lVar9 * 0x20);
      do {
        pvVar5 = (void *)((longlong)pvVar5 + 0x20);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *(void **)(puVar7 + 0x40) = pvVar5;
    *(undefined8 *)(puVar7 + -8) = 0x18022397d;
    memmove(_Dst,DAT_1803eb360,(longlong)DAT_1803eb368 - (longlong)DAT_1803eb360);
    *(undefined8 *)(puVar7 + 0x28) = 0;
    if (DAT_1803eb360 != (void *)0x0) {
      pvVar5 = DAT_1803eb360;
      if ((0xfff < ((longlong)DAT_1803eb370 - (longlong)DAT_1803eb360 & 0xffffffffffffffe0U)) &&
         (pvVar5 = *(void **)((longlong)DAT_1803eb360 + -8),
         0x1f < (ulonglong)((longlong)DAT_1803eb360 + (-8 - (longlong)pvVar5)))) {
        pcVar1 = (code *)swi(0x29);
        pvVar5 = (void *)(*pcVar1)(5);
        puVar7 = puVar7 + 8;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1802239cf;
      free(pvVar5);
    }
    DAT_1803eb360 = _Dst;
    DAT_1803eb368 = (void *)(param_2 * 0x20 + (longlong)_Dst);
    DAT_1803eb370 = (void *)(uVar3 + (longlong)_Dst);
    return;
  }
LAB_180223a02:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


