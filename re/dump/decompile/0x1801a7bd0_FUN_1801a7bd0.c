// 0x1801a7bd0  FUN_1801a7bd0
// size=2501 thunk=false
// signature: undefined FUN_1801a7bd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1801a7bd0(char *param_1,undefined8 param_2,float *param_3,float param_4,float param_5,
             undefined8 param_6,float param_7,longlong param_8)

{
  char *pcVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 uVar11;
  char cVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  char *local_230;
  char *local_228;
  char *local_220;
  undefined8 local_218;
  undefined4 local_208;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8 [2];
  float local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [64];
  undefined1 local_178 [64];
  char local_138 [64];
  ulonglong local_f8;
  
  lVar10 = param_8;
  uVar9 = param_6;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_1d8[0] = param_4;
  local_1c8 = param_2;
  FUN_18019a460(param_1,0);
  pfVar15 = &local_1f4;
  local_1f4 = 0.0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar15 = &DAT_1803fb24c;
  }
  local_1f8 = 5.60519e-45;
  pfVar14 = &local_1f8;
  if ((int)DAT_1803fb24c < 5) {
    pfVar14 = pfVar15;
  }
  pfVar15 = &local_1f8;
  DAT_1803fb24c = *pfVar14;
  lVar13 = (longlong)(int)DAT_1803fb24c;
  local_1f4 = 1.5;
  local_1f8 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar15 = &DAT_1803da6a4;
  }
  pfVar14 = &local_1f4;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar14 = pfVar15;
  }
  fVar20 = *pfVar14;
  param_7 = param_7 * fVar20;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  fVar23 = (*(float *)(lVar6 + 0x11c) - *(float *)(lVar6 + 0x2c)) + *(float *)(lVar6 + 0x9c);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  local_1e8 = *(float *)(lVar6 + 0x118);
  local_1d0 = *(float *)(lVar6 + 0x11c);
  FUN_180012ac0(local_1b8,0x40,uVar9,(double)*param_3);
  FUN_180012ac0(local_138,0x40,uVar9,(double)param_4);
  FUN_180012ac0(local_178,0x40,uVar9,(double)param_5);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar8 = DAT_180381384;
  uVar7 = DAT_180381308;
  local_208 = 0;
  local_218 = 0;
  local_220 = (char *)0x0;
  local_228 = (char *)0x0;
  local_230 = local_1b8;
  local_238 = (undefined4 *)CONCAT44(local_238._4_4_,DAT_180381384);
  FUN_18029e350(local_1f0,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1238),DAT_180381308);
  fVar19 = DAT_180380ba8;
  fVar17 = local_1f0[0] + DAT_180380ba8;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_208 = 0;
  local_218 = 0;
  local_220 = (char *)0x0;
  local_228 = (char *)0x0;
  local_230 = local_178;
  local_238 = (undefined4 *)CONCAT44(local_238._4_4_,uVar8);
  FUN_18029e350(local_1f0,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1238),uVar7);
  fVar18 = local_1f0[0] + fVar19;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_208 = 0;
  local_218 = 0;
  local_220 = (char *)0x0;
  local_228 = (char *)0x0;
  local_230 = local_138;
  local_238 = (undefined4 *)CONCAT44(local_238._4_4_,uVar8);
  FUN_18029e350(local_1f0,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1238),uVar7);
  local_1f8 = (float)(int)(local_1f0[0] + fVar19);
  if ((float)(int)(local_1f0[0] + fVar19) <= (float)(int)fVar18) {
    local_1f8 = (float)(int)fVar18;
  }
  if (local_1f8 <= (float)(int)fVar17) {
    local_1f8 = (float)(int)fVar17;
  }
  local_1f4 = fVar20 * DAT_180380fa8;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
    fVar18 = (DAT_18038102c - *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238)) * DAT_180380ac0;
    fVar17 = 0.0;
    if (0.0 <= fVar18) {
      fVar17 = fVar18;
    }
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
  }
  else {
    fVar18 = (DAT_18038102c - *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238)) * DAT_180380ac0;
    fVar17 = 0.0;
    if (0.0 <= fVar18) {
      fVar17 = fVar18;
    }
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  fVar18 = *(float *)(lVar6 + 0x280) - *(float *)(lVar6 + 0x28);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  fVar21 = *(float *)(lVar6 + 0x118);
  fVar3 = *(float *)(lVar6 + 0x28);
  fVar4 = *(float *)(lVar6 + 0x98);
  pcVar16 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*pcVar16 == '\0') break;
      pcVar1 = pcVar16 + 1;
      if (((*pcVar16 == '#') && (*pcVar1 == '#')) ||
         (pcVar16 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_1 == pcVar16) {
    fVar22 = 0.0;
  }
  else {
    local_208 = 0;
    local_218 = 0;
    local_238 = (undefined4 *)CONCAT44(local_238._4_4_,uVar8);
    local_230 = param_1;
    local_228 = pcVar16;
    local_220 = pcVar16;
    FUN_18029e350(local_1f0,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1238),uVar7);
    fVar22 = (float)(int)(local_1f0[0] + fVar19);
  }
  fVar22 = fVar22 + (fVar21 - fVar3) + fVar4;
  fVar21 = ((fVar18 - fVar22) - local_1f8) - (local_1f4 + local_1f4);
  if (fVar21 <= param_7) {
    fVar21 = param_7;
  }
  fVar18 = fVar18 - fVar21;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar6 + 0x1520);
  *(undefined1 *)(lVar6 + 0x159) = 1;
  *(float *)(lVar6 + 0x11c) =
       (*(float *)(lVar6 + 0x2c) - *(float *)(lVar6 + 0x9c)) + fVar17 + fVar23;
  FUN_1802aabb0(&DAT_1803dca28 + lVar13 * 200,&DAT_1803431ac,param_1);
  fVar17 = DAT_180380c50;
  pfVar15 = &local_1f8;
  local_1f0[0] = 1.5;
  local_1f8 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar15 = &DAT_1803da6a4;
  }
  pfVar14 = local_1f0;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar14 = pfVar15;
  }
  FUN_18027f5b0(pfVar15,*pfVar14 * 0.0);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_208 = 0;
  local_218 = 0;
  local_220 = (char *)0x0;
  local_228 = (char *)0x0;
  local_230 = local_1b8;
  local_238 = (undefined4 *)CONCAT44(local_238._4_4_,uVar8);
  FUN_18029e350(local_1f0,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1238),uVar7);
  fVar22 = fVar22 + local_1f4;
  fVar19 = (fVar18 - local_1f4) - (float)(int)(local_1f0[0] + fVar19);
  if (fVar22 <= fVar19) {
    fVar22 = fVar19;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar6 + 0x1520);
  *(undefined1 *)(lVar6 + 0x159) = 1;
  *(float *)(lVar6 + 0x118) = (*(float *)(lVar6 + 0x28) - *(float *)(lVar6 + 0x98)) + fVar22;
  FUN_1802aabb0(&DAT_1803dc9c8 + lVar13 * 200,&DAT_1803431ac,local_1b8);
  pfVar15 = local_1f0;
  local_1f8 = 1.5;
  local_1f0[0] = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar15 = &DAT_1803da6a4;
  }
  pfVar14 = &local_1f8;
  if (DAT_1803da6a4 <= fVar17) {
    pfVar14 = pfVar15;
  }
  FUN_18027f5b0(pfVar15,*pfVar14 * 0.0);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar12 = *(char *)(lVar5 + 0x10);
  lVar13 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x1520);
  *(undefined1 *)(lVar13 + 0x159) = 1;
  *(float *)(lVar13 + 0x118) = (*(float *)(lVar13 + 0x28) - *(float *)(lVar13 + 0x98)) + fVar18;
  if (cVar12 == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar12 = *(char *)(lVar5 + 0x10);
  lVar13 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x1520);
  *(undefined1 *)(lVar13 + 0x159) = 1;
  *(float *)(lVar13 + 0x11c) = (*(float *)(lVar13 + 0x2c) - *(float *)(lVar13 + 0x9c)) + fVar23;
  if (cVar12 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar5 + 0xec0);
  local_228 = (char *)((ulonglong)local_228 & 0xffffffffffffff00);
  local_230 = (char *)uVar9;
  puVar2 = (uint *)(lVar13 + 0x1ec0);
  *puVar2 = *puVar2 | 1;
  *(float *)(lVar13 + 0x1ed8) = fVar21;
  local_238 = &param_5;
  uVar11 = FUN_1801a6c50(local_1c8,8,param_3,local_1d8);
  fVar23 = fVar20 * _DAT_180381058;
  if (fVar20 * _DAT_180381058 <= DAT_18038104c) {
    fVar23 = DAT_18038104c;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar20 = *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x28);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_1e4 = local_1d0;
  local_1dc = local_1d0 + fVar23;
  lVar13 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  local_1e0 = (*(float *)(lVar13 + 0x280) - *(float *)(lVar13 + 0x28)) + fVar20;
  FUN_1801a1860();
  FUN_18019a7a0(param_1,&local_1e8);
  if (lVar10 != 0) {
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = *(longlong *)(lVar5 + 0xec0);
    lVar5 = *(longlong *)(lVar13 + 0x1520);
    fVar20 = local_1e8;
    if (local_1e8 <= *(float *)(lVar5 + 0x268)) {
      fVar20 = *(float *)(lVar5 + 0x268);
    }
    if (fVar20 - *(float *)(lVar13 + 0xcec) <= *(float *)(lVar13 + 0x100)) {
      fVar20 = local_1e4;
      if (local_1e4 <= *(float *)(lVar5 + 0x26c)) {
        fVar20 = *(float *)(lVar5 + 0x26c);
      }
      if (fVar20 - *(float *)(lVar13 + 0xcf0) <= *(float *)(lVar13 + 0x104)) {
        fVar20 = local_1e0;
        if (*(float *)(lVar5 + 0x270) <= local_1e0) {
          fVar20 = *(float *)(lVar5 + 0x270);
        }
        if (*(float *)(lVar13 + 0x100) < fVar20 + *(float *)(lVar13 + 0xcec)) {
          fVar20 = local_1dc;
          if (*(float *)(lVar5 + 0x274) <= local_1dc) {
            fVar20 = *(float *)(lVar5 + 0x274);
          }
          if (*(float *)(lVar13 + 0x104) < fVar20 + *(float *)(lVar13 + 0xcf0)) {
            cVar12 = FUN_180279410(0x80);
            if (cVar12 != '\0') {
              FUN_180280d00(&DAT_1803431ac,lVar10);
            }
          }
        }
      }
    }
  }
  return uVar11;
}


