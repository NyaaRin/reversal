// 0x180225270  FUN_180225270
// size=644 thunk=false
// signature: undefined FUN_180225270()
// status: ok


longlong FUN_180225270(undefined8 param_1,void *param_2,undefined8 param_3)

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
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  local_78 = param_3;
  lVar6 = ((longlong)DAT_1803e9e50 - (longlong)DAT_1803e9e48 >> 3) * 0x6db6db6db6db6db7;
  if (lVar6 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = (DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 0x6db6db6db6db6db7;
  uVar3 = 0x492492492492492 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    lVar11 = (longlong)param_2 - (longlong)DAT_1803e9e48;
    uVar3 = lVar6 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar7 = uVar3;
    if (uVar3 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 < 0x492492492492493) {
      uVar4 = uVar7 * 0x38;
      if (uVar4 == 0) {
        uVar12 = 0;
        puVar10 = auStack_98;
      }
      else if (uVar4 < 0x1000) {
        uVar12 = FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1802254f0;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar6 = (*pcVar2)(5);
          puVar9 = auStack_90;
        }
        uVar12 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar12 - 8) = lVar6;
        puVar10 = puVar9;
      }
      lVar11 = (lVar11 / 0x38) * 0x38 + uVar12;
      uVar1 = lVar11 + 0x38;
      *(void ***)(puVar10 + 0x28) = &DAT_1803e9e48;
      *(ulonglong *)(puVar10 + 0x30) = uVar12;
      *(ulonglong *)(puVar10 + 0x38) = uVar7;
      *(ulonglong *)(puVar10 + 0x40) = uVar1;
      *(ulonglong *)(puVar10 + 0x48) = uVar1;
      *(longlong *)(puVar10 + 0x50) = lVar11;
      lVar6 = *(longlong *)(puVar10 + 0x20);
      *(undefined8 *)(puVar10 + -8) = 0x1802253b2;
      FUN_18016d4c0(lVar11,lVar6);
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
      *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
      *(longlong *)(puVar10 + 0x40) = lVar11;
      pvVar5 = DAT_1803e9e48;
      uVar7 = uVar12;
      if (param_2 != DAT_1803e9e50) {
        *(undefined8 *)(puVar10 + -8) = 0x180225403;
        FUN_180232590(DAT_1803e9e48,param_2,uVar12,&DAT_1803e9e48);
        *(ulonglong *)(puVar10 + 0x40) = uVar12;
        pvVar5 = param_2;
        uVar7 = uVar1;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18022541d;
      FUN_180232590(pvVar5,DAT_1803e9e50,uVar7,&DAT_1803e9e48);
      pvVar5 = DAT_1803e9e50;
      *(undefined8 *)(puVar10 + 0x30) = 0;
      if (DAT_1803e9e48 != (void *)0x0) {
        *(void **)(puVar10 + 0x20) = DAT_1803e9e48;
        pvVar8 = DAT_1803e9e48;
        while (pvVar8 != pvVar5) {
          *(undefined8 *)(puVar10 + -8) = 0x18022544b;
          FUN_18020e450(pvVar8);
          pvVar8 = (void *)((longlong)pvVar8 + 0x38);
          *(void **)(puVar10 + 0x20) = pvVar8;
        }
        pvVar5 = DAT_1803e9e48;
        if (0xfff < (ulonglong)((DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 8)) {
          pvVar5 = *(void **)((longlong)DAT_1803e9e48 + -8);
          pvVar8 = (void *)((longlong)DAT_1803e9e48 + (-8 - (longlong)pvVar5));
          if ((void *)0x1f < pvVar8) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar10 = puVar10 + 8;
            pvVar5 = pvVar8;
          }
        }
        *(undefined8 *)(puVar10 + -8) = 0x1802254af;
        free(pvVar5);
      }
      DAT_1803e9e48 = (void *)uVar12;
      DAT_1803e9e50 = (void *)(uVar3 * 0x38 + uVar12);
      DAT_1803e9e58 = uVar4 + uVar12;
      return lVar11;
    }
  }
LAB_1802254f0:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


