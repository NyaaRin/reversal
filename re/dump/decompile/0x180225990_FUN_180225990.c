// 0x180225990  FUN_180225990
// size=609 thunk=false
// signature: undefined FUN_180225990()
// status: ok


longlong FUN_180225990(undefined8 param_1,void *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  local_68 = param_3;
  lVar6 = ((longlong)DAT_1803eb380 - (longlong)DAT_1803eb378 >> 4) * 0x6db6db6db6db6db7;
  if (lVar6 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = (DAT_1803eb388 - (longlong)DAT_1803eb378 >> 4) * 0x6db6db6db6db6db7;
  uVar3 = 0x249249249249249 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    lVar11 = (longlong)param_2 - (longlong)DAT_1803eb378;
    uVar3 = lVar6 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar7 = uVar3;
    if (uVar3 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 < 0x24924924924924a) {
      uVar4 = uVar7 * 0x70;
      if (uVar4 == 0) {
        uVar12 = 0;
        puVar10 = auStack_88;
      }
      else if (uVar4 < 0x1000) {
        uVar12 = FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180225bed;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar6 = (*pcVar2)(5);
          puVar9 = auStack_80;
        }
        uVar12 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar12 - 8) = lVar6;
        puVar10 = puVar9;
      }
      lVar6 = (lVar11 / 0x70) * 0x70 + uVar12;
      uVar1 = lVar6 + 0x70;
      *(void ***)(puVar10 + 0x28) = &DAT_1803eb378;
      *(ulonglong *)(puVar10 + 0x30) = uVar12;
      *(ulonglong *)(puVar10 + 0x38) = uVar7;
      *(ulonglong *)(puVar10 + 0x40) = uVar1;
      *(ulonglong *)(puVar10 + 0x48) = uVar1;
      *(undefined8 *)(puVar10 + -8) = 0x180225aca;
      FUN_180232650(-(lVar11 >> 0x3f),lVar6,*(undefined8 *)(puVar10 + 0x20));
      *(longlong *)(puVar10 + 0x40) = lVar6;
      pvVar5 = DAT_1803eb378;
      uVar7 = uVar12;
      if (param_2 != DAT_1803eb380) {
        *(undefined8 *)(puVar10 + -8) = 0x180225afc;
        FUN_1802326f0(DAT_1803eb378,param_2,uVar12,&DAT_1803eb378);
        *(ulonglong *)(puVar10 + 0x40) = uVar12;
        pvVar5 = param_2;
        uVar7 = uVar1;
      }
      *(undefined8 *)(puVar10 + -8) = 0x180225b16;
      FUN_1802326f0(pvVar5,DAT_1803eb380,uVar7,&DAT_1803eb378);
      pvVar5 = DAT_1803eb380;
      *(undefined8 *)(puVar10 + 0x30) = 0;
      if (DAT_1803eb378 != (void *)0x0) {
        *(void **)(puVar10 + 0x20) = DAT_1803eb378;
        pvVar8 = DAT_1803eb378;
        while (pvVar8 != pvVar5) {
          *(undefined8 *)(puVar10 + -8) = 0x180225b48;
          FUN_18020e450(pvVar8);
          pvVar8 = (void *)((longlong)pvVar8 + 0x70);
          *(void **)(puVar10 + 0x20) = pvVar8;
        }
        pvVar5 = DAT_1803eb378;
        if (0xfff < (ulonglong)((DAT_1803eb388 - (longlong)DAT_1803eb378 >> 4) * 0x10)) {
          pvVar5 = *(void **)((longlong)DAT_1803eb378 + -8);
          pvVar8 = (void *)((longlong)DAT_1803eb378 + (-8 - (longlong)pvVar5));
          if ((void *)0x1f < pvVar8) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar10 = puVar10 + 8;
            pvVar5 = pvVar8;
          }
        }
        *(undefined8 *)(puVar10 + -8) = 0x180225bac;
        free(pvVar5);
      }
      DAT_1803eb378 = (void *)uVar12;
      DAT_1803eb380 = (void *)(uVar3 * 0x70 + uVar12);
      DAT_1803eb388 = uVar4 + uVar12;
      return lVar6;
    }
  }
LAB_180225bed:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


