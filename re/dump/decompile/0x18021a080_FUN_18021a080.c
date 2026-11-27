// 0x18021a080  FUN_18021a080
// size=419 thunk=false
// signature: undefined FUN_18021a080()
// status: ok


void FUN_18021a080(undefined8 param_1,ulonglong param_2)

{
  void *_Dst;
  size_t sVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  pvVar9 = DAT_1803eb418;
  puVar6 = auStack_68;
  puVar7 = auStack_68;
  uVar5 = (longlong)DAT_1803eb418 - (longlong)DAT_1803eb410 >> 2;
  if (param_2 < uVar5) {
    DAT_1803eb418 = (void *)((longlong)DAT_1803eb410 + param_2 * 4);
  }
  else if (uVar5 < param_2) {
    uVar4 = DAT_1803eb420 - (longlong)DAT_1803eb410 >> 2;
    if (uVar4 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      if ((0x3fffffffffffffff - (uVar4 >> 1) < uVar4) ||
         ((uVar4 = (uVar4 >> 1) + uVar4, uVar8 = param_2, param_2 <= uVar4 &&
          (uVar8 = uVar4, 0x3fffffffffffffff < uVar4)))) {
LAB_18021a219:
                    /* WARNING: Subroutine does not return */
        FUN_180012fe0();
      }
      uVar4 = uVar8 * 4;
      if (uVar4 == 0) {
        pvVar9 = (void *)0x0;
        puVar7 = auStack_68;
      }
      else if (uVar4 < 0x1000) {
        pvVar9 = (void *)FUN_1802d8350();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_18021a219;
        lVar3 = FUN_1802d8350(uVar4 + 0x27);
        if (lVar3 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar3 = (*pcVar2)(5);
          puVar6 = auStack_60;
        }
        pvVar9 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar9 - 8) = lVar3;
        puVar7 = puVar6;
      }
      _Dst = (void *)((longlong)pvVar9 + uVar5 * 4);
      *(void ***)(puVar7 + 0x20) = &DAT_1803eb410;
      *(void **)(puVar7 + 0x28) = pvVar9;
      *(ulonglong *)(puVar7 + 0x30) = uVar8;
      *(void **)(puVar7 + 0x38) = _Dst;
      *(void **)(puVar7 + 0x40) = _Dst;
      sVar1 = (param_2 - uVar5) * 4;
      *(undefined8 *)(puVar7 + -8) = 0x18021a1a5;
      memset(_Dst,0,sVar1);
      *(void **)(puVar7 + 0x40) = (void *)((longlong)_Dst + sVar1);
      *(undefined8 *)(puVar7 + -8) = 0x18021a1c3;
      memmove(pvVar9,DAT_1803eb410,(longlong)DAT_1803eb418 - (longlong)DAT_1803eb410);
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + -8) = 0x18021a1dd;
      FUN_180239a50(&DAT_1803eb410,pvVar9,param_2,uVar8);
    }
    else {
      sVar1 = (param_2 - uVar5) * 4;
      memset(DAT_1803eb418,0,sVar1);
      DAT_1803eb418 = (void *)(sVar1 + (longlong)pvVar9);
    }
  }
  return;
}


