// 0x1802b2b30  FUN_1802b2b30
// size=1928 thunk=false
// signature: undefined FUN_1802b2b30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802b2b30(char *param_1,int param_2,void *param_3,undefined8 param_4,ulonglong param_5
                       ,undefined *param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  undefined *local_168;
  longlong **local_160;
  char *local_158;
  char *local_150;
  undefined8 *local_148;
  undefined4 local_138;
  int local_128;
  float local_120;
  float local_11c;
  uint local_118;
  longlong *local_110;
  undefined *local_108;
  void *local_100;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_108 = param_6;
  local_128 = param_2;
  local_100 = param_3;
  local_f8 = param_4;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  uVar12 = *(ulonglong *)(lVar4 + 0x1520);
  *(undefined1 *)(uVar12 + 0xce) = 1;
  plVar5 = *(longlong **)(lVar4 + 0x1520);
  if (*(char *)((longlong)plVar5 + 0xd1) != '\0') {
LAB_1802b326f:
    return uVar12 & 0xffffffffffffff00;
  }
  local_110 = plVar5;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  iVar10 = FUN_180268980(param_1,0,
                         *(undefined4 *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4));
  if (*(int *)(*plVar5 + 0x1578) == iVar10) {
    FUN_1802899e0(iVar10,0xb,param_1);
  }
  fVar16 = (float)FUN_18027f9c0();
  if ((*(byte *)(lVar4 + 0x1ec0) & 0x20) == 0) {
    local_118 = 0;
  }
  else {
    local_118 = *(uint *)(lVar4 + 0x1ef4);
  }
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      pcVar1 = pcVar15 + 1;
      if (((*pcVar15 == '#') && (*pcVar1 == '#')) ||
         (pcVar15 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar17 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  if (param_1 == pcVar15) {
    fVar18 = 0.0;
    local_11c = fVar17;
  }
  else {
    local_138 = 0;
    local_148 = (undefined8 *)0x0;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,DAT_180381384);
    local_160 = (longlong **)param_1;
    local_158 = pcVar15;
    local_150 = pcVar15;
    FUN_18029e350(&local_120,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),fVar17,
                  DAT_180381308);
    fVar18 = (float)(int)(local_120 + DAT_180380ba8);
  }
  local_f0 = *(float *)(plVar5 + 0x23);
  local_e8 = local_f0 + fVar16;
  fStack_e4 = *(float *)(lVar4 + 0xcc8) + *(float *)(lVar4 + 0xcc8) + local_11c +
              *(float *)((longlong)plVar5 + 0x11c);
  fStack_ec = *(float *)((longlong)plVar5 + 0x11c);
  local_e0 = plVar5[0x23];
  if (fVar18 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = fVar18 + *(float *)(lVar4 + 0xcdc);
  }
  local_120 = (local_e8 + fVar16) - local_f0;
  uStack_d8 = CONCAT44(fStack_e4 + 0.0,local_e8 + fVar16);
  local_11c = (fStack_e4 + 0.0) - fStack_ec;
  FUN_18027f400(&local_120,*(undefined4 *)(lVar4 + 0xcc8));
  uVar12 = FUN_18027f160(&local_e0,iVar10,&local_f0,0x100000);
  if ((char)uVar12 == '\0') goto LAB_1802b326f;
  if (param_6 == (undefined *)0x0) {
    local_108 = (&PTR_DAT_180338980)[(longlong)local_128 * 4];
  }
  bVar8 = FUN_18026f180(&local_f0,iVar10,*(undefined4 *)(lVar4 + 0x1efc));
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((*(int *)(*(longlong *)(lVar3 + 0xec0) + 0x1594) == iVar10) &&
     (*(int *)(*(longlong *)(lVar3 + 0xec0) + 0x2638) == iVar10)) goto LAB_1802b3150;
  if ((bVar8 == 0) || (cVar9 = FUN_18027bce0(0,0,iVar10), cVar9 == '\0')) {
    if (*(int *)(lVar4 + 0x2084) != iVar10) goto LAB_1802b2eff;
LAB_1802b2e91:
    bVar7 = false;
    if ((*(int *)(lVar4 + 0x2084) == iVar10) && ((*(byte *)(lVar4 + 0x2090) & 1) != 0))
    goto LAB_1802b2ea5;
  }
  else {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar3 + 0xec0);
    *(int *)(lVar6 + 0x1cd0) = iVar10;
    *(int *)(lVar6 + 0x1ccc) = iVar10;
    *(undefined2 *)(lVar6 + 0x1cd4) = 0;
    if (*(char *)(lVar4 + 0x11c) == '\0') goto LAB_1802b2e91;
LAB_1802b2ea5:
    bVar7 = true;
  }
  memcpy((void *)(lVar4 + 0x15d0),local_100,*(size_t *)(&DAT_180338970 + (longlong)local_128 * 0x20)
        );
  plVar5 = local_110;
  if (!bVar7) {
    FUN_18026ea90(iVar10,local_110);
    FUN_180282e10(iVar10,plVar5);
    FUN_1802827b0(plVar5,0);
    *(uint *)(lVar4 + 0x1ea8) = *(uint *)(lVar4 + 0x1ea8) | 3;
LAB_1802b2eff:
    fVar16 = DAT_180380bb0;
    iVar13 = 9;
    if (*(int *)(lVar4 + 0x1594) != iVar10) {
      iVar13 = bVar8 + 7;
    }
    uVar11 = FUN_18026a6a0(iVar13,DAT_180380bb0);
    FUN_18026c370(&local_f0,iVar10,0);
    uVar2 = *(undefined4 *)(lVar4 + 0xccc);
    local_120 = local_e8;
    local_11c = fStack_e4;
    local_e0 = CONCAT44(fStack_ec,local_f0);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_160 = (longlong **)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = (undefined *)CONCAT44(local_168._4_4_,uVar2);
    FUN_180295000(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520) + 0x2c8),
                  &local_e0,&local_120,uVar11);
    uVar14 = local_118;
    if ((local_118 != 0) && (0.0 < *(float *)(lVar4 + 0xd60))) {
      uVar2 = *(undefined4 *)(lVar4 + 0xccc);
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar17 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
      if (fVar17 < fVar16) {
        uVar14 = (int)(longlong)((float)(uVar14 >> 0x18) * fVar17) << 0x18 | uVar14 & 0xffffff;
      }
      if (local_f0 + fVar16 < local_e8) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_160 = (longlong **)CONCAT44(local_160._4_4_,uVar2);
        fVar17 = local_f0 + *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xd60);
        if (local_e8 <= fVar17) {
          fVar17 = local_e8;
        }
        local_168 = (undefined *)CONCAT44(local_168._4_4_,fVar17);
        FUN_18029f4a0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520) + 0x2c8),
                      &local_f0,uVar14);
      }
    }
    FUN_18026c1f0(CONCAT44(fStack_ec,local_f0),CONCAT44(fStack_e4,local_e8),
                  *(undefined4 *)(lVar4 + 0xccc));
    local_148 = &local_e0;
    local_158 = local_108;
    local_160 = (longlong **)param_5;
    local_168 = (undefined *)local_f8;
    local_e0 = 0;
    uStack_d8 = 0;
    bVar8 = FUN_1802b27c0(&local_f0,iVar10,local_128,local_100);
    if (bVar8 != 0) {
      FUN_18026ed00(iVar10);
    }
    if ((float)local_e0 < (float)uStack_d8) {
      uVar2 = *(undefined4 *)(lVar4 + 0xd0c);
      lVar6 = local_110[0x59];
      uVar11 = FUN_18026a6a0((*(int *)(lVar4 + 0x1594) == iVar10) + '\x14',fVar16);
      local_160 = (longlong **)((ulonglong)local_160 & 0xffffffff00000000);
      local_168 = (undefined *)CONCAT44(local_168._4_4_,uVar2);
      FUN_180295000(lVar6,&local_e0,&uStack_d8,uVar11);
    }
    local_168 = local_108;
    iVar10 = FUN_1802b1470(local_c8,0x40,local_128,local_100);
    if (*(char *)(lVar4 + 0x2858) != '\0') {
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0xec0);
      *(undefined **)(lVar3 + 0x2880) = &DAT_18038002c;
      *(undefined **)(lVar3 + 0x2888) = &DAT_180380030;
    }
    local_160 = &local_110;
    local_158 = (char *)0x0;
    local_168 = (undefined *)0x0;
    local_110 = (longlong *)0x3f0000003f000000;
    FUN_18026ba40(&local_f0,&local_e8,local_c8,local_c8 + iVar10);
    if (0.0 < fVar18) {
      FUN_18026b160(CONCAT44(fStack_ec + *(float *)(lVar4 + 0xcc8),
                             local_e8 + *(float *)(lVar4 + 0xcdc)),param_1,pcVar15,0);
    }
    return (ulonglong)bVar8;
  }
LAB_1802b3150:
  local_150 = (char *)0x0;
  local_158 = (char *)0x0;
  local_160 = (longlong **)local_108;
  local_168 = local_100;
  uVar12 = FUN_1802b3410(&local_f0,iVar10,param_1,local_128);
  return uVar12;
}


