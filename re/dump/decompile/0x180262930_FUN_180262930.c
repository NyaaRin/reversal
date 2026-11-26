// 0x180262930  FUN_180262930
// size=742 thunk=false
// signature: undefined FUN_180262930()
// status: ok


longlong FUN_180262930(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Memory;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  puVar12 = auStack_b8;
  puVar13 = auStack_b8;
  local_90 = param_4;
  local_88 = param_3;
  local_80 = param_5;
  local_78 = param_6;
  uVar11 = *param_1;
  lVar10 = ((longlong)(param_1[1] - uVar11) >> 3) * -0x71c71c71c71c71c7;
  if (lVar10 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar9 = ((longlong)(param_1[2] - uVar11) >> 3) * -0x71c71c71c71c71c7;
  uVar8 = 0x38e38e38e38e38e - (uVar9 >> 1);
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    uVar8 = lVar10 + 1;
    uVar9 = uVar9 + (uVar9 >> 1);
    uVar15 = uVar8;
    if (uVar8 <= uVar9) {
      uVar15 = uVar9;
    }
    if (uVar15 < 0x38e38e38e38e38f) {
      uVar9 = uVar15 * 0x48;
      if (uVar9 == 0) {
        uVar14 = 0;
        puVar13 = auStack_b8;
      }
      else if (uVar9 < 0x1000) {
        uVar14 = FUN_1802d8350(uVar9);
      }
      else {
        if (uVar9 + 0x27 <= uVar9) goto LAB_180262c12;
        lVar10 = FUN_1802d8350();
        if (lVar10 == 0) {
          pcVar7 = (code *)swi(0x29);
          lVar10 = (*pcVar7)(5);
          puVar12 = auStack_b0;
        }
        uVar14 = lVar10 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar14 - 8) = lVar10;
        puVar13 = puVar12;
      }
      lVar10 = (longlong)(param_2 - uVar11) / 0x12 + ((longlong)(param_2 - uVar11) >> 0x3f);
      lVar10 = (lVar10 >> 2) - (lVar10 >> 0x3f);
      puVar2 = (undefined4 *)(uVar14 + lVar10 * 0x48);
      puVar1 = puVar2 + 0x12;
      *(undefined4 **)(puVar13 + 0x20) = puVar1;
      *(ulonglong **)(puVar13 + 0x48) = param_1;
      *(ulonglong *)(puVar13 + 0x50) = uVar14;
      *(ulonglong *)(puVar13 + 0x58) = uVar15;
      *(undefined4 **)(puVar13 + 0x60) = puVar1;
      *(undefined4 **)(puVar13 + 0x68) = puVar1;
      *(undefined4 **)(puVar13 + 0x70) = puVar2;
      uVar3 = **(undefined4 **)(puVar13 + 0x28);
      *puVar2 = **(undefined4 **)(puVar13 + 0x30);
      puVar2[1] = uVar3;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      uVar4 = (*(undefined8 **)(puVar13 + 0x38))[1];
      uVar5 = **(undefined8 **)(puVar13 + 0x38);
      *(undefined8 *)(puVar13 + -8) = 0x180262ac7;
      FUN_18001d080(puVar2 + 2,uVar5,uVar4);
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      uVar4 = (*(undefined8 **)(puVar13 + 0x40))[1];
      uVar5 = **(undefined8 **)(puVar13 + 0x40);
      *(undefined8 *)(puVar13 + -8) = 0x180262aeb;
      FUN_18001d080(puVar2 + 10,uVar5,uVar4);
      *(undefined4 **)(puVar13 + 0x60) = puVar2;
      uVar11 = param_1[1];
      if (param_2 == uVar11) {
        param_2 = *param_1;
        uVar15 = uVar14;
      }
      else {
        uVar11 = *param_1;
        *(undefined8 *)(puVar13 + -8) = 0x180262b10;
        FUN_180264d00(uVar11,param_2,uVar14,param_1);
        *(ulonglong *)(puVar13 + 0x60) = uVar14;
        uVar11 = param_1[1];
        uVar15 = *(ulonglong *)(puVar13 + 0x20);
      }
      *(undefined8 *)(puVar13 + -8) = 0x180262b29;
      FUN_180264d00(param_2,uVar11,uVar15,param_1);
      *(undefined8 *)(puVar13 + 0x50) = 0;
      uVar11 = *param_1;
      if (uVar11 != 0) {
        uVar15 = param_1[1];
        *(ulonglong *)(puVar13 + 0x20) = uVar11;
        while (uVar11 != uVar15) {
          *(undefined8 *)(puVar13 + -8) = 0x180262b59;
          FUN_18020e450(uVar11 + 0x28);
          *(undefined8 *)(puVar13 + -8) = 0x180262b63;
          FUN_18020e450(uVar11 + 8);
          uVar11 = uVar11 + 0x48;
          *(ulonglong *)(puVar13 + 0x20) = uVar11;
        }
        pvVar6 = (void *)*param_1;
        _Memory = pvVar6;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar6) >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)();
          puVar13 = puVar13 + 8;
        }
        *(undefined8 *)(puVar13 + -8) = 0x180262bcb;
        free(_Memory);
      }
      *param_1 = uVar14;
      param_1[1] = uVar14 + uVar8 * 0x48;
      param_1[2] = uVar9 + uVar14;
      return uVar14 + lVar10 * 0x48;
    }
  }
LAB_180262c12:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


