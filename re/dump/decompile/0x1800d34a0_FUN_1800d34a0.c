// 0x1800d34a0  FUN_1800d34a0
// size=2679 thunk=false
// signature: undefined FUN_1800d34a0()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d34a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  float *pfVar15;
  uint *puVar16;
  undefined8 *puVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1988 [32];
  undefined4 local_1968;
  float local_1958 [2];
  undefined8 local_1950;
  undefined4 local_1948;
  undefined1 local_1940 [16];
  undefined4 *local_1930;
  undefined8 local_1928;
  uint local_1920;
  float local_1918 [2];
  float local_1910 [2];
  undefined4 *local_1908;
  undefined8 *local_1900;
  char local_18f8 [8];
  longlong local_18f0 [3];
  uint local_18d4 [3];
  uint local_18c8;
  uint local_18c4;
  uint local_18c0;
  undefined4 local_18bc;
  undefined4 local_18b8;
  undefined4 local_18b4;
  char local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_1988;
  if (param_3 == (undefined4 *)0x0) {
    DAT_1803e9084 = 0xffffffff;
  }
  else {
    DAT_1803e9084 = *param_3;
  }
  DAT_1803db490 = 0;
  DAT_1803db45c = 0;
  local_1910[0] = -5.7999425e+28;
  local_1910[1] = 1.36507276e-17;
  local_1918[0] = 1.007425e+09;
  local_1918[1] = 2.6265411;
  local_1930 = param_3;
  local_1908 = param_3;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1940,local_1910);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,&local_1950,local_1918);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 != '\0') goto LAB_1800d3efa;
  fVar23 = (float)param_3[4];
  puVar1 = (undefined8 *)(param_3 + 2);
  local_1928 = *puVar1;
  local_1920 = param_3[4];
  local_1900 = puVar1;
  cVar6 = FUN_1800cb0e0();
  if (cVar6 != '\0') {
    cVar6 = FUN_1800d3160();
    if (cVar6 != '\0') {
      DAT_1803db438 = '\0';
      DAT_1803db45d = 0;
      cVar6 = FUN_1800ceed0();
      if (((cVar6 != '\0') &&
          (uVar3 = param_3[8], param_3[8] = uVar3 & 0xfffffffe, (uVar3 & 1) != 0)) &&
         ((DAT_180425ac0 = DAT_180425ac0 + 1, DAT_180425ac0 < 6 ||
          (DAT_180425ac0 == (DAT_180425ac0 / 100) * 100)))) {
        FUN_180014410("[AIM] shot held: post-kill snap delay, no tick named, the round could not register (#%d)\n"
                      ,DAT_180425ac0);
      }
      goto LAB_1800d3efa;
    }
    local_1968 = param_3[1];
    FUN_1800d1750(param_1,local_18f8,&local_1928,(float)*(double *)(DAT_1803fa608 + 0x28));
    FUN_1800d3310(local_18f0[0]);
    if (local_18f0[0] != 0) {
      DAT_1803e8718 = FUN_1800d3290(local_18f0);
      DAT_180409cc0 = local_18f0[0];
      DAT_1803e870c = local_18bc;
      DAT_180409cbc = local_18b8;
      DAT_1803e8714 = local_18b4;
      if (DAT_1803fa608 == 0) {
        _DAT_1803e8710 = 0.0;
      }
      else {
        _DAT_1803e8710 = (float)*(double *)(DAT_1803fa608 + 0x10);
      }
    }
    cVar6 = FUN_1800d3160();
    if (cVar6 != '\0') {
      DAT_1803db438 = '\0';
      DAT_1803db45d = 0;
      cVar6 = FUN_1800ceed0();
      if (((cVar6 != '\0') &&
          (uVar3 = param_3[8], param_3[8] = uVar3 & 0xfffffffe, (uVar3 & 1) != 0)) &&
         ((DAT_1803ffb94 = DAT_1803ffb94 + 1, DAT_1803ffb94 < 6 ||
          (DAT_1803ffb94 == (DAT_1803ffb94 / 100) * 100)))) {
        FUN_180014410("[AIM] shot held: post-kill snap delay, no tick named, the round could not register (#%d)\n"
                      ,DAT_1803ffb94);
      }
      goto LAB_1800d3efa;
    }
    if (local_18f8[0] != '\0') {
      local_1910[0] = -8.0840193e-25;
      local_1910[1] = -4.2617745e+33;
      local_1918[0] = -189.9025;
      local_1918[1] = 3.5775783;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1940,local_1910);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,&local_1950,local_1918);
      piVar11 = (int *)FUN_1802029c0(*plVar9 + 0x28);
      iVar19 = *piVar11;
      DAT_1803db45c = 1;
      if ((DAT_1805c7a50 & 1) == 0) {
        DAT_1805c7a50 = DAT_1805c7a50 | 1;
        _DAT_1805bee98 = 0;
      }
      if (DAT_180423adc != '\0') {
        fVar22 = (float)((uint)((float)local_1928 - DAT_1805bee98) & _DAT_1803817c0);
        fVar20 = (float)((uint)(local_1928._4_4_ - DAT_1805bee9c) & _DAT_1803817c0);
        if ((0.0 < fVar22) && (fVar22 < DAT_180380974)) {
          local_1928._0_4_ = DAT_1805bee98;
        }
        if ((0.0 < fVar20) && (fVar20 < DAT_180380974)) {
          local_1928._4_4_ = DAT_1805bee9c;
        }
      }
      _DAT_1805bee98 = CONCAT44(local_1928._4_4_,(float)local_1928);
      _DAT_1805beea0 = local_1920;
      DAT_180423adc = '\x01';
      if (((((uint)(float)local_1928 & 0x7f800000) != 0x7f800000) &&
          (((uint)local_1928._4_4_ & 0x7f800000) != 0x7f800000)) &&
         ((local_1920 & 0x7f800000) != 0x7f800000)) {
        pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar12 = (*pcVar4)(DAT_1803fa360,uVar7);
        if ((lVar12 == 0) || (lVar13 = FUN_18001dbf0(lVar12), lVar13 == 0)) {
          plVar9 = (longlong *)0x0;
        }
        else {
          uVar14 = FUN_18001dbf0(lVar12);
          plVar9 = (longlong *)FUN_180076750(uVar14);
        }
        iVar8 = 0;
        if (((iVar19 < 2) ||
            ((plVar9 != (longlong *)0x0 && (cVar6 = (**(code **)(*plVar9 + 0x70))(), cVar6 == '\0'))
            )) || (DAT_1803db5f6 != '\0')) {
          *(bool *)param_5 = iVar19 == 0;
          *puVar1 = local_1928;
          param_3[4] = local_1920;
          if ((iVar19 == 0) && (DAT_1803fa668 != (longlong *)0x0)) {
            DAT_1803db43b = 1;
            (**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_1928);
            DAT_1803db43b = 0;
          }
        }
        else {
          *(undefined1 *)((longlong)param_3 + 0x3e) = 1;
          FUN_1802d4050(&local_1928,param_3 + 0x10);
          DAT_1804253ec = DAT_1804253ec + 1;
          if (DAT_1804253ec < 4) {
            local_1968 = 0x32;
            FUN_180014410("[PSILENT] worldclicking offsets flag=0x%X dir=0x%X mouse=(0x%X,0x%X)\n",
                          0x3e,0x40,0x30);
          }
        }
        fVar20 = DAT_180380ac0;
        local_1918[0] = fVar23;
        local_1910[0] = 0.5;
        local_1958[0] = -0.5;
        pfVar18 = local_1958;
        if (DAT_18038135c <= fVar23) {
          pfVar18 = local_1918;
        }
        pfVar15 = local_1910;
        if (fVar23 <= DAT_180380ac0) {
          pfVar15 = pfVar18;
        }
        param_3[4] = *pfVar15;
        if ((local_a0 != '\0') &&
           (cVar6 = FUN_1800c6c50(param_3,local_18f0,"aimbot"), cVar6 == '\0')) {
          uVar3 = param_3[8];
          if (((uVar3 & 1) == 0) && (DAT_1803db438 == '\0')) {
            param_3[8] = uVar3 & 0xfffffffe;
            DAT_1803db438 = '\0';
          }
          else {
            param_3[8] = uVar3 & 0xfffffffe;
            DAT_1803db438 = '\0';
            iVar19 = DAT_1804260cc + 1;
            DAT_1804260cc = iVar19;
            if ((iVar19 < 6) || (iVar19 == (iVar19 / 100) * 100)) {
              if (0 < local_9c) {
                iVar8 = FUN_1800c64b0();
                iVar8 = local_9c + iVar8;
              }
              FUN_180014410("[AIM] shot held: tick %d could not be named, aim is on a pose the server will not restore (#%d)\n"
                            ,iVar8,iVar19);
            }
          }
        }
        if ((((local_18c8 & 0x7f800000) == 0x7f800000) || ((local_18c4 & 0x7f800000) == 0x7f800000))
           || ((local_18c0 & 0x7f800000) == 0x7f800000)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        puVar16 = local_18d4;
        if (bVar5) {
          puVar16 = &local_18c8;
        }
        uVar3 = *puVar16;
        local_1910[0] = (float)uVar3;
        uVar2 = puVar16[1];
        local_1918[0] = (float)uVar2;
        fVar23 = (float)puVar16[2];
        local_1950 = 0;
        local_1948 = 0;
        pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
        local_1958[0] = fVar23;
        uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar12 = (*pcVar4)(DAT_1803fa360,uVar7);
        if (lVar12 != 0) {
          puVar17 = (undefined8 *)FUN_18001c430(lVar12,local_1940);
          local_1950 = *puVar17;
          local_1948 = *(undefined4 *)(puVar17 + 1);
        }
        if ((((uVar3 & 0x7f800000) == 0x7f800000) || ((uVar2 & 0x7f800000) == 0x7f800000)) ||
           ((((uint)fVar23 & 0x7f800000) == 0x7f800000 ||
            (DAT_1803db45e = 1, *(char *)((longlong)param_3 + 0x3e) != '\0')))) {
          DAT_1803db45e = 0;
        }
        _DAT_1803db46c = (undefined4)local_1950;
        _DAT_1803db470 = local_1950._4_4_;
        _DAT_1803db474 = local_1948;
        DAT_1803db478 = *(undefined4 *)puVar1;
        DAT_1803db47c = param_3[3];
        _DAT_1803db480 = param_3[4];
        if ((((uVar3 & 0x7f800000) == 0x7f800000) || ((uVar2 & 0x7f800000) == 0x7f800000)) ||
           (((uint)fVar23 & 0x7f800000) == 0x7f800000)) {
          DAT_1803db490 = 0;
        }
        else {
          DAT_1803db490 = 1;
        }
        DAT_1803db494 = *param_3;
        DAT_1803db498 = local_18f0[0];
        if ((DAT_180426260 & 1) == 0) {
          DAT_180426260 = DAT_180426260 | 1;
        }
        if (DAT_1803fa608 == 0) {
          dVar21 = 0.0;
        }
        else {
          dVar21 = *(double *)(DAT_1803fa608 + 0x10);
        }
        DAT_1803db460 = uVar3;
        DAT_1803db464 = uVar2;
        DAT_1803db468 = fVar23;
        DAT_1803db484 = uVar3;
        DAT_1803db488 = uVar2;
        DAT_1803db48c = fVar23;
        if (((DAT_1804261c8 != local_18f0[0]) || (fVar23 = (float)dVar21, fVar23 <= DAT_1804258d8))
           || (fVar20 <= fVar23 - DAT_1804258d8)) {
          DAT_1803db4a0 = 0.0;
        }
        else {
          fVar20 = (float)(*(code *)PTR_FUN_1803da018)
                                    ((local_94 - _DAT_1805c7b9c) * (local_94 - _DAT_1805c7b9c) +
                                     (local_98 - _DAT_1805c7b98) * (local_98 - _DAT_1805c7b98) +
                                     (local_90 - _DAT_1805c7ba0) * (local_90 - _DAT_1805c7ba0));
          DAT_1803db4a0 = fVar20 / (fVar23 - DAT_1804258d8);
        }
        DAT_1804258d8 = (float)dVar21;
        DAT_1804261c8 = local_18f0[0];
        _DAT_1805c7b98 = local_98;
        _DAT_1805c7b9c = local_94;
        _DAT_1805c7ba0 = local_90;
        return;
      }
      DAT_1803db438 = '\0';
      DAT_1803db45d = 0;
      goto LAB_1800d3efa;
    }
  }
  local_1900 = (undefined8 *)0xf7521f28977a3033;
  local_1908 = (undefined4 *)0x9653fa4f0c4e1755;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1940,&local_1900);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,&local_1950,&local_1908);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 != '\0') {
    local_1900 = (undefined8 *)0xf7521f28977a3033;
    local_1908 = (undefined4 *)0x402819404e703058;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1940,&local_1900);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,&local_1950,&local_1908);
    pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
    if (*pcVar10 != '\0') {
      return;
    }
  }
LAB_1800d3efa:
  FUN_1800d2dd0(param_3);
  return;
}


