// 0x180223420  FUN_180223420
// size=488 thunk=false
// signature: undefined FUN_180223420()
// status: ok


void FUN_180223420(undefined8 param_1,ulonglong param_2)

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
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar6 = auStack_78;
  puVar7 = auStack_78;
  if (0x444444444444444 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar3 = ((longlong)DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * -0x1111111111111111;
  uVar4 = uVar3 >> 1;
  if ((uVar3 < 0x444444444444444 - uVar4 || uVar3 - (0x444444444444444 - uVar4) == 0) &&
     ((uVar3 = uVar3 + uVar4, uVar8 = param_2, uVar3 < param_2 ||
      (uVar8 = uVar3, uVar3 < 0x444444444444445)))) {
    lVar9 = (longlong)DAT_1803eb810 - (longlong)DAT_1803eb808;
    uVar3 = uVar8 * 0x3c;
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
      puVar7 = auStack_78;
    }
    else if (uVar3 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(uVar3);
    }
    else {
      if (uVar3 + 0x27 <= uVar3) goto LAB_180223604;
      lVar2 = FUN_1802d8350();
      if (lVar2 == 0) {
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)(5);
        puVar6 = auStack_70;
      }
      _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar2;
      puVar7 = puVar6;
    }
    lVar9 = lVar9 >> 2;
    pvVar5 = (void *)(lVar9 * 4 + (longlong)_Dst);
    *(void ***)(puVar7 + 0x20) = &DAT_1803eb808;
    *(void **)(puVar7 + 0x28) = _Dst;
    *(ulonglong *)(puVar7 + 0x30) = uVar8;
    *(void **)(puVar7 + 0x38) = pvVar5;
    *(void **)(puVar7 + 0x40) = pvVar5;
    lVar9 = param_2 + lVar9 * 0x1111111111111111;
    if (lVar9 != 0) {
      *(undefined8 *)(puVar7 + -8) = 0x180223537;
      memset(pvVar5,(uint)uVar4 & 0xffffff00,lVar9 * 0x3c);
      do {
        pvVar5 = (void *)((longlong)pvVar5 + 0x3c);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *(void **)(puVar7 + 0x40) = pvVar5;
    *(undefined8 *)(puVar7 + -8) = 0x180223568;
    memmove(_Dst,DAT_1803eb808,(longlong)DAT_1803eb810 - (longlong)DAT_1803eb808);
    *(undefined8 *)(puVar7 + 0x28) = 0;
    if (DAT_1803eb808 != (void *)0x0) {
      pvVar5 = DAT_1803eb808;
      if ((0xfff < (ulonglong)(((longlong)DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * 4)) &&
         (pvVar5 = *(void **)((longlong)DAT_1803eb808 + -8),
         0x1f < (ulonglong)((longlong)DAT_1803eb808 + (-8 - (longlong)pvVar5)))) {
        pvVar5 = (void *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar7 = puVar7 + 8;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1802235c5;
      free(pvVar5);
    }
    DAT_1803eb808 = _Dst;
    DAT_1803eb810 = (void *)(param_2 * 0x3c + (longlong)_Dst);
    DAT_1803eb818 = (void *)(uVar3 + (longlong)_Dst);
    return;
  }
LAB_180223604:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


