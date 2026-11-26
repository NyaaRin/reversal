// 0x1802aad50  FUN_1802aad50
// size=1215 thunk=false
// signature: undefined FUN_1802aad50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802aad50(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  char cVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_148 [32];
  float *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar6 + 0x1520);
  if (*(char *)(lVar6 + 0xd1) == '\0') {
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)(lVar5 + 0xec0);
    fVar14 = (float)FUN_18027f9c0();
    FUN_1802687f0(&local_e8,&local_e0,param_2,param_3);
    pcVar11 = local_e8;
    pcVar8 = (char *)CONCAT44(fStack_dc,local_e0);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar10 = DAT_180381384;
    uVar9 = DAT_180381308;
    fVar16 = DAT_180380ba8;
    fVar15 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238);
    if (pcVar11 == pcVar8) {
      local_d0 = 0.0;
    }
    else {
      local_f8 = 0;
      local_108 = 0;
      local_120 = pcVar11;
      local_128 = (float *)CONCAT44(local_128._4_4_,DAT_180381384);
      local_118 = pcVar8;
      local_110 = pcVar8;
      FUN_18029e350(&local_e8,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),fVar15,
                    DAT_180381308);
      local_d0 = (float)(int)((float)local_e8 + fVar16);
      fVar15 = local_e8._4_4_;
    }
    pcVar13 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar13 != '\0') {
        pcVar1 = pcVar13 + 1;
        if (((*pcVar13 == '#') && (*pcVar1 == '#')) ||
           (pcVar13 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
      }
    }
    local_cc = fVar15;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar2 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238);
    if (param_1 == pcVar13) {
      fVar16 = 0.0;
      local_e8._4_4_ = fVar2;
    }
    else {
      local_f8 = 0;
      local_108 = 0;
      local_128 = (float *)CONCAT44(local_128._4_4_,uVar10);
      local_120 = param_1;
      local_118 = pcVar13;
      local_110 = pcVar13;
      FUN_18029e350(&local_e8,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),fVar2,uVar9);
      fVar16 = (float)(int)((float)local_e8 + fVar16);
    }
    fVar2 = *(float *)(lVar7 + 0xcc8);
    fVar3 = *(float *)(lVar6 + 0x118);
    fVar4 = *(float *)(lVar6 + 0x11c);
    local_c0 = fVar3 + fVar14;
    fVar17 = fVar15;
    if (fVar15 <= local_e8._4_4_) {
      fVar17 = local_e8._4_4_;
    }
    local_bc = fVar2 + fVar2 + fVar15 + fVar4;
    if (fVar16 <= 0.0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = fVar16 + *(float *)(lVar7 + 0xcdc);
    }
    fVar14 = fVar15 + fVar14 + fVar3;
    fVar15 = fVar17 + fVar2 + fVar2 + fVar4;
    local_e8 = (char *)CONCAT44(fVar15 - fVar4,fVar14 - fVar3);
    local_e0 = fVar3;
    fStack_dc = fVar4;
    fStack_d8 = fVar14;
    fStack_d4 = fVar15;
    local_c8 = fVar3;
    local_c4 = fVar4;
    FUN_18027f400(&local_e8,fVar2);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar5 + 0xec0);
    *(uint *)(lVar5 + 0x1efc) = *(uint *)(lVar5 + 0x1eb8) | *(uint *)(lVar5 + 0x1ec4);
    lVar6 = *(longlong *)(lVar5 + 0x1520);
    *(undefined4 *)(lVar5 + 0x1ef8) = 0;
    *(ulonglong *)(lVar5 + 0x1f04) = CONCAT44(fStack_dc,local_e0);
    *(ulonglong *)(lVar5 + 0x1f0c) = CONCAT44(fStack_d4,fStack_d8);
    *(undefined4 *)(lVar5 + 0x1f00) = 0;
    *(ulonglong *)(lVar5 + 0x1f14) = CONCAT44(fStack_dc,local_e0);
    *(ulonglong *)(lVar5 + 0x1f1c) = CONCAT44(fStack_d4,fStack_d8);
    *(undefined8 *)(lVar5 + 0x1ec0) = 0;
    if (((fVar15 < *(float *)(lVar6 + 0x26c) || fVar15 == *(float *)(lVar6 + 0x26c)) ||
        (*(float *)(lVar6 + 0x274) <= fVar4)) ||
       ((fVar14 < *(float *)(lVar6 + 0x268) || fVar14 == *(float *)(lVar6 + 0x268) ||
        (*(float *)(lVar6 + 0x270) <= fVar3)))) {
      if (*(char *)(lVar5 + 0x1592) == '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar5 + 0x1f00) = 0x100;
    }
    cVar12 = FUN_18027bdd0(&local_e0,&fStack_d8,1);
    if (cVar12 != '\0') {
      *(uint *)(lVar5 + 0x1f00) = *(uint *)(lVar5 + 0x1f00) | 1;
    }
    local_e0 = fVar3 + *(float *)(lVar7 + 0xcc4);
    fStack_dc = fVar4 + *(float *)(lVar7 + 0xcc8);
    local_120 = (char *)&local_e8;
    local_118 = (char *)0x0;
    local_128 = &local_d0;
    local_e8 = (char *)0x0;
    FUN_18026ba40(&local_e0,&local_c0,pcVar11,pcVar8);
    if (0.0 < fVar16) {
      FUN_18026b160(CONCAT44(local_c4 + *(float *)(lVar7 + 0xcc8),
                             local_c0 + *(float *)(lVar7 + 0xcdc)),param_1,pcVar13,0);
    }
  }
  return;
}


