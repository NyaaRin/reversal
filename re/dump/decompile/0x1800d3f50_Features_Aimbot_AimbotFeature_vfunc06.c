// 0x1800d3f50  Features_Aimbot_AimbotFeature_vfunc06
// size=4403 thunk=false
// signature: undefined Features_Aimbot_AimbotFeature_vfunc06()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Aimbot_AimbotFeature_vfunc06(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  unkuint9 Var3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  float *pfVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
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
  undefined1 auStack_1b28 [32];
  double local_1b08;
  double local_1b00;
  undefined4 local_1af8;
  char local_1ae8;
  float local_1ae0;
  float local_1adc;
  undefined8 local_1ad8;
  undefined8 uStack_1ad0;
  int local_1ac8;
  float local_1ac0;
  float local_1ab8;
  float local_1ab0;
  float local_1aa8;
  float local_1aa4;
  float local_1aa0 [4];
  int local_1a90;
  undefined8 local_1a88;
  float local_1a80;
  float local_1a78;
  float local_1a74;
  longlong local_1a70;
  undefined8 local_1a68;
  undefined8 local_1a60;
  undefined8 local_1a58;
  float local_1a50;
  undefined4 local_1a4c;
  undefined8 local_1a48;
  float local_1a40;
  int local_1a38;
  int local_1a34 [3];
  undefined1 local_1a28 [48];
  float local_19f8;
  float local_19f4;
  float local_19f0;
  float local_19e8;
  float local_19e4;
  float local_19e0;
  undefined4 local_19dc;
  undefined4 local_19d8;
  undefined2 local_19d4;
  char local_19c8 [8];
  longlong local_19c0 [6];
  undefined4 local_198c;
  undefined4 local_1988;
  undefined4 local_1984;
  undefined1 local_158 [128];
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_1b28;
  if ((DAT_1803fa608 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))(DAT_1803fa668);
    lVar13 = (*pcVar2)(DAT_1803fa360,uVar10);
    if (lVar13 != 0) {
      local_1a60 = 0x237bcfbdef3b6800;
      plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
      local_1a68 = 0x402819404e703058;
      plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
      pcVar15 = (char *)FUN_1801fcfc0(*plVar14 + 0x28);
      if (*pcVar15 == '\0') {
        if ((DAT_180426258 & 1) == 0) {
          DAT_180426258 = DAT_180426258 | 1;
          DAT_18056ff88 = (undefined8 *)0x0;
          DAT_18056ff90 = 0;
          DAT_18056ff98 = 0;
          DAT_18056ffa0 = 0;
          DAT_18056ffa8 = 0;
          DAT_18056ff88 = (undefined8 *)FUN_1802d8350(0x10);
          DAT_18056ff88[1] = 0;
          *DAT_18056ff88 = &DAT_18056ff88;
          atexit(FUN_180309b60);
        }
        lVar13 = DAT_1803fa608;
        if ((((int)DAT_18056ffa8 + (int)DAT_18056ffa0 & 3U) == 0) &&
           (DAT_18056ff98 <= DAT_18056ffa8 + 4 >> 2)) {
          FUN_18022cba0();
        }
        DAT_18056ffa0 = DAT_18056ff98 * 4 - 1 & DAT_18056ffa0;
        uVar23 = DAT_18056ffa8 + DAT_18056ffa0;
        uVar25 = uVar23 >> 2;
        uVar26 = DAT_18056ff98 - 1 & uVar25;
        if (*(longlong *)(DAT_18056ff90 + uVar26 * 8) == 0) {
          uVar16 = FUN_1802d8350(0x10);
          *(undefined8 *)(DAT_18056ff90 + uVar26 * 8) = uVar16;
        }
        *(undefined4 *)
         (*(longlong *)(DAT_18056ff90 + (DAT_18056ff98 - 1 & uVar25) * 8) +
         (ulonglong)((uint)uVar23 & 3) * 4) = *(undefined4 *)(lVar13 + 0x18);
        uVar23 = DAT_18056ffa8 + 1;
        if (300 < DAT_18056ffa8 + 1) {
          uVar23 = DAT_18056ffa8;
          if (DAT_18056ffa8 == 0) {
            DAT_18056ffa0 = 0;
          }
          else {
            DAT_18056ffa0 = DAT_18056ffa0 + 1;
          }
        }
        DAT_18056ffa8 = uVar23;
        fVar31 = 0.0;
        if (DAT_18056ffa0 != DAT_18056ffa8 + DAT_18056ffa0) {
          uVar23 = DAT_18056ffa0;
          do {
            fVar31 = fVar31 + *(float *)(*(longlong *)
                                          (DAT_18056ff90 + (uVar23 >> 2 & DAT_18056ff98 - 1) * 8) +
                                        (ulonglong)((uint)uVar23 & 3) * 4);
            uVar23 = uVar23 + 1;
          } while (uVar23 != DAT_18056ffa8 + DAT_18056ffa0);
        }
        Var3 = (unkuint9)DAT_18056ffa8;
        cVar7 = FUN_1800cb0e0();
        if (cVar7 == '\0') {
          uVar16 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
          uVar16 = FUN_180241610(uVar16,0x4064f70bc33de70a);
          piVar17 = (int *)FUN_1802029c0(uVar16);
          if (*piVar17 == 0) {
            cVar7 = FUN_1800d3160();
            if (cVar7 == '\0') {
              local_1a40 = 0.0;
              local_1a48 = 0;
              (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_1a48);
              local_1b08 = (double)((ulonglong)local_1b08 & 0xffffffff00000000);
              FUN_1800d1750(param_1,local_19c8,&local_1a48,fVar31 / (float)(unkint9)Var3);
              FUN_1800d3310(local_19c0[0]);
              if (local_19c0[0] != 0) {
                DAT_1803e8718 = FUN_1800d3290(local_19c0);
                DAT_180409cc0 = local_19c0[0];
                DAT_1803e870c = local_198c;
                DAT_180409cbc = local_1988;
                DAT_1803e8714 = local_1984;
                if (DAT_1803fa608 == 0) {
                  _DAT_1803e8710 = 0.0;
                }
                else {
                  _DAT_1803e8710 = (float)*(double *)(DAT_1803fa608 + 0x10);
                }
              }
              if (local_19c8[0] != '\0') {
                local_1a88 = local_1a48;
                local_1a80 = local_1a40;
                puVar18 = (undefined8 *)FUN_1800d2c00(&local_1a58,&local_1a88);
                uVar16 = *puVar18;
                local_1a40 = *(float *)(puVar18 + 1);
                local_1ab0 = (float)uVar16;
                local_1a48 = uVar16;
                if (((uint)local_1ab0 & 0x7f800000) != 0x7f800000) {
                  local_1a48._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
                  local_1ab8 = local_1a48._4_4_;
                  uVar11 = (uint)local_1a48._4_4_ & 0x7f800000;
                  if ((uVar11 != 0x7f800000) &&
                     (local_1ac0 = local_1a40, ((uint)local_1a40 & 0x7f800000) != 0x7f800000)) {
                    DAT_1803db43b = 1;
                    (**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_1a48);
                    DAT_1803db43b = 0;
                  }
                }
              }
            }
            else {
              DAT_1803db45d = 0;
            }
          }
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar13 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar13 = *(longlong *)(lVar13 + 0xec0);
        if (((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x1520), lVar13 != 0)) &&
           (lVar13 = *(longlong *)(lVar13 + 0x2c8), lVar13 != 0)) {
          local_1a60 = 0xf7521f28977a3033;
          local_1a48 = lVar13;
          plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
          local_1a68 = 0xfd8fb219a478c8e5;
          plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
          pcVar15 = (char *)FUN_1801fcfc0(*plVar14 + 0x28);
          if (*pcVar15 != '\0') {
            (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_1a38,local_1a34);
            FUN_1800ce370(&local_1ae0);
            local_1aa8 = (float)(local_1a38 / 2);
            local_1aa4 = (float)(local_1a34[0] / 2);
            local_1a60 = 0xf7521f28977a3033;
            plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
            local_1a68 = 0xe54c08e402c9b89d;
            plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
            puVar19 = (undefined4 *)FUN_180202dc0(*plVar14 + 0x28);
            uVar10 = *puVar19;
            local_1a60 = 0xf7521f28977a3033;
            plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
            local_1a68 = 0xe54c05e402c9b384;
            plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
            pfVar20 = (float *)FUN_180202dc0(*plVar14 + 0x28);
            fVar31 = *pfVar20;
            local_1a60 = 0xf7521f28977a3033;
            plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
            local_1a68 = 0xe54c02e402c9ae6b;
            plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
            puVar19 = (undefined4 *)FUN_180202dc0(*plVar14 + 0x28);
            uVar1 = *puVar19;
            local_1a60 = 0xf7521f28977a3033;
            plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
            local_1a68 = 0xe54c15e402c9ceb4;
            plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
            puVar19 = (undefined4 *)FUN_180202dc0(*plVar14 + 0x28);
            fVar37 = local_1adc;
            fVar36 = local_1ae0;
            fVar29 = DAT_180380bb0;
            local_1a58 = CONCAT44(uVar1,*puVar19);
            local_1a50 = fVar31;
            local_1a4c = uVar10;
            if (((0.0 < local_1ae0) && (0.0 < local_1adc)) &&
               (fVar30 = ((float)local_1a38 * DAT_180380ac0) / local_1ae0,
               fVar31 = ((float)local_1a34[0] * DAT_180380ac0) / local_1adc,
               DAT_180380bb0 < fVar31 * fVar31 + fVar30 * fVar30)) {
              local_1a60 = 0xf7521f28977a3033;
              plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1ad8,&local_1a60);
              local_1a68 = 0xc811eaac2acc1f62;
              plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1a88,&local_1a68);
              pcVar15 = (char *)FUN_1801fcfc0(*plVar14 + 0x28);
              uVar11 = FUN_180268ed0(&local_1a58);
              if ((uVar11 & 0xff000000) != 0) {
                local_1af8 = 0x167;
                local_1b00 = (double)CONCAT44(local_1b00._4_4_,DAT_180380f6c);
                local_1b08 = (double)((ulonglong)local_1b08 & 0xffffffff00000000);
                if (*pcVar15 == '\0') {
                  FUN_180294590(lVar13,&local_1aa8,&local_1ae0,0);
                  local_1b00 = (double)CONCAT44(local_1b00._4_4_,0x200);
                  local_1b08 = (double)CONCAT44(local_1b08._4_4_,DAT_180380d30);
                  FUN_1802929d0(lVar13,*(undefined8 *)(lVar13 + 0x58),*(undefined4 *)(lVar13 + 0x50)
                                ,uVar11);
                }
                else {
                  FUN_180294590(lVar13,&local_1aa8,&local_1ae0,0);
                  FUN_1802938c0(lVar13,*(undefined8 *)(lVar13 + 0x58),*(undefined4 *)(lVar13 + 0x50)
                                ,uVar11);
                }
                *(undefined4 *)(lVar13 + 0x50) = 0;
              }
            }
            local_1a60 = 0xf7521f28977a3033;
            plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a58,&local_1a60);
            local_1a68 = 0xc12dea166e54d7d9;
            plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_1ad8,&local_1a68);
            pcVar15 = (char *)FUN_1801fcfc0(*plVar14 + 0x28);
            if (((*pcVar15 != '\0') && (0.0 < fVar36)) &&
               ((0.0 < fVar37 && ((DAT_1803fa360 != (longlong *)0x0 && (DAT_1803fa608 != 0)))))) {
              local_19dc = 0x42b40000;
              local_19d8 = 0xffffffff;
              local_19d4 = 0;
              AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
              FUN_1802d4780(local_1a28,&DAT_1805707c0);
              local_19e8 = DAT_1805c7c00;
              local_19e4 = DAT_1805c7c04;
              local_19e0 = DAT_1805c7c08;
              local_19dc = DAT_1803da5c0;
              local_19d8 = DAT_1803e7498;
              local_19d4 = CONCAT11(DAT_1803fe650,DAT_180425428);
              ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
              cVar7 = '\0';
              local_1ae8 = '\0';
              fVar31 = 0.0;
              fVar36 = 0.0;
              fVar37 = 0.0;
              if (((char)local_19d4 != '\0') &&
                 (((local_19d4._1_1_ != '\0' &&
                   (fVar30 = (float)(*(code *)PTR_FUN_1803da018)
                                              (local_19f8 * local_19f8 + local_19f4 * local_19f4 +
                                               local_19f0 * local_19f0), fVar31 = local_19f8,
                   fVar36 = local_19f4, fVar37 = local_19f0,
                   ((uint)fVar30 & 0x7f800000) != 0x7f800000)) && (DAT_180380948 < fVar30)))) {
                fVar29 = fVar29 / fVar30;
                fVar31 = local_19f8 * fVar29;
                fVar36 = local_19f4 * fVar29;
                fVar37 = local_19f0 * fVar29;
                cVar7 = '\x01';
                local_1ae8 = '\x01';
              }
              pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
              local_1ac0 = fVar37;
              local_1ab8 = fVar31;
              local_1ab0 = fVar36;
              uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
              local_1a70 = (*pcVar2)(DAT_1803fa360,uVar10);
              fVar30 = DAT_180381384;
              fVar29 = DAT_180381308;
              iVar12 = *(int *)(DAT_1803fa608 + 0x1c);
              if (0x80 < iVar12) {
                iVar12 = 0x80;
              }
              local_1ac8 = 1;
              local_1a90 = iVar12;
              if (local_1a70 != 0) {
LAB_1800d4b40:
                do {
                  iVar6 = local_1ac8;
                  if (iVar12 < local_1ac8) break;
                  lVar21 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_1ac8);
                  if ((lVar21 != 0) && (cVar8 = FUN_1800c5030(lVar21,local_1a70), cVar8 != '\0')) {
                    FUN_1800c4970(&local_1a88,lVar21);
                    fVar35 = local_1a80;
                    fVar33 = (float)local_1a88;
                    local_1ad8 = local_1a88;
                    uStack_1ad0 = CONCAT44(uStack_1ad0._4_4_,local_1a80);
                    cVar8 = FUN_180021ac0(&local_1ad8,&local_1a78);
                    if (cVar8 != '\0') {
                      local_1aa0[3] = fVar30;
                      fVar32 = fVar30;
                      fVar28 = local_1aa0[3];
                      if (cVar7 != '\0') {
                        fVar33 = fVar33 - local_19e8;
                        fVar34 = local_1a88._4_4_ - local_19e4;
                        local_1a58 = CONCAT44(fVar34,fVar33);
                        fVar35 = fVar35 - local_19e0;
                        local_1a50 = fVar35;
                        fVar27 = (float)(*(code *)PTR_FUN_1803da018)
                                                  (fVar34 * fVar34 + fVar33 * fVar33 +
                                                   fVar35 * fVar35);
                        fVar28 = local_1aa0[3];
                        if (DAT_180380964 < fVar27) {
                          local_1aa0[2] = 1.0;
                          local_1aa0[0] = -1.0;
                          local_1aa0[1] =
                               (fVar36 * fVar34 + fVar31 * fVar33 + fVar37 * fVar35) / fVar27;
                          pfVar20 = local_1aa0;
                          if (fVar30 <= local_1aa0[1]) {
                            pfVar20 = local_1aa0 + 1;
                          }
                          pfVar22 = local_1aa0 + 2;
                          if (local_1aa0[1] <= DAT_180380bb0) {
                            pfVar22 = pfVar20;
                          }
                          fVar32 = fVar29;
                          fVar28 = fVar29;
                          if (fVar30 <= *pfVar22) {
                            fVar35 = acosf(*pfVar22);
                            fVar35 = fVar35 / DAT_180380994;
                            sVar9 = _fdclass();
                            if (sVar9 < 1) {
                              fVar32 = fVar35;
                              fVar28 = fVar35;
                            }
                          }
                        }
                      }
                      local_1aa0[3] = fVar28;
                      fVar33 = local_1a74;
                      fVar35 = local_1a78;
                      fVar28 = (local_1a78 - local_1aa8) / local_1ae0;
                      fVar27 = (local_1a74 - local_1aa4) / local_1adc;
                      fVar28 = fVar27 * fVar27 + fVar28 * fVar28;
                      if (fVar28 < 0.0) {
                        fVar28 = sqrtf(fVar28);
                      }
                      else {
                        fVar28 = SQRT(fVar28);
                      }
                      lVar21 = (longlong)iVar6;
                      if ((*(int *)(&DAT_1803e8a68 + lVar21 * 0xc) < 0) ||
                         (0x40 < *(int *)(DAT_1803fa608 + 0x20) -
                                 *(int *)(&DAT_1803e8a68 + lVar21 * 0xc))) {
                        FUN_180203ab0(local_158,"aim --  cam %.1f  ell %.2f",(double)fVar32,
                                      (double)fVar28);
                        bVar4 = false;
                      }
                      else {
                        fVar27 = *(float *)(&DAT_1803e8a60 + lVar21 * 0xc);
                        if ((fVar27 < 0.0) ||
                           (bVar4 = true, *(float *)(&DAT_1803e8a64 + lVar21 * 0xc) < fVar27)) {
                          bVar4 = false;
                        }
                        local_1b00 = (double)fVar28;
                        local_1b08 = (double)fVar32;
                        FUN_180203ab0(local_158,"aim %.1f/%.1f  cam %.1f  ell %.2f",(double)fVar27,
                                      (double)*(float *)(&DAT_1803e8a64 + lVar21 * 0xc));
                      }
                      local_1a68 = CONCAT44(fVar33 - DAT_180380f40,fVar35 + DAT_180380fa8);
                      uVar10 = 0xeb6e6eff;
                      if (bVar4) {
                        uVar10 = 0xeb78ff78;
                      }
                      local_1b08 = 0.0;
                      FUN_180295600(lVar13,&local_1a68,uVar10,local_158);
                      local_1a60 = CONCAT44(fVar33,fVar35);
                      local_1b08 = (double)CONCAT44(local_1b08._4_4_,8);
                      FUN_180295540(lVar13,&local_1a60,DAT_180380db8,uVar10);
                      local_1ac8 = iVar6 + 1;
                      cVar7 = local_1ae8;
                      goto LAB_1800d4b40;
                    }
                  }
                  local_1ac8 = iVar6 + 1;
                  cVar7 = local_1ae8;
                } while( true );
              }
            }
          }
          cVar7 = FUN_1800c6240();
          if ((cVar7 != '\0') &&
             (iVar12 = FUN_1800c62d0(), uVar5 = _UNK_180381618, uVar16 = _DAT_180381610,
             uVar1 = DAT_180380f28, uVar10 = DAT_180380e9c, iVar12 != 1)) {
            uVar25 = DAT_1803fac60 + DAT_1803fac58;
            for (uVar23 = DAT_1803fac58; uVar23 != uVar25; uVar23 = uVar23 + 1) {
              plVar14 = *(longlong **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar23) * 8);
              lVar21 = plVar14[1];
              for (lVar24 = *plVar14; lVar24 != lVar21; lVar24 = lVar24 + 0x1868) {
                cVar7 = FUN_1800c60c0(lVar24);
                if (cVar7 != '\0') {
                  local_1a58 = *(undefined8 *)(lVar24 + 0x10);
                  local_1a50 = *(float *)(lVar24 + 0x18);
                  cVar7 = FUN_180021ac0(&local_1a58,&local_1a60);
                  if (cVar7 != '\0') {
                    local_1ad8 = uVar16;
                    uStack_1ad0 = uVar5;
                    uVar11 = FUN_180268ed0(&local_1ad8);
                    local_1a68 = local_1a60;
                    if ((uVar11 & 0xff000000) != 0) {
                      local_1b00 = (double)CONCAT44(local_1b00._4_4_,0xb);
                      local_1b08 = (double)CONCAT44(local_1b08._4_4_,uVar1);
                      FUN_1802941e0(lVar13,&local_1a68,uVar10,0);
                      FUN_1802938c0(lVar13,*(undefined8 *)(lVar13 + 0x58),
                                    *(undefined4 *)(lVar13 + 0x50),uVar11);
                      *(undefined4 *)(lVar13 + 0x50) = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


