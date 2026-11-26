// 0x1802c12d0  FUN_1802c12d0
// size=800 thunk=false
// signature: undefined FUN_1802c12d0()
// status: ok


void FUN_1802c12d0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar23 = *(float *)(param_1 + 0x20);
  lVar8 = *(longlong *)(lVar7 + 0xec0);
  lVar9 = *(longlong *)(lVar8 + 0x1520);
  fVar24 = *(float *)(param_1 + 0x18);
  if (*(float *)(param_1 + 0x18) <= *(float *)(lVar9 + 0x26c)) {
    fVar24 = *(float *)(lVar9 + 0x26c);
  }
  if ((*(uint *)(param_1 + 4) & 0x80000) != 0) {
    fVar22 = *(float *)(lVar9 + 0x11c);
    fVar21 = fVar22;
    if ((*(longlong *)(lVar8 + 0x2368) != 0) &&
       (fVar21 = *(float *)(*(longlong *)(lVar8 + 0x2368) + 0x80), fVar21 <= fVar22)) {
      fVar21 = fVar22;
    }
    fVar22 = (float)(int)((fVar21 - *(float *)(lVar8 + 0xcd8)) -
                         *(float *)(lVar8 + 0x1238) * DAT_180380ac0);
    if (*(float *)(lVar8 + 0xcd8) + *(float *)(lVar8 + 0xd50) + fVar23 < fVar22) {
      fVar23 = fVar22;
    }
  }
  if (*(float *)(lVar9 + 0x274) <= fVar23) {
    fVar23 = *(float *)(lVar9 + 0x274);
  }
  if (fVar24 < fVar23) {
    fVar23 = *(float *)(param_1 + 0x1c);
    sVar6 = *(short *)(param_1 + 0x24);
    if (sVar6 != -1) {
      if (*(char *)(lVar7 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368);
      if ((*(uint *)(lVar10 + 4) & 0x100000) == 0) {
        lVar18 = *(longlong *)(lVar10 + 0x18);
        lVar20 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
        lVar19 = (longlong)sVar6 * 0x74;
        lVar11 = *(longlong *)(lVar20 + 0x2c8);
        puVar1 = (undefined4 *)(lVar19 + 0x24 + lVar18);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar13 = puVar1[3];
        uVar25 = *(undefined4 *)(lVar19 + 0x24 + lVar18);
        uVar16 = *(undefined4 *)(lVar19 + 0x28 + lVar18);
        uVar2 = *(undefined4 *)(lVar19 + 0x2c + lVar18);
        uVar3 = *(undefined4 *)(lVar19 + 0x30 + lVar18);
        *(undefined4 *)(lVar20 + 0x268) = *puVar1;
        *(undefined4 *)(lVar20 + 0x26c) = uVar4;
        *(undefined4 *)(lVar20 + 0x270) = uVar5;
        *(undefined4 *)(lVar20 + 0x274) = uVar13;
        *(undefined4 *)(lVar11 + 0x60) = uVar25;
        *(undefined4 *)(lVar11 + 100) = uVar16;
        *(undefined4 *)(lVar11 + 0x68) = uVar2;
        *(undefined4 *)(lVar11 + 0x6c) = uVar3;
        lVar17 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x2c8) + 0xa0);
        lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x2c8) + 0xa8);
        *(undefined4 *)(lVar11 + -0x10 + lVar17 * 0x10) = uVar25;
        *(undefined4 *)(lVar11 + -0xc + lVar17 * 0x10) = uVar16;
        *(undefined4 *)(lVar11 + -8 + lVar17 * 0x10) = uVar2;
        *(undefined4 *)(lVar11 + -4 + lVar17 * 0x10) = uVar3;
        FUN_180297210(*(undefined8 *)(lVar10 + 0x1a0),*(undefined8 *)(lVar20 + 0x2c8),
                      *(undefined2 *)(lVar19 + 0x60 + lVar18));
      }
    }
    uVar12 = *(undefined8 *)(lVar9 + 0x2c8);
    uVar25 = *(undefined4 *)(lVar8 + 0xd4c);
    uVar16 = FUN_18026a6a0(0x35,DAT_180380bb0);
    FUN_180294e30(uVar12,(float)(int)fVar23,fVar24);
    if (*(short *)(param_1 + 0x24) != -1) {
      if (*(char *)(lVar7 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368);
      if (((*(uint *)(lVar8 + 4) & 0x100000) == 0) && (*(int *)(lVar8 + 0x74) != -1)) {
        lVar9 = *(longlong *)(lVar8 + 0x18);
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
        lVar20 = (longlong)*(int *)(lVar8 + 0x74) * 0x74;
        lVar10 = *(longlong *)(lVar7 + 0x2c8);
        puVar1 = (undefined4 *)(lVar20 + 0x24 + lVar9);
        uVar13 = puVar1[1];
        uVar14 = puVar1[2];
        uVar15 = puVar1[3];
        uVar2 = *(undefined4 *)(lVar20 + 0x24 + lVar9);
        uVar3 = *(undefined4 *)(lVar20 + 0x28 + lVar9);
        uVar4 = *(undefined4 *)(lVar20 + 0x2c + lVar9);
        uVar5 = *(undefined4 *)(lVar20 + 0x30 + lVar9);
        *(undefined4 *)(lVar7 + 0x268) = *puVar1;
        *(undefined4 *)(lVar7 + 0x26c) = uVar13;
        *(undefined4 *)(lVar7 + 0x270) = uVar14;
        *(undefined4 *)(lVar7 + 0x274) = uVar15;
        *(undefined4 *)(lVar10 + 0x60) = uVar2;
        *(undefined4 *)(lVar10 + 100) = uVar3;
        *(undefined4 *)(lVar10 + 0x68) = uVar4;
        *(undefined4 *)(lVar10 + 0x6c) = uVar5;
        lVar18 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x2c8) + 0xa0);
        lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x2c8) + 0xa8);
        *(undefined4 *)(lVar10 + -0x10 + lVar18 * 0x10) = uVar2;
        *(undefined4 *)(lVar10 + -0xc + lVar18 * 0x10) = uVar3;
        *(undefined4 *)(lVar10 + -8 + lVar18 * 0x10) = uVar4;
        *(undefined4 *)(lVar10 + -4 + lVar18 * 0x10) = uVar5;
        FUN_180297210(*(undefined8 *)(lVar8 + 0x1a0),*(undefined8 *)(lVar7 + 0x2c8),
                      *(undefined2 *)(lVar20 + 0x60 + lVar9),lVar9,uVar16,uVar25);
      }
    }
  }
  return;
}


