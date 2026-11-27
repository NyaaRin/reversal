// 0x180192700  FUN_180192700
// size=6644 thunk=false
// signature: undefined FUN_180192700()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180192700(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  size_t sVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  float fVar33;
  float fVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar35;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  longlong *local_360;
  uint local_358;
  char local_348;
  uint local_344;
  char local_340;
  char local_33f;
  int local_33c;
  longlong *local_338;
  float local_330;
  int local_32c;
  int local_328;
  float local_324;
  longlong *local_320;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0 [2];
  undefined8 local_2a8;
  float local_2a0;
  float local_298 [2];
  float local_290;
  float local_28c;
  float local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_268;
  longlong *local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [48];
  undefined4 local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  int local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  char local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  char local_1b8;
  undefined1 local_1a8 [64];
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  int local_158;
  undefined2 local_154;
  float local_148 [4];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_388;
  if ((((DAT_1803eb378 != DAT_1803eb380) && (DAT_1803fa360 != (longlong *)0x0)) &&
      (DAT_1803fa608 != 0)) &&
     ((DAT_1803fa668 != (longlong *)0x0 &&
      (cVar7 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar7 != '\0')))) {
    pcVar5 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
    plVar12 = (longlong *)(*pcVar5)(DAT_1803fa360,uVar8);
    if (plVar12 != (longlong *)0x0) {
      puVar31 = (undefined8 *)0x0;
      local_1e8 = 0;
      local_1e4 = 0;
      local_338 = plVar12;
      (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_1e8,&local_1e4);
      if ((1 < local_1e8) && (1 < local_1e4)) {
        plVar13 = (longlong *)FUN_1801924f0(plVar12,"m_hVehicle");
        local_320 = plVar13;
        plVar14 = (longlong *)FUN_1801924f0(plVar12,"m_hGroundEntity");
        local_340 = '\x01';
        local_15c = 0x42b40000;
        local_158 = 0xffffffff;
        local_154 = 0;
        local_1f0 = plVar14;
        AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
        FUN_1802d4780(local_1a8,&DAT_1805707c0);
        local_168 = DAT_1805c7c00;
        local_164 = DAT_1805c7c04;
        local_160 = DAT_1805c7c08;
        local_15c = DAT_1803da5c0;
        local_158 = DAT_1803e7498;
        local_154._0_1_ = DAT_180425428;
        local_154._1_1_ = DAT_1803fe650;
        ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
        if (((char)local_154 != '\0') &&
           (((local_154._1_1_ != '\0' && (DAT_1803fa608 != 0)) &&
            ((uint)(*(int *)(DAT_1803fa608 + 4) - local_158) < 3)))) {
          FUN_18001c430(plVar12,&local_2a8);
          local_290 = local_168 - (float)local_2a8;
          local_28c = local_164 - local_2a8._4_4_;
          local_288 = local_160 - local_2a0;
          fVar33 = (float)(*(code *)PTR_FUN_1803da018)
                                    (local_28c * local_28c + local_290 * local_290 +
                                     local_288 * local_288);
          local_340 = fVar33 < DAT_18038109c;
        }
        lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar17 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (((*(longlong *)(lVar17 + 0xec0) != 0) &&
            (lVar15 = *(longlong *)(*(longlong *)(lVar17 + 0xec0) + 0x1520), lVar15 != 0)) &&
           (local_320 = *(longlong **)(lVar15 + 0x2c8), local_320 != (longlong *)0x0)) {
          local_280 = plVar13;
          local_278 = plVar14;
          if (*(char *)(lVar17 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          local_324 = *(float *)(*(longlong *)(lVar17 + 0xec0) + 0xc84);
          if ((DAT_1805c7b94 & 1) == 0) {
            DAT_1805c7b94 = DAT_1805c7b94 | 1;
            atexit(FUN_18030af10);
          }
          plVar13 = DAT_1803eb380;
          plVar12 = DAT_1803eb378;
          if (DAT_1803fcf88 != DAT_1803fcf90) {
            DAT_1803fcf90 = DAT_1803fcf88;
          }
          for (; plVar12 != plVar13; plVar12 = plVar12 + 0xe) {
            if ((char)plVar12[4] != '\0') {
              plVar14 = plVar12;
              if (0xf < (ulonglong)plVar12[3]) {
                plVar14 = (longlong *)*plVar12;
              }
              if (((plVar12[2] != 0) &&
                  (lVar17 = (longlong)plVar14 + plVar12[2],
                  lVar15 = thunk_FUN_1802d5c20(plVar14,lVar17,0x2a), lVar15 != lVar17)) &&
                 (lVar15 - (longlong)plVar14 != -1)) {
                local_1f0 = plVar12;
                if (DAT_1803fcf90 == DAT_1803fcf98) {
                  FUN_1802220f0(extraout_XMM0_Qa,DAT_1803fcf90,&local_1f0);
                }
                else {
                  *DAT_1803fcf90 = plVar12;
                  DAT_1803fcf90 = DAT_1803fcf90 + 1;
                }
              }
            }
          }
          if ((DAT_1805c7b94 & 2) == 0) {
            DAT_1805c7b94 = DAT_1805c7b94 | 2;
            DAT_1805b8858 = 0;
            _DAT_1805b8860 = 0;
            uRam00000001805b8868 = 0;
            DAT_1805b8870 = 0;
            DAT_1805b8878 = 0;
            local_344 = 0;
            _DAT_1805b8840 = 0;
            DAT_1805b8848 = (undefined8 *)0x0;
            DAT_1805b8850 = 0;
            DAT_1805b8848 = (undefined8 *)FUN_1802d8350(0x18);
            *DAT_1805b8848 = DAT_1805b8848;
            DAT_1805b8848[1] = DAT_1805b8848;
            DAT_1805b8858 = 0;
            _DAT_1805b8860 = 0;
            uRam00000001805b8868 = 0;
            DAT_1805b8870 = 7;
            DAT_1805b8878 = 8;
            _DAT_1805b8840 = CONCAT44(DAT_1805b8840_4,0x3f800000);
            FUN_18022be40(&DAT_1805b8858,0x10,DAT_1805b8848);
            atexit(FUN_18030aee0);
          }
          FUN_180209880(&DAT_1805b8840);
          local_330 = (float)(**(code **)(*DAT_1803fa360 + 0x30))();
          local_208 = *(float *)(DAT_1803fa608 + 0x1c);
          while (local_208 = (float)((int)local_208 + 1), (int)local_208 <= (int)local_330) {
            plVar12 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
            local_200 = plVar12;
            if (((plVar12 != (longlong *)0x0) && (BVar9 = IsBadReadPtr(plVar12,8), BVar9 == 0)) &&
               (BVar9 = IsBadReadPtr((void *)*plVar12,8), BVar9 == 0)) {
              local_33c = 0xffffffff;
              piVar16 = (int *)(**(code **)(*plVar12 + 0x10))(plVar12);
              iVar11 = *piVar16;
              uVar28 = (((((ulonglong)((uint)local_208 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3
                         ^ (ulonglong)local_208._1_1_) * 0x100000001b3 ^ (ulonglong)local_208._2_1_)
                        * 0x100000001b3 ^ (ulonglong)local_208._3_1_) * 0x100000001b3 &
                       DAT_1805c39c0;
              puVar29 = *(undefined8 **)(DAT_1805c39a8 + 8 + uVar28 * 0x10);
              puVar32 = puVar31;
              if (puVar29 != DAT_1805c3998) {
                for (; (puVar32 = puVar29, local_208 != (float)*(uint *)(puVar29 + 2) &&
                       (puVar32 = puVar31,
                       puVar29 != *(undefined8 **)(DAT_1805c39a8 + uVar28 * 0x10)));
                    puVar29 = (undefined8 *)puVar29[1]) {
                }
              }
              puVar29 = DAT_1805c3998;
              if (puVar32 != (undefined8 *)0x0) {
                puVar29 = puVar32;
              }
              local_344 = iVar11;
              local_33c = iVar11;
              if (((puVar29 != DAT_1805c3998) && (iVar11 != -1)) &&
                 ((*(int *)(puVar29 + 7) != -1 && (*(int *)(puVar29 + 7) != iVar11)))) {
                plVar13 = puVar29 + 3;
                if (0xf < (ulonglong)puVar29[6]) {
                  plVar13 = (longlong *)*plVar13;
                }
                local_368 = CONCAT44(local_368._4_4_,iVar11);
                uVar35 = FUN_180014410("[ESP] Entity List erased serial reuse idx=%d class=%s old=%08X new=%08X\n"
                                       ,local_208,plVar13);
                FUN_180204e10(uVar35,&local_290,puVar29);
              }
              plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
              local_268 = plVar13;
              if (plVar13 == (longlong *)0x0) {
                local_348 = '\x01';
                uVar35 = extraout_XMM0_Qa_00;
              }
              else {
                local_348 = (**(code **)(*plVar13 + 0x40))(plVar13);
                uVar35 = extraout_XMM0_Qa_01;
              }
              if (local_348 == '\0') {
                if (plVar13 != (longlong *)0x0) {
                  uVar28 = (((((ulonglong)(uint)local_208 & 0xff ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)local_208._1_1_) * 0x100000001b3 ^
                            (ulonglong)local_208._2_1_) * 0x100000001b3 ^ (ulonglong)local_208._3_1_
                           ) * 0x100000001b3 & DAT_1805c39c0;
                  puVar29 = *(undefined8 **)(DAT_1805c39a8 + 8 + uVar28 * 0x10);
                  if (puVar29 == DAT_1805c3998) {
LAB_180192ec1:
                    puVar29 = (undefined8 *)0x0;
                  }
                  else {
                    uVar27 = *(uint *)(puVar29 + 2);
                    while (local_208 != (float)uVar27) {
                      if (puVar29 == *(undefined8 **)(DAT_1805c39a8 + uVar28 * 0x10))
                      goto LAB_180192ec1;
                      puVar29 = (undefined8 *)puVar29[1];
                      uVar27 = *(uint *)(puVar29 + 2);
                    }
                  }
                  if (puVar29 != (undefined8 *)0x0) {
                    local_2a8 = &DAT_1803e8990;
                    local_1f8 = plVar13;
                    iVar10 = _Mtx_lock(&DAT_1803e8990);
                    if (iVar10 != 0) {
                      std::_Throw_Cpp_error(5);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar35 = extraout_XMM0_Qa_02;
                    if (DAT_1803e89dc == 0x7fffffff) {
                      DAT_1803e89dc = 0x7ffffffe;
                      std::_Throw_Cpp_error(6);
                      uVar35 = extraout_XMM0_Qa_03;
                    }
                    local_1f0 = (longlong *)0x0;
                    uVar35 = FUN_18020b0b0(uVar35,&local_1f0,&local_1f8);
                    plVar13 = local_1f0;
                    if (local_1f0 != DAT_180458258) {
                      local_1f0 = (longlong *)0x0;
                      FUN_18020b1f0(uVar35,&local_1f0,plVar13 + 3);
                      if (local_1f0 != DAT_1805c7b58) {
                        if (((local_1f0[5] == DAT_1803e8970) &&
                            (*(char *)((longlong)local_1f0 + 0x3b) != '\0')) &&
                           (*(char *)((longlong)local_1f0 + 0x3c) == '\0')) {
                          bVar6 = true;
                        }
                        else {
                          bVar6 = false;
                        }
                        uVar35 = _Mtx_unlock(&DAT_1803e8990);
                        if (bVar6) {
                          local_348 = '\x01';
                          goto LAB_180192fee;
                        }
                        goto LAB_180192fae;
                      }
                    }
                    uVar35 = _Mtx_unlock(&DAT_1803e8990);
                  }
                }
LAB_180192fae:
                uVar35 = FUN_180215050(uVar35,local_258,&local_208);
              }
LAB_180192fee:
              if ((local_340 == '\0') || ((plVar12 != local_280 && (plVar12 != local_278)))) {
                plVar13 = (longlong *)FUN_18001e410(plVar12);
                if ((((plVar13 != (longlong *)0x0) &&
                     (((char)*plVar13 != '\0' &&
                      (uVar35 = extraout_XMM0_Qa_04, (longlong *)0xffff < plVar13)))) ||
                    ((local_1f8 = plVar13, lVar17 = (**(code **)(*plVar12 + 0x78))(plVar12),
                     lVar17 != 0 &&
                     (plVar13 = *(longlong **)(lVar17 + 0x10), uVar35 = extraout_XMM0_Qa_05,
                     (longlong *)0xffff < plVar13)))) &&
                   (local_1f8 = plVar13, plVar18 = (longlong *)FUN_180194260(uVar35,plVar13),
                   plVar14 = local_338, local_1f0 = plVar18, plVar18 != (longlong *)0x0)) {
                  plVar19 = (longlong *)FUN_18001dbf0(local_338);
                  if (((plVar19 == (longlong *)0x0) ||
                      (uVar35 = extraout_XMM0_Qa_06, plVar19 != plVar12)) &&
                     (cVar7 = FUN_18001de40(plVar12), uVar35 = extraout_XMM0_Qa_07, cVar7 == '\0'))
                  {
                    plVar19 = (longlong *)FUN_18001dd10(plVar12);
                    if ((plVar19 == (longlong *)0x0) || (plVar19 != plVar14)) {
                      if (local_348 == '\0') {
                        if (*(char *)((longlong)plVar18 + 0x26) == '\0') {
                          FUN_18020b4e0(extraout_XMM0_Qa_08,&local_208);
                        }
                        else {
                          local_358 = local_358 & 0xffffff00;
                          local_360 = (longlong *)((ulonglong)local_360 & 0xffffffffffffff00);
                          local_368 = 0;
                          lVar17 = FUN_180121710(local_238,plVar12,local_208,iVar11);
                          if (0x1fff < DAT_1805c39a0) {
                            uVar28 = (((((ulonglong)((uint)local_208 & 0xff) ^ 0xcbf29ce484222325) *
                                        0x100000001b3 ^ (ulonglong)local_208._1_1_) * 0x100000001b3
                                      ^ (ulonglong)local_208._2_1_) * 0x100000001b3 ^
                                     (ulonglong)local_208._3_1_) * 0x100000001b3 & DAT_1805c39c0;
                            puVar29 = *(undefined8 **)(DAT_1805c39a8 + 8 + uVar28 * 0x10);
                            if (puVar29 == DAT_1805c3998) {
LAB_180193261:
                              puVar29 = (undefined8 *)0x0;
                            }
                            else {
                              uVar27 = *(uint *)(puVar29 + 2);
                              while (local_208 != (float)uVar27) {
                                if (puVar29 == *(undefined8 **)(DAT_1805c39a8 + uVar28 * 0x10))
                                goto LAB_180193261;
                                puVar29 = (undefined8 *)puVar29[1];
                                uVar27 = *(uint *)(puVar29 + 2);
                              }
                            }
                            if (puVar29 == (undefined8 *)0x0) goto LAB_180193882;
                          }
                          lVar17 = *(longlong *)(lVar17 + 8);
                          cVar7 = FUN_180190660(plVar12,local_148);
                          if (cVar7 != '\0') {
                            fVar39 = 0.0;
                            fVar40 = 0.0;
                            fVar41 = 0.0;
                            puVar29 = puVar31;
                            puVar32 = puVar31;
                            fVar33 = local_148[2];
                            fVar42 = local_148[1];
                            fVar43 = local_148[0];
                            fVar44 = local_148[2];
                            fVar45 = local_148[0];
                            fVar46 = local_148[1];
                            do {
                              fVar36 = local_148[(longlong)puVar32 * 3];
                              fVar38 = local_148[(longlong)puVar32 * 3 + 1];
                              if (fVar36 <= fVar43) {
                                fVar43 = fVar36;
                              }
                              if (fVar45 <= fVar36) {
                                fVar45 = fVar36;
                              }
                              if (fVar38 <= fVar42) {
                                fVar42 = fVar38;
                              }
                              if (fVar46 <= fVar38) {
                                fVar46 = fVar38;
                              }
                              fVar37 = local_148[(longlong)puVar32 * 3 + 2];
                              if (fVar37 <= fVar33) {
                                fVar33 = fVar37;
                              }
                              if (fVar44 <= fVar37) {
                                fVar44 = fVar37;
                              }
                              lVar15 = (longlong)puVar29 + 1;
                              fVar37 = local_148[lVar15 * 3];
                              fVar34 = local_148[lVar15 * 3 + 1];
                              if (fVar37 <= fVar43) {
                                fVar43 = fVar37;
                              }
                              if (fVar45 <= fVar37) {
                                fVar45 = fVar37;
                              }
                              if (fVar34 <= fVar42) {
                                fVar42 = fVar34;
                              }
                              if (fVar46 <= fVar34) {
                                fVar46 = fVar34;
                              }
                              fVar1 = local_148[lVar15 * 3 + 2];
                              if (fVar1 <= fVar33) {
                                fVar33 = fVar1;
                              }
                              if (fVar44 <= fVar1) {
                                fVar44 = fVar1;
                              }
                              lVar20 = (longlong)puVar29 + 2;
                              fVar1 = local_148[lVar20 * 3];
                              fVar2 = local_148[lVar20 * 3 + 1];
                              if (fVar1 <= fVar43) {
                                fVar43 = fVar1;
                              }
                              if (fVar45 <= fVar1) {
                                fVar45 = fVar1;
                              }
                              if (fVar2 <= fVar42) {
                                fVar42 = fVar2;
                              }
                              if (fVar46 <= fVar2) {
                                fVar46 = fVar2;
                              }
                              fVar3 = local_148[lVar20 * 3 + 2];
                              if (fVar3 <= fVar33) {
                                fVar33 = fVar3;
                              }
                              if (fVar44 <= fVar3) {
                                fVar44 = fVar3;
                              }
                              lVar21 = (longlong)puVar29 + 3;
                              fVar3 = local_148[lVar21 * 3];
                              fVar4 = local_148[lVar21 * 3 + 1];
                              fVar39 = fVar3 + fVar36 + fVar39 + fVar37 + fVar1;
                              fVar40 = fVar4 + fVar38 + fVar40 + fVar34 + fVar2;
                              fVar41 = local_148[lVar21 * 3 + 2] +
                                       local_148[(longlong)puVar32 * 3 + 2] + fVar41 +
                                       local_148[lVar15 * 3 + 2] + local_148[lVar20 * 3 + 2];
                              if (fVar3 <= fVar43) {
                                fVar43 = fVar3;
                              }
                              if (fVar45 <= fVar3) {
                                fVar45 = fVar3;
                              }
                              if (fVar4 <= fVar42) {
                                fVar42 = fVar4;
                              }
                              if (fVar46 <= fVar4) {
                                fVar46 = fVar4;
                              }
                              fVar36 = local_148[lVar21 * 3 + 2];
                              if (fVar36 <= fVar33) {
                                fVar33 = fVar36;
                              }
                              if (fVar44 <= fVar36) {
                                fVar44 = fVar36;
                              }
                              uVar27 = (int)puVar29 + 4;
                              puVar29 = (undefined8 *)(ulonglong)uVar27;
                              puVar32 = (undefined8 *)((longlong)puVar32 + 4);
                            } while ((int)uVar27 < 8);
                            fVar36 = fVar46 - fVar42;
                            if (fVar46 - fVar42 <= fVar44 - fVar33) {
                              fVar36 = fVar44 - fVar33;
                            }
                            fVar38 = fVar45 - fVar43;
                            if (fVar45 - fVar43 <= fVar36) {
                              fVar38 = fVar36;
                            }
                            if (fVar38 < DAT_180381290) {
                              uVar26 = (((((ulonglong)((uint)local_208 & 0xff) ^ 0xcbf29ce484222325)
                                          * 0x100000001b3 ^ (ulonglong)local_208._1_1_) *
                                         0x100000001b3 ^ (ulonglong)local_208._2_1_) * 0x100000001b3
                                       ^ (ulonglong)local_208._3_1_) * 0x100000001b3 & DAT_1805c39c0
                              ;
                              puVar29 = *(undefined8 **)(DAT_1805c39a8 + 8 + uVar26 * 0x10);
                              uVar28 = uVar26;
                              if (puVar29 == DAT_1805c3998) {
LAB_180193581:
                                puVar29 = (undefined8 *)0x0;
                              }
                              else {
                                uVar28 = uVar26 * 2;
                                uVar27 = *(uint *)(puVar29 + 2);
                                while (local_208 != (float)uVar27) {
                                  if (puVar29 == *(undefined8 **)(DAT_1805c39a8 + uVar26 * 0x10))
                                  goto LAB_180193581;
                                  puVar29 = (undefined8 *)puVar29[1];
                                  uVar27 = *(uint *)(puVar29 + 2);
                                }
                              }
                              puVar32 = DAT_1805c3998;
                              if (puVar29 != (undefined8 *)0x0) {
                                puVar32 = puVar29;
                              }
                              if ((puVar32 != DAT_1805c3998) && (puVar32[8] == lVar17)) {
                                fVar36 = *(float *)(puVar32 + 0x18) -
                                         *(float *)((longlong)puVar32 + 0xb4);
                                fVar37 = *(float *)((longlong)puVar32 + 0xc4) -
                                         *(float *)(puVar32 + 0x17);
                                fVar34 = *(float *)(puVar32 + 0x19) -
                                         *(float *)((longlong)puVar32 + 0xbc);
                                if (fVar37 <= fVar34) {
                                  fVar37 = fVar34;
                                }
                                if (fVar36 <= fVar37) {
                                  fVar36 = fVar37;
                                }
                                if ((DAT_180380bb0 < fVar36) &&
                                   ((fVar36 * DAT_180380db8 < fVar38 ||
                                    (fVar38 < fVar36 * DAT_180380a94)))) goto LAB_180193882;
                              }
                              plVar14 = (longlong *)FUN_1802173f0(uVar28,local_248,&local_208);
                              lVar15 = *plVar14;
                              sVar22 = strlen((char *)plVar13);
                              FUN_180212700(lVar15 + 0x18,plVar13,sVar22);
                              *(uint *)(lVar15 + 0x38) = local_344;
                              *(longlong *)(lVar15 + 0x40) = lVar17;
                              *(float *)(lVar15 + 0x48) = local_148[0];
                              *(float *)(lVar15 + 0x4c) = local_148[1];
                              *(float *)(lVar15 + 0x50) = local_148[2];
                              *(float *)(lVar15 + 0x54) = local_148[3];
                              *(undefined4 *)(lVar15 + 0x58) = local_138;
                              *(undefined4 *)(lVar15 + 0x5c) = local_134;
                              *(undefined4 *)(lVar15 + 0x60) = local_130;
                              *(undefined4 *)(lVar15 + 100) = local_12c;
                              *(undefined4 *)(lVar15 + 0x68) = local_128;
                              *(undefined4 *)(lVar15 + 0x6c) = local_124;
                              *(undefined4 *)(lVar15 + 0x70) = local_120;
                              *(undefined4 *)(lVar15 + 0x74) = local_11c;
                              *(undefined4 *)(lVar15 + 0x78) = local_118;
                              *(undefined4 *)(lVar15 + 0x7c) = local_114;
                              *(undefined4 *)(lVar15 + 0x80) = local_110;
                              *(undefined4 *)(lVar15 + 0x84) = local_10c;
                              *(undefined4 *)(lVar15 + 0x88) = local_108;
                              *(undefined4 *)(lVar15 + 0x8c) = local_104;
                              *(undefined4 *)(lVar15 + 0x90) = local_100;
                              *(undefined4 *)(lVar15 + 0x94) = local_fc;
                              *(undefined4 *)(lVar15 + 0x98) = local_f8;
                              *(undefined4 *)(lVar15 + 0x9c) = local_f4;
                              *(undefined4 *)(lVar15 + 0xa0) = local_f0;
                              *(undefined4 *)(lVar15 + 0xa4) = local_ec;
                              fVar36 = DAT_180380a00;
                              *(float *)(lVar15 + 0xa8) = fVar39 * DAT_180380a00;
                              *(float *)(lVar15 + 0xac) = fVar40 * fVar36;
                              *(float *)(lVar15 + 0xb0) = fVar41 * fVar36;
                              *(float *)(lVar15 + 0xb4) = fVar43;
                              *(float *)(lVar15 + 0xb8) = fVar42;
                              *(float *)(lVar15 + 0xbc) = fVar33;
                              *(float *)(lVar15 + 0xc0) = fVar45;
                              *(float *)(lVar15 + 0xc4) = fVar46;
                              *(float *)(lVar15 + 200) = fVar44;
                              uVar8 = FUN_18001c680(plVar12);
                              *(undefined4 *)(lVar15 + 0xcc) = uVar8;
                              uVar8 = FUN_18001c770(plVar12);
                              *(undefined4 *)(lVar15 + 0xd0) = uVar8;
                            }
                          }
                        }
LAB_180193882:
                        pfVar23 = (float *)(**(code **)(*local_338 + 0x48))();
                        pfVar24 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);
                        local_344 = (*(code *)PTR_FUN_1803da018)
                                              ((pfVar23[1] - pfVar24[1]) * (pfVar23[1] - pfVar24[1])
                                               + (*pfVar23 - *pfVar24) * (*pfVar23 - *pfVar24) +
                                               (pfVar23[2] - pfVar24[2]) * (pfVar23[2] - pfVar24[2])
                                              );
                        FUN_180190220(&local_1e0,plVar12,*(undefined1 *)((longlong)plVar18 + 0x22));
                        fVar45 = local_1d4;
                        fVar44 = local_1d8;
                        fVar43 = local_1dc;
                        fVar42 = local_1e0;
                        plVar14 = local_320;
                        fVar33 = local_324;
                        if ((((((local_1d0 != '\0') && (1 < local_1e8)) && (1 < local_1e4)) &&
                             ((((uint)local_1e0 & 0x7f800000) != 0x7f800000 &&
                              (((uint)local_1dc & 0x7f800000) != 0x7f800000)))) &&
                            (((uint)local_1d8 & 0x7f800000) != 0x7f800000)) &&
                           (((uint)local_1d4 & 0x7f800000) != 0x7f800000)) {
                          local_2e8 = (float)local_1e8;
                          local_298[0] = 0.0;
                          pfVar23 = local_298;
                          if (0.0 <= local_1e0) {
                            pfVar23 = &local_1e0;
                          }
                          pfVar24 = &local_2e8;
                          if (local_1e0 <= local_2e8) {
                            pfVar24 = pfVar23;
                          }
                          fVar46 = *pfVar24;
                          local_2e0 = (float)local_1e4;
                          local_2e4 = 0.0;
                          pfVar23 = &local_2e4;
                          if (0.0 <= local_1dc) {
                            pfVar23 = &local_1dc;
                          }
                          pfVar24 = &local_2e0;
                          if (local_1dc <= local_2e0) {
                            pfVar24 = pfVar23;
                          }
                          local_2d8 = local_2e8;
                          local_2dc = 0.0;
                          pfVar23 = &local_2dc;
                          if (0.0 <= local_1d8) {
                            pfVar23 = &local_1d8;
                          }
                          pfVar25 = &local_2d8;
                          if (local_1d8 <= local_2e8) {
                            pfVar25 = pfVar23;
                          }
                          fVar39 = *pfVar25;
                          local_2d0 = local_2e0;
                          local_2d4 = 0.0;
                          pfVar23 = &local_2d4;
                          if (0.0 <= local_1d4) {
                            pfVar23 = &local_1d4;
                          }
                          pfVar25 = &local_2d0;
                          if (local_1d4 <= local_2e0) {
                            pfVar25 = pfVar23;
                          }
                          if (DAT_180380ac0 <= fVar39 - fVar46) {
                            fVar40 = *pfVar24;
                            fVar41 = *pfVar25;
                            if (DAT_180380ac0 <= fVar41 - fVar40) {
                              local_308 = local_1e0;
                              local_304 = local_1dc;
                              local_300 = local_1d8;
                              local_2fc = local_1d4;
                              FUN_180127ac0(local_320,&local_308,plVar18,local_324);
                              local_358 = (uint)local_208;
                              local_368 = CONCAT44(local_368._4_4_,local_344);
                              local_360 = plVar13;
                              local_318 = fVar46;
                              local_314 = fVar40;
                              local_310 = fVar39;
                              local_30c = fVar41;
                              FUN_180127ff0(plVar14,&local_318,plVar18,fVar33);
                              if (*(char *)((longlong)plVar18 + 0x24) != '\0') {
                                uVar8 = FUN_18001c680(plVar12);
                                iVar11 = FUN_18001c770(plVar12);
                                if (0 < iVar11) {
                                  local_2f8 = fVar42;
                                  local_2f4 = fVar43;
                                  local_2f0 = fVar44;
                                  local_2ec = fVar45;
                                  local_368 = CONCAT44(local_368._4_4_,fVar33);
                                  FUN_180128770(plVar14,&local_2f8,uVar8,iVar11);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      FUN_18020b4e0(extraout_XMM0_Qa_08,&local_208);
                    }
                  }
                  else {
                    FUN_18020b4e0(uVar35,&local_208);
                  }
                }
              }
              else {
                FUN_18020b4e0(uVar35,&local_208);
              }
            }
          }
          if (DAT_1805c39a0 != 0) {
            pfVar23 = (float *)(**(code **)(*local_338 + 0x48))(local_338);
            local_330 = *pfVar23;
            local_208 = pfVar23[1];
            local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,pfVar23[2]);
            puVar29 = DAT_1805c3998;
            do {
              puVar29 = (undefined8 *)*puVar29;
              while( true ) {
                if (puVar29 == DAT_1805c3998) {
                  return;
                }
                uVar27 = *(uint *)(puVar29 + 2);
                plVar12 = puVar29 + 3;
                uVar28 = (((((ulonglong)(uVar27 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           (ulonglong)((int)uVar27 >> 8 & 0xff)) * 0x100000001b3 ^
                          (ulonglong)((int)uVar27 >> 0x10 & 0xff)) * 0x100000001b3 ^
                         (ulonglong)((int)uVar27 >> 0x18 & 0xff)) * 0x100000001b3 & DAT_1805b8870;
                puVar32 = *(undefined8 **)(DAT_1805b8858 + 8 + uVar28 * 0x10);
                puVar30 = puVar31;
                if (puVar32 != DAT_1805b8848) {
                  for (; (puVar30 = puVar32, uVar27 != *(uint *)(puVar32 + 2) &&
                         (puVar30 = puVar31,
                         puVar32 != *(undefined8 **)(DAT_1805b8858 + uVar28 * 0x10)));
                      puVar32 = (undefined8 *)puVar32[1]) {
                  }
                }
                if (puVar30 != (undefined8 *)0x0) break;
                local_33f = '\0';
                local_328 = -1;
                local_344 = uVar27;
                local_200 = puVar29;
                local_1f0 = plVar12;
                plVar13 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,uVar27);
                uVar35 = extraout_XMM0_Qa_09;
                local_260 = plVar13;
                if (((plVar13 != (longlong *)0x0) &&
                    (BVar9 = IsBadReadPtr(plVar13,8), uVar35 = extraout_XMM0_Qa_10, BVar9 == 0)) &&
                   (BVar9 = IsBadReadPtr((void *)*plVar13,8), uVar35 = extraout_XMM0_Qa_11,
                   BVar9 == 0)) {
                  local_32c = 0xffffffff;
                  piVar16 = (int *)(**(code **)(*plVar13 + 0x10))(plVar13);
                  local_32c = *piVar16;
                  uVar35 = extraout_XMM0_Qa_12;
                  if (((local_32c != -1) && (*(int *)(puVar29 + 7) != -1)) &&
                     (local_32c != *(int *)(puVar29 + 7))) {
                    local_33f = '\x01';
                    local_328 = local_32c;
                  }
                }
                if (local_33f == '\0') {
                  plVar13 = plVar12;
                  if (0xf < (ulonglong)puVar29[6]) {
                    plVar13 = (longlong *)*plVar12;
                  }
                  lVar17 = FUN_180194260(uVar35,plVar13);
                  if ((lVar17 == 0) || (*(char *)(lVar17 + 0x26) == '\0')) {
                    puVar29 = (undefined8 *)FUN_180204e10(extraout_XMM0_Qa_13,&local_290,puVar29);
                    puVar29 = (undefined8 *)*puVar29;
                  }
                  else {
                    fVar33 = local_208 - *(float *)((longlong)puVar29 + 0xac);
                    local_344 = (*(code *)PTR_FUN_1803da018)
                                          (fVar33 * fVar33 +
                                           (local_330 - *(float *)(puVar29 + 0x15)) *
                                           (local_330 - *(float *)(puVar29 + 0x15)) +
                                           (local_1f8._0_4_ - *(float *)(puVar29 + 0x16)) *
                                           (local_1f8._0_4_ - *(float *)(puVar29 + 0x16)));
                    FUN_180190ad0(&local_1c8,puVar29 + 9);
                    fVar44 = local_1bc;
                    fVar43 = local_1c0;
                    fVar42 = local_1c4;
                    fVar33 = local_1c8;
                    if (((((local_1b8 != '\0') && (1 < local_1e8)) && (1 < local_1e4)) &&
                        ((((uint)local_1c8 & 0x7f800000) != 0x7f800000 &&
                         (((uint)local_1c4 & 0x7f800000) != 0x7f800000)))) &&
                       ((((uint)local_1c0 & 0x7f800000) != 0x7f800000 &&
                        (((uint)local_1bc & 0x7f800000) != 0x7f800000)))) {
                      local_2c8 = (float)local_1e8;
                      local_2cc = 0.0;
                      pfVar23 = &local_2cc;
                      if (0.0 <= local_1c8) {
                        pfVar23 = &local_1c8;
                      }
                      pfVar24 = &local_2c8;
                      if (local_1c8 <= local_2c8) {
                        pfVar24 = pfVar23;
                      }
                      fVar45 = *pfVar24;
                      local_2c0 = (float)local_1e4;
                      local_2c4 = 0.0;
                      pfVar23 = &local_2c4;
                      if (0.0 <= local_1c4) {
                        pfVar23 = &local_1c4;
                      }
                      pfVar24 = &local_2c0;
                      if (local_1c4 <= local_2c0) {
                        pfVar24 = pfVar23;
                      }
                      local_2b8 = local_2c8;
                      local_2bc = 0.0;
                      pfVar23 = &local_2bc;
                      if (0.0 <= local_1c0) {
                        pfVar23 = &local_1c0;
                      }
                      pfVar25 = &local_2b8;
                      if (local_1c0 <= local_2c8) {
                        pfVar25 = pfVar23;
                      }
                      fVar46 = *pfVar25;
                      local_2b0[0] = local_2c0;
                      local_2b4 = 0.0;
                      pfVar23 = &local_2b4;
                      if (0.0 <= local_1bc) {
                        pfVar23 = &local_1bc;
                      }
                      pfVar25 = local_2b0;
                      if (local_1bc <= local_2c0) {
                        pfVar25 = pfVar23;
                      }
                      if (DAT_180380ac0 <= fVar46 - fVar45) {
                        fVar39 = *pfVar24;
                        fVar40 = *pfVar25;
                        if (DAT_180380ac0 <= fVar40 - fVar39) {
                          fVar41 = local_324 * DAT_180380ad4;
                          local_2f8 = local_1c8;
                          local_2f4 = local_1c4;
                          local_2f0 = local_1c0;
                          local_2ec = local_1bc;
                          FUN_180127ac0(local_320,&local_2f8,lVar17,fVar41);
                          plVar13 = local_320;
                          if (0xf < (ulonglong)puVar29[6]) {
                            plVar12 = (longlong *)*plVar12;
                          }
                          local_368 = CONCAT44(local_368._4_4_,local_344);
                          local_360 = plVar12;
                          local_358 = uVar27;
                          local_318 = fVar45;
                          local_314 = fVar39;
                          local_310 = fVar46;
                          local_30c = fVar40;
                          FUN_180127ff0(local_320,&local_318,lVar17,fVar41);
                          if ((*(char *)(lVar17 + 0x24) != '\0') && (0 < *(int *)(puVar29 + 0x1a)))
                          {
                            local_308 = fVar33;
                            local_304 = fVar42;
                            local_300 = fVar43;
                            local_2fc = fVar44;
                            local_368 = CONCAT44(local_368._4_4_,fVar41);
                            FUN_180128770(plVar13,&local_308,
                                          *(undefined4 *)((longlong)puVar29 + 0xcc));
                          }
                        }
                      }
                    }
                    puVar29 = (undefined8 *)*puVar29;
                  }
                }
                else {
                  if (0xf < (ulonglong)puVar29[6]) {
                    plVar12 = (longlong *)*plVar12;
                  }
                  local_368 = CONCAT44(local_368._4_4_,local_328);
                  uVar35 = FUN_180014410("[ESP] Entity List erased occupied slot idx=%d class=%s old=%08X new=%08X\n"
                                         ,uVar27,plVar12,*(undefined4 *)(puVar29 + 7));
                  puVar29 = (undefined8 *)FUN_180204e10(uVar35,&local_2a8,puVar29);
                  puVar29 = (undefined8 *)*puVar29;
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return;
}


