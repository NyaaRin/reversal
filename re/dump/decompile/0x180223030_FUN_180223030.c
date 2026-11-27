// 0x180223030  FUN_180223030
// size=489 thunk=false
// signature: undefined FUN_180223030()
// status: ok


void FUN_180223030(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Memory;
  undefined4 *puVar5;
  void *_Dst;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar7 = auStack_78;
  puVar6 = auStack_78;
  if (0x924924924924924 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = ((longlong)DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 0x6db6db6db6db6db7;
  uVar2 = 0x924924924924924 - (uVar4 >> 1);
  if ((uVar4 < uVar2 || uVar4 - uVar2 == 0) &&
     ((uVar4 = uVar4 + (uVar4 >> 1), uVar2 = param_2, uVar4 < param_2 ||
      (uVar2 = uVar4, uVar4 < 0x924924924924925)))) {
    lVar8 = (longlong)DAT_180425a18 - (longlong)DAT_180425a10;
    uVar4 = uVar2 * 0x1c;
    _Dst = (void *)0x0;
    if (uVar4 != 0) {
      if (uVar4 < 0x1000) {
        _Dst = (void *)FUN_1802d8350(uVar4);
        puVar7 = auStack_78;
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180223215;
        lVar3 = FUN_1802d8350();
        if (lVar3 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar3 = (*pcVar1)(5);
          puVar6 = auStack_70;
        }
        _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar3;
        puVar7 = puVar6;
      }
    }
    lVar8 = lVar8 >> 2;
    puVar5 = (undefined4 *)(lVar8 * 4 + (longlong)_Dst);
    *(void ***)(puVar7 + 0x20) = &DAT_180425a10;
    *(void **)(puVar7 + 0x28) = _Dst;
    *(ulonglong *)(puVar7 + 0x30) = uVar2;
    *(undefined4 **)(puVar7 + 0x38) = puVar5;
    *(undefined4 **)(puVar7 + 0x40) = puVar5;
    for (lVar8 = param_2 + lVar8 * -0x6db6db6db6db6db7; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)(puVar5 + 4) = 0;
      puVar5[6] = 0;
      puVar5[3] = 0x7fc00000;
      puVar5[2] = 0x7fc00000;
      puVar5[1] = 0x7fc00000;
      *puVar5 = 0x7fc00000;
      puVar5 = puVar5 + 7;
    }
    *(undefined4 **)(puVar7 + 0x40) = puVar5;
    *(undefined8 *)(puVar7 + -8) = 0x18022317d;
    memmove(_Dst,DAT_180425a10,(longlong)DAT_180425a18 - (longlong)DAT_180425a10);
    *(undefined8 *)(puVar7 + 0x28) = 0;
    if (DAT_180425a10 != (void *)0x0) {
      _Memory = DAT_180425a10;
      if ((0xfff < (ulonglong)(((longlong)DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 4)) &&
         (_Memory = *(void **)((longlong)DAT_180425a10 + -8),
         0x1f < (ulonglong)((longlong)DAT_180425a10 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar7 = puVar7 + 8;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1802231d6;
      free(_Memory);
    }
    DAT_180425a10 = _Dst;
    DAT_180425a18 = (void *)(param_2 * 0x1c + (longlong)_Dst);
    DAT_180425a20 = (void *)(uVar4 + (longlong)_Dst);
    return;
  }
LAB_180223215:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


