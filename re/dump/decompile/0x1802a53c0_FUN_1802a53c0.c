// 0x1802a53c0  FUN_1802a53c0
// size=492 thunk=false
// signature: undefined FUN_1802a53c0()
// status: ok


void FUN_1802a53c0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  lVar8 = *(longlong *)(param_1 + 0x188);
  lVar14 = (longlong)param_2 * 0x74;
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  *(int *)(param_1 + 0x74) = param_2;
  fVar17 = *(float *)(lVar14 + 0x38 + lVar7);
  if ((*(uint *)(lVar14 + lVar7) & 0x10000) != 0) {
    fVar17 = fVar17 + *(float *)(param_1 + 0x90);
  }
  *(float *)(lVar8 + 0x118) = fVar17;
  fVar16 = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x7c);
  *(float *)(lVar8 + 0x130) = fVar17;
  *(float *)(lVar8 + 0x120) = fVar17;
  *(float *)(lVar8 + 0x11c) = fVar16;
  *(float *)(lVar8 + 0x160) = (fVar17 - *(float *)(lVar8 + 0x28)) - *(float *)(lVar8 + 0x15c);
  *(undefined4 *)(lVar8 + 0x150) = *(undefined4 *)(param_1 + 0x8c);
  *(int *)(lVar8 + 0x170) = (int)*(char *)(lVar14 + 0x6e + lVar7);
  *(float *)(lVar8 + 0x24c) = fVar16;
  *(undefined4 *)(lVar8 + 0x248) = *(undefined4 *)(lVar14 + 0x38 + lVar7);
  *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(lVar14 + 0x3c + lVar7);
  *(undefined4 *)(lVar8 + 0x1e8) = *(undefined4 *)(lVar14 + 0x40 + lVar7);
  *(undefined1 *)(lVar8 + 0xd1) = *(undefined1 *)(lVar14 + 0x6c + lVar7);
  if (*(char *)(lVar14 + 0x6c + lVar7) != '\0') {
    *(undefined4 *)(lVar6 + 0x1ef8) = 0;
    *(undefined4 *)(lVar6 + 0x1f00) = 0;
  }
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    puVar1 = (undefined4 *)(lVar14 + 0x24 + lVar7);
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    lVar9 = *(longlong *)(lVar8 + 0x2c8);
    uVar2 = *(undefined4 *)(lVar14 + 0x24 + lVar7);
    uVar3 = *(undefined4 *)(lVar14 + 0x28 + lVar7);
    uVar4 = *(undefined4 *)(lVar14 + 0x2c + lVar7);
    uVar5 = *(undefined4 *)(lVar14 + 0x30 + lVar7);
    *(undefined4 *)(lVar8 + 0x268) = *puVar1;
    *(undefined4 *)(lVar8 + 0x26c) = uVar10;
    *(undefined4 *)(lVar8 + 0x270) = uVar11;
    *(undefined4 *)(lVar8 + 0x274) = uVar12;
    *(undefined4 *)(lVar9 + 0x60) = uVar2;
    *(undefined4 *)(lVar9 + 100) = uVar3;
    *(undefined4 *)(lVar9 + 0x68) = uVar4;
    *(undefined4 *)(lVar9 + 0x6c) = uVar5;
    lVar13 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x2c8) + 0xa0);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x2c8) + 0xa8);
    *(undefined4 *)(lVar9 + -0x10 + lVar13 * 0x10) = uVar2;
    *(undefined4 *)(lVar9 + -0xc + lVar13 * 0x10) = uVar3;
    *(undefined4 *)(lVar9 + -8 + lVar13 * 0x10) = uVar4;
    *(undefined4 *)(lVar9 + -4 + lVar13 * 0x10) = uVar5;
    uVar15 = *(undefined2 *)(lVar14 + 0x60 + lVar7);
  }
  else {
    uVar15 = 2;
  }
  FUN_180297210(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar8 + 0x2c8),uVar15);
  if ((*(char *)(lVar6 + 0x2858) != '\0') && (*(char *)(lVar14 + 0x6c + lVar7) == '\0')) {
    FUN_180287c20((float *)(lVar8 + 0x118),&DAT_1803601c4,0);
    *(undefined4 *)(lVar6 + 0x2890) = 0x7f7fffff;
  }
  return;
}


