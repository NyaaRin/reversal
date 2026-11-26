// 0x1800c9910  Features_Backtrack_BacktrackFeature_vfunc02
// size=3638 thunk=false
// signature: undefined Features_Backtrack_BacktrackFeature_vfunc02()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Backtrack_BacktrackFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  char cVar11;
  undefined4 uVar12;
  BOOL BVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 *lp;
  longlong *plVar19;
  double *pdVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar38;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_1a58 [32];
  undefined1 *local_1a38;
  char *local_1a30;
  double local_1a28;
  double local_1a20;
  double local_1a18;
  double local_1a10;
  double local_1a08;
  double local_19f8;
  double local_19f0;
  float *local_19e8;
  float *local_19e0;
  undefined8 local_19d8;
  float local_19d0;
  undefined1 local_19c8 [24];
  undefined1 local_19b0 [40];
  undefined1 local_1988 [16];
  float local_1978;
  float local_1974;
  float local_1970;
  float local_196c;
  float local_1968;
  float local_1964;
  undefined4 local_1954;
  undefined4 local_1950;
  undefined4 local_194c;
  undefined1 local_1948;
  undefined1 local_1944 [6144];
  undefined1 local_144;
  double local_140;
  undefined1 local_138;
  int local_134;
  undefined1 local_130 [12];
  undefined1 local_124;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  int local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_1a58;
  local_e8 = 0x13806d9e35de0023;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_19e8,&local_e8);
  local_f8 = (undefined8 *)0x402819404e703058;
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_19c8,&local_f8);
  pcVar17 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
  if ((*pcVar17 != '\0') || (cVar11 = FUN_1800b8200(), cVar11 != '\0')) {
    FUN_1800c7b00(param_3,param_4);
    FUN_1800c7470(param_3,param_4);
    if (param_4 == 0) {
      param_4 = param_3;
    }
    iVar27 = *(int *)(param_4 + 4);
    local_118 = (longlong *)0x0;
    plStack_110 = (longlong *)0x0;
    local_108 = (longlong *)0x0;
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    local_100 = iVar27;
    uVar12 = (**(code **)(*DAT_1803fa668 + 0x60))();
    uVar18 = (*pcVar4)(DAT_1803fa360,uVar12);
    uVar9 = _UNK_1803817d4;
    uVar8 = _DAT_1803817d0;
    dVar31 = DAT_180380d80;
    dVar7 = DAT_180380cb0;
    iVar25 = 1;
    if (0 < (int)DAT_1803fa608[7]) {
      do {
        lp = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar25);
        cVar11 = FUN_1800c5030(lp,uVar18);
        if ((cVar11 != '\0') &&
           ((((0x7f < iVar25 - 1U || (DAT_1803e9228 < 0.0)) || (DAT_1803fa608 == (float *)0x0)) ||
            ((((double)*DAT_1803fa608 - DAT_1803e9228 < 0.0 ||
              (dVar7 < (double)*DAT_1803fa608 - DAT_1803e9228)) ||
             ((&DAT_1804239a0)[iVar25] == '\0')))))) {
          local_1988 = ZEXT816(0);
          local_1954 = 0xffffffff;
          local_1950 = 0;
          local_194c = 0xffffffff;
          local_1948 = 0;
          local_134 = 0;
          local_124 = 0;
          if (((lp != (undefined8 *)0x0) && (BVar13 = IsBadReadPtr(lp,8), BVar13 == 0)) &&
             (BVar13 = IsBadReadPtr((void *)*lp,8), BVar13 == 0)) {
            local_1a38 = local_130;
            cVar11 = FUN_1800c4a70(lp,&local_1978,&local_196c,&local_140);
            if (cVar11 != '\0') {
              local_1988._0_8_ = lp;
              FUN_1800c4b10(local_1988);
            }
          }
          local_144 = 0;
          local_138 = 0;
          if (local_1988._0_8_ != 0) {
            fVar39 = DAT_1803ddea8;
            if (DAT_1803de065 == '\0') {
              if (DAT_1803fa608 == (float *)0x0) {
                fVar39 = 0.0;
                goto LAB_1800c9c17;
              }
              fVar39 = DAT_1803fa608[6];
LAB_1800c9c07:
              if (DAT_1803fa608 == (float *)0x0) {
                uVar30 = 0;
              }
              else {
                uVar30 = *(undefined8 *)(DAT_1803fa608 + 4);
              }
            }
            else {
LAB_1800c9c17:
              uVar30 = DAT_1803ddea0;
              if (DAT_1803de065 == '\0') goto LAB_1800c9c07;
            }
            pfVar1 = DAT_1803fa608 + 6;
            pfVar2 = DAT_1803fa608 + 4;
            uVar3 = *(undefined8 *)pfVar2;
            fVar41 = *pfVar1;
            *(undefined8 *)pfVar2 = uVar30;
            *pfVar1 = fVar39;
            local_19e8 = pfVar2;
            local_19e0 = pfVar1;
            local_19d8 = uVar3;
            local_19d0 = fVar41;
            FUN_1800ba4e0(local_19b0,local_1988._0_8_);
            FUN_180053780(local_19c8,local_1988._0_8_);
            lVar21 = local_1988._0_8_;
            if (local_1988._8_8_ != 0) {
              lVar21 = local_1988._8_8_;
            }
            local_144 = FUN_1800c7670(lVar21,local_1944);
            FUN_180053b40(local_19c8);
            FUN_1800bab10(local_19b0);
            *(undefined8 *)pfVar2 = uVar3;
            *pfVar1 = fVar41;
            cVar11 = FUN_1800c76d0(local_1988._0_8_,&local_f8);
            dVar32 = local_140;
            if (cVar11 != '\0') {
              local_1978 = local_1978 + (float)local_f8;
              local_1974 = local_1974 + local_f8._4_4_;
              local_1970 = local_1970 + local_f0;
              local_196c = local_196c + (float)local_f8;
              local_1968 = local_1968 + local_f8._4_4_;
              local_1964 = local_1964 + local_f0;
            }
            if (((local_140 <= 0.0) || (((uint)((ulonglong)local_140 >> 0x34) & 0x7ff) == 0x7ff)) ||
               (dVar31 < (double)CONCAT44((uint)((ulonglong)
                                                 (*(double *)(DAT_1803fa608 + 4) - local_140) >>
                                                0x20) & uVar9,
                                          SUB84(*(double *)(DAT_1803fa608 + 4) - local_140,0) &
                                          uVar8))) {
              local_140 = (double)iVar27 * *(double *)(DAT_1803fa608 + 10);
            }
            if ((iVar25 - 1U < 0x100) && (dVar32 == local_140)) {
              DAT_1803fb0c4 = DAT_1803fb0c4 + 1;
              if (local_140 != *(double *)((longlong)iVar25 * 8 + 0x1805c51f0)) {
                *(double *)((longlong)iVar25 * 8 + 0x1805c51f0) = local_140;
                DAT_1803fb0d8 = DAT_1803fb0d8 + 1;
                local_1948 = 1;
              }
            }
            local_138 = 1;
            local_134 = iVar27;
            if (plStack_110 == local_108) {
              FUN_180226e30(&local_118,plStack_110,local_1988);
            }
            else {
              FUN_1800c4c90(plStack_110,local_1988);
              plStack_110 = plStack_110 + 0x30d;
            }
          }
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 <= (int)DAT_1803fa608[7]);
    }
    plVar10 = plStack_110;
    plVar16 = local_118;
    fVar39 = DAT_180381290;
    if (DAT_1803fac60 != 0) {
      plVar5 = *(longlong **)
                (DAT_1803fac48 + ((DAT_1803fac58 - 1) + DAT_1803fac60 & DAT_1803fac50 - 1) * 8);
      for (plVar22 = local_118; plVar22 != plStack_110; plVar22 = plVar22 + 0x30d) {
        plVar19 = (longlong *)*plVar5;
        plVar6 = (longlong *)plVar5[1];
        if (plVar19 != plVar6) {
          do {
            if (*plVar19 == *plVar22) {
              fVar41 = *(float *)((longlong)plVar22 + 0x185c) -
                       *(float *)((longlong)plVar19 + 0x185c);
              if (fVar39 < fVar41 * fVar41 +
                           (*(float *)(plVar22 + 0x30b) - *(float *)(plVar19 + 0x30b)) *
                           (*(float *)(plVar22 + 0x30b) - *(float *)(plVar19 + 0x30b))) {
                *(undefined1 *)((longlong)plVar22 + 0x1864) = 1;
                *(undefined1 *)((longlong)plVar19 + 0x1864) = 1;
              }
              break;
            }
            plVar19 = plVar19 + 0x30d;
          } while (plVar19 != plVar6);
        }
      }
    }
    if (DAT_1803fac50 <= DAT_1803fac60 + 1) {
      FUN_18022cdc0();
    }
    DAT_1803fac58 = DAT_1803fac58 & DAT_1803fac50 - 1;
    uVar26 = DAT_1803fac60 + DAT_1803fac58;
    uVar23 = uVar26 & DAT_1803fac50 - 1;
    if (*(longlong *)(DAT_1803fac48 + uVar23 * 8) == 0) {
      uVar18 = FUN_1802d8350(0x20);
      *(undefined8 *)(DAT_1803fac48 + uVar23 * 8) = uVar18;
    }
    plVar19 = local_108;
    plVar22 = plStack_110;
    plVar5 = local_118;
    local_f8 = *(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1 & uVar26) * 8);
    local_108 = (longlong *)0x0;
    plStack_110 = (longlong *)0x0;
    local_118 = (longlong *)0x0;
    *local_f8 = plVar5;
    local_f8[1] = plVar22;
    local_f8[2] = plVar19;
    *(int *)(local_f8 + 3) = local_100;
    fVar41 = DAT_180381278;
    dVar7 = DAT_180380ec0;
    fVar39 = DAT_180380bb0;
    DAT_1803fac60 = DAT_1803fac60 + 1;
    if (DAT_1803fa608 == (float *)0x0) {
      dVar31 = 0.0;
    }
    else {
      dVar31 = *(double *)(DAT_1803fa608 + 4);
    }
    if (plVar16 != plVar10) {
      DAT_1803e9798 = dVar31;
    }
    iVar27 = 0;
    if (((dVar31 - DAT_1803e9798 <= DAT_180380d08) || (DAT_1803fa608 == (float *)0x0)) ||
       ((*(double *)(DAT_1803fa608 + 10) <= 0.0 || (1 < DAT_1803fac60)))) {
      if (DAT_180380d48 < dVar31 - _DAT_1803e71a8) {
        if (((DAT_1803fa608 == (float *)0x0) || (*(double *)(DAT_1803fa608 + 10) <= 0.0)) ||
           (1 < DAT_1803fac60)) {
          if (((DAT_180380d48 < dVar31 - _DAT_1803e71a8) && (DAT_1803fa608 != (float *)0x0)) &&
             ((0.0 < *(double *)(DAT_1803fa608 + 10) && (1 < DAT_1803fac60)))) {
            iVar27 = *(int *)(*(longlong *)(DAT_1803fac48 + (DAT_1803fac58 & DAT_1803fac50 - 1) * 8)
                             + 0x18);
            iVar25 = *(int *)(*(longlong *)
                               (DAT_1803fac48 +
                               ((DAT_1803fac58 - 1) + DAT_1803fac60 & DAT_1803fac50 - 1) * 8) + 0x18
                             );
            if (DAT_1803fac58 != DAT_1803fac60 + DAT_1803fac58) {
              uVar26 = DAT_1803fac58;
              do {
                iVar14 = *(int *)(*(longlong *)(DAT_1803fac48 + (uVar26 & DAT_1803fac50 - 1) * 8) +
                                 0x18);
                iVar15 = iVar14;
                if (iVar27 <= iVar14) {
                  iVar15 = iVar27;
                }
                iVar27 = iVar15;
                if (iVar25 < iVar14) {
                  iVar25 = iVar14;
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != DAT_1803fac60 + DAT_1803fac58);
            }
            dVar34 = (double)(iVar25 - iVar27) * *(double *)(DAT_1803fa608 + 10);
            dVar32 = (double)FUN_1800c5e70();
            local_19f0 = dVar32;
            dVar33 = (double)FUN_1800c5c00();
            if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
               (fVar28 = DAT_1803fb248, fVar39 <= DAT_1803fb248)) {
              fVar28 = 0.0;
            }
            local_19f8 = dVar33;
            uVar18 = FUN_1800c5b20((double)fVar28);
            uVar12 = (undefined4)uVar18;
            uVar38 = (undefined4)((ulonglong)uVar18 >> 0x20);
            dVar35 = (double)FUN_1800c5c90();
            dVar35 = dVar35 + (double)CONCAT44(uVar38,uVar12);
            pdVar20 = &local_19f8;
            if (dVar32 <= dVar33) {
              pdVar20 = &local_19f0;
            }
            dVar36 = dVar35;
            if (*pdVar20 <= dVar35) {
              dVar36 = *pdVar20;
            }
            if (dVar34 < dVar36 * _DAT_180380cb8) {
              if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
                 (fVar28 = DAT_1803fb248, fVar39 <= DAT_1803fb248)) {
                fVar28 = 0.0;
              }
              local_1a20 = (double)(fVar28 * fVar41);
              local_1a28 = dVar35 * dVar7;
              local_1a30 = (char *)(dVar33 * dVar7);
              local_1a38 = (undefined1 *)(dVar32 * dVar7);
              _DAT_1803e71a8 = dVar31;
              FUN_180014410(&DAT_18034ce30,dVar34 * dVar7,dVar36 * dVar7,DAT_1803fac60 & 0xffffffff)
              ;
            }
          }
        }
        else {
          uVar26 = DAT_1803fac60 + DAT_1803fac58;
          _DAT_1803e71a8 = dVar31;
          for (uVar23 = DAT_1803fac58; uVar23 != uVar26; uVar23 = uVar23 + 1) {
            plVar16 = *(longlong **)(DAT_1803fac48 + (DAT_1803fac50 - 1 & uVar23) * 8);
            lVar21 = plVar16[1];
            for (lVar24 = *plVar16; lVar24 != lVar21; lVar24 = lVar24 + 0x1868) {
              cVar11 = FUN_1800c60c0(lVar24);
              iVar25 = iVar27 + 1;
              if (cVar11 == '\0') {
                iVar25 = iVar27;
              }
              iVar27 = iVar25;
            }
          }
          dVar31 = (double)FUN_1800c5c90();
          if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
             (fVar28 = DAT_1803fb248, fVar39 <= DAT_1803fb248)) {
            fVar28 = 0.0;
          }
          dVar32 = (double)FUN_1800c5b20((double)fVar28);
          dVar33 = (double)FUN_1800c5e70();
          fVar28 = (float)FUN_1800c5790();
          local_1a30 = (char *)((double)fVar28 * dVar7);
          if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
             (fVar28 = DAT_1803fb248, fVar39 <= DAT_1803fb248)) {
            fVar28 = 0.0;
          }
          dVar34 = (double)FUN_1800c5aa0();
          local_1a38 = (undefined1 *)(double)(fVar28 * fVar41);
          local_1a28 = dVar33 * dVar7;
          local_1a20 = dVar32 * dVar7;
          local_1a18 = dVar31 * dVar7;
          FUN_180014410(&DAT_18034cd00,DAT_1803fac60 & 0xffffffff,iVar27,dVar34 * dVar7);
        }
      }
    }
    else if (_DAT_180380e18 < dVar31 - _DAT_1803e78f0) {
      _DAT_1803e78f0 = dVar31;
      FUN_180014410(&DAT_18034cc60,dVar31 - DAT_1803e9798);
    }
    DAT_1803fcf78 = DAT_1803fcf78 + 1;
    if (DAT_1803fcf78 == (DAT_1803fcf78 / 0x42) * 0x42) {
      iVar27 = 0;
      dVar31 = 0.0;
      uVar26 = DAT_1803fac60 + DAT_1803fac58;
      for (uVar23 = DAT_1803fac58; uVar23 != uVar26; uVar23 = uVar23 + 1) {
        plVar16 = *(longlong **)(DAT_1803fac48 + (DAT_1803fac50 - 1 & uVar23) * 8);
        lVar21 = plVar16[1];
        for (lVar24 = *plVar16; lVar24 != lVar21; lVar24 = lVar24 + 0x1868) {
          cVar11 = FUN_1800c60c0(lVar24);
          iVar25 = iVar27 + 1;
          if (cVar11 == '\0') {
            iVar25 = iVar27;
          }
          dVar32 = *(double *)(lVar24 + 0x1848);
          if (*(double *)(lVar24 + 0x1848) <= dVar31) {
            dVar32 = dVar31;
          }
          dVar31 = dVar32;
          iVar27 = iVar25;
        }
      }
      iVar25 = FUN_1800c6870();
      iVar14 = FUN_1800c6530();
      if (((iVar14 < iVar25) && (DAT_1803fa608 != (float *)0x0)) &&
         (DAT_180380d80 < *(double *)(DAT_1803fa608 + 4) - _DAT_1803e97f8)) {
        _DAT_1803e97f8 = *(double *)(DAT_1803fa608 + 4);
        fVar28 = (float)FUN_1800c5790();
        if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
           (fVar29 = DAT_1803fb248, fVar39 <= DAT_1803fb248)) {
          fVar29 = 0.0;
        }
        if ((DAT_1803fa608 == (float *)0x0) ||
           (dVar32 = *(double *)(DAT_1803fa608 + 10),
           *(double *)(DAT_1803fa608 + 10) <= _DAT_180380918)) {
          dVar32 = DAT_180380bd0;
        }
        iVar15 = FUN_1800c5d20();
        dVar33 = (double)iVar15 + DAT_180380d38;
        dVar34 = (double)FUN_1800c5dd0();
        uVar12 = FUN_1800c5d20();
        dVar35 = (double)FUN_1800c5c00();
        dVar36 = (double)FUN_1800c5c90();
        if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
           (fVar40 = DAT_1803fb248, fVar39 <= DAT_1803fb248)) {
          fVar40 = 0.0;
        }
        dVar37 = (double)FUN_1800c5b20((double)fVar40);
        local_1a28 = (double)CONCAT44(local_1a28._4_4_,uVar12);
        local_1a38 = (undefined1 *)(dVar36 * dVar7);
        local_1a30 = (char *)(dVar35 * dVar7);
        local_1a20 = dVar34 * dVar7;
        local_1a18 = dVar33 * dVar32 * dVar7;
        local_1a10 = (double)(fVar29 * fVar41);
        local_1a08 = (double)fVar28 * dVar7;
        FUN_180014410("[BT-CLOSED] no legal tick: floor %d > ceiling %d. band centre %.0fms +-%.0fms, restorable %.0fms, choke %d ticks -> margins eat %.0fms off the floor and %.0fms off the ceiling. fakeping %.0fms pushed the band out and lerp %.0fms spent the unlag budget it shares with the shift. Back off ONE of fakeping / interp abuse / fakelag and the window reopens\n"
                      ,iVar25,iVar14,dVar37 * dVar7);
      }
      local_1a28 = *(double *)(DAT_1803fa608 + 4);
      local_1a18 = local_1a28 - dVar31;
      local_1a30 = (char *)CONCAT44(local_1a30._4_4_,(iVar14 - iVar25) + 1);
      local_1a38 = (undefined1 *)CONCAT44(local_1a38._4_4_,iVar14);
      local_1a20 = dVar31;
      FUN_180014410("[BT] records=%d valid=%d shift=%d..%d ticks (%d usable) curtime=%.2f latestSim=%.2f diff=%.3f\n"
                    ,DAT_1803fac60 & 0xffffffff,iVar27,iVar25);
      if ((0 < DAT_1803fb0c4) && (0 < DAT_1803fb0d8)) {
        fVar41 = (float)DAT_1803fb0c4 / (float)DAT_1803fb0d8;
        local_1a30 = "not worth building";
        if (DAT_180380c50 < fVar41) {
          local_1a30 = "worth building";
        }
        local_1a38 = (undefined1 *)(double)((fVar39 - fVar39 / fVar41) * DAT_180381120);
        FUN_180014410(&DAT_18034d0f0,DAT_1803fb0c4,DAT_1803fb0d8,(double)fVar41);
      }
      DAT_1803fb0c4 = 0;
      DAT_1803fb0d8 = 0;
    }
    FUN_18021cee0(&local_118);
  }
  return;
}


