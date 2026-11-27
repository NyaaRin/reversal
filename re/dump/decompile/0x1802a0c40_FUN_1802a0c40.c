// 0x1802a0c40  FUN_1802a0c40
// size=5516 thunk=false
// signature: undefined FUN_1802a0c40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1802a0c40(undefined8 param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
             float param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  short *psVar3;
  short sVar4;
  code *pcVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  int *piVar13;
  void *pvVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  char cVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_278 [32];
  uint local_258;
  char local_248;
  uint local_244;
  uint local_240;
  undefined1 local_23c [4];
  uint local_238;
  int local_234;
  undefined8 *local_230;
  undefined1 *local_228;
  uint local_220;
  undefined8 local_218;
  longlong local_210;
  uint local_208;
  uint local_204;
  longlong local_200;
  uint *local_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_278;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_244 = param_3;
  local_240 = param_4;
  local_238 = param_2;
  local_1f0 = param_1;
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar21 + 0xec0);
  local_1d0 = lVar20;
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar28 = *(longlong *)(lVar21 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar28 + 0x1520) + 0xce) = 1;
  lVar28 = *(longlong *)(lVar28 + 0x1520);
  if (*(char *)(lVar28 + 0xd1) != '\0') {
    return 0;
  }
  local_208 = param_4 & 0x3000000;
  local_210 = lVar28;
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = *(longlong *)(*(longlong *)(lVar21 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar16 + 0x1c8) != 0) ||
     (pfVar11 = (float *)(lVar16 + 0x280),
     *(longlong *)(*(longlong *)(lVar21 + 0xec0) + 0x2368) != 0)) {
    pfVar11 = (float *)(lVar16 + 0x250);
  }
  fVar39 = *pfVar11 - *(float *)(lVar16 + 0x118);
  fVar43 = 0.0;
  if ((param_4 & 0x3000000) == 0) {
    fVar40 = 0.0;
  }
  else {
    fVar40 = pfVar11[1] - *(float *)(lVar16 + 0x11c);
    if (fVar40 <= DAT_180380e9c) {
      fVar40 = DAT_180380e9c;
    }
  }
  if (fVar39 <= DAT_180380e9c) {
    fVar39 = DAT_180380e9c;
  }
  pfVar11 = (float *)FUN_18027faa0(&local_1e8,*param_5,fVar39,fVar40);
  fVar39 = *(float *)(lVar28 + 0x118);
  fVar41 = (float)(int)*pfVar11 + fVar39;
  fVar40 = *(float *)(lVar28 + 0x11c);
  fVar42 = (float)(int)pfVar11[1] + fVar40;
  if ((*(char *)(lVar28 + 0xe8) < '\x01') && (*(char *)(lVar28 + 0xe9) < '\x01')) {
    cVar35 = '\0';
  }
  else {
    cVar35 = '\x01';
  }
  local_248 = cVar35;
  local_c0 = fVar39;
  fStack_bc = fVar40;
  fStack_b8 = fVar41;
  fStack_b4 = fVar42;
  if ((param_4 & 0x3000000) != 0) {
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar28 = *(longlong *)(*(longlong *)(lVar21 + 0xec0) + 0x1520);
    if (((((fVar42 < *(float *)(lVar28 + 0x26c) || fVar42 == *(float *)(lVar28 + 0x26c)) ||
          (*(float *)(lVar28 + 0x274) <= fVar40)) ||
         (fVar41 < *(float *)(lVar28 + 0x268) || fVar41 == *(float *)(lVar28 + 0x268))) ||
        (*(float *)(lVar28 + 0x270) <= fVar39)) &&
       ((*(char *)(*(longlong *)(lVar21 + 0xec0) + 0x1592) == '\0' && (cVar35 == '\0')))) {
      local_1e0 = fVar41 - fVar39;
      local_1dc = fVar42 - fVar40;
      FUN_18027f400(&local_1e0,DAT_180381384);
      FUN_18027f160(&local_c0,param_2,0,0);
      *(undefined4 *)(lVar20 + 0x1f48) = 0;
      return 0;
    }
  }
  if (*(uint *)(lVar20 + 0x2370) == param_2) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return uVar12;
  }
  piVar13 = (int *)FUN_180269290(lVar20 + 0x2398,param_2);
  uVar9 = 8;
  if (*piVar13 == -1) {
    *piVar13 = *(int *)(lVar20 + 0x23a8);
    iVar17 = *(int *)(lVar20 + 0x23a8);
    if (iVar17 == *(int *)(lVar20 + 0x2388)) {
      uVar18 = *(int *)(lVar20 + 0x2388) + 1;
      iVar10 = *(int *)(lVar20 + 0x238c);
      if (iVar10 < (int)uVar18) {
        uVar23 = uVar9;
        if (iVar10 != 0) {
          uVar23 = iVar10 / 2 + iVar10;
        }
        uVar8 = uVar18;
        if ((int)uVar18 < (int)uVar23) {
          uVar8 = uVar23;
        }
        if (iVar10 < (int)uVar8) {
          pvVar14 = (void *)FUN_18026f580((longlong)(int)uVar8 * 0x250);
          if (*(void **)(lVar20 + 0x2390) != (void *)0x0) {
            memcpy(pvVar14,*(void **)(lVar20 + 0x2390),(longlong)*(int *)(lVar20 + 0x2388) * 0x250);
            FUN_18026f680(*(undefined8 *)(lVar20 + 0x2390));
          }
          *(void **)(lVar20 + 0x2390) = pvVar14;
          *(uint *)(lVar20 + 0x238c) = uVar8;
        }
      }
      *(uint *)(lVar20 + 0x2388) = uVar18;
      *(int *)(lVar20 + 0x23a8) = *(int *)(lVar20 + 0x23a8) + 1;
    }
    else {
      *(undefined4 *)(lVar20 + 0x23a8) =
           *(undefined4 *)((longlong)iVar17 * 0x250 + *(longlong *)(lVar20 + 0x2390));
    }
    lVar21 = (longlong)iVar17 * 0x250;
    local_230 = (undefined8 *)(*(longlong *)(lVar20 + 0x2390) + lVar21);
    local_228 = local_23c;
    local_1e8 = local_230;
    if (local_230 != (undefined8 *)0x0) {
      FUN_1802a0b10();
    }
    *(int *)(lVar20 + 0x23ac) = *(int *)(lVar20 + 0x23ac) + 1;
  }
  else {
    lVar21 = (longlong)*piVar13 * 0x250;
  }
  puVar22 = (uint *)(lVar21 + *(longlong *)(lVar20 + 0x2390));
  lVar21 = ((longlong)puVar22 - *(longlong *)(lVar20 + 0x2390)) / 0x250;
  *(int *)(lVar20 + 0x2374) = *(int *)(lVar20 + 0x2374) + 1;
  uVar18 = *(uint *)(lVar20 + 0x2374);
  uVar23 = 0;
  local_200 = lVar21;
  local_1f8 = puVar22;
  if (*(int *)(lVar20 + 0x2378) < (int)uVar18) {
    local_1e8 = &uStack_1a0;
    local_1c8 = 0;
    local_1b8 = 0;
    lStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    lStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_1c0 = 0xbf800000;
    iVar17 = *(int *)(lVar20 + 0x237c);
    if (iVar17 < (int)uVar18) {
      uVar8 = uVar9;
      if (iVar17 != 0) {
        uVar8 = iVar17 / 2 + iVar17;
      }
      uVar33 = uVar18;
      if ((int)uVar18 < (int)uVar8) {
        uVar33 = uVar8;
      }
      if (iVar17 < (int)uVar33) {
        pvVar14 = (void *)FUN_18026f580((longlong)(int)uVar33 * 0x88);
        if (*(void **)(lVar20 + 0x2380) != (void *)0x0) {
          memcpy(pvVar14,*(void **)(lVar20 + 0x2380),(longlong)*(int *)(lVar20 + 0x2378) * 0x88);
          FUN_18026f680(*(undefined8 *)(lVar20 + 0x2380));
        }
        *(void **)(lVar20 + 0x2380) = pvVar14;
        *(uint *)(lVar20 + 0x237c) = uVar33;
        param_4 = local_240;
      }
    }
    lVar21 = local_200;
    for (iVar17 = *(int *)(lVar20 + 0x2378); iVar17 < (int)uVar18; iVar17 = iVar17 + 1) {
      lVar16 = (longlong)iVar17 * 0x88;
      lVar28 = *(longlong *)(lVar20 + 0x2380);
      *(undefined8 *)(lVar16 + lVar28) = local_1c8;
      ((undefined8 *)(lVar16 + lVar28))[1] = uStack_1c0;
      puVar29 = (undefined8 *)(lVar16 + 0x10 + lVar28);
      *puVar29 = local_1b8;
      puVar29[1] = lStack_1b0;
      puVar29 = (undefined8 *)(lVar16 + 0x20 + lVar28);
      *puVar29 = local_1a8;
      puVar29[1] = uStack_1a0;
      puVar29 = (undefined8 *)(lVar16 + 0x30 + lVar28);
      *puVar29 = uStack_198;
      puVar29[1] = lStack_190;
      puVar29 = (undefined8 *)(lVar16 + 0x40 + lVar28);
      *puVar29 = local_188;
      puVar29[1] = uStack_180;
      puVar29 = (undefined8 *)(lVar16 + 0x50 + lVar28);
      *puVar29 = local_178;
      puVar29[1] = uStack_170;
      puVar29 = (undefined8 *)(lVar16 + 0x60 + lVar28);
      *puVar29 = local_168;
      puVar29[1] = uStack_160;
      puVar29 = (undefined8 *)(lVar16 + 0x70 + lVar28);
      *puVar29 = local_158;
      puVar29[1] = uStack_150;
      *(undefined8 *)(lVar16 + 0x80 + lVar28) = local_148;
    }
    *(uint *)(lVar20 + 0x2378) = uVar18;
    local_1e8 = &uStack_1a0;
    FUN_180296c50(&uStack_1a0);
    if (lStack_190 != 0) {
      FUN_18026f680();
    }
    if (lStack_1b0 != 0) {
      FUN_18026f680();
    }
  }
  local_230 = (undefined8 *)((longlong)*(int *)(lVar20 + 0x2374) * 0x88);
  local_228 = *(undefined1 **)(lVar20 + 0x2380);
  lVar28 = (longlong)local_228 + -0x88 + (longlong)local_230;
  *(longlong *)(puVar22 + 4) = lVar28;
  *(int *)(lVar28 + 4) = (int)lVar21;
  lVar21 = *(longlong *)(puVar22 + 4);
  puVar15 = (undefined4 *)(lVar21 + 0x28);
  *(undefined4 **)(puVar22 + 0x68) = puVar15;
  *puVar15 = 0;
  *(undefined4 *)(lVar21 + 0x2c) = 1;
  *(bool *)((longlong)puVar22 + 0x246) = (param_4 & 0xe000) == 0;
  if ((param_4 & 0xe000) == 0) {
    if (((param_4 >> 0x18 & 1) != 0) || (uVar18 = 0x8000, (*(byte *)(local_210 + 0x14) & 0x40) != 0)
       ) {
      uVar18 = 0x2000;
    }
    param_4 = uVar18 | param_4;
  }
  uVar18 = param_4 | 0x40000;
  if ((param_4 & 0xe000) != 0x4000) {
    uVar18 = param_4;
  }
  uVar8 = uVar18 | 0x200;
  if ((uVar18 & 1) == 0) {
    uVar8 = uVar18;
  }
  uVar18 = uVar8 & 0xfffcffff;
  if ((uVar8 & 0x3000000) == 0) {
    uVar18 = uVar8;
  }
  uVar8 = uVar18 & 0xfffff7ff;
  if ((uVar18 >> 0xc & 1) == 0) {
    uVar8 = uVar18;
  }
  uVar18 = uVar8 | 0x10;
  if ((uVar8 & 0xf) != 0) {
    uVar18 = uVar8;
  }
  local_220 = uVar18 | 0x10;
  if ((*(uint *)(*(longlong *)(local_210 + 0x3c0) + 0x14) & 0x100) == 0) {
    local_220 = uVar18;
  }
  local_204 = puVar22[0x1a];
  uVar18 = uVar23;
  if (local_204 == *(uint *)(lVar20 + 4)) {
    uVar18 = (int)(short)puVar22[0x1e] + 1;
  }
  local_240 = puVar22[1];
  *puVar22 = local_238;
  puVar22[1] = local_220;
  puVar22[0x1a] = *(uint *)(lVar20 + 4);
  *(longlong *)(puVar22 + 0x62) = local_210;
  *(longlong *)(puVar22 + 0x60) = local_210;
  puVar22[0x1b] = local_244;
  *(undefined1 *)((longlong)puVar22 + 0x239) = 0;
  puVar22[0x33] = (uint)param_6;
  *(undefined1 *)(puVar22 + 0x8e) = *(undefined1 *)(local_210 + 0x170);
  *(undefined8 *)(lVar28 + 0x20) = *param_5;
  *(short *)(puVar22 + 0x1e) = (short)uVar18;
  uVar8 = local_238;
  if (0 < (int)uVar18) {
    uVar8 = puVar22[0x70];
    if ((int)uVar8 < (int)uVar18) {
      uVar33 = puVar22[0x71];
      if (uVar8 == uVar33) {
        if (uVar33 != 0) {
          uVar9 = uVar33 + (int)uVar33 / 2;
        }
        uVar36 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar9) {
          uVar36 = uVar9;
        }
        if ((int)uVar33 < (int)uVar36) {
          pvVar14 = (void *)FUN_18026f580((longlong)(int)uVar36 * 0x18);
          if (*(void **)(puVar22 + 0x72) != (void *)0x0) {
            memcpy(pvVar14,*(void **)(puVar22 + 0x72),(longlong)(int)puVar22[0x70] * 0x18);
            FUN_18026f680(*(undefined8 *)(puVar22 + 0x72));
          }
          *(void **)(puVar22 + 0x72) = pvVar14;
          puVar22[0x71] = uVar36;
        }
      }
      lVar28 = (longlong)(int)puVar22[0x70];
      lVar21 = *(longlong *)(puVar22 + 0x72);
      *(undefined8 *)(lVar21 + lVar28 * 0x18) = 0;
      *(undefined8 *)(lVar21 + 8 + lVar28 * 0x18) = 0;
      *(undefined8 *)(lVar21 + 0x10 + lVar28 * 0x18) = 0xffffffffffffffff;
      puVar22[0x70] = puVar22[0x70] + 1;
      fVar39 = local_c0;
      fVar40 = fStack_bc;
      fVar41 = fStack_b8;
      fVar42 = fStack_b4;
    }
    uVar8 = FUN_180268980("##Instances",0,local_238);
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(uint *)(*(longlong *)(lVar21 + 0xec0) + 0x1578) == uVar8) {
      FUN_1802899e0(uVar8,0xb,"##Instances");
    }
    local_c8 = uVar18;
    uVar8 = ~uVar8;
    puVar19 = &local_c8;
    do {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_180331380 + ((ulonglong)(uVar8 & 0xff) ^ (ulonglong)(byte)*puVar19) * 4
                       );
      puVar19 = (uint *)((longlong)puVar19 + 1);
    } while (puVar19 < &local_c4);
    uVar8 = ~uVar8;
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(uint *)(*(longlong *)(lVar21 + 0xec0) + 0x1578) == uVar8) {
      FUN_1802899e0(uVar8,4,(longlong)(int)uVar18);
    }
  }
  uVar9 = local_220;
  if ((short)puVar22[0x1e] == 0) {
    puVar19 = puVar22 + 0x6a;
  }
  else {
    puVar19 = (uint *)(*(longlong *)(puVar22 + 0x72) + (longlong)((short)puVar22[0x1e] + -1) * 0x18)
    ;
  }
  *puVar19 = uVar8;
  fVar6 = DAT_180381308;
  if (local_208 == 0) {
    puVar22[0x40] = (uint)local_c0;
    puVar22[0x41] = (uint)fStack_bc;
    puVar22[0x42] = (uint)fStack_b8;
    puVar22[0x43] = (uint)fStack_b4;
    puVar22[0x3c] = (uint)local_c0;
    puVar22[0x3d] = (uint)fStack_bc;
    puVar22[0x3e] = (uint)fStack_b8;
    puVar22[0x3f] = (uint)fStack_b4;
    puVar22[0x44] = (uint)local_c0;
    puVar22[0x45] = (uint)fStack_bc;
    puVar22[0x46] = (uint)fStack_b8;
    puVar22[0x47] = (uint)fStack_b4;
    *(undefined2 *)((longlong)puVar22 + 0x249) = 0;
    *(int *)(*(longlong *)(puVar22 + 0x62) + 0x1a0) =
         *(int *)(*(longlong *)(puVar22 + 0x62) + 0x1a0) + 1;
  }
  else {
    uVar33 = local_220 & 0x1000000;
    if (uVar33 != 0) {
      fVar37 = DAT_180381308;
      if ((local_220 >> 0x19 & 1) == 0) {
        fVar37 = DAT_180380920;
      }
      fVar38 = DAT_180381308;
      if ((param_6 <= 0.0) || (fVar38 = param_6, param_6 == DAT_180381308)) {
        if (fVar37 == DAT_180381308) goto LAB_1802a15c1;
      }
      else if (fVar37 == DAT_180381308) {
        fVar37 = 0.0;
      }
      if (fVar38 == DAT_180381308) {
        fVar38 = 0.0;
      }
      local_1d8 = fVar38;
      local_1d4 = fVar37;
      FUN_180279980(&local_1d8);
    }
LAB_1802a15c1:
    if (((local_240 & 0x3000000) == 0) && ((*(byte *)(lVar20 + 0x1f48) & 0x80) == 0)) {
      lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar21 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar21 = *(longlong *)(lVar21 + 0xec0);
      puVar19 = (uint *)(lVar21 + 0x1f48);
      *puVar19 = *puVar19 | 0x80;
      *(undefined8 *)(lVar21 + 0x1f78) = 0;
      uVar9 = local_220;
    }
    if ((*(uint *)(lVar20 + 0x1f48) >> 9 & 1) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined4 *)(lVar20 + 0x1f84);
    }
    if ((*(uint *)(lVar20 + 0x1f48) >> 8 & 1) != 0) {
      uVar23 = *(uint *)(lVar20 + 0x1f80);
    }
    local_218 = CONCAT44(fVar42 - fVar40,fVar41 - fVar39);
    local_258 = uVar23 | 0x800;
    if (uVar33 == 0) {
      local_258 = uVar23;
    }
    FUN_180273060(local_1f0,uVar8,&local_218,uVar27);
    lVar21 = *(longlong *)(lVar20 + 0x1520);
    *(longlong *)(puVar22 + 0x62) = lVar21;
    uVar12 = *(undefined8 *)(lVar21 + 0x250);
    *(undefined8 *)(puVar22 + 0x44) = *(undefined8 *)(lVar21 + 0x248);
    *(undefined8 *)(puVar22 + 0x46) = uVar12;
    fVar39 = *(float *)(lVar21 + 0x28);
    fVar40 = *(float *)(lVar21 + 0x2c);
    fVar41 = *(float *)(lVar21 + 0x30);
    fVar42 = *(float *)(lVar21 + 0x34);
    puVar22[0x3c] = (uint)fVar39;
    puVar22[0x3d] = (uint)fVar40;
    puVar22[0x3e] = (uint)(fVar39 + fVar41);
    puVar22[0x3f] = (uint)(fVar40 + fVar42);
    uVar23 = *(uint *)(lVar21 + 0x22c);
    uVar33 = *(uint *)(lVar21 + 0x230);
    uVar36 = *(uint *)(lVar21 + 0x234);
    puVar22[0x40] = *(uint *)(lVar21 + 0x228);
    puVar22[0x41] = uVar23;
    puVar22[0x42] = uVar33;
    puVar22[0x43] = uVar36;
    if ((*(char *)(lVar21 + 0xd1) != '\0') && (local_248 != '\0')) {
      *(undefined1 *)(lVar21 + 0xd1) = 0;
    }
    if (uVar18 == 0) {
      *(undefined1 *)((longlong)puVar22 + 0x24a) = *(undefined1 *)((longlong)puVar22 + 0x249);
      *(undefined1 *)((longlong)puVar22 + 0x249) = 0;
    }
    *(byte *)((longlong)puVar22 + 0x249) =
         *(byte *)((longlong)puVar22 + 0x249) | *(byte *)(*(longlong *)(puVar22 + 0x62) + 0xc9);
  }
  FUN_18027af00(local_238);
  if (0 < (int)uVar18) {
    FUN_18027af00(uVar8);
  }
  lVar28 = local_210;
  lVar21 = *(longlong *)(puVar22 + 0x62);
  puVar22[0x2d] = *(uint *)(lVar21 + 0x15c);
  pfVar11 = (float *)(lVar21 + 0x268);
  uVar12 = *(undefined8 *)(lVar21 + 0x270);
  *(undefined8 *)(puVar22 + 0x58) = *(undefined8 *)pfVar11;
  *(undefined8 *)(puVar22 + 0x5a) = uVar12;
  *(undefined1 *)(puVar22 + 0x93) = *(undefined1 *)(lVar21 + 0xd1);
  *(undefined4 *)((longlong)local_230 + -0x88 + (longlong)local_228) =
       *(undefined4 *)(lVar21 + 0x10);
  uVar12 = *(undefined8 *)(lVar21 + 0x250);
  puVar29 = (undefined8 *)((longlong)local_230 + -0x48 + (longlong)local_228);
  *puVar29 = *(undefined8 *)(lVar21 + 0x248);
  puVar29[1] = uVar12;
  uVar12 = *(undefined8 *)(lVar21 + 0x260);
  puVar29 = (undefined8 *)((longlong)local_230 + -0x38 + (longlong)local_228);
  *puVar29 = *(undefined8 *)(lVar21 + 600);
  puVar29[1] = uVar12;
  *(undefined4 *)((longlong)local_230 + -0x10 + (longlong)local_228) =
       *(undefined4 *)(local_210 + 0x160);
  *(undefined8 *)((longlong)local_230 + -0x28 + (longlong)local_228) =
       *(undefined8 *)(lVar21 + 0x148);
  *(undefined8 *)((longlong)local_230 + -0x20 + (longlong)local_228) =
       *(undefined8 *)(lVar21 + 0x140);
  *(undefined8 *)((longlong)local_230 + -0x18 + (longlong)local_228) =
       *(undefined8 *)(lVar21 + 0x130);
  *(undefined4 *)((longlong)local_230 + -0xc + (longlong)local_228) =
       *(undefined4 *)(local_210 + 0x1e8);
  *(undefined4 *)((longlong)local_230 + -8 + (longlong)local_228) =
       *(undefined4 *)(local_210 + 0x1f8);
  *(undefined8 *)(lVar21 + 0x140) = 0;
  *(undefined8 *)(lVar21 + 0x148) = 0;
  fVar39 = DAT_180380bb0;
  if (lVar21 != local_210) {
    if ((uVar9 >> 10 & 1) != 0) {
      fVar40 = (float)puVar22[0x5a];
      fVar41 = (float)puVar22[0x58] + DAT_180380bb0;
      if (fVar40 <= (float)puVar22[0x58] + DAT_180380bb0) {
        fVar41 = fVar40;
      }
      puVar22[0x58] = (uint)fVar41;
      if (*(float *)(lVar21 + 0x78) == 0.0) {
        fVar42 = fVar40 - fVar39;
        if (fVar40 - fVar39 <= fVar41) {
          fVar42 = fVar41;
        }
        puVar22[0x5a] = (uint)fVar42;
      }
    }
    if ((uVar9 >> 8 & 1) != 0) {
      fVar40 = (float)puVar22[0x5b];
      fVar41 = (float)puVar22[0x59] + fVar39;
      if (fVar40 <= (float)puVar22[0x59] + fVar39) {
        fVar41 = fVar40;
      }
      puVar22[0x59] = (uint)fVar41;
      if (*(float *)(lVar21 + 0x7c) == 0.0) {
        fVar42 = fVar40 - fVar39;
        if (fVar40 - fVar39 <= fVar41) {
          fVar42 = fVar41;
        }
        puVar22[0x5b] = (uint)fVar42;
      }
    }
  }
  if ((uVar9 >> 0x16 & 1) == 0) {
    if ((uVar9 >> 0x15 & 1) == 0) {
      bVar7 = (byte)(uVar9 >> 10) & 1;
    }
    else {
      bVar7 = 1;
    }
  }
  else {
    bVar7 = 0;
  }
  uVar18 = uVar9 & 0x200;
  fVar40 = fVar39;
  if (uVar18 == 0) {
    fVar40 = 0.0;
  }
  if (((uVar9 & 0x800000) == 0) && (uVar18 == 0)) {
    fVar41 = *(float *)(lVar20 + 0xce4);
LAB_1802a1924:
    fVar42 = 0.0;
    fVar43 = fVar41;
  }
  else {
    fVar41 = 0.0;
    if (((uVar9 & 0x800000) != 0) || (uVar18 == 0)) goto LAB_1802a1924;
    fVar42 = *(float *)(lVar20 + 0xce4);
  }
  puVar22[0x31] = (uint)(fVar43 + fVar40);
  puVar22[0x32] = (uint)fVar43;
  puVar22[0x30] = (uint)fVar42;
  fVar43 = fVar39;
  if ((uVar9 >> 10 & 1) == 0) {
    fVar43 = 0.0;
  }
  if (bVar7 == 0) {
    fVar40 = 0.0;
  }
  else {
    fVar40 = *(float *)(lVar20 + 0xce4);
  }
  puVar22[0x2f] = (uint)((fVar40 + fVar43) - fVar42);
  puVar22[0x1c] = 0xffffffff;
  puVar22[0x1d] = 0xffffffff;
  puVar22[0x26] = 0;
  *(undefined2 *)((longlong)puVar22 + 0x96) = 0;
  if (lVar21 == local_210) {
    pfVar11 = (float *)(puVar22 + 0x44);
  }
  pfVar1 = (float *)(puVar22 + 0x48);
  fVar43 = pfVar11[1];
  fVar40 = pfVar11[2];
  fVar41 = pfVar11[3];
  *pfVar1 = *pfVar11;
  puVar22[0x49] = (uint)fVar43;
  puVar22[0x4a] = (uint)fVar40;
  puVar22[0x4b] = (uint)fVar41;
  if (fVar43 <= (float)puVar22[0x45]) {
    fVar43 = (float)puVar22[0x45];
  }
  fVar40 = *pfVar1;
  if (*pfVar1 <= (float)puVar22[0x44]) {
    fVar40 = (float)puVar22[0x44];
  }
  *pfVar1 = fVar40;
  puVar22[0x49] = (uint)fVar43;
  fVar43 = (float)puVar22[0x4b];
  if ((float)puVar22[0x47] <= (float)puVar22[0x4b]) {
    fVar43 = (float)puVar22[0x47];
  }
  fVar40 = (float)puVar22[0x4a];
  if ((float)puVar22[0x46] <= (float)puVar22[0x4a]) {
    fVar40 = (float)puVar22[0x46];
  }
  puVar22[0x4a] = (uint)fVar40;
  puVar22[0x4b] = (uint)fVar43;
  puVar29 = local_230;
  puVar31 = local_228;
  local_1f0 = lVar21;
  FUN_180267200(pfVar1,puVar22 + 0x58);
  if ((uVar9 >> 0x11 & 1) == 0) {
    fVar43 = (float)puVar22[0x5b];
  }
  else {
    fVar43 = (float)puVar22[0x4b];
    if (*(float *)(lVar21 + 0x254) <= fVar43) {
      fVar43 = *(float *)(lVar21 + 0x254);
    }
  }
  puVar22[0x4b] = (uint)fVar43;
  puVar22[0x20] = puVar22[0x45];
  puVar22[0x1f] = puVar22[0x45];
  puVar22[0x22] = 0;
  puVar22[0x23] = 0;
  puVar22[0x8a] = 0;
  puVar22[0x8b] = 0;
  *(undefined1 *)((longlong)puVar22 + 0x245) = 1;
  *(undefined4 *)((longlong)puVar22 + 0x206) = 0;
  if ((int)(local_204 + 1) < *(int *)(lVar20 + 4)) {
    *(undefined1 *)(puVar22 + 0x92) = 0;
  }
  puVar22[0x3a] = 0;
  *(undefined4 *)((longlong)puVar29 + -0x7c + (longlong)puVar31) = 0;
  uVar18 = FUN_18026a6a0(0x2f,fVar39);
  puVar22[0x29] = uVar18;
  uVar18 = FUN_18026a6a0(0x30);
  puVar22[0x2a] = uVar18;
  *(uint **)(lVar20 + 0x2368) = puVar22;
  *(undefined1 *)(lVar21 + 0x178) = 0;
  iVar17 = (int)local_200;
  *(int *)(lVar28 + 0x1d0) = iVar17;
  if (lVar21 != lVar28) {
    *(int *)(lVar21 + 0x1d0) = iVar17;
  }
  if (((local_240 & 2) != 0) && ((uVar9 & 2) == 0)) {
    *(undefined1 *)(puVar22 + 0x91) = 1;
  }
  if (*(int *)(lVar20 + 0x23b0) <= iVar17) {
    local_234 = -0x40800000;
    FUN_1802a07e0((int *)(lVar20 + 0x23b0),iVar17 + 1,&local_234);
  }
  *(float *)(*(longlong *)(lVar20 + 0x23b8) + (longlong)iVar17 * 4) =
       (float)*(double *)(lVar20 + 0x10);
  *(float *)((longlong)local_230 + -0x80 + (longlong)local_228) = (float)*(double *)(lVar20 + 0x10);
  *(undefined1 *)((longlong)puVar22 + 0x24b) = 0;
  local_228 = (undefined1 *)0x0;
  local_218 = 0;
  local_230 = (undefined8 *)
              ((*(longlong *)(puVar22 + 8) - *(longlong *)(puVar22 + 6) >> 2) * 0x34f72c234f72c235);
  if (((uint)local_230 != 0) && ((uint)local_230 != local_244)) {
    local_218 = *(longlong *)(puVar22 + 2);
    puVar22[2] = 0;
    puVar22[3] = 0;
    local_228 = (undefined1 *)*(longlong *)(puVar22 + 6);
  }
  if (*(longlong *)(puVar22 + 2) == 0) {
    iVar24 = local_244 * 0x74;
    iVar17 = local_244 * 2;
    uVar18 = local_244 * 0x76 + 3 & 0xfffffffc;
    iVar32 = local_244 * 8;
    uVar9 = (int)(local_244 + 0x1f) >> 3 & 0xfffffffc;
    iVar34 = iVar32 + uVar18 + uVar9;
    local_234 = uVar9 + iVar34;
    iVar10 = uVar9 + local_234;
    pvVar14 = (void *)FUN_18026f580((longlong)iVar10);
    *(void **)(local_1f8 + 2) = pvVar14;
    memset(pvVar14,0,(longlong)iVar10);
    lVar21 = *(longlong *)(local_1f8 + 2);
    *(longlong *)(local_1f8 + 6) = lVar21;
    *(longlong *)(local_1f8 + 8) = iVar24 + lVar21;
    *(longlong *)(local_1f8 + 10) = iVar24 + lVar21;
    *(longlong *)(local_1f8 + 0xc) = (longlong)iVar17 + (longlong)iVar24 + lVar21;
    *(longlong *)(local_1f8 + 0xe) = (int)uVar18 + lVar21;
    *(longlong *)(local_1f8 + 0x10) = (longlong)iVar32 + (longlong)(int)uVar18 + lVar21;
    *(longlong *)(local_1f8 + 0x12) = (int)(iVar32 + uVar18) + lVar21;
    *(longlong *)(local_1f8 + 0x14) = iVar34 + lVar21;
    *(longlong *)(local_1f8 + 0x16) = local_234 + lVar21;
    *(undefined1 *)(local_1f8 + 0x90) = 1;
    *(undefined1 *)((longlong)local_1f8 + 0x23b) = 1;
    cVar35 = '\x01';
    puVar22 = local_1f8;
    lVar20 = local_1d0;
    lVar21 = local_1f0;
  }
  else {
    cVar35 = *(char *)((longlong)puVar22 + 0x23b);
  }
  uVar9 = local_244;
  uVar25 = 0;
  if (*(char *)((longlong)puVar22 + 0x243) == '\0') {
    if (cVar35 == '\0') goto LAB_1802a1e87;
  }
  else {
    *(undefined1 *)((longlong)puVar22 + 0x23b) = 1;
    *(undefined1 *)((longlong)puVar22 + 0x243) = 0;
    *(undefined1 *)(puVar22 + 0x90) = 0;
    puVar22[0x18] = 0;
  }
  puVar22[0x19] = 0xffffffff;
  *(undefined1 *)(puVar22 + 0x8f) = 1;
  *(undefined1 *)((longlong)puVar22 + 0x241) = 1;
  *(undefined2 *)((longlong)puVar22 + 0x7a) = 0xffff;
  *(undefined2 *)((longlong)puVar22 + 0x226) = 0xffff;
  *(undefined4 *)((longlong)puVar22 + 0x212) = 0xffffffff;
  *(undefined4 *)((longlong)puVar22 + 0x21a) = 0xffffffff;
  *(undefined2 *)(puVar22 + 0x84) = 0xffff;
  *(undefined4 *)((longlong)puVar22 + 0x20a) = 0xffffffff;
  uVar26 = uVar25;
  uVar30 = uVar25;
  if (0 < (int)local_244) {
    do {
      lVar28 = uVar30 * 0x74;
      lVar20 = *(longlong *)(puVar22 + 6);
      if ((local_228 == (undefined1 *)0x0) || ((int)local_230 <= (int)uVar26)) {
        uVar27 = *(undefined4 *)(lVar20 + 0x14 + lVar28);
        local_f0 = 0;
        uStack_d8 = 0;
        local_130 = 0xbf800000;
        uStack_128 = 0xbf80000000000000;
        uStack_ec = 0xffffffff;
        uStack_e8 = 0xffffffff;
        uStack_e4 = 0xffffffff;
        local_d0 = 0;
        local_e0 = 0xff00ff00ff;
        *(undefined8 *)(lVar20 + lVar28) = 0;
        ((undefined8 *)(lVar20 + lVar28))[1] = 0;
        puVar29 = (undefined8 *)(lVar20 + 0x10 + lVar28);
        *puVar29 = 0xbf800000;
        puVar29[1] = 0xbf80000000000000;
        puVar29 = (undefined8 *)(lVar20 + 0x20 + lVar28);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)(lVar20 + 0x30 + lVar28);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)(lVar20 + 0x40 + lVar28);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)(lVar20 + 0x50 + lVar28);
        *puVar29 = 0xffffffff00000000;
        puVar29[1] = 0xffffffffffffffff;
        puVar29 = (undefined8 *)(lVar20 + 0x60 + lVar28);
        *puVar29 = 0xff00ff00ff;
        puVar29[1] = 0;
        *(undefined4 *)(lVar20 + 0x70 + lVar28) = 0;
        *(undefined4 *)(lVar20 + 0x14 + lVar28) = uVar27;
        *(undefined1 *)(lVar20 + 0x6d + lVar28) = 1;
        *(undefined2 *)(lVar20 + 0x67 + lVar28) = 0x101;
        *(undefined1 *)(lVar20 + 0x66 + lVar28) = 1;
        *(short *)(lVar20 + 0x56 + lVar28) = (short)uVar26;
      }
      else {
        uVar12 = ((undefined8 *)(lVar28 + (longlong)local_228))[1];
        *(undefined8 *)(lVar20 + lVar28) = *(undefined8 *)(lVar28 + (longlong)local_228);
        ((undefined8 *)(lVar20 + lVar28))[1] = uVar12;
        puVar29 = (undefined8 *)(lVar28 + 0x10 + (longlong)local_228);
        uVar12 = puVar29[1];
        puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar28);
        *puVar2 = *puVar29;
        puVar2[1] = uVar12;
        puVar29 = (undefined8 *)(lVar28 + 0x20 + (longlong)local_228);
        uVar12 = puVar29[1];
        puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar28);
        *puVar2 = *puVar29;
        puVar2[1] = uVar12;
        puVar29 = (undefined8 *)(lVar28 + 0x30 + (longlong)local_228);
        uVar12 = puVar29[1];
        puVar2 = (undefined8 *)(lVar20 + 0x30 + lVar28);
        *puVar2 = *puVar29;
        puVar2[1] = uVar12;
        puVar29 = (undefined8 *)(lVar28 + 0x40 + (longlong)local_228);
        uVar12 = puVar29[1];
        puVar2 = (undefined8 *)(lVar20 + 0x40 + lVar28);
        *puVar2 = *puVar29;
        puVar2[1] = uVar12;
        puVar29 = (undefined8 *)(lVar28 + 0x50 + (longlong)local_228);
        uVar12 = puVar29[1];
        puVar2 = (undefined8 *)(lVar20 + 0x50 + lVar28);
        *puVar2 = *puVar29;
        puVar2[1] = uVar12;
        puVar29 = (undefined8 *)(lVar28 + 0x60 + (longlong)local_228);
        uVar12 = puVar29[1];
        puVar2 = (undefined8 *)(lVar20 + 0x60 + lVar28);
        *puVar2 = *puVar29;
        puVar2[1] = uVar12;
        *(undefined4 *)(lVar20 + 0x70 + lVar28) =
             *(undefined4 *)(lVar28 + 0x70 + (longlong)local_228);
      }
      *(undefined2 *)(*(longlong *)(puVar22 + 10) + uVar30 * 2) =
           *(undefined2 *)(lVar20 + 0x56 + lVar28);
      uVar18 = (int)uVar26 + 1;
      lVar20 = local_1d0;
      uVar26 = (ulonglong)uVar18;
      uVar30 = uVar30 + 1;
    } while ((int)uVar18 < (int)local_244);
  }
LAB_1802a1e87:
  if (local_218 != 0) {
    FUN_18026f680(local_218);
  }
  if ((char)puVar22[0x90] != '\0') {
    FUN_1802a8cb0(puVar22);
  }
  fVar43 = *(float *)(lVar20 + 0x1238);
  fVar39 = (float)puVar22[0x39];
  if ((fVar39 != 0.0) && (fVar39 != fVar43)) {
    fVar39 = fVar43 / fVar39;
    uVar26 = uVar25;
    if (3 < (int)uVar9) {
      do {
        lVar20 = (longlong)(int)uVar26;
        *(float *)(lVar20 * 0x74 + 0x10 + *(longlong *)(puVar22 + 6)) =
             fVar39 * *(float *)(lVar20 * 0x74 + 0x10 + *(longlong *)(puVar22 + 6));
        *(float *)(lVar20 * 0x74 + 0x84 + *(longlong *)(puVar22 + 6)) =
             fVar39 * *(float *)(lVar20 * 0x74 + 0x84 + *(longlong *)(puVar22 + 6));
        *(float *)(lVar20 * 0x74 + 0xf8 + *(longlong *)(puVar22 + 6)) =
             fVar39 * *(float *)(lVar20 * 0x74 + 0xf8 + *(longlong *)(puVar22 + 6));
        *(float *)(lVar20 * 0x74 + 0x16c + *(longlong *)(puVar22 + 6)) =
             fVar39 * *(float *)(lVar20 * 0x74 + 0x16c + *(longlong *)(puVar22 + 6));
        uVar18 = (int)uVar26 + 4;
        uVar26 = (ulonglong)uVar18;
      } while ((int)uVar18 < (int)(uVar9 - 3));
    }
    uVar18 = (uint)uVar26;
    while ((int)uVar18 < (int)uVar9) {
      lVar20 = (longlong)(int)uVar26 * 0x74;
      *(float *)(lVar20 + 0x10 + *(longlong *)(puVar22 + 6)) =
           fVar39 * *(float *)(lVar20 + 0x10 + *(longlong *)(puVar22 + 6));
      uVar18 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar18;
    }
  }
  puVar22[0x39] = (uint)fVar43;
  *(undefined1 *)(lVar21 + 0xd1) = 1;
  if (0 < (int)puVar22[100]) {
    FUN_18028a8d0(puVar22 + 100,0);
  }
  if ((short)puVar22[0x1e] == 0) {
    if ((*(short *)((longlong)puVar22 + 0x212) != -1) && ((float)puVar22[0x37] != fVar6)) {
      FUN_1802a5680((int)*(short *)((longlong)puVar22 + 0x212));
    }
    *(undefined2 *)(puVar22 + 0x85) = *(undefined2 *)((longlong)puVar22 + 0x212);
    puVar22[0x37] = 0x7f7fffff;
    *(undefined2 *)((longlong)puVar22 + 0x212) = 0xffff;
    sVar4 = (short)puVar22[0x84];
    if (sVar4 != -1) {
      FUN_1802a5680((longlong)sVar4,
                    *(undefined4 *)((longlong)sVar4 * 0x74 + 0x14 + *(longlong *)(puVar22 + 6)));
      *(undefined2 *)(puVar22 + 0x84) = 0xffff;
    }
    if ((short)puVar22[0x1e] == 0) {
      *(undefined2 *)(puVar22 + 0x86) = *(undefined2 *)((longlong)puVar22 + 0x216);
      *(undefined2 *)((longlong)puVar22 + 0x216) = 0xffff;
      if (*(short *)((longlong)puVar22 + 0x21a) != -1) {
        sVar4 = (short)puVar22[0x87];
        iVar17 = (int)sVar4;
        if (sVar4 != -1) {
          lVar21 = (longlong)*(short *)((longlong)puVar22 + 0x21a) * 0x74;
          iVar10 = (int)*(short *)(lVar21 + 0x56 + *(longlong *)(puVar22 + 6));
          if (iVar10 != iVar17) {
            iVar24 = 1;
            if (iVar17 < iVar10) {
              iVar24 = -1;
            }
            *(short *)(lVar21 + 0x56 + *(longlong *)(puVar22 + 6)) = sVar4;
            while (iVar10 = iVar10 + iVar24, iVar10 != iVar24 + iVar17) {
              psVar3 = (short *)((longlong)
                                 *(short *)(*(longlong *)(puVar22 + 10) + (longlong)iVar10 * 2) *
                                 0x74 + 0x56 + *(longlong *)(puVar22 + 6));
              *psVar3 = *psVar3 - (short)iVar24;
            }
            uVar26 = uVar25;
            if (0 < (int)puVar22[0x1b]) {
              do {
                *(short *)(*(longlong *)(puVar22 + 10) +
                          (longlong)
                          *(short *)((longlong)(int)uVar26 * 0x74 + 0x56 +
                                    *(longlong *)(puVar22 + 6)) * 2) = (short)uVar26;
                uVar9 = (int)uVar26 + 1;
                uVar26 = (ulonglong)uVar9;
              } while ((int)uVar9 < (int)puVar22[0x1b]);
            }
            *(undefined1 *)((longlong)puVar22 + 0x241) = 1;
          }
          *(undefined2 *)(puVar22 + 0x87) = 0xffff;
        }
      }
      lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar21 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(int *)(*(longlong *)(lVar21 + 0xec0) + 0x1594) == 0) {
        *(undefined2 *)((longlong)puVar22 + 0x21a) = 0xffff;
      }
    }
  }
  if ((char)puVar22[0x91] != '\0') {
    if (0 < (int)puVar22[0x1b]) {
      do {
        iVar17 = (int)uVar25;
        *(short *)((longlong)iVar17 * 0x74 + 0x56 + *(longlong *)(puVar22 + 6)) = (short)uVar25;
        *(short *)(*(longlong *)(puVar22 + 10) + (longlong)iVar17 * 2) = (short)uVar25;
        uVar25 = (ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < (int)puVar22[0x1b]);
    }
    *(undefined1 *)(puVar22 + 0x91) = 0;
    *(undefined1 *)((longlong)puVar22 + 0x241) = 1;
  }
  return 1;
}


