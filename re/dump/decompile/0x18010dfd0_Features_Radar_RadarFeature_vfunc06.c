// 0x18010dfd0  Features_Radar_RadarFeature_vfunc06
// size=5568 thunk=false
// signature: undefined Features_Radar_RadarFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Radar_RadarFeature_vfunc06(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong *plVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_258 [32];
  float *local_238;
  float *local_230;
  float *local_228;
  char local_218;
  char local_217;
  char local_216;
  char local_215;
  char local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  undefined4 *local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  longlong *local_178;
  float local_170;
  float local_16c;
  float local_168;
  undefined8 *local_160;
  float local_158;
  float local_154;
  longlong local_150;
  undefined4 *local_148;
  undefined4 *local_140;
  undefined8 *local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float local_f4;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_120 = 0x93fd561a96ab0c67;
  local_128 = 0x63c2f5206022a3b5;
  plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
  plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1d0,&local_128);
  pcVar15 = (char *)FUN_1801fcfc0(*plVar14 + 0x28);
  if ((((*pcVar15 != '\0') && (DAT_1803fa608 != 0)) && (DAT_1803fa360 != (longlong *)0x0)) &&
     (DAT_1803fa668 != (longlong *)0x0)) {
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(longlong *)(lVar22 + 0xec0) != 0) &&
       (*(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520) != 0)) {
      pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))(DAT_1803fa668);
      plVar14 = (longlong *)(*pcVar4)(DAT_1803fa360,uVar10);
      if (plVar14 != (longlong *)0x0) {
        local_178 = plVar14;
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = *(longlong *)(lVar22 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1520) + 0x2c8);
        if (lVar5 != 0) {
          local_150 = lVar5;
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar38 = DAT_180381138;
          fVar31 = *(float *)(*(longlong *)(lVar22 + 0xec0) + 0x30);
          if ((DAT_1803810d0 <= fVar31) &&
             (fVar29 = *(float *)(*(longlong *)(lVar22 + 0xec0) + 0x34), DAT_1803810d0 <= fVar29)) {
            local_194 = 600.0;
            local_198 = 120.0;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x50274704b678695f;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pfVar17 = (float *)FUN_180202dc0(*plVar16 + 0x28);
            pfVar19 = &local_198;
            if (fVar38 <= *pfVar17) {
              pfVar19 = pfVar17;
            }
            pfVar18 = &local_194;
            if (*pfVar17 <= DAT_18038125c) {
              pfVar18 = pfVar19;
            }
            fVar38 = *pfVar18;
            local_1fc = 1.0;
            local_200 = 0.0;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x7ce33bb364b938d2;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pfVar17 = (float *)FUN_180202dc0(*plVar16 + 0x28);
            fVar30 = DAT_180380bb0;
            pfVar19 = &local_200;
            if (0.0 <= *pfVar17) {
              pfVar19 = pfVar17;
            }
            pfVar18 = &local_1fc;
            if (*pfVar17 <= DAT_180380bb0) {
              pfVar18 = pfVar19;
            }
            fVar34 = *pfVar18;
            local_1fc = 1.0;
            local_200 = 0.0;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x7ce33cb364b93a85;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pfVar17 = (float *)FUN_180202dc0(*plVar16 + 0x28);
            fVar28 = DAT_1803811c4;
            pfVar19 = &local_200;
            if (0.0 <= *pfVar17) {
              pfVar19 = pfVar17;
            }
            pfVar18 = &local_1fc;
            if (*pfVar17 <= fVar30) {
              pfVar18 = pfVar19;
            }
            fVar35 = *pfVar18;
            local_190 = 10000.0;
            local_180 = 250.0;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x7138abbc8fbd554b;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pfVar17 = (float *)FUN_180202dc0(*plVar16 + 0x28);
            pfVar19 = &local_180;
            if (fVar28 <= *pfVar17) {
              pfVar19 = pfVar17;
            }
            pfVar18 = &local_190;
            if (*pfVar17 <= DAT_1803812ac) {
              pfVar18 = pfVar19;
            }
            local_200 = *pfVar18;
            local_170 = 1.0;
            local_18c = 0.0;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x21306c17f9cf4cda;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pfVar17 = (float *)FUN_180202dc0(*plVar16 + 0x28);
            fVar28 = DAT_180380ac0;
            pfVar19 = &local_18c;
            if (0.0 <= *pfVar17) {
              pfVar19 = pfVar17;
            }
            pfVar18 = &local_170;
            if (*pfVar17 <= fVar30) {
              pfVar18 = pfVar19;
            }
            fVar30 = *pfVar18;
            fVar34 = (fVar31 - fVar38) * fVar34;
            fVar35 = (fVar29 - fVar38) * fVar35;
            fVar37 = fVar35 + fVar38;
            fVar36 = fVar34 + fVar38;
            local_1e4 = (fVar36 + fVar34) * DAT_180380ac0;
            local_1e0 = (fVar37 + fVar35) * DAT_180380ac0;
            local_1d8 = fVar34;
            local_1d4 = fVar35;
            local_1c0 = fVar36;
            local_1bc = fVar37;
            local_1a0 = local_1e4;
            local_19c = local_1e0;
            local_188 = local_1e0;
            local_184 = local_1e4;
            if ((DAT_18040a3c0 == '\0') || (DAT_18040a3b8 == 0)) {
              fVar30 = fVar30 + DAT_180380a88;
              if (DAT_180380bb0 < fVar30) {
                fVar30 = DAT_180380bb0;
              }
              fVar30 = fVar30 * DAT_1803811c8;
              local_1b8 = (undefined4 *)(lVar5 + 0x50);
              uVar10 = DAT_180380fe0;
            }
            else {
              local_210 = fVar34 / fVar31;
              local_20c = fVar35 / fVar29;
              local_208 = fVar36 / fVar31;
              local_204 = fVar37 / fVar29;
              if ((DAT_18040a3b8 == *(longlong *)(lVar5 + 0x78)) &&
                 (*(longlong *)(lVar5 + 0x70) == 0)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
                local_108 = 0;
                uStack_100 = DAT_18040a3b8;
                FUN_1802926d0(lVar5,&local_108);
              }
              uVar10 = DAT_180380fe0;
              uVar2 = *(undefined4 *)(lVar5 + 0x20);
              local_238 = (float *)CONCAT44(local_238._4_4_,0xf0);
              FUN_180294990(lVar5,&local_1d8,&local_1c0,DAT_180380fe0);
              puVar23 = (undefined4 *)(lVar5 + 0x50);
              local_1b8 = puVar23;
              FUN_1802938c0(lVar5,*(undefined8 *)(lVar5 + 0x58),*puVar23,0xffffffff);
              *puVar23 = 0;
              local_228 = &local_208;
              local_230 = &local_210;
              local_238 = &local_1c0;
              FUN_180297890(lVar5,uVar2,*(undefined4 *)(lVar5 + 0x20),&local_1d8);
              if (bVar7) {
                iVar3 = *(int *)(lVar5 + 0xb0);
                iVar11 = iVar3 + -1;
                *(int *)(lVar5 + 0xb0) = iVar11;
                if (iVar11 == 0) {
                  local_108 = 0;
                  uStack_100 = 0;
                }
                else {
                  puVar25 = (undefined8 *)
                            (*(longlong *)(lVar5 + 0xb8) + ((longlong)iVar3 + -2) * 0x10);
                  local_108 = *puVar25;
                  uStack_100 = puVar25[1];
                }
                *(undefined4 *)(lVar5 + 0x70) = (undefined4)local_108;
                *(undefined4 *)(lVar5 + 0x74) = local_108._4_4_;
                *(undefined4 *)(lVar5 + 0x78) = (undefined4)uStack_100;
                *(undefined4 *)(lVar5 + 0x7c) = uStack_100._4_4_;
                FUN_180292400(lVar5);
              }
              fVar30 = fVar30 * DAT_1803811c8;
              plVar14 = local_178;
            }
            fVar31 = DAT_180380bb0;
            puVar23 = (undefined4 *)(lVar5 + 0x50);
            puVar25 = (undefined8 *)(lVar5 + 0x58);
            fVar12 = 0.0;
            local_230._0_4_ = 0.0;
            local_160 = puVar25;
            local_148 = puVar23;
            local_140 = puVar23;
            local_138 = puVar25;
            local_238._0_4_ = (float)uVar10;
            FUN_180295000(lVar5,&local_1d8,&local_1c0,(int)fVar30 << 0x18 | 0x120c0a);
            local_208 = fVar36 - fVar31;
            local_204 = fVar37 - fVar31;
            local_210 = fVar34 + fVar31;
            local_20c = fVar35 + fVar31;
            local_228 = (float *)((ulonglong)local_228 & 0xffffffff00000000);
            local_230._0_4_ = fVar31;
            local_238._0_4_ = (float)DAT_180380fdc;
            FUN_180294f00(lVar5,&local_210,&local_208,0x16ffffff);
            local_228 = (float *)((ulonglong)local_228 & 0xffffffff00000000);
            local_230._0_4_ = DAT_180380c50;
            local_238._0_4_ = (float)uVar10;
            FUN_180294f00(lVar5,&local_1d8,&local_1c0,0xaa000000);
            local_208 = fVar36 - DAT_180380d30;
            local_204 = fVar37 - DAT_180380d30;
            local_210 = fVar34 + DAT_180380d30;
            local_20c = fVar35 + DAT_180380d30;
            FUN_180292550(lVar5,&local_210,&local_208,1);
            fVar30 = local_1e0;
            local_204 = local_1e0;
            local_20c = local_1e0;
            local_238._0_4_ = fVar31;
            local_210 = fVar34;
            local_208 = fVar36;
            FUN_180294c90(lVar5,&local_210,&local_208,0x14ffffff);
            fVar29 = local_1e4;
            local_208 = local_1e4;
            local_210 = local_1e4;
            local_238._0_4_ = fVar31;
            local_20c = fVar35;
            local_204 = fVar37;
            FUN_180294c90(lVar5,&local_210,&local_208,0x14ffffff);
            if (fVar28 <= fVar38 * DAT_180380a40) {
              local_230._0_4_ = 6.5861e-44;
              local_238._0_4_ = (float)DAT_180380f64;
              FUN_1802941e0(lVar5,&local_1a0,fVar38 * DAT_180380a40 - fVar28,0);
              local_230._0_4_ = 7.17465e-43;
              local_238._0_4_ = fVar31;
              FUN_1802929d0(lVar5,*puVar25,*puVar23,0x10ffffff);
              *puVar23 = 0;
            }
            if (fVar28 <= fVar38 * _DAT_180380a98) {
              local_230._0_4_ = 8.82818e-44;
              local_238._0_4_ = (float)DAT_180380f68;
              FUN_1802941e0(lVar5,&local_1a0,fVar38 * _DAT_180380a98 - fVar28,0);
              local_230._0_4_ = 7.17465e-43;
              local_238._0_4_ = fVar31;
              FUN_1802929d0(lVar5,*puVar25,*puVar23,0xcffffff);
              *puVar23 = 0;
            }
            local_114 = 0;
            local_118 = 0;
            (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_118);
            fVar31 = (float)local_114 * DAT_180380994;
            local_17c = sinf(fVar31);
            local_1d8 = cosf(fVar31);
            fVar31 = DAT_180380b04;
            fVar34 = fVar38 * fVar28 - DAT_180380fcc;
            local_1ac = fVar34 / local_200;
            fVar38 = fVar38 * DAT_180380ab4;
            local_1b0 = fVar34;
            fVar28 = cosf(DAT_180380b04);
            fVar28 = fVar30 - fVar28 * fVar38;
            local_f8 = sinf(fVar31);
            local_f8 = local_f8 * fVar38;
            local_108 = CONCAT44(fVar30,fVar29);
            uStack_100 = CONCAT44(fVar28,fVar29 - local_f8);
            local_f8 = local_f8 + fVar29;
            local_f4 = fVar28;
            FUN_1802938c0(lVar5,&local_108,3,0x16ffbe96);
            pfVar19 = (float *)(**(code **)(*plVar14 + 0x48))(plVar14);
            fVar31 = *pfVar19;
            fVar38 = pfVar19[1];
            fVar29 = pfVar19[2];
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x43dc26eb12dd2e34;
            local_1f8 = fVar29;
            local_1e8 = fVar31;
            local_1a8 = fVar38;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pcVar15 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
            local_218 = *pcVar15;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x3de1d4a1ddc4912e;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pfVar19 = (float *)FUN_180202dc0(*plVar16 + 0x28);
            fVar30 = *pfVar19;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x7aad0bc54d55fc8a;
            local_1ec = fVar30;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pcVar15 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
            cVar9 = *pcVar15;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0xcd347fc1a3829be9;
            local_217 = cVar9;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pcVar15 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
            local_216 = *pcVar15;
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0xa0267eea20a40d9a;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pcVar15 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
            local_215 = *pcVar15;
            if (cVar9 != '\0') {
              fVar12 = (float)FUN_18001c560(plVar14);
            }
            local_120 = 0x93fd561a96ab0c67;
            local_128 = 0x3e2e6be62248a268;
            local_200 = fVar12;
            plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_120);
            plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_1d0,&local_128);
            pcVar15 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
            fVar37 = DAT_180380fd0;
            fVar36 = DAT_180380f74;
            fVar35 = DAT_180380e28;
            fVar28 = DAT_180380bb0;
            local_214 = *pcVar15;
            for (fVar27 = 1.4013e-45; puVar8 = local_140, fVar13 = local_1e4, local_1fc = fVar27,
                (int)fVar27 <= *(int *)(DAT_1803fa608 + 0x1c); fVar27 = (float)((int)fVar27 + 1)) {
              plVar16 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,fVar27);
              if ((((((plVar16 != (longlong *)0x0) && (plVar16 != plVar14)) &&
                    (cVar9 = FUN_18001c330(plVar16), cVar9 != '\0')) &&
                   (((local_217 == '\0' || ((int)fVar12 < 1)) ||
                    (fVar13 = (float)FUN_18001c560(plVar16), fVar13 != fVar12)))) &&
                  (((local_216 == '\0' || (cVar9 = FUN_18001e0a0(plVar16), cVar9 != '\b')) &&
                   ((local_215 == '\0' ||
                    (puVar20 = (uint *)FUN_18001d710(plVar16,&local_1c0), (*puVar20 >> 6 & 1) == 0))
                   )))) && ((0x7f < (int)fVar27 - 1U ||
                            (((DAT_180425fd0 == (code *)0x0 ||
                              (cVar9 = (*DAT_180425fd0)(fVar27), cVar9 == '\0')) &&
                             (((DAT_180426170 == (code *)0x0 ||
                               (cVar9 = (*DAT_180426170)(fVar27), cVar9 == '\0')) &&
                              ((DAT_1804009f0 == (code *)0x0 ||
                               (cVar9 = (*DAT_1804009f0)(fVar27), cVar9 == '\0')))))))))) {
                plVar21 = (longlong *)(**(code **)(*plVar16 + 0x20))(plVar16);
                if (plVar21 == (longlong *)0x0) {
                  cVar9 = '\x01';
LAB_18010ef38:
                  puVar23 = local_1b8;
                  if (local_218 == '\0') goto LAB_18010f401;
                  if (0.0 < fVar30) {
                    pfVar19 = (float *)(**(code **)(*plVar16 + 0x48))(plVar16);
                    local_1d0 = fVar31 - *pfVar19;
                    local_1cc = fVar38 - pfVar19[1];
                    local_1c8 = fVar29 - pfVar19[2];
                    fVar12 = (float)(*(code *)PTR_FUN_1803da018)
                                              (local_1cc * local_1cc + local_1d0 * local_1d0 +
                                               local_1c8 * local_1c8);
                    puVar23 = local_1b8;
                    if (fVar30 < fVar12) goto LAB_18010f401;
                  }
                }
                else {
                  cVar9 = (**(code **)(*plVar21 + 0x40))(plVar21);
                  if (cVar9 != '\0') goto LAB_18010ef38;
                }
                pfVar19 = (float *)(**(code **)(*plVar16 + 0x48))(plVar16);
                fVar31 = *pfVar19 - fVar31;
                fVar29 = pfVar19[1] - fVar38;
                local_108 = CONCAT44(fVar29,fVar31);
                fVar33 = pfVar19[2] - local_1f8;
                uStack_100 = CONCAT44(uStack_100._4_4_,fVar33);
                fVar32 = (fVar31 * local_17c - fVar29 * local_1d8) * local_1ac;
                fVar13 = (float)((uint)(fVar31 * local_1d8 + fVar29 * local_17c) ^ DAT_1803817f0) *
                         local_1ac;
                fVar12 = fVar13 * fVar13 + fVar32 * fVar32;
                local_208 = fVar32;
                local_204 = fVar13;
                if (fVar12 < 0.0) {
                  fVar12 = sqrtf(fVar12);
                }
                else {
                  fVar12 = SQRT(fVar12);
                }
                if (fVar34 < fVar12) {
                  puVar23 = local_1b8;
                  fVar30 = local_1ec;
                  fVar31 = local_1e8;
                  fVar29 = local_1f8;
                  if (local_214 != '\0') goto LAB_18010f401;
                  if (0.0 < fVar12) {
                    fVar32 = (fVar34 / fVar12) * fVar32;
                    fVar13 = (fVar34 / fVar12) * fVar13;
                    local_208 = fVar32;
                    local_204 = fVar13;
                  }
                }
                fVar13 = local_188 + fVar13;
                fVar32 = local_184 + fVar32;
                uVar26 = 0xff;
                if (fVar34 < fVar12) {
                  uVar26 = 0x78;
                }
                local_210 = fVar32;
                local_20c = fVar13;
                if (cVar9 == '\0') {
                  uVar24 = uVar26 << 0x18 | 0x5c54ff;
                  lVar22 = FUN_18001d350(plVar16);
                  fVar38 = ((float)local_114 - *(float *)(lVar22 + 4)) * DAT_180380994;
                  fVar31 = cosf(fVar38);
                  fVar31 = (float)((uint)fVar31 ^ DAT_1803817f0);
                  local_158 = sinf(fVar38);
                  local_16c = local_158 * DAT_180380f90 + fVar32;
                  local_168 = fVar31 * DAT_180380f90 + fVar13;
                  local_238._0_4_ = (float)DAT_180380bf0;
                  local_154 = fVar31;
                  FUN_180294c90(lVar5,&local_210,&local_16c,
                                ((uVar26 * 3) / 5) * 0x1000000 | 0xffffff);
                  local_238._0_4_ = 0.0;
                  FUN_180295540(lVar5,&local_210,DAT_180380f40,uVar26 / 5 << 0x18 | 0x5c54ff);
                }
                else {
                  uVar24 = ((uVar26 * 2) / 5) * 0x1000000 | 0x9b9696;
                }
                uVar10 = DAT_180380e4c;
                local_238._0_4_ = 0.0;
                FUN_180295540(lVar5,&local_210,DAT_180380e4c,uVar24);
                local_230._0_4_ = fVar28;
                local_238._0_4_ = 0.0;
                FUN_180295460(lVar5,&local_210,uVar10,((uVar26 * 7) / 10) * 0x1000000);
                puVar23 = local_1b8;
                plVar14 = local_178;
                fVar30 = local_1ec;
                fVar31 = local_1e8;
                fVar38 = local_1a8;
                fVar34 = local_1b0;
                fVar29 = local_1f8;
                if ((cVar9 == '\0') && (DAT_18038112c < (float)((uint)fVar33 & _DAT_1803817c0))) {
                  if (fVar33 <= 0.0) {
                    fVar31 = fVar13 + fVar36;
                    local_1f0 = fVar13 + fVar37;
                  }
                  else {
                    fVar31 = fVar13 - fVar36;
                    local_1f0 = fVar13 - fVar37;
                  }
                  local_128 = CONCAT44(fVar31,fVar32 + fVar35);
                  local_120 = CONCAT44(fVar31,fVar32 - fVar35);
                  local_238._0_4_ = (float)(((uVar26 * 4) / 5) * 0x1000000 | 0xffffff);
                  local_1f4 = fVar32;
                  FUN_1802953e0(lVar5,&local_120,&local_128,&local_1f4);
                  puVar23 = local_1b8;
                  plVar14 = local_178;
                  fVar30 = local_1ec;
                  fVar31 = local_1e8;
                  fVar38 = local_1a8;
                  fVar34 = local_1b0;
                  fVar29 = local_1f8;
                }
              }
LAB_18010f401:
              fVar12 = local_200;
            }
            fVar29 = local_1e4 + DAT_180380ec8;
            fVar38 = local_1e0 + DAT_180380ec8;
            fVar31 = local_1e4 - DAT_180380ec8;
            local_128 = CONCAT44(fVar38,fVar31);
            fVar30 = local_1e0 - DAT_180380f40;
            local_120 = CONCAT44(fVar30,local_1e4);
            local_1f4 = fVar29;
            local_1f0 = fVar38;
            FUN_18020dc30(local_140,&local_120);
            FUN_18020dc30(puVar8,&local_128);
            FUN_18020dc30(puVar8,&local_1f4);
            FUN_1802938c0(lVar5,*local_160,*puVar8,0xebffbe96);
            *puVar23 = 0;
            local_128 = CONCAT44(fVar38,fVar31);
            local_120 = CONCAT44(fVar30,fVar13);
            local_1f4 = fVar29;
            local_1f0 = fVar38;
            FUN_18020dc30(puVar23,&local_120);
            FUN_18020dc30(puVar23,&local_128);
            FUN_18020dc30(puVar23,&local_1f4);
            local_230 = (float *)CONCAT44(local_230._4_4_,0x200);
            local_238 = (float *)CONCAT44(local_238._4_4_,fVar28);
            FUN_1802929d0(lVar5,*local_138,*puVar23,0xaa000000);
            *puVar8 = 0;
            piVar1 = (int *)(lVar5 + 0xa0);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              puVar23 = (undefined4 *)(*(longlong *)(lVar5 + 0x38) + 0x38);
            }
            else {
              puVar23 = (undefined4 *)
                        ((longlong)(*(int *)(lVar5 + 0xa0) + -1) * 0x10 +
                        *(longlong *)(lVar5 + 0xa8));
            }
            uVar10 = puVar23[1];
            uVar2 = puVar23[2];
            uVar6 = puVar23[3];
            *(undefined4 *)(lVar5 + 0x60) = *puVar23;
            *(undefined4 *)(lVar5 + 100) = uVar10;
            *(undefined4 *)(lVar5 + 0x68) = uVar2;
            *(undefined4 *)(lVar5 + 0x6c) = uVar6;
            FUN_180292360(lVar5);
          }
        }
      }
    }
  }
  return;
}


