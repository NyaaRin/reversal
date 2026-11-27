// 0x1801a04c0  FUN_1801a04c0
// size=1564 thunk=false
// signature: undefined FUN_1801a04c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a04c0(ulonglong param_1,ulonglong param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  char cVar14;
  char cVar15;
  float *pfVar16;
  float *pfVar17;
  undefined *puVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8 [2];
  ulonglong local_f0;
  undefined8 local_e8;
  ulonglong local_e0 [21];
  
  local_e0[0] = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  pfVar17 = &local_100;
  local_108 = 5.60519e-45;
  local_100 = 0.0;
  local_f8[0] = 1.5;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar17 = &DAT_1803fb24c;
  }
  local_fc = 0.75;
  pfVar16 = &local_108;
  if ((int)DAT_1803fb24c < 5) {
    pfVar16 = pfVar17;
  }
  pfVar17 = &local_fc;
  DAT_1803fb24c = *pfVar16;
  lVar19 = (longlong)(int)DAT_1803fb24c;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar17 = &DAT_1803da6a4;
  }
  pfVar16 = local_f8;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar16 = pfVar17;
  }
  fVar1 = *pfVar16;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar2 = *(float *)(lVar11 + 0x118);
  fVar3 = *(float *)(lVar11 + 0x11c);
  fVar4 = *(float *)(lVar11 + 0x28);
  fVar5 = *(float *)(lVar11 + 0x2c);
  fVar6 = *(float *)(lVar11 + 0x98);
  fVar7 = *(float *)(lVar11 + 0x9c);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar28 = fVar1 * DAT_180381038;
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar27 = *(float *)(lVar11 + 0x128);
  fVar8 = *(float *)(lVar11 + 0x28);
  local_100 = *(float *)(lVar11 + 300) - *(float *)(lVar11 + 0x2c);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar25 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc8);
  fVar25 = fVar25 + fVar25 + *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar24 = *(float *)(lVar11 + 0x280) - *(float *)(lVar11 + 0x28);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar13 = DAT_180381384;
  if (param_1 == 0) {
    fVar23 = 0.0;
  }
  else {
    local_118 = 0;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    local_148 = DAT_180381384;
    local_140 = param_1;
    FUN_18029e350(&local_108,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),DAT_180381308);
    fVar23 = (float)(int)(local_108 + DAT_180380ba8);
  }
  local_e8 = param_5;
  local_f0 = param_2;
  puVar20 = &local_f0;
  fVar22 = fVar1 * DAT_180380fa8;
  do {
    uVar21 = *puVar20;
    if (uVar21 != 0) {
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_118 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_148 = uVar13;
      local_140 = uVar21;
      FUN_18029e350(&local_108,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),DAT_180381308);
      fVar26 = (float)(int)(local_108 + DAT_180380ba8);
      local_108 = fVar26;
      if (fVar1 * DAT_180380fcc + fVar28 + (fVar27 - fVar8) + fVar22 + fVar23 <
          ((fVar24 - fVar25) - fVar1 * DAT_180380f40) - fVar26) {
        if (*(char *)(lVar10 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar27 = local_100;
        local_108 = ((fVar24 - fVar25) - fVar1 * DAT_180380f40) - fVar26;
        local_104 = (fVar28 - *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238)) * DAT_180380ac0 +
                    local_100;
        FUN_18027f6a0(&local_108);
        if (param_4 == '\0') {
          puVar18 = &DAT_1803dca28;
        }
        else {
          puVar18 = &DAT_1803dc9c8;
        }
        FUN_1802aabb0(puVar18 + lVar19 * 200,&DAT_1803431ac,uVar21);
        cVar15 = FUN_18027bce0(0,0,0);
        if ((cVar15 == '\0') || (cVar15 = FUN_18026ee60(0), cVar15 == '\0')) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if ((uVar21 != param_2) && (cVar15 = FUN_18026ee60(0), cVar15 != '\0')) {
          FUN_180280d00(&DAT_1803431ac,param_2);
        }
        goto LAB_1801a08ec;
      }
    }
    puVar20 = puVar20 + 1;
    if (puVar20 == local_e0) {
      uVar21 = 0;
      bVar12 = false;
      fVar27 = local_100;
LAB_1801a08ec:
      local_108 = fVar24 - fVar25;
      local_104 = (fVar28 - fVar25) * DAT_180380ac0 + fVar27;
      FUN_18027f6a0(&local_108);
      FUN_18027abf0(param_3);
      cVar15 = FUN_18019dc00("##hdr_opts",4,0);
      cVar14 = FUN_18026ee60(0);
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
      iVar9 = *(int *)(lVar19 + 0x108);
      if (iVar9 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar19 + 0x108) = iVar9 + -1;
      }
      if ((cVar15 != '\0') || (bVar12)) {
        FUN_180280fd0(param_3);
      }
      if ((uVar21 == 0) && (cVar14 != '\0')) {
        FUN_180280d00(&DAT_1803431ac,param_2);
      }
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = *(longlong *)(lVar10 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar19 + 0x1520) + 0xce) = 1;
      lVar19 = *(longlong *)(lVar19 + 0x1520);
      *(undefined1 *)(lVar19 + 0x159) = 1;
      *(float *)(lVar19 + 0x11c) =
           (*(float *)(lVar19 + 0x2c) - *(float *)(lVar19 + 0x9c)) + (fVar3 - fVar5) + fVar7;
      *(float *)(lVar19 + 0x118) =
           (*(float *)(lVar19 + 0x28) - *(float *)(lVar19 + 0x98)) + (fVar2 - fVar4) + fVar6;
      return;
    }
  } while( true );
}


