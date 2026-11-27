// 0x1800f7020  Features_Watermark_WatermarkFeature_vfunc04
// size=3060 thunk=false
// signature: undefined Features_Watermark_WatermarkFeature_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Watermark_WatermarkFeature_vfunc04(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  float *pfVar9;
  char *pcVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_338 [32];
  float local_318;
  char *local_310;
  char *local_308;
  undefined8 local_300;
  ulonglong local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  float local_2d8 [2];
  ulonglong local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  int local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  float afStack_268 [6];
  _SYSTEMTIME local_250;
  undefined4 local_238;
  char local_234 [64];
  undefined4 local_1f4;
  undefined1 local_1f0 [64];
  undefined4 local_1b0;
  undefined1 local_1ac [212];
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_338;
  if (DAT_1803e90ac != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_280 = lVar2;
    cVar6 = *(char *)(lVar2 + 0x10);
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
      cVar6 = *(char *)(lVar2 + 0x10);
    }
    local_288 = *(longlong *)(lVar2 + 0xec0);
    fVar16 = *(float *)(param_1 + 8) - *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x40);
    *(float *)(param_1 + 8) = fVar16;
    if (fVar16 <= 0.0) {
      FUN_1800f65f0(param_1);
      cVar6 = *(char *)(lVar2 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0x3f000000;
    }
    pfVar11 = &local_2b0;
    local_2d8[0] = 1.5;
    local_2b0 = 0.75;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar11 = &DAT_1803da6a4;
    }
    pfVar9 = local_2d8;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar9 = pfVar11;
    }
    fVar16 = *pfVar9;
    fVar25 = fVar16 * DAT_180380fd8;
    lVar14 = DAT_1803fa5d0;
    local_2a8 = fVar16;
    if (DAT_1803fa5d0 == 0) {
      if (cVar6 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1228);
    }
    FUN_18027a8a0(lVar14,fVar25);
    iVar13 = 0;
    local_238 = 0;
    FUN_180012ac0(local_234,0x40,&DAT_1803431ac,param_1 + 0x1c);
    lVar14 = 1;
    if (*(char *)(param_1 + 0xc) != '\0') {
      local_1f4 = 1;
      FUN_180012ac0(local_1f0,0x40,"%d RATE",*(undefined4 *)(param_1 + 0x18));
      local_1b0 = 2;
      FUN_180012ac0(local_1ac,0x40,"%d MS",*(undefined4 *)(param_1 + 0x14));
      lVar14 = 3;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    (&local_238)[lVar14 * 0x11] = 3;
    FUN_180012ac0(local_234 + lVar14 * 0x44,0x40,"%d FPS",uVar8);
    uVar12 = (int)lVar14 + 1;
    GetLocalTime(&local_250);
    local_318 = (float)(uint)local_250.wMinute;
    (&local_238)[(ulonglong)uVar12 * 0x11] = 4;
    FUN_180012ac0(local_234 + (ulonglong)uVar12 * 0x44,0x40,"%02d:%02d",local_250.wHour);
    iVar1 = (int)lVar14 + 2;
    local_290 = iVar1;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar7 = DAT_180381384;
    uVar8 = DAT_180381308;
    fVar4 = DAT_180380bb0;
    fVar17 = DAT_180380ba8;
    local_29c = fVar16 * DAT_180380fd4;
    fVar27 = fVar16 * DAT_180380f40;
    local_2ac = fVar16 * DAT_180380fdc;
    local_298 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
    fVar26 = fVar27 + local_2ac;
    fVar28 = fVar16 * DAT_180381048;
    if (fVar16 * DAT_180381048 <= local_298 + local_2ac) {
      fVar28 = local_298 + local_2ac;
    }
    local_2b0 = fVar16 * DAT_180380fcc;
    fVar16 = (local_2b0 + local_2b0 + DAT_180380bb0) * (float)uVar12 + local_29c + local_29c;
    iVar15 = iVar13;
    local_294 = fVar26;
    do {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (local_234 + (longlong)iVar15 * 0x44 == (char *)0x0) {
        fVar22 = 0.0;
      }
      else {
        local_2e8 = 0;
        local_2f8 = 0;
        local_300 = 0;
        local_308 = (char *)0x0;
        local_318 = (float)uVar7;
        local_310 = local_234 + (longlong)iVar15 * 0x44;
        FUN_18029e350(&local_2d0,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),
                      *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1238),uVar8);
        fVar22 = (float)(int)((float)local_2d0 + fVar17);
        local_2d0 = CONCAT44(local_2d0._4_4_,fVar22);
      }
      afStack_268[iVar15] = fVar22;
      iVar15 = iVar15 + 1;
      fVar16 = fVar16 + fVar22 + fVar26;
    } while (iVar15 < iVar1);
    if (*(char *)(local_288 + 0x108) == '\0') {
      DAT_1803ffd70 = '\0';
    }
    else if (DAT_1803ffd70 != '\0') {
      DAT_1803e90b4 = *(float *)(local_288 + 0x104) - _DAT_1803fcf2c;
      DAT_1803e90b0 = *(float *)(local_288 + 0x100) - _DAT_1803fcf28;
      DAT_180423570 = '\x01';
    }
    if (DAT_180423570 == '\0') {
      local_2d8[0] = (*(float *)(local_288 + 0x30) - fVar16) - fVar25;
    }
    else {
      fVar25 = 0.0;
      if (0.0 <= DAT_1803e90b4) {
        fVar17 = *(float *)(local_288 + 0x34) - fVar28;
        if (0.0 <= fVar17) {
          fVar25 = fVar17;
        }
        if (DAT_1803e90b4 <= fVar25) {
          fVar25 = DAT_1803e90b4;
        }
      }
      if (0.0 <= DAT_1803e90b0) {
        fVar17 = *(float *)(local_288 + 0x30) - fVar16;
        local_2d8[0] = 0.0;
        if (0.0 <= fVar17) {
          local_2d8[0] = fVar17;
        }
        if (DAT_1803e90b0 <= local_2d8[0]) {
          local_2d8[0] = DAT_1803e90b0;
        }
      }
      else {
        local_2d8[0] = 0.0;
      }
    }
    fVar17 = local_2d8[0];
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_2c8 = CONCAT44(fVar25,fVar17);
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    *(uint *)(lVar14 + 0x1f48) = *(uint *)(lVar14 + 0x1f48) | 1;
    *(undefined8 *)(lVar14 + 0x1f58) = local_2c8;
    *(undefined8 *)(lVar14 + 0x1f60) = 0;
    *(undefined4 *)(lVar14 + 0x1f4c) = 1;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    local_2d0 = 0;
    *(uint *)(lVar14 + 0x1f48) = *(uint *)(lVar14 + 0x1f48) | 2;
    *(float *)(lVar14 + 0x1f68) = fVar16;
    *(float *)(lVar14 + 0x1f6c) = fVar28;
    *(undefined4 *)(lVar14 + 0x1f50) = 1;
    FUN_18026aad0(2,&local_2d0);
    FUN_18026a940(4,0);
    local_2d0 = 0;
    FUN_18026aad0(5,&local_2d0);
    FUN_180276630("##mayrr_watermark",0,0x311bf);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    fVar26 = *(float *)(lVar14 + 0xdd0);
    fVar22 = *(float *)(lVar14 + 0xdd4);
    fVar18 = *(float *)(lVar14 + 0xdd8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar21 = DAT_180380ac0;
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    fVar19 = *(float *)(lVar14 + 0xef0);
    fVar24 = *(float *)(lVar14 + 0xef4);
    fVar20 = *(float *)(lVar14 + 0xef8);
    if (0.0 <= fVar26) {
      fVar23 = fVar4;
      if (fVar26 <= fVar4) {
        fVar23 = fVar26;
      }
    }
    else {
      fVar23 = 0.0;
    }
    if (0.0 <= fVar22) {
      fVar26 = fVar4;
      if (fVar22 <= fVar4) {
        fVar26 = fVar22;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar26 = fVar26 * DAT_1803811c8 + DAT_180380ac0;
    fVar22 = fVar23 * DAT_1803811c8 + DAT_180380ac0;
    if (0.0 <= fVar18) {
      fVar23 = fVar4;
      if (fVar18 <= fVar4) {
        fVar23 = fVar18;
      }
    }
    else {
      fVar23 = 0.0;
    }
    fVar18 = fVar23 * DAT_1803811c8 + DAT_180380ac0;
    if (0.0 <= fVar19) {
      fVar23 = fVar4;
      if (fVar19 <= fVar4) {
        fVar23 = fVar19;
      }
    }
    else {
      fVar23 = 0.0;
    }
    if (0.0 <= fVar24) {
      fVar19 = fVar4;
      if (fVar24 <= fVar4) {
        fVar19 = fVar24;
      }
    }
    else {
      fVar19 = 0.0;
    }
    fVar19 = fVar19 * DAT_1803811c8 + DAT_180380ac0;
    fVar24 = fVar23 * DAT_1803811c8 + DAT_180380ac0;
    if (0.0 <= fVar20) {
      fVar23 = fVar4;
      if (fVar20 <= fVar4) {
        fVar23 = fVar20;
      }
    }
    else {
      fVar23 = 0.0;
    }
    fVar20 = fVar23 * DAT_1803811c8 + DAT_180380ac0;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    local_2c0 = *(float *)(lVar14 + 0xdb0);
    fStack_2bc = *(float *)(lVar14 + 0xdb4);
    uStack_2b8 = *(undefined4 *)(lVar14 + 0xdb8);
    fStack_2b4 = *(float *)(lVar14 + 0xdbc) * *(float *)(lVar14 + 0xc84);
    uVar12 = FUN_180268ed0(&local_2c0);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    local_2c0 = *(float *)(lVar14 + 0xe00);
    fStack_2bc = *(float *)(lVar14 + 0xe04);
    uStack_2b8 = *(undefined4 *)(lVar14 + 0xe08);
    fStack_2b4 = *(float *)(lVar14 + 0xe0c) * *(float *)(lVar14 + 0xc84);
    uVar7 = FUN_180268ed0(&local_2c0);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = *(longlong *)(lVar2 + 0xec0);
    local_2c0 = *(float *)(lVar14 + 0xf70);
    fStack_2bc = *(float *)(lVar14 + 0xf74);
    uStack_2b8 = *(undefined4 *)(lVar14 + 0xf78);
    fStack_2b4 = *(float *)(lVar14 + 0xf7c) * *(float *)(lVar14 + 0xc84) * DAT_180380b68;
    uVar8 = FUN_180268ed0(&local_2c0);
    local_2d0 = CONCAT44(local_2d0._4_4_,uVar8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_310 = (char *)((ulonglong)local_310 & 0xffffffff00000000);
    local_2c0 = fVar17 + fVar16;
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    fStack_2bc = fVar25 + fVar28;
    *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1520) + 0x2c8);
    local_318 = fVar27;
    FUN_180295000(lVar2,&local_2c8,&local_2c0,
                  ((int)fVar18 | 0xf000U) << 0x10 | (int)fVar26 << 8 | (int)fVar22);
    if ((uVar7 & 0xff000000) != 0) {
      local_318 = 0.0;
      local_2c0 = fVar17 + fVar21;
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        pfVar11 = (float *)&local_2c8;
        pfVar9 = &local_2c0;
        fStack_2bc = fVar25 + fVar21;
        local_2c8 = CONCAT44((fVar25 + fVar28) - _DAT_180380abc,(fVar17 + fVar16) - _DAT_180380abc);
      }
      else {
        fStack_2bc = (fVar25 + fVar28) - fVar21;
        pfVar11 = &local_2c0;
        pfVar9 = (float *)&local_2c8;
        local_2c8 = CONCAT44(fVar25 + fVar21,local_2c0);
        local_2c0 = (fVar17 + fVar16) - fVar21;
      }
      FUN_180294990(lVar2,pfVar9,pfVar11,fVar27);
      local_310 = (char *)CONCAT44(local_310._4_4_,0x200);
      local_318 = fVar4;
      FUN_1802929d0(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar7);
      *(undefined4 *)(lVar2 + 0x50) = 0;
    }
    fVar16 = local_294;
    fVar17 = fVar17 + local_29c;
    local_2ac = local_2ac * fVar21;
    fVar26 = fVar28 * fVar21 + fVar25;
    local_2a8 = local_2a8 * _DAT_180380f20;
    fVar21 = local_298 * fVar21;
    do {
      if (0 < iVar13) {
        fVar17 = fVar17 + local_2b0;
        local_318 = fVar4;
        local_2c8 = CONCAT44((fVar25 + fVar28) - fVar27,fVar17);
        fStack_2bc = fVar27 + fVar25;
        local_2c0 = fVar17;
        FUN_180294c90(lVar2,&local_2c0,&local_2c8,local_2d0 & 0xffffffff);
        fVar17 = local_2b0 + fVar4 + fVar17;
      }
      lVar14 = (longlong)iVar13;
      local_318 = (float)(((int)fVar20 | 0xff00U) << 0x10 | (int)fVar19 << 8 | (int)fVar24);
      FUN_1800f67a0(lVar2,(&local_238)[lVar14 * 0x11],CONCAT44(fVar26,local_2ac + fVar17),local_2a8)
      ;
      local_2a0 = fVar26 - fVar21;
      local_2a4 = fVar16 + fVar17;
      if ((((uVar12 & 0xff000000) != 0) &&
          (pcVar10 = local_234 + lVar14 * 0x44, pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
        local_278 = *(undefined8 *)(lVar2 + 0x60);
        uStack_270 = *(undefined8 *)(lVar2 + 0x68);
        local_2f0 = 0;
        local_2f8 = local_2f8 & 0xffffffff00000000;
        local_300 = 0;
        local_310 = (char *)&local_278;
        local_318 = (float)uVar12;
        local_308 = pcVar10;
        FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x18),lVar2,
                      *(undefined4 *)(*(longlong *)(lVar2 + 0x38) + 0x20),&local_2a4);
      }
      lVar5 = local_280;
      lVar3 = local_288;
      fVar22 = local_2d8[0];
      fVar17 = fVar16 + fVar17 + afStack_268[lVar14];
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_290);
    if (((DAT_1803ffd70 == '\0') && (DAT_1803fa545 != '\0')) &&
       (*(char *)(local_288 + 0xb30) != '\0')) {
      if (*(char *)(local_280 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar5 + 0xec0);
      lVar14 = *(longlong *)(lVar2 + 0x1528);
      if (((lVar14 != 0) && (lVar14 == *(longlong *)(lVar2 + 0x1520))) &&
         ((cVar6 = FUN_18026ed90(lVar14,0), cVar6 != '\0' &&
          (((*(int *)(lVar2 + 0x1594) == 0 || (*(char *)(lVar2 + 0x15a1) != '\0')) ||
           (*(int *)(lVar2 + 0x1594) == *(int *)(lVar14 + 0x8c))))))) {
        _DAT_1803fcf2c = *(float *)(lVar3 + 0xae4) - fVar25;
        _DAT_1803fcf28 = *(float *)(lVar3 + 0xae0) - fVar22;
        DAT_1803ffd70 = '\x01';
      }
    }
    FUN_180278d40();
    FUN_18026abb0(3);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar5 + 0xec0);
    lVar14 = (longlong)*(int *)(lVar2 + 0x1fe8);
    if (*(int *)(lVar2 + 0x1fe8) < 1) {
      FUN_18027e9c0("Calling PopFont() too many times!");
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x1ff0);
      FUN_18027a5f0(*(undefined8 *)(lVar3 + -0x10 + lVar14 * 0x10),
                    *(undefined4 *)(lVar3 + -8 + lVar14 * 0x10),
                    *(undefined4 *)(lVar3 + -4 + lVar14 * 0x10));
      *(int *)(lVar2 + 0x1fe8) = *(int *)(lVar2 + 0x1fe8) + -1;
    }
  }
  return;
}


