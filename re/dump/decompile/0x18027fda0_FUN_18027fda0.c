// 0x18027fda0  FUN_18027fda0
// size=1075 thunk=false
// signature: undefined FUN_18027fda0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18027fda0(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  lVar5 = *(longlong *)(lVar4 + 0x1520);
  lVar6 = *(longlong *)(lVar4 + 0x2020);
  lVar15 = (longlong)*(int *)(lVar4 + 0x2018) * 0x3c;
  if (*(char *)(lVar5 + 0x159) != '\0') {
    FUN_18027e3b0();
  }
  fVar1 = *(float *)(lVar15 + -0x34 + lVar6);
  fVar2 = *(float *)(lVar15 + -0x38 + lVar6);
  fVar19 = *(float *)(lVar5 + 0x134);
  if (*(float *)(lVar5 + 0x134) <= *(float *)(lVar4 + 0x1f10)) {
    fVar19 = *(float *)(lVar4 + 0x1f10);
  }
  fVar18 = *(float *)(lVar5 + 0x130);
  if (*(float *)(lVar5 + 0x130) <= *(float *)(lVar4 + 0x1f0c)) {
    fVar18 = *(float *)(lVar4 + 0x1f0c);
  }
  *(float *)(lVar5 + 0x118) = fVar2;
  *(float *)(lVar5 + 0x11c) = fVar1;
  *(undefined8 *)(lVar5 + 0x120) = *(undefined8 *)(lVar15 + -0x28 + lVar6);
  if (fVar19 <= fVar1) {
    fVar19 = fVar1;
  }
  fVar17 = *(float *)(lVar15 + -0x2c + lVar6);
  if (fVar18 <= fVar2) {
    fVar18 = fVar2;
  }
  fVar16 = *(float *)(lVar15 + -0x30 + lVar6);
  if (fVar17 <= fVar19) {
    fVar17 = fVar19;
  }
  if (fVar16 <= fVar18) {
    fVar16 = fVar18;
  }
  *(float *)(lVar5 + 0x134) = fVar17;
  *(float *)(lVar5 + 0x130) = fVar16;
  *(undefined4 *)(lVar5 + 0x15c) = *(undefined4 *)(lVar15 + -0x20 + lVar6);
  *(undefined4 *)(lVar5 + 0x164) = *(undefined4 *)(lVar15 + -0x1c + lVar6);
  *(undefined8 *)(lVar5 + 0x140) = *(undefined8 *)(lVar15 + -0x18 + lVar6);
  *(undefined4 *)(lVar5 + 0x150) = *(undefined4 *)(lVar15 + -0x10 + lVar6);
  *(undefined1 *)(lVar5 + 0x158) = *(undefined1 *)(lVar15 + -5 + lVar6);
  if (*(char *)(lVar4 + 0x2858) != '\0') {
    *(undefined4 *)(lVar4 + 0x2890) = 0xff7fffff;
  }
  if (*(char *)(lVar15 + -4 + lVar6) == '\0') {
    *(int *)(lVar4 + 0x2018) = *(int *)(lVar4 + 0x2018) + -1;
    return;
  }
  fVar17 = *(float *)(lVar15 + -0x10 + lVar6);
  fVar16 = *(float *)(lVar5 + 0x154);
  if (*(float *)(lVar5 + 0x154) <= fVar17) {
    fVar16 = fVar17;
  }
  local_res8 = fVar18 - fVar2;
  *(float *)(lVar5 + 0x150) = fVar16;
  local_resc = fVar19 - fVar1;
  local_88 = fVar2;
  fStack_84 = fVar1;
  fStack_80 = fVar18;
  fStack_7c = fVar19;
  FUN_18027f400(&local_res8,DAT_180381384);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  uVar8 = CONCAT44(fStack_84,local_88);
  uVar9 = CONCAT44(fStack_7c,fStack_80);
  *(undefined4 *)(lVar3 + 0x1ef8) = 0;
  *(uint *)(lVar3 + 0x1efc) = *(uint *)(lVar3 + 0x1eb8) | *(uint *)(lVar3 + 0x1ec4) | 1;
  lVar7 = *(longlong *)(lVar3 + 0x1520);
  *(undefined8 *)(lVar3 + 0x1f04) = uVar8;
  *(undefined8 *)(lVar3 + 0x1f0c) = uVar9;
  *(undefined4 *)(lVar3 + 0x1f00) = 0;
  *(undefined8 *)(lVar3 + 0x1f14) = uVar8;
  *(undefined8 *)(lVar3 + 0x1f1c) = uVar9;
  *(undefined8 *)(lVar3 + 0x1ec0) = 0;
  if ((((fVar19 < *(float *)(lVar7 + 0x26c) || fVar19 == *(float *)(lVar7 + 0x26c)) ||
       (*(float *)(lVar7 + 0x274) <= fVar1)) ||
      (fVar18 < *(float *)(lVar7 + 0x268) || fVar18 == *(float *)(lVar7 + 0x268))) ||
     (*(float *)(lVar7 + 0x270) <= fVar2)) {
    if (*(char *)(lVar3 + 0x1592) != '\0') goto LAB_180280019;
  }
  else {
    *(undefined4 *)(lVar3 + 0x1f00) = 0x100;
LAB_180280019:
    cVar12 = FUN_18027bdd0(&local_88,&fStack_80,1);
    if (cVar12 != '\0') {
      *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 1;
    }
  }
  iVar13 = *(int *)(lVar4 + 0x1594);
  if (((*(int *)(lVar15 + -0xc + lVar6) == iVar13) || (*(int *)(lVar4 + 0x1598) != iVar13)) ||
     (iVar13 == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((*(char *)(lVar15 + -7 + lVar6) == '\0') && (*(char *)(lVar4 + 0x15cd) == '\x01')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (!bVar10) {
    if (!bVar11) goto LAB_18028007e;
    iVar13 = *(int *)(lVar4 + 0x15c4);
  }
  *(int *)(lVar4 + 0x1ef8) = iVar13;
LAB_18028007e:
  *(undefined8 *)(lVar4 + 0x1f04) = uVar8;
  *(undefined8 *)(lVar4 + 0x1f0c) = uVar9;
  if ((*(char *)(lVar15 + -6 + lVar6) == '\0') && (*(int *)(lVar4 + 0x157c) != 0)) {
    *(uint *)(lVar4 + 0x1f00) = *(uint *)(lVar4 + 0x1f00) | 0x80;
  }
  puVar14 = (uint *)(lVar4 + 0x1f00);
  if ((*(char *)(lVar4 + 0x15a5) != '\0') && (*(char *)(lVar15 + -8 + lVar6) == '\0')) {
    *puVar14 = *puVar14 | 4;
  }
  *puVar14 = *puVar14 | 0x20;
  if (bVar11) {
    *puVar14 = *puVar14 | 0x40;
  }
  *(int *)(lVar4 + 0x2018) = *(int *)(lVar4 + 0x2018) + -1;
  if (*(char *)(lVar4 + 0x1fc0) != '\0') {
    lVar3 = *(longlong *)(lVar5 + 0x2c8);
    local_res8 = _DAT_180380abc;
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      local_res8 = DAT_180380ac0;
    }
    local_res14 = fVar1 + DAT_180380ac0;
    local_res10 = fVar2 + DAT_180380ac0;
    local_resc = fVar19 - local_res8;
    local_res8 = fVar18 - local_res8;
    FUN_180294990(lVar3,&local_res10,&local_res8,0,0);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xffff00ff,
                  DAT_180380bb0,0x200);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  return;
}


