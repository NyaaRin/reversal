// 0x18009f1a0  Features_Weapons_Backends_ZCityWeaponBackend_vfunc28
// size=4994 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc28()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_ZCityWeaponBackend_vfunc28
               (longlong param_1,longlong param_2,int *param_3)

{
  code *pcVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_3a8 [32];
  float *local_388;
  float *local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  int local_340;
  char *local_338;
  double local_330;
  char local_328;
  longlong *local_320;
  undefined8 uStack_318;
  longlong local_310;
  longlong local_308;
  undefined4 local_2ff;
  undefined2 local_2fb;
  undefined1 local_2f9;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2e8;
  float local_2e0;
  int local_2dc;
  undefined8 local_2d8;
  uint local_2d0;
  longlong local_2c8;
  undefined4 local_2bf;
  undefined2 local_2bb;
  undefined1 local_2b9;
  undefined4 local_2af;
  undefined2 local_2ab;
  undefined1 local_2a9;
  longlong local_2a8;
  undefined4 local_29f;
  undefined2 local_29b;
  undefined1 local_299;
  undefined4 local_28f;
  undefined2 local_28b;
  undefined1 local_289;
  longlong local_288;
  undefined4 local_27f;
  undefined2 local_27b;
  undefined1 local_279;
  longlong local_278;
  undefined4 local_26f;
  undefined2 local_26b;
  undefined1 local_269;
  undefined4 local_25f;
  undefined2 local_25b;
  undefined1 local_259;
  longlong local_258;
  undefined4 local_24f;
  undefined2 local_24b;
  undefined1 local_249;
  undefined4 local_23f;
  undefined2 local_23b;
  undefined1 local_239;
  undefined4 local_22f;
  undefined2 local_22b;
  undefined1 local_229;
  longlong local_228;
  undefined4 local_21f;
  undefined2 local_21b;
  undefined1 local_219;
  undefined4 local_20f;
  undefined2 local_20b;
  undefined1 local_209;
  longlong local_208;
  undefined4 local_1ff;
  undefined2 local_1fb;
  undefined1 local_1f9;
  undefined4 local_1ef;
  undefined2 local_1eb;
  undefined1 local_1e9;
  undefined4 local_1df;
  undefined2 local_1db;
  undefined1 local_1d9;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  uint local_1c0;
  uint local_1b8;
  uint local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined1 local_16c [12];
  float local_160;
  float fStack_15c;
  undefined4 local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_e0;
  
  if (param_2 == 0) {
    return;
  }
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_3a8;
  if (param_3 == (int *)0x0) {
    return;
  }
  if (DAT_1803fa678 == 0) {
    return;
  }
  if (DAT_1803fa608 == (float *)0x0) {
    return;
  }
  iVar7 = FUN_180097c30();
  if (iVar7 != 3) {
    return;
  }
  cVar6 = FUN_180097e70();
  if (cVar6 != '\0') {
    return;
  }
  if (*param_3 == *(int *)(param_1 + 0x68)) {
    return;
  }
  *(int *)(param_1 + 0x68) = *param_3;
  DAT_180423986 = 0;
  DAT_180423974 = 1;
  DAT_180423978 = (code *)0x0;
  DAT_18040a208 = '\0';
  if (*(longlong *)(param_1 + 8) != param_2) {
    DAT_18040a208 = 0;
    DAT_180423974 = 1;
    DAT_180423978 = (code *)0x0;
    DAT_180423986 = 0;
    return;
  }
  if (*(char *)(param_1 + 0xaa) == '\0') {
    DAT_18040a208 = 0;
    DAT_180423974 = 1;
    DAT_180423978 = (code *)0x0;
    DAT_180423986 = 0;
    return;
  }
  local_320 = (longlong *)0x0;
  uStack_318 = 0;
  local_310 = 0;
  FUN_18001bcd0(0,&local_320);
  if ((local_320 == (longlong *)0x0) || (local_320[1] == 0)) {
LAB_1800a0469:
    if (local_320 != (longlong *)0x0) {
      (**(code **)*local_320)();
      DAT_1803fa338 = local_310 != 0;
      DAT_1803fa330 = local_308;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_310;
      }
      DAT_1803fa339 = local_2ff;
      DAT_1803fa33d = local_2fb;
      DAT_1803fa33f = local_2f9;
    }
  }
  else {
    iVar7 = (**(code **)*local_320)();
    local_2dc = iVar7;
    cVar6 = FUN_18001e2b0(param_2,local_320);
    if ((cVar6 == '\0') ||
       (cVar6 = (**(code **)(*local_320 + 0x138))(local_320,0xffffffff,9), cVar6 == '\0')) {
      plVar4 = local_320;
      if ((local_320 != (longlong *)0x0) &&
         (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
        (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
      }
      if (local_320 == (longlong *)0x0) {
        return;
      }
      (**(code **)*local_320)();
      if (local_310 == 0) {
        DAT_1803fa330 = local_308;
        DAT_1803fa339 = local_2ff;
        DAT_1803fa33d = local_2fb;
        local_209 = local_2f9;
      }
      else {
        DAT_1803fa330 = local_310;
        DAT_1803fa339 = local_20f;
        DAT_1803fa33d = local_20b;
      }
      DAT_1803fa338 = local_310 != 0;
      DAT_1803fa33f = local_209;
      return;
    }
    uVar8 = (**(code **)*local_320)();
    fVar16 = DAT_180381384;
    fVar21 = 0.0;
    local_120 = 0.0;
    local_11c = 0.0;
    local_118 = 0;
    local_160 = 0.0;
    fStack_15c = 0.0;
    local_158 = 0;
    local_150 = 0.0;
    fStack_14c = 0.0;
    local_148 = 0.0;
    local_2e0 = -1.0;
    if (*(char *)(param_1 + 0xad) == '\0') {
      fVar14 = (float)*(double *)(DAT_1803fa608 + 10);
    }
    else {
      fVar14 = 0.0;
    }
    local_378 = (double)CONCAT71(local_378._1_7_,1);
    local_380 = (float *)CONCAT44(local_380._4_4_,fVar14);
    local_388 = &local_150;
    cVar6 = FUN_1800985f0(local_320,param_2,uVar8,&local_120);
    if (cVar6 != '\0') {
      local_388 = &local_2e0;
      cVar6 = FUN_180098080(local_320,param_2,uVar8,&local_160);
      if (cVar6 != '\0') {
        FUN_1802d3e70(&local_160,&local_130,&local_140,&local_110);
        FUN_1802d4050(&local_120,&local_f0);
        plVar4 = local_320;
        fVar14 = DAT_180380a58;
        fVar18 = local_12c * local_ec + local_130 * local_f0 + local_128 * local_e8;
        if (fVar18 <= DAT_180380a58) {
          if ((local_320 != (longlong *)0x0) &&
             (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
            (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
          }
          if (local_320 == (longlong *)0x0) {
            return;
          }
          (**(code **)*local_320)();
          if (local_310 == 0) {
            DAT_1803fa330 = local_2c8;
            DAT_1803fa339 = local_2bf;
            DAT_1803fa33d = local_2bb;
            local_1d9 = local_2b9;
          }
          else {
            DAT_1803fa330 = local_310;
            DAT_1803fa339 = local_1df;
            DAT_1803fa33d = local_1db;
          }
          DAT_1803fa338 = local_310 != 0;
          DAT_1803fa33f = local_1d9;
          return;
        }
        fVar23 = (local_13c * local_ec + local_140 * local_f0 + local_138 * local_e8) / fVar18;
        fVar22 = local_10c * local_ec;
        fVar15 = local_110 * local_f0;
        fVar17 = local_108 * local_e8;
        cVar6 = FUN_180097e70();
        plVar4 = local_320;
        uVar3 = _DAT_1803817c0;
        fVar2 = DAT_180380938;
        if (cVar6 == '\0') {
          fVar14 = DAT_180380bb0;
        }
        if (((((((uint)fVar23 & 0x7f800000) == 0x7f800000) ||
              (fVar18 = (fVar22 + fVar15 + fVar17) / fVar18,
              ((uint)fVar18 & 0x7f800000) == 0x7f800000)) ||
             (fVar14 <= (float)((uint)fVar23 & _DAT_1803817c0))) ||
            ((fVar14 <= (float)((uint)fVar18 & _DAT_1803817c0) ||
             (local_1d8 = local_150, ((uint)local_150 & 0x7f800000) == 0x7f800000)))) ||
           ((local_1d0 = fStack_14c, ((uint)fStack_14c & 0x7f800000) == 0x7f800000 ||
            ((local_1c8 = local_148, ((uint)local_148 & 0x7f800000) == 0x7f800000 ||
             (fStack_14c * fStack_14c + local_150 * local_150 + local_148 * local_148 <=
              DAT_180380938)))))) {
          if ((local_320 != (longlong *)0x0) &&
             (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
            (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
          }
          if (local_320 == (longlong *)0x0) {
            return;
          }
          (**(code **)*local_320)();
          if (local_310 == 0) {
            DAT_1803fa330 = local_208;
            DAT_1803fa339 = local_1ff;
            DAT_1803fa33d = local_1fb;
            local_239 = local_1f9;
          }
          else {
            DAT_1803fa330 = local_310;
            DAT_1803fa339 = local_23f;
            DAT_1803fa33d = local_23b;
          }
          DAT_1803fa338 = local_310 != 0;
          DAT_1803fa33f = local_239;
          return;
        }
        cVar6 = FUN_180097d30();
        plVar4 = local_320;
        if (cVar6 != '\0') {
          if ((local_320 != (longlong *)0x0) &&
             (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
            (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
          }
          if (local_320 == (longlong *)0x0) {
            return;
          }
          (**(code **)*local_320)();
          if (local_310 == 0) {
            DAT_1803fa330 = local_2a8;
            DAT_1803fa339 = local_29f;
            DAT_1803fa33d = local_29b;
            local_2a9 = local_299;
          }
          else {
            DAT_1803fa330 = local_310;
            DAT_1803fa339 = local_2af;
            DAT_1803fa33d = local_2ab;
          }
          DAT_1803fa338 = local_310 != 0;
          DAT_1803fa33f = local_2a9;
          return;
        }
        if (*(char *)(param_1 + 0x54) != '\0') {
          for (local_2f0 = local_160 - *(float *)(param_1 + 0x48); DAT_180381188 < local_2f0;
              local_2f0 = local_2f0 + DAT_180381424) {
          }
          for (; local_2f0 < DAT_180381420; local_2f0 = local_2f0 + DAT_18038120c) {
          }
          for (local_2e8 = fStack_15c - *(float *)(param_1 + 0x4c); DAT_180381188 < local_2e8;
              local_2e8 = local_2e8 + DAT_180381424) {
          }
          for (; local_2e8 < DAT_180381420; local_2e8 = local_2e8 + DAT_18038120c) {
          }
          fVar21 = (float)fmaxf((uint)local_2f0 & uVar3,(uint)local_2e8 & uVar3);
        }
        *(ulonglong *)(param_1 + 0x48) = CONCAT44(fStack_15c,local_160);
        *(undefined4 *)(param_1 + 0x50) = local_158;
        *(undefined1 *)(param_1 + 0x54) = 1;
        if ((DAT_18040a208 == '\0') && (3 < *(int *)(param_1 + 0x2c))) {
          fVar14 = (float)fmaxf(*(uint *)(param_1 + 0x24) & uVar3,*(uint *)(param_1 + 0x28) & uVar3)
          ;
          fVar15 = fVar14 * DAT_180380e9c + DAT_1803809c4 + fVar21 * _DAT_1803809c8;
          fVar17 = (float)((uint)(fVar23 - *(float *)(param_1 + 0x1c)) & uVar3);
          fVar22 = (float)((uint)(fVar18 - *(float *)(param_1 + 0x20)) & uVar3);
          fVar14 = (float)fmaxf(fVar17,fVar22);
          if (fVar14 <= fVar15) {
            *(undefined4 *)(param_1 + 0x44) = 0;
          }
          else {
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
            if (*(int *)(param_1 + 0x44) < 3) {
              DAT_180423974 = 1;
              iVar9 = DAT_1803f9208 + 1;
              bVar13 = DAT_1803f9208 == (DAT_1803f9208 / 0x14) * 0x14;
              DAT_1803f9208 = iVar9;
              if (bVar13) {
                local_368 = (double)fVar18;
                local_370 = (double)fVar23;
                local_378 = (double)*(float *)(param_1 + 0x20);
                local_380 = (float *)(double)*(float *)(param_1 + 0x1c);
                local_388 = (float *)(double)fVar15;
                local_360 = (double)CONCAT44(local_360._4_4_,*(int *)(param_1 + 0x44));
                FUN_180014410("[ZCITY-TICK] HELD slew=%.2f d=(%.4f,%.4f) band=%.4f est=(%.4f,%.4f) got=(%.4f,%.4f) hold=%d\n"
                              ,(double)fVar21,(double)fVar17,(double)fVar22);
              }
              plVar4 = local_320;
              if ((local_320 != (longlong *)0x0) &&
                 (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
                (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
              }
              if (local_320 == (longlong *)0x0) {
                return;
              }
              (**(code **)*local_320)();
              if (local_310 == 0) {
                DAT_1803fa330 = local_288;
                DAT_1803fa339 = local_27f;
                DAT_1803fa33d = local_27b;
                local_289 = local_279;
              }
              else {
                DAT_1803fa330 = local_310;
                DAT_1803fa339 = local_28f;
                DAT_1803fa33d = local_28b;
              }
              DAT_1803fa338 = local_310 != 0;
              DAT_1803fa33f = local_289;
              return;
            }
          }
        }
        DAT_180423974 = 0;
        local_2d8 = 0;
        local_2d0 = 0;
        cVar6 = '\0';
        local_328 = '\0';
        pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar11 = (*pcVar1)(DAT_1803fa360,uVar10);
        if (lVar11 == 0) {
          uVar19 = (uint)local_2d8;
          uVar20 = (uint)((ulonglong)local_2d8 >> 0x20);
        }
        else {
          puVar12 = (undefined8 *)FUN_18001c430(lVar11,local_16c);
          local_2d8 = *puVar12;
          uVar19 = (uint)local_2d8;
          uVar20 = (uint)((ulonglong)local_2d8 >> 0x20);
          local_2d0 = *(uint *)(puVar12 + 1);
          local_1c0 = uVar19;
          if ((((uVar19 & 0x7f800000) == 0x7f800000) ||
              (local_1b8 = uVar20, (uVar20 & 0x7f800000) == 0x7f800000)) ||
             (local_1b0 = local_2d0, (local_2d0 & 0x7f800000) == 0x7f800000)) {
            cVar6 = '\0';
            local_328 = cVar6;
          }
          else {
            cVar6 = '\x01';
            local_328 = cVar6;
          }
        }
        uVar5 = local_2d0;
        plVar4 = local_320;
        if (cVar6 == '\0') {
          if ((local_320 != (longlong *)0x0) &&
             (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
            (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
          }
          if (local_320 == (longlong *)0x0) {
            return;
          }
          (**(code **)*local_320)();
          if (local_310 == 0) {
            DAT_1803fa330 = local_258;
            DAT_1803fa339 = local_24f;
            DAT_1803fa33d = local_24b;
            local_259 = local_249;
          }
          else {
            DAT_1803fa330 = local_310;
            DAT_1803fa339 = local_25f;
            DAT_1803fa33d = local_25b;
          }
          DAT_1803fa338 = local_310 != 0;
          DAT_1803fa33f = local_259;
          return;
        }
        local_184 = local_140 * fVar23;
        local_180 = local_13c * fVar23;
        local_17c = local_138 * fVar23;
        local_178 = local_184 + local_130;
        local_174 = local_180 + local_12c;
        local_170 = local_17c + local_128;
        local_190 = local_110 * fVar18;
        local_18c = local_10c * fVar18;
        local_188 = local_108 * fVar18;
        local_1a8 = local_190 + local_178;
        fStack_fc = local_18c + local_174;
        local_f8 = local_188 + local_170;
        local_100 = local_1a8;
        if (((((uint)local_1a8 & 0x7f800000) == 0x7f800000) ||
            (local_1a0 = fStack_fc, ((uint)fStack_fc & 0x7f800000) == 0x7f800000)) ||
           ((local_198 = local_f8, ((uint)local_f8 & 0x7f800000) == 0x7f800000 ||
            (fStack_fc * fStack_fc + local_1a8 * local_1a8 + local_f8 * local_f8 <= fVar2)))) {
          if ((local_320 != (longlong *)0x0) &&
             (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
            (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
          }
          if (local_320 == (longlong *)0x0) {
            return;
          }
          (**(code **)*local_320)();
          if (local_310 == 0) {
            DAT_1803fa330 = local_278;
            DAT_1803fa339 = local_26f;
            DAT_1803fa33d = local_26b;
            local_1e9 = local_269;
          }
          else {
            DAT_1803fa330 = local_310;
            DAT_1803fa339 = local_1ef;
            DAT_1803fa33d = local_1eb;
          }
          DAT_1803fa338 = local_310 != 0;
          DAT_1803fa33f = local_1e9;
          return;
        }
        (*(code *)PTR_FUN_1803da000)(&local_100);
        _DAT_180430160 = CONCAT44(fStack_14c,local_150);
        DAT_180430168 = local_148;
        _DAT_180430170 = CONCAT44(fStack_fc,local_100);
        DAT_180430178 = local_f8;
        _DAT_180430190 = CONCAT44(uVar20,uVar19);
        _DAT_1803e9ac8 = CONCAT44(fStack_15c,local_160);
        DAT_1803e9ad0 = local_158;
        DAT_1803e91f8 = (double)*DAT_1803fa608;
        DAT_180430198 = uVar5;
        DAT_180423980 = FUN_180099160(local_320,uVar8);
        fVar21 = local_2e0;
        DAT_180423986 = 1;
        DAT_180423989 = 1;
        if (DAT_18040a208 != '\0') {
          DAT_180423978 = FUN_1800961c0;
          DAT_18042398b = *(char *)(param_1 + 0xad) == '\0';
        }
        local_2f8 = 0.0;
        local_2f4 = 0.0;
        local_380 = &local_2f4;
        local_388 = &local_2f8;
        DAT_180423968 = param_2;
        cVar6 = FUN_180099250(&local_160,DAT_180423980,(int)*(undefined8 *)(DAT_1803fa608 + 4),
                              local_2e0);
        fVar2 = local_2f4;
        fVar14 = local_2f8;
        if (cVar6 != '\0') {
          fVar16 = (float)fmaxf((uint)(fVar23 - local_2f8) & uVar3,
                                (uint)(fVar18 - local_2f4) & uVar3);
        }
        iVar9 = DAT_1803fd080 + 1;
        bVar13 = DAT_1803fd080 == (DAT_1803fd080 / 0xf0) * 0xf0;
        DAT_1803e9218 = fVar16;
        DAT_1803fd080 = iVar9;
        if (bVar13) {
          local_330 = (double)DAT_1803e87d0;
          local_338 = "pack-trace";
          if (DAT_18040a208 != '\0') {
            local_338 = "official-pose";
          }
          local_348 = (double)local_11c;
          local_350 = (double)local_120;
          local_358 = (double)fStack_15c;
          local_360 = (double)local_160;
          local_368 = (double)fVar21;
          local_370 = (double)fVar16;
          local_378 = (double)fVar2;
          local_380 = (float *)(double)fVar14;
          local_340 = *param_3;
          local_388 = (float *)0x0;
          FUN_180014410("[ZCITY-TICK] r=%.4f u=%.4f bias=(%.4f,%.4f) prank=(%.4f,%.4f) unexp=%.4f post=%.0f eye=(%.2f,%.2f) raw=(%.2f,%.2f) cmd#%d method=%s animAge=%.3f\n"
                        ,(double)fVar23,(double)fVar18,0);
        }
        plVar4 = local_320;
        if ((local_320 != (longlong *)0x0) &&
           (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
          (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
        }
        goto LAB_1800a0469;
      }
    }
    plVar4 = local_320;
    if ((local_320 != (longlong *)0x0) &&
       (iVar9 = (**(code **)*local_320)(local_320), iVar7 < iVar9)) {
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar7);
    }
    if (local_320 != (longlong *)0x0) {
      (**(code **)*local_320)();
      if (local_310 == 0) {
        DAT_1803fa330 = local_228;
        DAT_1803fa339 = local_21f;
        DAT_1803fa33d = local_21b;
        local_229 = local_219;
      }
      else {
        DAT_1803fa330 = local_310;
        DAT_1803fa339 = local_22f;
        DAT_1803fa33d = local_22b;
      }
      DAT_1803fa338 = local_310 != 0;
      DAT_1803fa33f = local_229;
    }
  }
  return;
}


