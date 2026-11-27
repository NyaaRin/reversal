// 0x180262680  FUN_180262680
// size=683 thunk=false
// signature: undefined FUN_180262680()
// status: ok


longlong FUN_180262680(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *_Memory;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar16 = auStack_a8;
  puVar17 = auStack_a8;
  local_80 = param_4;
  local_78 = param_3;
  local_70 = param_6;
  uVar15 = *param_1;
  lVar14 = ((longlong)(param_1[1] - uVar15) >> 3) * -0x71c71c71c71c71c7;
  if (lVar14 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar13 = ((longlong)(param_1[2] - uVar15) >> 3) * -0x71c71c71c71c71c7;
  uVar12 = 0x38e38e38e38e38e - (uVar13 >> 1);
  if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
    uVar12 = lVar14 + 1;
    uVar13 = uVar13 + (uVar13 >> 1);
    uVar19 = uVar12;
    if (uVar12 <= uVar13) {
      uVar19 = uVar13;
    }
    if (uVar19 < 0x38e38e38e38e38f) {
      uVar13 = uVar19 * 0x48;
      if (uVar13 == 0) {
        uVar18 = 0;
        puVar17 = auStack_a8;
      }
      else if (uVar13 < 0x1000) {
        uVar18 = FUN_1802d8350(uVar13);
      }
      else {
        if (uVar13 + 0x27 <= uVar13) goto LAB_180262927;
        lVar14 = FUN_1802d8350();
        if (lVar14 == 0) {
          pcVar7 = (code *)swi(0x29);
          lVar14 = (*pcVar7)(5);
          puVar16 = auStack_a0;
        }
        uVar18 = lVar14 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar18 - 8) = lVar14;
        puVar17 = puVar16;
      }
      lVar14 = (longlong)(param_2 - uVar15) / 0x12 + ((longlong)(param_2 - uVar15) >> 0x3f);
      lVar14 = (lVar14 >> 2) - (lVar14 >> 0x3f);
      puVar2 = (undefined1 *)(uVar18 + lVar14 * 0x48);
      puVar1 = puVar2 + 0x48;
      *(undefined1 **)(puVar17 + 0x20) = puVar1;
      *(ulonglong **)(puVar17 + 0x40) = param_1;
      *(ulonglong *)(puVar17 + 0x48) = uVar18;
      *(ulonglong *)(puVar17 + 0x50) = uVar19;
      *(undefined1 **)(puVar17 + 0x58) = puVar1;
      *(undefined1 **)(puVar17 + 0x60) = puVar1;
      *(undefined1 **)(puVar17 + 0x68) = puVar2;
      puVar3 = *(undefined4 **)(puVar17 + 0xd0);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      uVar4 = **(undefined8 **)(puVar17 + 0x28);
      uVar5 = (*(undefined8 **)(puVar17 + 0x28))[1];
      *puVar2 = **(undefined1 **)(puVar17 + 0x30);
      *(undefined8 *)(puVar2 + 8) = uVar4;
      *(undefined8 *)(puVar2 + 0x10) = uVar5;
      *(undefined4 *)(puVar2 + 0x18) = uVar8;
      *(undefined4 *)(puVar2 + 0x1c) = uVar9;
      *(undefined4 *)(puVar2 + 0x20) = uVar10;
      *(undefined4 *)(puVar2 + 0x24) = uVar11;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined8 *)(puVar2 + 0x38) = 0;
      *(undefined8 *)(puVar2 + 0x40) = 0;
      uVar4 = (*(undefined8 **)(puVar17 + 0x38))[1];
      uVar5 = **(undefined8 **)(puVar17 + 0x38);
      *(undefined8 *)(puVar17 + -8) = 0x180262819;
      FUN_18001d080(puVar2 + 0x28,uVar5,uVar4);
      *(undefined1 **)(puVar17 + 0x58) = puVar2;
      uVar15 = param_1[1];
      if (param_2 == uVar15) {
        param_2 = *param_1;
        uVar19 = uVar18;
      }
      else {
        uVar15 = *param_1;
        *(undefined8 *)(puVar17 + -8) = 0x18026283e;
        FUN_180264c40(uVar15,param_2,uVar18,param_1);
        *(ulonglong *)(puVar17 + 0x58) = uVar18;
        uVar15 = param_1[1];
        uVar19 = *(ulonglong *)(puVar17 + 0x20);
      }
      *(undefined8 *)(puVar17 + -8) = 0x180262857;
      FUN_180264c40(param_2,uVar15,uVar19,param_1);
      *(undefined8 *)(puVar17 + 0x48) = 0;
      uVar15 = *param_1;
      if (uVar15 != 0) {
        uVar19 = param_1[1];
        *(ulonglong *)(puVar17 + 0x20) = uVar15;
        while (uVar15 != uVar19) {
          *(undefined8 *)(puVar17 + -8) = 0x18026287b;
          FUN_18020e450(uVar15 + 0x28);
          uVar15 = uVar15 + 0x48;
          *(ulonglong *)(puVar17 + 0x20) = uVar15;
        }
        pvVar6 = (void *)*param_1;
        _Memory = pvVar6;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar6) >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)();
          puVar17 = puVar17 + 8;
        }
        *(undefined8 *)(puVar17 + -8) = 0x1802628e3;
        free(_Memory);
      }
      *param_1 = uVar18;
      param_1[1] = uVar18 + uVar12 * 0x48;
      param_1[2] = uVar13 + uVar18;
      return uVar18 + lVar14 * 0x48;
    }
  }
LAB_180262927:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


