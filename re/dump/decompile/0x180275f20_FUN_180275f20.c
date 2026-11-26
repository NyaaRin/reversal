// 0x180275f20  FUN_180275f20
// size=1695 thunk=false
// signature: undefined FUN_180275f20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180275f20(longlong *param_1,float *param_2,undefined8 param_3,undefined1 *param_4)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float *local_140;
  float *local_138;
  char local_128;
  undefined8 local_120;
  int local_118;
  uint local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  char local_f0;
  char local_ef [7];
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_100 = param_3;
  local_f8 = param_4;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_114 = *(uint *)((longlong)param_1 + 0x14);
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  if (((local_114 & 0x20) == 0) && (*(int *)(lVar4 + 0xcb0) != -1)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_110 = *(float *)(lVar4 + 0x1eb8);
  *(uint *)(lVar4 + 0x1eb8) = (uint)local_110 | 4;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  uVar12 = DAT_180381384;
  fVar2 = DAT_180380bb0;
  fVar17 = *(float *)(lVar4 + 0xcc4);
  pfVar1 = (float *)(lVar4 + 0xcdc);
  fVar20 = *(float *)(lVar4 + 0x1238);
  local_120 = 0;
  fVar18 = fVar17;
  if (param_4 != (undefined1 *)0x0) {
    fVar18 = fVar20 + *pfVar1 + fVar17;
    local_120 = CONCAT44(param_2[1] + *(float *)(lVar4 + 0xcc8),(param_2[2] - fVar17) - fVar20);
  }
  if (!bVar6) goto LAB_1802762b1;
  fVar19 = 0.0;
  fVar21 = 0.0;
  if (*(int *)(lVar4 + 0xcb0) == 1) {
    fVar19 = param_2[2] - fVar18;
    fVar18 = fVar18 + fVar20 + *pfVar1;
    fVar19 = fVar19 - fVar20;
LAB_1802760cd:
    fVar21 = param_2[1] + *(float *)(lVar4 + 0xcc8);
  }
  else if (*(int *)(lVar4 + 0xcb0) == 0) {
    fVar19 = fVar17 + *param_2;
    fVar17 = fVar20 + *pfVar1 + fVar17;
    goto LAB_1802760cd;
  }
  iVar10 = FUN_180268980("#COLLAPSE",0,
                         *(undefined4 *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
  local_118 = iVar10;
  if (*(int *)(*param_1 + 0x1578) == iVar10) {
    FUN_1802899e0(iVar10,0xb,"#COLLAPSE");
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_dc = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  local_e0 = fVar19 + local_dc;
  local_dc = fVar21 + local_dc;
  local_e8 = fVar19;
  fStack_e4 = fVar21;
  cVar9 = FUN_18027f160(&local_e8,iVar10,0,0);
  local_148 = (float *)((ulonglong)local_148._4_4_ << 0x20);
  local_128 = FUN_1802ab600(&local_e8,local_118,&local_f0,local_ef);
  if (cVar9 != '\0') {
    if ((local_ef[0] == '\0') || (local_f0 == '\0')) {
      cVar9 = (local_f0 != '\0') + '\x16';
    }
    else {
      cVar9 = '\x18';
    }
    uVar11 = FUN_18026a6a0(cVar9,fVar2);
    local_108 = FUN_18026a6a0(0,fVar2);
    if ((local_f0 != '\0') || (local_ef[0] != '\0')) {
      local_140 = (float *)((ulonglong)local_140 & 0xffffffff00000000);
      local_148 = (float *)((ulonglong)local_148 & 0xffffffff00000000);
      FUN_180295000(*(undefined8 *)(lVar5 + 0x2c8),&local_e8,&local_e0,uVar11);
    }
    FUN_18026c370(&local_e8,local_118,2);
    uVar14 = 3;
    if (*(char *)(lVar5 + 0xcf) != '\0') {
      uVar14 = 1;
    }
    local_148 = (float *)CONCAT44(local_148._4_4_,fVar2);
    FUN_18029f160(*(undefined8 *)(lVar5 + 0x2c8),CONCAT44(fStack_e4,local_e8),local_108,uVar14);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar10 = *(int *)(*(longlong *)(lVar3 + 0xec0) + 0x1594);
    if (((iVar10 != 0) && (iVar10 == *(int *)(*(longlong *)(lVar3 + 0xec0) + 0x1ef8))) &&
       (cVar9 = FUN_18027bec0(0,uVar12), cVar9 != '\0')) {
      FUN_18026f8f0(lVar5);
    }
  }
  if (local_128 != '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
LAB_1802762b1:
  puVar8 = local_f8;
  uVar7 = local_114;
  if (local_f8 != (undefined1 *)0x0) {
    *(uint *)(lVar4 + 0x1eb8) = *(uint *)(lVar4 + 0x1eb8) | 0x20000;
    iVar10 = FUN_180268980("#CLOSE",0,
                           *(undefined4 *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
    if (*(int *)(*param_1 + 0x1578) == iVar10) {
      FUN_1802899e0(iVar10,0xb,"#CLOSE");
    }
    cVar9 = FUN_1802ac830(iVar10,&local_120);
    if (cVar9 != '\0') {
      *puVar8 = 0;
    }
  }
  uVar14 = local_100;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(float *)(lVar4 + 0x1eb8) = local_110;
  if ((uVar7 & 0x40000) == 0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar20 * DAT_180380b3c;
  }
  local_148._0_4_ = uVar12;
  pfVar13 = (float *)FUN_180272ad0(&local_100,local_100,0,1);
  fVar19 = DAT_180380ac0;
  local_110 = fVar20 + *pfVar13;
  local_10c = pfVar13[1] + 0.0;
  if (*(float *)(lVar4 + 0xcc4) < fVar17) {
    fVar17 = fVar17 + *pfVar1;
  }
  if (*(float *)(lVar4 + 0xcc4) < fVar18) {
    fVar18 = fVar18 + *pfVar1;
  }
  pfVar1 = (float *)(lVar4 + 0xca8);
  fVar21 = *pfVar1;
  if ((0.0 < fVar21) && (fVar21 < fVar2)) {
    fVar21 = (float)((uint)(fVar21 - DAT_180380ac0) & _DAT_1803817c0);
    fVar16 = fVar2 - (fVar21 + fVar21);
    fVar21 = 0.0;
    if ((0.0 <= fVar16) && (fVar21 = fVar2, fVar16 <= fVar2)) {
      fVar21 = fVar16;
    }
    fVar16 = fVar17;
    if (fVar17 <= fVar18) {
      fVar16 = fVar18;
    }
    fVar15 = (((param_2[2] - *param_2) - fVar17) - fVar18) - local_110;
    if (fVar15 <= fVar16) {
      fVar16 = fVar15;
    }
    fVar16 = fVar16 * fVar21;
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
    }
    if (fVar18 <= fVar16) {
      fVar18 = fVar16;
    }
  }
  fVar21 = param_2[2];
  fVar16 = param_2[1];
  fVar15 = param_2[3];
  local_d0 = fVar21 - fVar18;
  local_e8 = fVar17 + *param_2;
  fVar17 = local_d0 + *(float *)(lVar4 + 0xcdc);
  if (fVar21 <= fVar17) {
    fVar17 = fVar21;
  }
  fStack_e4 = fVar16;
  local_e0 = fVar17;
  local_dc = fVar15;
  local_d8 = local_e8;
  local_d4 = fVar16;
  local_cc = fVar15;
  if ((uVar7 & 0x40000) != 0) {
    fVar21 = ((local_d0 - local_e8) - local_110) * *pfVar1 + local_e8 + local_110;
    fVar18 = local_e8;
    if ((local_e8 <= fVar21) && (fVar18 = local_d0, fVar21 <= local_d0)) {
      fVar18 = fVar21;
    }
    if (local_e8 < fVar18) {
      uVar12 = FUN_18026a6a0(0x38,fVar2);
      fVar2 = *(float *)(*(longlong *)(param_1[0x59] + 0x38) + 0x20);
      local_120 = CONCAT44((fVar15 + fVar16) * fVar19,fVar18);
      if (DAT_18038102c <= fVar2) {
        uVar11 = 0;
        if (fVar2 < DAT_180381088) {
          uVar11 = 0xc;
        }
      }
      else {
        uVar11 = 8;
      }
      local_148 = (float *)CONCAT44(local_148._4_4_,uVar11);
      FUN_180295540(param_1[0x59],&local_120,fVar2 * DAT_180380a3c,uVar12);
      fVar18 = fVar18 - (float)(int)(fVar20 * fVar19);
      local_e0 = fVar17;
      if (fVar18 <= fVar17) {
        local_e0 = fVar18;
      }
    }
  }
  local_138 = &local_e8;
  local_148 = &local_110;
  local_140 = pfVar1;
  FUN_18026ba40(&local_d8,&local_d0,uVar14,0);
  return;
}


