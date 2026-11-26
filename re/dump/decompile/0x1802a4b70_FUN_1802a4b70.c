// 0x1802a4b70  FUN_1802a4b70
// size=1792 thunk=false
// signature: undefined FUN_1802a4b70()
// status: ok


void FUN_1802a4b70(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar16 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = *(longlong *)(lVar16 + 0xec0);
  lVar10 = *(longlong *)(lVar16 + 0x1520);
  if (*(int *)(param_1 + 0x74) != -1) {
    FUN_1802a55b0(param_1);
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  if (*(char *)(lVar16 + 0x2858) != '\0') {
    FUN_180287c20(0,&DAT_1803601c4,0);
  }
  *(undefined4 *)(lVar10 + 0x11c) = *(undefined4 *)(param_1 + 0x80);
  iVar20 = (int)*(short *)(param_1 + 0x22a);
  fVar3 = *(float *)(param_1 + 0x7c);
  fVar4 = *(float *)(param_1 + 0x80);
  iVar14 = *(int *)(param_1 + 0x70) + 1;
  local_90 = (int)*(short *)(param_1 + 0x228);
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar17 = param_1 + 0x1a8;
  }
  else {
    lVar17 = *(longlong *)(param_1 + 0x1c8) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  if (((*(byte *)(param_1 + 0x94) & 1) != 0) &&
     ((*(int *)(param_1 + 0x70) == 0 || ((*(uint *)(param_1 + 0x94) & 0x10000) != 0)))) {
    *(float *)(lVar17 + 8) = (fVar4 - fVar3) + *(float *)(lVar17 + 8);
  }
  fVar23 = DAT_180380bb0;
  if ((*(float *)(param_1 + 0x124) <= fVar4) && (fVar3 <= *(float *)(param_1 + 300))) {
    if ((*(short *)(param_1 + 0x20a) != -1) &&
       (((fVar3 <= *(float *)(lVar16 + 0x104) && (*(float *)(lVar16 + 0x104) < fVar4)) &&
        (*(int *)(lVar17 + 0x14) < 0)))) {
      *(undefined4 *)(lVar17 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    }
    iVar15 = *(int *)(param_1 + 0x9c);
    puVar1 = (uint *)(param_1 + 4);
    if (iVar15 == 0x1000000) {
      if ((*(byte *)puVar1 & 0x40) == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = FUN_18026a6a0((*(uint *)(param_1 + 0x98) & 1) + 0x31,fVar23);
      }
    }
    iVar22 = *(int *)(param_1 + 0xa0);
    if (iVar22 == 0x1000000) {
      iVar22 = 0;
    }
    iVar21 = 0;
    if ((0 < *(int *)(param_1 + 0x70)) && (iVar21 = 0, (*(byte *)puVar1 & 0x80) != 0)) {
      if ((*(uint *)(param_1 + 0x94) & 0x10000) == 0) {
        iVar21 = *(int *)(param_1 + 0xa8);
      }
      else {
        iVar21 = *(int *)(param_1 + 0xa4);
      }
    }
    sVar9 = *(short *)(param_1 + 0x230);
    if ((((iVar22 != 0 || iVar21 != 0) || iVar15 != 0) || (iVar14 == iVar20)) || (-1 < sVar9)) {
      if ((*puVar1 & 0x100000) == 0) {
        lVar16 = *(longlong *)(lVar10 + 0x2c8);
        uVar5 = *(undefined4 *)(param_1 + 0x144);
        uVar6 = *(undefined4 *)(param_1 + 0x148);
        uVar7 = *(undefined4 *)(param_1 + 0x14c);
        *(undefined4 *)(lVar16 + 0x60) = *(undefined4 *)(param_1 + 0x140);
        *(undefined4 *)(lVar16 + 100) = uVar5;
        *(undefined4 *)(lVar16 + 0x68) = uVar6;
        *(undefined4 *)(lVar16 + 0x6c) = uVar7;
      }
      FUN_180297210(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar10 + 0x2c8));
    }
    if ((iVar15 != 0) || (iVar22 != 0)) {
      local_a0 = *(float *)(param_1 + 0x110);
      if (*(float *)(param_1 + 0x110) <= *(float *)(param_1 + 0x130)) {
        local_a0 = *(float *)(param_1 + 0x130);
      }
      fVar24 = fVar3;
      if (fVar3 <= *(float *)(param_1 + 0x134)) {
        fVar24 = *(float *)(param_1 + 0x134);
      }
      fVar25 = fVar4;
      if (*(float *)(param_1 + 0x13c) <= fVar4) {
        fVar25 = *(float *)(param_1 + 0x13c);
      }
      local_98 = *(float *)(param_1 + 0x118);
      if (*(float *)(param_1 + 0x138) <= *(float *)(param_1 + 0x118)) {
        local_98 = *(float *)(param_1 + 0x138);
      }
      local_9c = fVar24;
      local_94 = fVar25;
      if ((iVar15 != 0) && (fVar24 < fVar25)) {
        FUN_180295000(*(undefined8 *)(lVar10 + 0x2c8),&local_a0,&local_98,iVar15,0,0);
      }
      if ((iVar22 != 0) && (fVar24 < fVar25)) {
        FUN_180295000(*(undefined8 *)(lVar10 + 0x2c8),&local_a0,&local_98,iVar22,0,0);
      }
    }
    if (-1 < sVar9) {
      puVar19 = *(undefined4 **)(param_1 + 0x38);
      puVar2 = puVar19 + (longlong)*(short *)(param_1 + 0x230) * 2;
      for (; puVar19 <= puVar2; puVar19 = puVar19 + 2) {
        local_9c = *(float *)(param_1 + 0x7c);
        if (*(float *)(param_1 + 0x7c) <= *(float *)(param_1 + 0x134)) {
          local_9c = *(float *)(param_1 + 0x134);
        }
        local_94 = *(float *)(param_1 + 0x80);
        if (*(float *)(param_1 + 0x13c) <= *(float *)(param_1 + 0x80)) {
          local_94 = *(float *)(param_1 + 0x13c);
        }
        lVar18 = (longlong)*(short *)(puVar19 + 1) * 0x74;
        lVar16 = *(longlong *)(param_1 + 0x18);
        fVar24 = *(float *)(lVar18 + 0xc + lVar16);
        local_a0 = *(float *)(lVar18 + 8 + lVar16);
        local_98 = fVar24;
        if (*(float *)(param_1 + 0x118) <= fVar24) {
          local_98 = *(float *)(param_1 + 0x118);
        }
        if (local_a0 <= *(float *)(param_1 + 0x110)) {
          local_a0 = *(float *)(param_1 + 0x110);
        }
        if (*(float *)(param_1 + 0x138) <= local_98) {
          local_98 = *(float *)(param_1 + 0x138);
        }
        if (local_a0 <= *(float *)(param_1 + 0x130)) {
          local_a0 = *(float *)(param_1 + 0x130);
        }
        if (fVar24 <= local_98) {
          local_98 = fVar24;
        }
        fVar24 = *(float *)(lVar18 + 0x24 + lVar16);
        if (local_a0 <= fVar24) {
          local_a0 = fVar24;
        }
        if (local_9c < local_94) {
          FUN_180295000(*(undefined8 *)(lVar10 + 0x2c8),&local_a0,&local_98,*puVar19,0,0);
        }
      }
    }
    if (((iVar21 != 0) && (*(float *)(param_1 + 0x134) <= fVar3)) &&
       (fVar3 < *(float *)(param_1 + 0x13c))) {
      FUN_180294d60(*(undefined8 *)(lVar10 + 0x2c8),*(undefined4 *)(param_1 + 0xac),
                    *(undefined4 *)(param_1 + 0xb0),fVar3,iVar21,fVar23);
    }
    if (((iVar14 == iVar20) && (*(float *)(param_1 + 0x134) <= fVar4)) &&
       (fVar4 < *(float *)(param_1 + 0x13c))) {
      FUN_180294d60(*(undefined8 *)(lVar10 + 0x2c8),*(undefined4 *)(param_1 + 0xac),
                    *(undefined4 *)(param_1 + 0xb0),fVar4,*(undefined4 *)(param_1 + 0xa4),fVar23);
    }
  }
  if (iVar14 == local_90) {
    iVar15 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        lVar16 = (longlong)iVar15;
        iVar15 = iVar15 + 1;
        *(undefined1 *)(lVar16 * 0x74 + 0x6e + *(longlong *)(param_1 + 0x18)) =
             *(undefined1 *)(param_1 + 0x238);
      } while (iVar15 < *(int *)(param_1 + 0x6c));
    }
    fVar23 = *(float *)(param_1 + 0x80) + fVar23;
    if (fVar23 <= *(float *)(param_1 + 0x124)) {
      fVar23 = *(float *)(param_1 + 0x124);
    }
    *(float *)(lVar17 + 0xc) = fVar23 - *(float *)(param_1 + 0xf4);
    if (iVar14 == iVar20) {
      fVar3 = *(float *)(param_1 + 300);
      iVar14 = 0;
      if (fVar3 <= fVar23) {
        fVar23 = fVar3;
      }
      *(float *)(param_1 + 0x15c) = fVar3;
      *(float *)(param_1 + 0x13c) = fVar3;
      *(undefined1 *)(param_1 + 0x245) = 1;
      *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x236);
      *(float *)(param_1 + 0x154) = fVar23;
      *(float *)(param_1 + 0x134) = fVar23;
      fVar3 = *(float *)(param_1 + 0x80);
      fVar4 = *(float *)(param_1 + 0x7c);
      fVar23 = (fVar3 + *(float *)(param_1 + 0x114)) - *(float *)(param_1 + 0xf4);
      *(float *)(lVar10 + 0x11c) = fVar23;
      *(float *)(param_1 + 0x80) = fVar23;
      *(float *)(param_1 + 0x7c) = fVar23 - (fVar3 - fVar4);
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          lVar16 = *(longlong *)(param_1 + 0x18);
          lVar17 = (longlong)iVar14;
          iVar14 = iVar14 + 1;
          lVar17 = lVar17 * 0x74;
          *(undefined2 *)(lVar17 + 0x60 + lVar16) = *(undefined2 *)(lVar17 + 100 + lVar16);
          *(undefined4 *)(lVar17 + 0x28 + lVar16) = *(undefined4 *)(param_1 + 0x154);
        } while (iVar14 < *(int *)(param_1 + 0x6c));
      }
      lVar16 = *(longlong *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(lVar16 + 0x24);
      uVar6 = *(undefined4 *)(lVar16 + 0x28);
      uVar7 = *(undefined4 *)(lVar16 + 0x2c);
      uVar8 = *(undefined4 *)(lVar16 + 0x30);
      uVar11 = *(undefined4 *)(lVar16 + 0x28);
      uVar12 = *(undefined4 *)(lVar16 + 0x2c);
      uVar13 = *(undefined4 *)(lVar16 + 0x30);
      lVar17 = *(longlong *)(lVar10 + 0x2c8);
      *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(lVar16 + 0x24);
      *(undefined4 *)(lVar10 + 0x26c) = uVar11;
      *(undefined4 *)(lVar10 + 0x270) = uVar12;
      *(undefined4 *)(lVar10 + 0x274) = uVar13;
      *(undefined4 *)(lVar17 + 0x60) = uVar5;
      *(undefined4 *)(lVar17 + 100) = uVar6;
      *(undefined4 *)(lVar17 + 0x68) = uVar7;
      *(undefined4 *)(lVar17 + 0x6c) = uVar8;
      lVar17 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x2c8) + 0xa0);
      lVar16 = *(longlong *)(*(longlong *)(lVar10 + 0x2c8) + 0xa8);
      *(undefined4 *)(lVar16 + -0x10 + lVar17 * 0x10) = uVar5;
      *(undefined4 *)(lVar16 + -0xc + lVar17 * 0x10) = uVar6;
      *(undefined4 *)(lVar16 + -8 + lVar17 * 0x10) = uVar7;
      *(undefined4 *)(lVar16 + -4 + lVar17 * 0x10) = uVar8;
      FUN_180297210(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar10 + 0x2c8),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x60));
    }
  }
  *(undefined1 *)(param_1 + 0x23a) = 0;
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  return;
}


