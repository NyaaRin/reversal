// 0x1800cfb30  FUN_1800cfb30
// size=4131 thunk=false
// signature: undefined FUN_1800cfb30()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800cfb30(undefined8 *param_1,longlong *param_2,undefined4 *param_3,float param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  BOOL BVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 **ppuVar16;
  float *pfVar17;
  int *piVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  longlong *plVar22;
  undefined1 uVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_68c8 [8];
  undefined1 auStack_68c0 [24];
  undefined1 *local_68a8;
  undefined1 local_6898;
  float local_6894;
  float local_6890;
  float local_688c;
  uint local_6888;
  uint local_6884;
  float local_6880;
  float local_687c;
  undefined4 local_6878;
  undefined4 local_6874;
  undefined4 local_6870;
  float local_686c;
  undefined4 local_6868;
  int local_6864;
  float local_6860;
  float local_685c;
  float local_6858;
  float local_6854;
  undefined4 local_6850;
  undefined8 local_684c;
  undefined8 local_6838;
  float local_6830;
  float local_6828;
  undefined8 *local_6820;
  longlong *local_6818;
  float local_6810;
  float local_680c;
  float local_6808;
  float local_6804;
  float local_6800;
  float local_67fc;
  longlong *local_67f8;
  undefined4 *local_67f0;
  undefined1 local_67e8 [12];
  undefined1 local_67dc [12];
  undefined1 local_67d0 [16];
  undefined1 local_67c0 [24];
  undefined8 *local_67a8;
  undefined8 uStack_67a0;
  undefined1 local_6798 [12];
  undefined1 local_678c [24];
  undefined4 local_6774;
  undefined4 local_6770;
  undefined4 local_676c;
  undefined1 local_6768;
  undefined1 local_4f64;
  undefined1 local_4f60 [8];
  undefined1 local_4f58;
  undefined4 local_4f54;
  undefined1 local_4f50 [12];
  undefined1 local_4f44;
  undefined1 local_4f38 [6256];
  longlong *local_36c8;
  undefined8 uStack_36c0;
  float local_36ac [3];
  float local_36a0;
  float fStack_369c;
  float local_3698;
  undefined4 local_3694;
  undefined4 local_3690;
  undefined4 local_368c;
  undefined1 local_3688;
  undefined1 local_1e78;
  undefined4 local_1e74;
  undefined1 local_1e64;
  longlong *local_1e58;
  longlong *local_1e50;
  char local_608;
  int local_5e8;
  float local_5e4;
  float local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined8 local_5d4;
  float local_5c8 [2];
  ulonglong local_5c0 [2];
  longlong *local_5b0;
  longlong *plStack_5a8;
  longlong local_5a0;
  longlong local_598;
  undefined4 uStack_590;
  char cStack_58c;
  undefined2 uStack_58b;
  undefined1 auStack_589 [145];
  longlong local_4f8 [130];
  ulonglong local_e8;
  
  puVar25 = auStack_68c8;
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_68c8;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_6828 = param_4;
  local_6820 = param_1;
  local_6818 = param_2;
  local_67f0 = param_3;
  uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar13 = (*pcVar1)(DAT_1803fa360,uVar8);
  if (lVar13 == 0) {
    DAT_1803e8a28 = (longlong *)0x0;
    DAT_1803e8a40 = (double)_UNK_180381828;
    _DAT_1803e8a38 = _DAT_180381820;
    bVar29 = false;
    puVar25 = auStack_68c8;
  }
  else {
    fVar30 = (float)FUN_1800ce2c0();
    dVar3 = _DAT_180381820;
    auVar5._8_8_ = _UNK_180381828;
    auVar5._0_8_ = _DAT_180381820;
    dVar4 = _DAT_180381820;
    if (DAT_1803fa608 != (float *)0x0) {
      dVar4 = (double)*DAT_1803fa608;
    }
    lVar14 = FUN_18001dbf0(lVar13);
    plVar20 = (longlong *)0x0;
    if (((((lVar13 != DAT_1803e8a18) || (lVar14 != DAT_1803e8a20)) ||
         (((uint)((ulonglong)dVar4 >> 0x34) & 0x7ff) == 0x7ff)) ||
        ((dVar4 < DAT_1803e8a30 || (DAT_180380c80 < dVar4 - _DAT_1803e8a38)))) ||
       (fVar30 != DAT_1803e8a48)) {
      DAT_1803e8a28 = (longlong *)0x0;
      _DAT_1803e8a38 = auVar5;
    }
    local_5b0 = (longlong *)0x0;
    plStack_5a8 = (longlong *)0x0;
    local_5a0 = 0;
    local_6838 = *param_1;
    local_6830 = *(float *)(param_1 + 1);
    DAT_1803e8a18 = lVar13;
    DAT_1803e8a20 = lVar14;
    DAT_1803e8a30 = dVar4;
    DAT_1803e8a48 = fVar30;
    FUN_1800cef20(&local_5b0,&local_6838,param_4);
    fVar30 = 0.0;
    plVar19 = plVar20;
    do {
      if ((longlong *)0x80 < plVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_1802d8348();
      }
      *(undefined1 *)(plVar19 + 0x3008149a) = 0;
      *(undefined1 *)(plVar19 + 0x30081484) = 0;
      uVar9 = (int)plVar19 + 1;
      plVar19 = (longlong *)(ulonglong)uVar9;
    } while ((int)uVar9 < 0x81);
    cVar7 = FUN_18003a090("Aimbot_IgnoreEntities");
    if (cVar7 != '\0') {
      FUN_1801fd250("Aimbot_IgnoreEntities");
    }
    uVar8 = DAT_180381384;
    fVar31 = DAT_180381308;
    local_6880 = DAT_180381308;
    local_686c = DAT_180381308;
    local_36c8 = (longlong *)0x0;
    uStack_36c0 = 0;
    local_3694 = 0xffffffff;
    local_3690 = 0;
    local_368c = 0xffffffff;
    local_3688 = 0;
    local_1e74 = 0;
    local_1e64 = 0;
    local_1e78 = 0;
    local_6878 = 0;
    local_6874 = 0;
    local_6870 = 0;
    local_6864 = 0x18;
    local_6868 = DAT_180381384;
    fVar36 = 0.0;
    local_688c = 0.0;
    fVar33 = 0.0;
    local_6894 = 0.0;
    fVar34 = 0.0;
    local_6890 = 0.0;
    local_685c = 0.0;
    local_6858 = 0.0;
    local_6854 = 0.0;
    uVar23 = 0;
    local_6898 = 0;
    local_6860 = 0.0;
    local_6884 = 0;
    memset(&local_598,0,0xa0);
    memset(local_4f8,0,0x408);
    local_67f8 = plStack_5a8;
    plVar19 = plVar20;
    plVar15 = local_5b0;
    uVar35 = 0;
    uVar37 = 0;
    uVar39 = 0;
    if (local_5b0 != plStack_5a8) {
      do {
        if ((plVar15[1] != 0) && (lVar13 = *plVar15, lVar13 != 0)) {
          iVar26 = (int)plVar19;
          plVar22 = plVar20;
          if (0 < iVar26) {
            do {
              if (local_4f8[(longlong)plVar22] == lVar13) goto LAB_1800cff37;
              uVar9 = (int)plVar22 + 1;
              plVar22 = (longlong *)(ulonglong)uVar9;
            } while ((int)uVar9 < iVar26);
          }
          if (iVar26 < 0x81) {
            local_4f8[iVar26] = lVar13;
            plVar19 = (longlong *)(ulonglong)(iVar26 + 1);
          }
        }
LAB_1800cff37:
        plVar15 = plVar15 + 4;
      } while (plVar15 != plStack_5a8);
      plVar15 = plVar20;
      plVar22 = local_5b0;
      plVar27 = plVar20;
      plVar28 = plVar20;
      if (local_5b0 != plStack_5a8) {
        do {
          fVar12 = 0.0;
          uVar9 = (uint)plVar15;
          uVar35 = local_6878;
          uVar37 = local_6874;
          uVar39 = local_6870;
          fVar31 = local_686c;
          uVar8 = local_6868;
          dVar3 = DAT_1803813b0;
          if ((9 < (int)uVar9) || (2 < (int)plVar28)) break;
          if (((longlong *)*plVar22 == (longlong *)0x0) ||
             (plVar15 = (longlong *)(**(code **)(*(longlong *)*plVar22 + 0x20))(),
             uVar23 = local_6898, plVar15 == (longlong *)0x0)) {
LAB_1800cfff5:
            if (((plVar22[1] == 0) && (cVar7 = FUN_1800ceed0(), cVar7 != '\0')) &&
               (0 < (int)plVar19)) {
              plVar15 = plVar20;
              do {
                if (local_4f8[(longlong)plVar15] == *plVar22) goto LAB_1800d07ab;
                uVar21 = (int)plVar15 + 1;
                plVar15 = (longlong *)(ulonglong)uVar21;
              } while ((int)uVar21 < (int)plVar19);
            }
            iVar26 = (int)plVar27;
            plVar15 = plVar20;
            if (0 < iVar26) {
              do {
                plVar24 = &local_598 + (longlong)plVar15 * 2;
                if (*plVar24 == *plVar22) goto LAB_1800d00ab;
                uVar21 = (int)plVar15 + 1;
                plVar15 = (longlong *)(ulonglong)uVar21;
              } while ((int)uVar21 < iVar26);
            }
            plVar24 = plVar20;
            if (iVar26 < 10) {
              lVar13 = (longlong)iVar26;
              lVar14 = lVar13 * 0x10;
              plVar24 = &local_598 + lVar13 * 2;
              *plVar24 = *plVar22;
              (&uStack_590)[lVar13 * 4] = 0;
              (&cStack_58c)[lVar14] = '\0';
              *(undefined2 *)(auStack_589 + lVar14 + -2) = local_5dc._1_2_;
              auStack_589[lVar14] = local_5dc._3_1_;
              plVar27 = (longlong *)(ulonglong)(iVar26 + 1);
LAB_1800d00ab:
              if (plVar24 != (longlong *)0x0) {
                uVar23 = local_6898;
                if ((*(char *)((longlong)plVar24 + 0xc) != '\0') || (2 < (int)plVar24[1]))
                goto LAB_1800d07ab;
                *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
              }
            }
            local_6884 = uVar9 + 1;
            if (plVar22[1] == 0) {
              puVar2 = (undefined8 *)*plVar22;
              local_67a8 = (undefined8 *)0x0;
              uStack_67a0 = 0;
              local_6774 = 0xffffffff;
              local_6770 = 0;
              local_676c = 0xffffffff;
              local_6768 = 0;
              local_4f54 = 0;
              local_4f44 = 0;
              if (((puVar2 != (undefined8 *)0x0) && (BVar11 = IsBadReadPtr(puVar2,8), BVar11 == 0))
                 && (BVar11 = IsBadReadPtr((void *)*puVar2,8), BVar11 == 0)) {
                local_68a8 = local_4f50;
                cVar7 = FUN_1800c4a70(puVar2,local_6798,local_678c,local_4f60);
                if (cVar7 != '\0') {
                  local_67a8 = puVar2;
                  FUN_1800c4b10(&local_67a8);
                }
              }
              local_4f64 = 0;
              local_4f58 = 0;
              ppuVar16 = &local_67a8;
            }
            else {
              ppuVar16 = (undefined8 **)FUN_1800c4c90(local_4f38);
            }
            FUN_1800c4c90(&local_1e58,ppuVar16);
            puVar2 = local_6820;
            uVar23 = local_6898;
            if (local_1e58 != (longlong *)0x0) {
              local_5c8[0] = 3.4028235e+38;
              FUN_1800cbbd0(&local_5e8,&local_1e58,local_6820,local_5c8);
              uVar23 = local_6898;
              if (local_5e8 != 0x18) {
                local_6888 = (int)plVar28 + 1;
                local_687c = 0.0;
                local_5c0[0] = local_5c0[0] & 0xffffffff00000000;
                cVar7 = FUN_1800a2ad0();
                if (cVar7 == '\0') {
                  plVar15 = local_1e58;
                  if (local_1e50 != (longlong *)0x0) {
                    plVar15 = local_1e50;
                  }
                  pfVar17 = (float *)FUN_1800cac30(local_67dc,plVar15,&local_5e4,local_5c0);
                }
                else {
                  plVar15 = local_1e58;
                  if (local_1e50 != (longlong *)0x0) {
                    plVar15 = local_1e50;
                  }
                  pfVar17 = (float *)FUN_1800a3d30(local_67e8,plVar15);
                }
                if (((((uint)*pfVar17 & 0x7f800000) != 0x7f800000) &&
                    (((uint)pfVar17[1] & 0x7f800000) != 0x7f800000)) &&
                   ((((uint)pfVar17[2] & 0x7f800000) != 0x7f800000 && (0.0 < (float)local_5c0[0]))))
                {
                  local_687c = (float)local_5c0[0];
                  local_5e4 = *pfVar17;
                  local_5e0 = pfVar17[1];
                  local_5dc = pfVar17[2];
                }
                fVar31 = fVar30;
                if (DAT_1803fa608 != (float *)0x0) {
                  fVar31 = DAT_1803fa608[1];
                }
                if (((-1 < DAT_1803e8a10) && ((int)fVar31 - DAT_1803e8a10 < 2)) &&
                   ((((uint)DAT_1803e9be0 & 0x7f800000) != 0x7f800000 &&
                    ((((uint)DAT_1803e9be4 & 0x7f800000) != 0x7f800000 &&
                     (((uint)DAT_1803e9be8 & 0x7f800000) != 0x7f800000)))))) {
                  local_5e4 = DAT_1803e9be0;
                  local_5e0 = DAT_1803e9be4;
                  local_5dc = DAT_1803e9be8;
                }
                local_5d4 = 0;
                local_5d8 = 0;
                cVar7 = FUN_1800745c0(&local_5e4,&local_5d8);
                fVar6 = local_5dc;
                fVar32 = local_5e0;
                fVar31 = local_5e4;
                uVar8 = DAT_180381384;
                uVar35 = DAT_1803e91f4;
                fVar36 = DAT_1805c39d0;
                fVar33 = DAT_1805c39d4;
                fVar34 = DAT_1805c39d8;
                fVar38 = DAT_1803ebbb0;
                fVar40 = DAT_1803ebbb4;
                fVar41 = DAT_1803ebbb8;
                uVar23 = DAT_180423987;
                if (cVar7 == '\0') {
                  FUN_180073aa0(&local_6810,puVar2);
                  local_684c = 0;
                  local_6850 = 0;
                  local_6804 = fVar31 - local_6810;
                  local_6800 = fVar32 - local_680c;
                  local_67fc = fVar6 - local_6808;
                  FUN_1802d4540(&local_6804,&local_6850);
                  FUN_1800221c0(&local_6850);
                  local_5d8 = local_6850;
                  local_5d4 = local_684c;
                  uVar35 = uVar8;
                  fVar36 = fVar12;
                  fVar33 = fVar12;
                  fVar34 = fVar12;
                  fVar38 = fVar12;
                  fVar40 = fVar12;
                  fVar41 = fVar12;
                  uVar23 = 0;
                }
                if ((((plVar22[1] == 0) ||
                     (fVar31 = *(float *)(plVar22 + 3),
                     ((uint)*(float *)(plVar22 + 3) & 0x7f800000) == 0x7f800000)) &&
                    (fVar31 = local_5c8[0], plVar22[1] == 0)) ||
                   (fVar12 = *(float *)((longlong)plVar22 + 0x14),
                   local_5c8[0] <= *(float *)((longlong)plVar22 + 0x14))) {
                  fVar12 = local_5c8[0];
                }
                if (((uint)fVar12 & 0x7f800000) != 0x7f800000) {
                  fVar32 = DAT_1803e8a48;
                  if (((local_1e58 != (longlong *)0x0) && (local_1e58 == DAT_1803e8a28)) &&
                     ((0.0 <= DAT_1803e8a40 &&
                      ((DAT_1803e8a40 <= DAT_1803e8a30 &&
                       (DAT_1803e8a30 - DAT_1803e8a40 <= DAT_180380c80)))))) {
                    fVar32 = DAT_1803e8a48 * DAT_180380a1c;
                    if (DAT_180380c50 <= DAT_1803e8a48 * DAT_180380a1c) {
                      fVar32 = DAT_180380c50;
                    }
                    fVar32 = fVar32 + DAT_1803e8a48;
                    if (DAT_180381188 <= fVar32) {
                      fVar32 = DAT_180381188;
                    }
                  }
                  if ((fVar12 <= fVar32) && (((uint)fVar31 & 0x7f800000) != 0x7f800000)) {
                    if (plVar24 != (longlong *)0x0) {
                      *(undefined1 *)((longlong)plVar24 + 0xc) = 1;
                    }
                    local_5c0[0] = 0xf7521f28977a3033;
                    plVar15 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_67d0,local_5c0);
                    local_5c0[1] = 0x87c123d070d26543;
                    plVar15 = (longlong *)FUN_180241a30(*plVar15 + 0x28,local_67c0);
                    piVar18 = (int *)FUN_1802029c0(*plVar15 + 0x28);
                    iVar26 = *piVar18;
                    if (iVar26 == 1) {
                      FUN_180073aa0(&local_6838,local_6820);
                      fVar31 = (float)(*(code *)PTR_FUN_1803da018)
                                                ((local_5e0 - local_6838._4_4_) *
                                                 (local_5e0 - local_6838._4_4_) +
                                                 (local_5e4 - (float)local_6838) *
                                                 (local_5e4 - (float)local_6838) +
                                                 (local_5dc - local_6830) * (local_5dc - local_6830)
                                                );
                    }
                    if ((local_608 != '\0') &&
                       ((fVar32 = local_6828, 0 < (int)local_6828 ||
                        ((DAT_1803fa608 != (float *)0x0 &&
                         (fVar32 = DAT_1803fa608[8], 0 < (int)fVar32)))))) {
                      cVar7 = FUN_1800c69c0(fVar32,&local_1e58);
                      if (cVar7 == '\0') goto LAB_1800d078a;
                      if (iVar26 != 1) {
                        fVar32 = (float)FUN_1800c6ab0(fVar32,&local_1e58);
                        fVar31 = fVar31 + fVar32;
                      }
                    }
                    if ((((local_1e58 != (longlong *)0x0) && (local_1e58 == DAT_1803e8a28)) &&
                        (fVar31 = fVar31 * DAT_180380b4c, DAT_1803e8a14 != 0x18)) &&
                       (local_5e8 == DAT_1803e8a14)) {
                      fVar31 = fVar31 * DAT_180380b74;
                    }
                    if (fVar31 < local_6880) {
                      local_6870 = local_5d8;
                      local_6874 = (undefined4)local_5d4;
                      local_6878 = local_5d4._4_4_;
                      local_6880 = fVar31;
                      local_686c = fVar12;
                      FUN_1800c7dd0(&local_36c8,&local_1e58);
                      local_36a0 = local_5e4;
                      fStack_369c = local_5e0;
                      local_3698 = local_5dc;
                      local_6864 = local_5e8;
                      local_6860 = local_687c;
                      plVar28 = (longlong *)(ulonglong)local_6888;
                      local_6898 = uVar23;
                      local_6894 = fVar33;
                      local_6890 = fVar34;
                      local_688c = fVar36;
                      local_6868 = uVar35;
                      local_685c = fVar38;
                      local_6858 = fVar40;
                      local_6854 = fVar41;
                      goto LAB_1800d07ab;
                    }
                  }
                }
LAB_1800d078a:
                plVar28 = (longlong *)(ulonglong)local_6888;
                fVar33 = local_6894;
                fVar34 = local_6890;
                fVar36 = local_688c;
                uVar23 = local_6898;
              }
            }
          }
          else {
            iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
            iVar26 = DAT_18040a4c0;
            uVar23 = local_6898;
            if ((0x7f < iVar10 - 1U) || ((&DAT_18040a4d0)[iVar10] == '\0')) {
              fVar31 = fVar30;
              if (DAT_1803fa608 != (float *)0x0) {
                fVar31 = DAT_1803fa608[1];
              }
              uVar9 = local_6884;
              if (((DAT_18040a4c0 < 1) || (1 < (int)fVar31 - _DAT_1803e908c)) ||
                 (iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15), uVar23 = local_6898,
                 uVar9 = local_6884, iVar10 == iVar26)) goto LAB_1800cfff5;
            }
          }
LAB_1800d07ab:
          plVar22 = plVar22 + 4;
          plVar15 = (longlong *)(ulonglong)local_6884;
          uVar35 = local_6878;
          uVar37 = local_6874;
          uVar39 = local_6870;
          fVar31 = local_686c;
          uVar8 = local_6868;
          dVar3 = DAT_1803813b0;
        } while (plVar22 != local_67f8);
      }
    }
    plVar20 = local_6818;
    if (local_36c8 == (longlong *)0x0) {
      DAT_1803e907c = 0xbf800000;
      DAT_18040a404 = 0.0;
      DAT_180423a24 = 0;
      DAT_1803e921c = 0xffffffff;
      DAT_180423987 = 0;
      DAT_1803e9250 = dVar3;
    }
    else {
      *local_67f0 = uVar39;
      local_67f0[1] = uVar37;
      local_67f0[2] = uVar35;
      FUN_1800c7dd0(local_6818,&local_36c8);
      lVar13 = (**(code **)(*local_36c8 + 0x20))();
      fVar12 = fVar30;
      if (lVar13 != 0) {
        plVar19 = (longlong *)(**(code **)(*local_36c8 + 0x20))();
        fVar12 = (float)(**(code **)(*plVar19 + 0x48))(plVar19);
      }
      if (DAT_1803fa608 != (float *)0x0) {
        fVar30 = DAT_1803fa608[1];
      }
      if (((((uint)local_36a0 & 0x7f800000) == 0x7f800000) ||
          (((uint)fStack_369c & 0x7f800000) == 0x7f800000)) ||
         (((uint)local_3698 & 0x7f800000) == 0x7f800000)) {
        bVar29 = false;
      }
      else {
        bVar29 = true;
      }
      pfVar17 = &local_36a0;
      if (!bVar29) {
        pfVar17 = local_36ac;
      }
      _DAT_1803e9bd0 = *(undefined8 *)pfVar17;
      DAT_1803e9bd8 = pfVar17[2];
      DAT_1803e8a50 = local_6864;
      DAT_18040a404 = local_6860;
      if (((((uint)((ulonglong)DAT_1803e8a30 >> 0x34) & 0x7ff) == 0x7ff) || (DAT_1803e8a30 < 0.0))
         || (local_36c8 == (longlong *)0x0)) {
        DAT_1803e8a28 = (longlong *)0x0;
        DAT_1803e8a40._0_4_ = SUB84(dVar3,0);
        _DAT_1803e8a38 = dVar3;
        DAT_1803e8a40._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        if ((local_36c8 != DAT_1803e8a28) || (fVar31 <= DAT_1803e8a48)) {
          DAT_1803e8a40 = DAT_1803e8a30;
        }
        DAT_1803e8a28 = local_36c8;
        _DAT_1803e8a38 = DAT_1803e8a30;
      }
      DAT_1803e8a14 = local_6864;
      DAT_1803e9078 = fVar30;
      DAT_1803e907c = uVar8;
      _DAT_1803e9080 = fVar30;
      DAT_18040a408 = fVar12;
      if ((((((uint)fVar36 & 0x7f800000) == 0x7f800000) ||
           (((uint)fVar33 & 0x7f800000) == 0x7f800000)) ||
          (((uint)fVar34 & 0x7f800000) == 0x7f800000)) ||
         (fVar33 * fVar33 + fVar36 * fVar36 + fVar34 * fVar34 <= DAT_180380938)) {
        DAT_180423a24 = 0;
        DAT_1803e921c = 0xffffffff;
        DAT_180423987 = 0;
        DAT_1803e9250 = dVar3;
      }
      else {
        if (DAT_1803fa608 != (float *)0x0) {
          dVar3 = (double)*DAT_1803fa608;
        }
        DAT_1803e9250 = dVar3;
        DAT_1805c39d0 = fVar36;
        DAT_1805c39d4 = fVar33;
        DAT_1805c39d8 = fVar34;
        if ((local_36c8 == (longlong *)0x0) ||
           (lVar13 = (**(code **)(*local_36c8 + 0x20))(), lVar13 == 0)) {
          DAT_180423a24 = 0;
        }
        else {
          plVar19 = (longlong *)(**(code **)(*local_36c8 + 0x20))();
          DAT_180423a24 = (**(code **)(*plVar19 + 0x48))(plVar19);
        }
        DAT_1803e921c = DAT_1803e9084;
        DAT_1803ebbb0 = local_685c;
        DAT_1803ebbb4 = local_6858;
        DAT_1803ebbb8 = local_6854;
        DAT_180423987 = uVar23;
      }
    }
    bVar29 = *plVar20 != 0;
    if (local_5b0 != (longlong *)0x0) {
      plVar20 = local_5b0;
      puVar25 = auStack_68c8;
      if ((0xfff < (local_5a0 - (longlong)local_5b0 & 0xffffffffffffffe0U)) &&
         (plVar20 = (longlong *)local_5b0[-1], puVar25 = auStack_68c8,
         0x1f < (ulonglong)((longlong)local_5b0 + (-8 - (longlong)plVar20)))) {
        pcVar1 = (code *)swi(0x29);
        plVar20 = (longlong *)(*pcVar1)(5);
        puVar25 = auStack_68c0;
      }
      *(undefined8 *)(puVar25 + -8) = 0x1800d0b34;
      free(plVar20);
    }
  }
  *(undefined8 *)(puVar25 + -8) = 0x1800cfc29;
  return bVar29;
}


