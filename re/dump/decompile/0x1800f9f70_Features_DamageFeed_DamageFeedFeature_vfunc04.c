// 0x1800f9f70  Features_DamageFeed_DamageFeedFeature_vfunc04
// size=2277 thunk=false
// signature: undefined Features_DamageFeed_DamageFeedFeature_vfunc04()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_DamageFeed_DamageFeedFeature_vfunc04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  char cVar9;
  float *pfVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_104 [3];
  longlong local_f8;
  longlong local_f0 [22];
  
  if ((DAT_18042586b == '\0') || (DAT_1803fa46f != '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar16 = *(longlong *)(param_1 + 8);
    if (lVar16 != lVar3) {
      do {
        local_f0[0] = lVar16;
        FUN_18020e450(lVar16 + 0x28);
        FUN_18020e450(lVar16 + 8);
        lVar16 = lVar16 + 0x70;
      } while (lVar16 != lVar3);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
      local_f0[0] = lVar16;
    }
    if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x28)) {
      return;
    }
    FUN_180217fc0();
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    return;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = *(longlong *)(lVar3 + 0xec0);
  fVar28 = *(float *)(lVar16 + 0x40);
  fVar27 = 0.0;
  if (0.0 <= fVar28) {
    fVar20 = DAT_1803809ec;
    if (fVar28 <= DAT_1803809ec) {
      fVar20 = fVar28;
    }
  }
  else {
    fVar20 = 0.0;
  }
  local_f8 = lVar16;
  FUN_1800f90b0(param_1,fVar20);
  cVar9 = DAT_1803fa545;
  plVar1 = (longlong *)(param_1 + 8);
  if ((*plVar1 == *(longlong *)(param_1 + 0x10)) && (DAT_1803fa545 != '\0')) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    if (*plVar1 == *(longlong *)(param_1 + 0x10)) {
      return;
    }
  }
  local_104[2] = 1.5;
  local_104[0] = 0.75;
  pfVar14 = local_104;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar14 = &DAT_1803da6a4;
  }
  pfVar10 = local_104 + 2;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar10 = pfVar14;
  }
  fVar28 = *pfVar10;
  lVar15 = DAT_1803fa5d0;
  local_104[2] = fVar28;
  if (DAT_1803fa5d0 == 0) {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1228);
  }
  FUN_18027a8a0(lVar15,fVar28 * DAT_180380fd8);
  plVar11 = plVar1;
  if (bVar7) {
    plVar11 = (longlong *)FUN_1800f9930();
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar8 = DAT_180380bb0;
  fVar19 = fVar28 * DAT_180380fd4 + *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  fVar29 = fVar28 * DAT_180381038;
  if (fVar28 * DAT_180381038 <= fVar19) {
    fVar29 = fVar19;
  }
  fVar19 = fVar28 * DAT_180380e9c;
  local_104[0] = fVar19;
  lVar15 = *plVar11;
  uVar18 = (plVar11[1] - lVar15 >> 4) * 0x6db6db6db6db6db7;
  fVar26 = 0.0;
  fVar25 = 0.0;
  if (uVar18 != 0) {
    fVar23 = 0.0;
    if (bVar7) {
      uVar17 = 0;
      do {
        uVar12 = uVar17;
        if (DAT_1804096e4 != '\0') {
          uVar12 = (uVar18 - uVar17) - 1;
        }
        fVar28 = (float)FUN_1800f80b0(lVar15 + uVar12 * 0x70);
        if (fVar26 <= fVar28) {
          fVar26 = fVar28;
        }
        fVar25 = fVar23 + fVar29;
        lVar15 = *plVar11;
        fVar23 = fVar23 + (fVar8 - *(float *)(lVar15 + 0x5c + uVar12 * 0x70)) * (fVar19 + fVar29);
        uVar17 = uVar17 + 1;
        lVar16 = local_f8;
        fVar28 = local_104[2];
      } while (uVar17 < uVar18);
    }
    else {
      uVar17 = 0;
      fVar28 = (float)((uint)fVar20 ^ DAT_1803817f0) * DAT_180380fe8;
      do {
        uVar12 = uVar17;
        if (DAT_1804096e4 != '\0') {
          uVar12 = (uVar18 - uVar17) - 1;
        }
        lVar16 = uVar12 * 0x70;
        fVar20 = (float)FUN_1800f80b0(lVar15 + lVar16);
        if (fVar26 <= fVar20) {
          fVar26 = fVar20;
        }
        lVar15 = *plVar1;
        if (*(char *)(lVar16 + 0x68 + lVar15) == '\0') {
          *(float *)(lVar16 + 100 + lVar15) = fVar23;
          *(undefined1 *)(lVar16 + 0x68 + lVar15) = 1;
          fVar20 = fVar23;
        }
        else {
          fVar20 = expf(fVar28);
          fVar20 = (fVar8 - fVar20) * (fVar23 - *(float *)(lVar16 + 100 + lVar15)) +
                   *(float *)(lVar16 + 100 + lVar15);
          *(float *)(lVar16 + 100 + lVar15) = fVar20;
        }
        if (fVar25 <= fVar20 + fVar29) {
          fVar25 = fVar20 + fVar29;
        }
        lVar15 = *plVar11;
        fVar23 = fVar23 + (fVar8 - *(float *)(lVar15 + 0x5c + lVar16)) * (fVar19 + fVar29);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar18);
      lVar16 = local_f8;
      fVar19 = local_104[0];
      fVar28 = local_104[2];
    }
  }
  if (fVar26 <= DAT_1803810c8) {
    fVar26 = DAT_1803810c8;
  }
  if (fVar25 <= fVar29) {
    fVar25 = fVar29;
  }
  if (*(char *)(lVar16 + 0x108) == '\0') {
    DAT_180425a08 = '\0';
LAB_1800fa2de:
    if (DAT_1804096e5 == '\0') {
      fVar28 = fVar28 * DAT_180381004;
      fVar20 = fVar28;
      goto LAB_1800fa38c;
    }
  }
  else {
    if (DAT_180425a08 == '\0') goto LAB_1800fa2de;
    DAT_1803e7bb4 = *(float *)(lVar16 + 0x104) - _DAT_1803fe41c;
    DAT_1803e7bb0 = *(float *)(lVar16 + 0x100) - _DAT_1803fe418;
    DAT_1804096e5 = '\x01';
  }
  fVar28 = 0.0;
  if (0.0 <= DAT_1803e7bb4) {
    fVar20 = *(float *)(lVar16 + 0x34) - fVar25;
    if (0.0 <= fVar20) {
      fVar28 = fVar20;
    }
    if (DAT_1803e7bb4 <= fVar28) {
      fVar28 = DAT_1803e7bb4;
    }
  }
  fVar20 = 0.0;
  if (0.0 <= DAT_1803e7bb0) {
    fVar23 = *(float *)(lVar16 + 0x30) - fVar26;
    if (0.0 <= fVar23) {
      fVar20 = fVar23;
    }
    if (DAT_1803e7bb0 <= fVar20) {
      fVar20 = DAT_1803e7bb0;
    }
  }
LAB_1800fa38c:
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)(lVar3 + 0xec0);
  *(uint *)(lVar15 + 0x1f48) = *(uint *)(lVar15 + 0x1f48) | 1;
  *(float *)(lVar15 + 0x1f58) = fVar20;
  *(float *)(lVar15 + 0x1f5c) = fVar28;
  *(undefined8 *)(lVar15 + 0x1f60) = 0;
  *(undefined4 *)(lVar15 + 0x1f4c) = 1;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)(lVar3 + 0xec0);
  *(uint *)(lVar15 + 0x1f48) = *(uint *)(lVar15 + 0x1f48) | 2;
  *(float *)(lVar15 + 0x1f68) = fVar26;
  *(float *)(lVar15 + 0x1f6c) = fVar25;
  *(undefined4 *)(lVar15 + 0x1f50) = 1;
  local_104[0] = 0.0;
  local_104[1] = 0.0;
  FUN_18026aad0(2,local_104);
  FUN_18026a940(4,0);
  local_104[0] = 0.0;
  local_104[1] = 0.0;
  FUN_18026aad0(5,local_104);
  FUN_180276630("##mayrr_damagefeed",0,0x311bf);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar15 + 0x1520) + 0xce) = 1;
  lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x1520) + 0x2c8);
  lVar4 = *(longlong *)(lVar15 + 0x38);
  local_104[0] = *(float *)(lVar4 + 0x40);
  local_104[1] = *(float *)(lVar4 + 0x44);
  local_f0[0] = *(longlong *)(lVar4 + 0x38);
  FUN_180292550(lVar15,local_f0,local_104,0);
  fVar23 = DAT_180380fcc;
  fVar26 = DAT_180380ab0;
  fVar25 = DAT_180380970;
  if (uVar18 != 0) {
    uVar17 = 0;
    if (bVar7) {
      local_104[0] = fVar19 + fVar29;
      do {
        uVar12 = uVar17;
        if (DAT_1804096e4 != '\0') {
          uVar12 = (uVar18 - uVar17) - 1;
        }
        lVar16 = uVar12 * 0x70 + *plVar11;
        fVar19 = fVar8 - *(float *)(lVar16 + 0x58);
        fVar24 = fVar8 - fVar19 * fVar19 * fVar19;
        fVar19 = *(float *)(lVar16 + 0x5c);
        fVar21 = fVar8 - fVar19;
        fVar23 = fVar24;
        if (fVar21 <= fVar24) {
          fVar23 = fVar21;
        }
        if (fVar25 < fVar23 * fVar26) {
          uVar22 = FUN_1800f80b0(lVar16);
          FUN_1800f8720(lVar15,lVar16,
                        CONCAT44(fVar28 + fVar27,
                                 (fVar20 - (fVar8 - fVar24) * local_104[2] * DAT_180381004) -
                                 local_104[2] * DAT_180380fcc * fVar19),uVar22,fVar29,
                        fVar23 * fVar26);
        }
        uVar17 = uVar17 + 1;
        fVar27 = fVar27 + local_104[0];
        lVar16 = local_f8;
      } while (uVar17 < uVar18);
    }
    else {
      do {
        uVar12 = uVar17;
        if (DAT_1804096e4 != '\0') {
          uVar12 = (uVar18 - uVar17) - 1;
        }
        lVar16 = uVar12 * 0x70 + *plVar11;
        fVar27 = fVar8 - *(float *)(lVar16 + 0x58);
        fVar21 = fVar8 - fVar27 * fVar27 * fVar27;
        fVar27 = *(float *)(lVar16 + 0x5c);
        fVar26 = fVar8 - fVar27;
        fVar19 = fVar21;
        if (fVar26 <= fVar21) {
          fVar19 = fVar26;
        }
        if (fVar25 < fVar19) {
          fVar26 = *(float *)(lVar16 + 100);
          uVar22 = FUN_1800f80b0(lVar16);
          FUN_1800f8720(lVar15,lVar16,
                        CONCAT44(fVar28 + fVar26,
                                 (fVar20 - (fVar8 - fVar21) * local_104[2] * DAT_180381004) -
                                 local_104[2] * fVar23 * fVar27),uVar22,fVar29,fVar19);
        }
        uVar17 = uVar17 + 1;
        lVar16 = local_f8;
      } while (uVar17 < uVar18);
    }
  }
  piVar2 = (int *)(lVar15 + 0xa0);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    puVar13 = (undefined4 *)(*(longlong *)(lVar15 + 0x38) + 0x38);
  }
  else {
    puVar13 = (undefined4 *)
              ((longlong)(*(int *)(lVar15 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar15 + 0xa8));
  }
  uVar22 = puVar13[1];
  uVar5 = puVar13[2];
  uVar6 = puVar13[3];
  *(undefined4 *)(lVar15 + 0x60) = *puVar13;
  *(undefined4 *)(lVar15 + 100) = uVar22;
  *(undefined4 *)(lVar15 + 0x68) = uVar5;
  *(undefined4 *)(lVar15 + 0x6c) = uVar6;
  FUN_180292360(lVar15);
  if ((((DAT_180425a08 == '\0') && (cVar9 != '\0')) && (*(char *)(lVar16 + 0xb30) != '\0')) &&
     (cVar9 = FUN_180279410(0), cVar9 != '\0')) {
    DAT_180425a08 = '\x01';
    _DAT_1803fe41c = *(float *)(lVar16 + 0xae4) - fVar28;
    _DAT_1803fe418 = *(float *)(lVar16 + 0xae0) - fVar20;
  }
  FUN_180278d40();
  FUN_18026abb0(3);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar16 = (longlong)*(int *)(lVar3 + 0x1fe8);
  if (*(int *)(lVar3 + 0x1fe8) < 1) {
    FUN_18027e9c0("Calling PopFont() too many times!");
  }
  else {
    lVar15 = *(longlong *)(lVar3 + 0x1ff0);
    FUN_18027a5f0(*(undefined8 *)(lVar15 + -0x10 + lVar16 * 0x10),
                  *(undefined4 *)(lVar15 + -8 + lVar16 * 0x10),
                  *(undefined4 *)(lVar15 + -4 + lVar16 * 0x10));
    *(int *)(lVar3 + 0x1fe8) = *(int *)(lVar3 + 0x1fe8) + -1;
  }
  return;
}


