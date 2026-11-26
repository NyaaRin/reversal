// 0x180224130  FUN_180224130
// size=549 thunk=false
// signature: undefined FUN_180224130()
// status: ok


undefined8 * FUN_180224130(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Memory;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  
  puVar15 = auStack_98;
  puVar14 = auStack_98;
  local_78 = param_3;
  lVar13 = *param_1;
  lVar10 = param_1[1] - lVar13 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar9 = param_1[2] - lVar13 >> 5;
  if (uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) {
    uVar1 = lVar10 + 1;
    uVar9 = uVar9 + (uVar9 >> 1);
    uVar12 = uVar1;
    if (uVar1 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 < 0x800000000000000) {
      uVar9 = uVar12 * 0x20;
      puVar16 = (undefined8 *)0x0;
      if (uVar9 != 0) {
        if (uVar9 < 0x1000) {
          puVar16 = (undefined8 *)FUN_1802d8350(uVar9);
          puVar15 = auStack_98;
        }
        else {
          if (uVar9 + 0x27 <= uVar9) goto LAB_180224351;
          lVar10 = FUN_1802d8350();
          if (lVar10 == 0) {
            pcVar5 = (code *)swi(0x29);
            lVar10 = (*pcVar5)(5);
            puVar14 = auStack_90;
          }
          puVar16 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
          puVar16[-1] = lVar10;
          puVar15 = puVar14;
        }
      }
      uVar18 = 0;
      lVar10 = param_2 - lVar13 >> 5;
      puVar11 = puVar16 + lVar10 * 4;
      puVar17 = puVar11 + 4;
      *(longlong **)(puVar15 + 0x28) = param_1;
      *(undefined8 **)(puVar15 + 0x30) = puVar16;
      *(ulonglong *)(puVar15 + 0x38) = uVar12;
      *(undefined8 **)(puVar15 + 0x40) = puVar17;
      *(undefined8 **)(puVar15 + 0x48) = puVar17;
      *(undefined8 **)(puVar15 + 0x50) = puVar11;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar2 = *(undefined4 **)(puVar15 + 0x20);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(undefined4 *)puVar11 = *puVar2;
      *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
      *(undefined4 *)(puVar11 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
      uVar6 = puVar2[5];
      uVar7 = puVar2[6];
      uVar8 = puVar2[7];
      *(undefined4 *)(puVar11 + 2) = puVar2[4];
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar6;
      *(undefined4 *)(puVar11 + 3) = uVar7;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar8;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 7;
      *(undefined2 *)puVar2 = 0;
      *(undefined8 **)(puVar15 + 0x40) = puVar11;
      lVar13 = param_1[1];
      if (param_2 == lVar13) {
        param_2 = *param_1;
        puVar17 = puVar16;
      }
      else {
        lVar13 = *param_1;
        *(undefined8 *)(puVar15 + -8) = 0x180224290;
        FUN_1802321a0(lVar13,param_2,puVar16,param_1);
        *(undefined8 **)(puVar15 + 0x40) = puVar16;
        lVar13 = param_1[1];
      }
      *(undefined8 *)(puVar15 + -8) = 0x1802242a7;
      FUN_1802321a0(param_2,lVar13,puVar17,param_1);
      *(undefined8 *)(puVar15 + 0x30) = uVar18;
      lVar13 = *param_1;
      if (lVar13 != 0) {
        lVar3 = param_1[1];
        *(longlong *)(puVar15 + 0x20) = lVar13;
        while (lVar13 != lVar3) {
          *(undefined8 *)(puVar15 + -8) = 0x1802242ca;
          FUN_18021e290(lVar13);
          lVar13 = lVar13 + 0x20;
          *(longlong *)(puVar15 + 0x20) = lVar13;
        }
        pvVar4 = (void *)*param_1;
        _Memory = pvVar4;
        if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xffffffffffffffe0U)) &&
           (_Memory = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
          pcVar5 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar5)(5);
          puVar15 = puVar15 + 8;
        }
        *(undefined8 *)(puVar15 + -8) = 0x180224315;
        free(_Memory);
      }
      *param_1 = (longlong)puVar16;
      param_1[1] = (longlong)(puVar16 + uVar1 * 4);
      param_1[2] = (longlong)(puVar16 + uVar12 * 4);
      return puVar16 + lVar10 * 4;
    }
  }
LAB_180224351:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


