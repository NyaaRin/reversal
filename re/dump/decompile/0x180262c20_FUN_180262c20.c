// 0x180262c20  FUN_180262c20
// size=668 thunk=false
// signature: undefined FUN_180262c20()
// status: ok


longlong FUN_180262c20(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Memory;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar12 = auStack_a8;
  puVar13 = auStack_a8;
  local_80 = param_4;
  local_78 = param_3;
  local_70 = param_5;
  uVar11 = *param_1;
  lVar9 = ((longlong)(param_1[1] - uVar11) >> 4) * -0x5555555555555555;
  if (lVar9 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar8 = ((longlong)(param_1[2] - uVar11) >> 4) * -0x5555555555555555;
  uVar7 = 0x555555555555555 - (uVar8 >> 1);
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar7 = lVar9 + 1;
    uVar8 = uVar8 + (uVar8 >> 1);
    uVar15 = uVar7;
    if (uVar7 <= uVar8) {
      uVar15 = uVar8;
    }
    if (uVar15 < 0x555555555555556) {
      uVar8 = uVar15 * 0x30;
      if (uVar8 == 0) {
        uVar14 = 0;
        puVar13 = auStack_a8;
      }
      else if (uVar8 < 0x1000) {
        uVar14 = FUN_1802d8350(uVar8);
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto LAB_180262eb8;
        lVar9 = FUN_1802d8350();
        if (lVar9 == 0) {
          pcVar6 = (code *)swi(0x29);
          lVar9 = (*pcVar6)(5);
          puVar12 = auStack_a0;
        }
        uVar14 = lVar9 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar14 - 8) = lVar9;
        puVar13 = puVar12;
      }
      lVar9 = (longlong)(param_2 - uVar11) / 6 + ((longlong)(param_2 - uVar11) >> 0x3f);
      lVar9 = (lVar9 >> 3) - (lVar9 >> 0x3f);
      puVar10 = (undefined8 *)(lVar9 * 0x30 + uVar14);
      puVar1 = puVar10 + 6;
      *(undefined8 **)(puVar13 + 0x20) = puVar1;
      *(ulonglong **)(puVar13 + 0x40) = param_1;
      *(ulonglong *)(puVar13 + 0x48) = uVar14;
      *(ulonglong *)(puVar13 + 0x50) = uVar15;
      *(undefined8 **)(puVar13 + 0x58) = puVar1;
      *(undefined8 **)(puVar13 + 0x60) = puVar1;
      *(undefined8 **)(puVar13 + 0x68) = puVar10;
      uVar2 = **(undefined4 **)(puVar13 + 0x28);
      *puVar10 = **(undefined8 **)(puVar13 + 0x30);
      *(undefined4 *)(puVar10 + 1) = uVar2;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      uVar3 = (*(undefined8 **)(puVar13 + 0x38))[1];
      uVar4 = **(undefined8 **)(puVar13 + 0x38);
      *(undefined8 *)(puVar13 + -8) = 0x180262da8;
      FUN_18001d080(puVar10 + 2,uVar4,uVar3);
      *(undefined8 **)(puVar13 + 0x58) = puVar10;
      uVar11 = param_1[1];
      if (param_2 == uVar11) {
        param_2 = *param_1;
        uVar15 = uVar14;
      }
      else {
        uVar11 = *param_1;
        *(undefined8 *)(puVar13 + -8) = 0x180262dcd;
        FUN_180264de0(uVar11,param_2,uVar14,param_1);
        *(ulonglong *)(puVar13 + 0x58) = uVar14;
        uVar11 = param_1[1];
        uVar15 = *(ulonglong *)(puVar13 + 0x20);
      }
      *(undefined8 *)(puVar13 + -8) = 0x180262de6;
      FUN_180264de0(param_2,uVar11,uVar15,param_1);
      *(undefined8 *)(puVar13 + 0x48) = 0;
      uVar11 = *param_1;
      if (uVar11 != 0) {
        uVar15 = param_1[1];
        *(ulonglong *)(puVar13 + 0x20) = uVar11;
        while (uVar11 != uVar15) {
          *(undefined8 *)(puVar13 + -8) = 0x180262e0a;
          FUN_18020e450(uVar11 + 0x10);
          uVar11 = uVar11 + 0x30;
          *(ulonglong *)(puVar13 + 0x20) = uVar11;
        }
        pvVar5 = (void *)*param_1;
        _Memory = pvVar5;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar5) >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)pvVar5 + -8),
           0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar6 = (code *)swi(0x29);
          (*pcVar6)();
          puVar13 = puVar13 + 8;
        }
        *(undefined8 *)(puVar13 + -8) = 0x180262e6e;
        free(_Memory);
      }
      *param_1 = uVar14;
      param_1[1] = uVar7 * 0x30 + uVar14;
      param_1[2] = uVar8 + uVar14;
      return lVar9 * 0x30 + uVar14;
    }
  }
LAB_180262eb8:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


