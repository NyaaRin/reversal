// 0x1800d7090  Features_AutoFire_AutoFireFeature_vfunc02
// size=3417 thunk=false
// signature: undefined Features_AutoFire_AutoFireFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * Features_AutoFire_AutoFireFeature_vfunc02
                 (undefined8 param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  char *pcVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  byte bVar19;
  uint uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double dVar21;
  double extraout_XMM0_Qa_02;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 local_110;
  char local_108;
  undefined1 local_100;
  char local_f8;
  byte local_f7;
  char local_f6;
  char local_f5;
  char local_f4;
  char local_f3;
  char local_f2;
  char local_f1;
  undefined1 local_f0;
  uint local_ec;
  char local_e8;
  char *local_e0;
  int local_d8;
  double local_d0 [2];
  float local_c0;
  double local_b8;
  float local_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  char *local_90;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_98 = (longlong *)0x237bcfbdef3b6800;
  local_90 = (char *)0x402819404e703058;
  local_e0 = param_3;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_98);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_a8,&local_90);
  pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
  if (*pcVar11 != '\0') {
    return pcVar11;
  }
  local_98 = (longlong *)0x93fd561a96ab0c67;
  local_90 = (char *)0xaef3b7ea150d7bf;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a8,&local_98);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d0,&local_90);
  piVar12 = (int *)FUN_1802029c0(*plVar10 + 0x28);
  iVar9 = *piVar12;
  if (((iVar9 - 1U < 0xfe) && (cVar4 = FUN_180024540(), cVar4 != '\0')) && (DAT_1803fa545 == '\0'))
  {
    cVar4 = FUN_1800245f0(iVar9);
  }
  else {
    cVar4 = '\0';
  }
  local_98 = (longlong *)0x93fd561a96ab0c67;
  local_90 = (char *)0xad8998a7cc2812c;
  local_f8 = cVar4;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a8,&local_98);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d0);
  pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
  if (((*pcVar11 == '\0') || (param_4 == 0)) ||
     (((*(byte *)(param_4 + 0x20) & 1) == 0 || (DAT_1803db5ef != '\0')))) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_f6 = cVar6;
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar13 = (*pcVar1)(DAT_1803fa360,uVar7);
  if (lVar13 == 0) {
    DAT_1803db438 = 0;
    return (char *)0x0;
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  uVar14 = (*pcVar1)(DAT_1803fa360,uVar7);
  pcVar11 = (char *)FUN_18001dbf0(uVar14);
  if (pcVar11 == (char *)0x0) {
    DAT_1803db438 = 0;
    return (char *)0x0;
  }
  local_90 = pcVar11;
  pcVar15 = (char *)FUN_180071a30();
  if ((char)pcVar15 != '\0') {
    DAT_1803db438 = 0;
    return pcVar15;
  }
  plVar10 = (longlong *)FUN_180076750(pcVar11);
  local_98 = plVar10;
  cVar5 = FUN_1800d6550(pcVar11,plVar10);
  if (cVar5 != '\0') {
    if (((DAT_1803db438 == '\0') || (DAT_1803db45d == '\0')) ||
       (cVar5 = FUN_1800d6720(), cVar5 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((cVar6 != '\0') || (cVar4 != '\0')) || (bVar2)) {
      uVar16 = 1;
      if ((cVar6 != '\0') || ((cVar4 == '\0' && (!bVar2)))) goto LAB_1800d733c;
      local_100 = 1;
    }
    else {
      uVar16 = 0;
LAB_1800d733c:
      local_100 = 0;
    }
    local_110 = CONCAT71(local_110._1_7_,uVar16);
    local_118 = plVar10;
    local_108 = cVar6;
    pcVar15 = (char *)FUN_1800d6c70(uVar16,local_e0,param_4,pcVar11);
    if ((char)pcVar15 != '\0') {
      return pcVar15;
    }
  }
  if ((plVar10 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,pcVar11), cVar6 == '\0')) {
    bVar19 = 0;
  }
  else {
    bVar19 = 1;
  }
  local_f7 = bVar19;
  uVar14 = FUN_18001e4e0(pcVar11);
  cVar6 = FUN_1800d7f60(extraout_XMM0_Qa,uVar14);
  if (cVar6 != '\0') {
    bVar19 = 1;
  }
  puVar18 = &DAT_1803eb458;
  if (0xf < DAT_1803eb470) {
    puVar18 = DAT_1803eb458;
  }
  local_f7 = bVar19;
  cVar6 = FUN_1800d7f60(extraout_XMM0_Qa_00,puVar18);
  uVar20 = (uint)bVar19;
  if (cVar6 != '\0') {
    uVar20 = 1;
  }
  local_f7 = (byte)uVar20;
  if (DAT_1803fa798 == pcVar11) {
    puVar18 = &DAT_1803de118;
    if (0xf < DAT_1803de130) {
      puVar18 = DAT_1803de118;
    }
    local_ec = uVar20;
    cVar6 = FUN_1800d7f60(extraout_XMM0_Qa_01,puVar18);
    if (cVar6 != '\0') {
      uVar20 = 1;
    }
    local_f7 = (byte)uVar20;
  }
  dVar25 = DAT_180380ca0;
  uVar7 = 0;
  uVar28 = 0;
  if (DAT_1803fa608 == (char *)0x0) {
    dVar24 = 0.0;
  }
  else {
    dVar24 = *(double *)(DAT_1803fa608 + 0x10);
  }
  iVar9 = 0;
  if (pcVar11 != DAT_1803fed40) {
    DAT_1803f9210 = 0;
    DAT_180400a38 = 0;
    DAT_1803fe6a8 = '\0';
    DAT_1803fcf40 = '\0';
    DAT_180400a20 = '\0';
    DAT_180425fc0 = 0.0;
    DAT_1803ff0b0 = 0.0;
    DAT_1803db438 = '\0';
    DAT_1804260f8 = dVar24 + DAT_180380ca0;
    DAT_1803fed40 = pcVar11;
  }
  if (dVar24 < DAT_1804260f8) {
    if ((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 1) != 0)) {
      DAT_1803db438 = 0;
      return DAT_1803fa608;
    }
    *(uint *)(local_e0 + 0x20) = *(uint *)(local_e0 + 0x20) & 0xfffffffe;
    DAT_1803db438 = 0;
    return local_e0;
  }
  local_f1 = 0;
  local_ec = uVar20;
  uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  FUN_180241610(uVar14);
  pcVar15 = (char *)FUN_1801fcfc0();
  if (*pcVar15 == '\0') {
LAB_1800d7593:
    local_f1 = '\0';
  }
  else {
    uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    FUN_180241610(uVar14);
    pcVar15 = (char *)FUN_1801fcfc0();
    if (*pcVar15 == '\0') goto LAB_1800d7593;
    local_f1 = '\x01';
  }
  cVar6 = local_f6;
  iVar8 = DAT_1803f920c;
  iVar3 = DAT_1803f9210;
  if ((DAT_1803db438 == '\0') || (DAT_1803db45d == '\0')) {
    local_f5 = '\0';
    if ((cVar4 != '\0') ||
       ((((local_f6 != '\0' || ((char)uVar20 == '\0')) || (DAT_1803fcf40 == '\0')) ||
        (DAT_1803f9210 < 1)))) goto LAB_1800d77f9;
    bVar2 = true;
    local_f6 = '\x01';
    DAT_1803f9210 = DAT_1803f9210 + -1;
LAB_1800d7782:
    local_f3 = '\x01';
  }
  else {
    local_f5 = '\x01';
    if ((char)uVar20 != '\0') {
      local_d0[0] = (double)CONCAT44(local_d0[0]._4_4_,2);
      local_f4 = 0;
      uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      FUN_180241610(uVar14);
      pcVar15 = (char *)FUN_1801fcfc0();
      if (*pcVar15 == '\0') {
LAB_1800d7673:
        local_f4 = '\0';
      }
      else {
        uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
        FUN_180241610(uVar14);
        pcVar15 = (char *)FUN_1801fcfc0();
        if (*pcVar15 == '\0') goto LAB_1800d7673;
        local_f4 = '\x01';
      }
      cVar6 = local_f6;
      iVar8 = 2;
      iVar3 = 2;
      if (local_f4 != '\0') {
        do {
          iVar8 = rand();
          iVar8 = iVar8 % 5 + 2;
          local_d0[0] = (double)CONCAT44(local_d0[0]._4_4_,iVar8);
          pcVar11 = local_90;
          cVar6 = local_f6;
          iVar3 = iVar8;
        } while (iVar8 == DAT_1803f920c);
      }
    }
LAB_1800d77f9:
    DAT_1803f9210 = iVar3;
    DAT_1803f920c = iVar8;
    bVar2 = false;
    local_f6 = '\0';
    if ((cVar4 != '\0') || (local_f5 != '\0')) goto LAB_1800d7782;
    local_f3 = '\0';
  }
  if (cVar6 == '\0') {
    if (local_f3 == '\0') {
      uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      FUN_180241610(uVar14,0x9653fa4f0c4e1755);
      pcVar11 = (char *)FUN_1801fcfc0();
      if (*pcVar11 == '\0') {
LAB_1800d781e:
        local_f3 = '\0';
      }
      else {
        uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
        FUN_180241610(uVar14,0x69dd0449bc44a7a5);
        pcVar11 = (char *)FUN_1801fcfc0();
        if (*pcVar11 == '\0') goto LAB_1800d781e;
        local_f3 = '\x01';
      }
      pcVar11 = (char *)(ulonglong)local_ec;
      if (((local_f3 == '\0') || (DAT_1803fe6a8 == '\0')) ||
         ((DAT_1803fcf40 == '\0' || ((char)local_ec == '\0')))) goto LAB_1800d78c6;
      if (DAT_180425fc0 == 0.0) {
        if (DAT_1803fa608 != (char *)0x0) {
          DAT_180425fc0 = *(double *)(DAT_1803fa608 + 0x10);
          goto LAB_1800d789d;
        }
        DAT_180425fc0 = 0.0;
      }
      else {
LAB_1800d789d:
        if (DAT_1803fa608 != (char *)0x0) {
          uVar7 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
          uVar28 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
        }
      }
      pcVar11 = DAT_1803fa608;
      if ((double)CONCAT44(uVar28,uVar7) - DAT_180425fc0 < dVar25) {
        *(uint *)(local_e0 + 0x20) = *(uint *)(local_e0 + 0x20) | 1;
        DAT_1803db438 = 0;
        DAT_1803db5ee = 1;
        return local_e0;
      }
LAB_1800d78c6:
      DAT_180400a20 = 0;
      if (DAT_1803fe6a8 != '\0') {
        if (DAT_1803fcf40 == '\0') {
          iVar9 = rand();
          pcVar11 = (char *)((longlong)iVar9 * 0x2e8ba2e9 & 0xffffffff);
          DAT_180400a38 = iVar9 % 0xb + 5;
        }
        DAT_1803fe6a8 = '\0';
        DAT_1803fcf40 = '\0';
      }
      DAT_1803db438 = 0;
      DAT_1803f9210 = 0;
      return pcVar11;
    }
LAB_1800d7923:
    if (cVar6 != '\0') goto LAB_1800d792c;
    cVar4 = '\x01';
  }
  else {
    if (local_f3 != '\0') goto LAB_1800d7923;
LAB_1800d792c:
    cVar4 = '\0';
  }
  if (((0 < (int)DAT_180400a38) && (local_f5 == '\0')) && (!bVar2)) {
    DAT_180400a38 = DAT_180400a38 - 1;
    DAT_1803db438 = 0;
    return (char *)(ulonglong)DAT_180400a38;
  }
  local_f8 = cVar4;
  if ((char)local_ec == '\0') {
    DAT_1803fe6a8 = 0;
    DAT_1803fcf40 = 0;
    DAT_1803f9210 = 0;
    fVar29 = 0.0;
    fVar32 = 0.0;
    if (plVar10 != (longlong *)0x0) {
      fVar29 = (float)(**(code **)(*plVar10 + 0x58))(plVar10,pcVar11);
      local_c0 = fVar29;
      fVar32 = (float)(**(code **)(*plVar10 + 0x60))(plVar10,pcVar11);
      local_b0 = fVar32;
    }
    if (0.0 < fVar29) {
      if (DAT_1803fa608 != (char *)0x0) {
        uVar7 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
        uVar28 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
      }
      uVar20 = *(uint *)(local_e0 + 0x20);
      if (DAT_1803ff078 < (double)CONCAT44(uVar28,uVar7) ||
          DAT_1803ff078 == (double)CONCAT44(uVar28,uVar7)) {
        if (_DAT_1803fe3a8 <= (double)CONCAT44(uVar28,uVar7)) {
          *(uint *)(local_e0 + 0x20) = uVar20 | 1;
          if (cVar4 != '\0') {
            DAT_1803db5ee = 1;
          }
          dVar25 = (double)fVar29 + (double)CONCAT44(uVar28,uVar7);
          DAT_1803ff078 = dVar25;
          iVar9 = rand();
          DAT_1803db438 = 0;
          _DAT_1803fe3a8 = (double)(iVar9 % 0x28) / DAT_180380ec0 + (double)fVar32 + dVar25;
          return (char *)((longlong)iVar9 * 0x66666667 & 0xffffffff);
        }
        *(uint *)(local_e0 + 0x20) = uVar20 & 0xfffffffe;
        DAT_1803db438 = 0;
        return (char *)(ulonglong)(uVar20 & 0xfffffffe);
      }
      pcVar11 = (char *)(ulonglong)(uVar20 | 1);
      *(uint *)(local_e0 + 0x20) = uVar20 | 1;
      goto LAB_1800d7b61;
    }
    local_d0[0] = DAT_180380bd0;
    if (DAT_1803fa608 == (char *)0x0) {
      uVar7 = 0;
      uVar28 = 0;
      local_98 = (longlong *)0x0;
    }
    else {
      local_98 = *(longlong **)(DAT_1803fa608 + 0x10);
      uVar7 = SUB84(local_98,0);
      uVar28 = (undefined4)((ulonglong)local_98 >> 0x20);
      if (0.0 < *(double *)(DAT_1803fa608 + 0x28)) {
        local_d0[0] = *(double *)(DAT_1803fa608 + 0x28);
      }
    }
    if (plVar10 == (longlong *)0x0) {
      pcVar11 = (char *)FUN_18001eff0(pcVar11);
      dVar25 = extraout_XMM0_Qa_02;
      local_b8 = extraout_XMM0_Qa_02;
LAB_1800d7d9f:
      uVar26 = SUB84(DAT_180380d08,0);
      uVar27 = (undefined4)((ulonglong)DAT_180380d08 >> 0x20);
    }
    else {
      pcVar11 = (char *)(**(code **)(*plVar10 + 0x40))(plVar10,pcVar11);
      local_e8 = (char)pcVar11;
      local_f0 = 1;
      if (local_e8 != '\0') {
        dVar25 = DAT_1803fea30;
        if (DAT_1803fea30 <= 0.0) {
          dVar25 = (double)CONCAT44(uVar28,uVar7);
          DAT_1803fea30 = (double)CONCAT44(uVar28,uVar7);
        }
        goto LAB_1800d7d9f;
      }
      DAT_1803fea30 = 0.0;
      uVar26 = SUB84(DAT_180380d08,0);
      uVar27 = (undefined4)((ulonglong)DAT_180380d08 >> 0x20);
      dVar25 = (double)CONCAT44(uVar28,uVar7) + DAT_180380d08;
    }
    uVar20 = DAT_1803fd068;
    if (local_f1 == '\0') {
      uVar30 = (undefined4)DAT_180380c18;
      uVar31 = (undefined4)((ulonglong)DAT_180380c18 >> 0x20);
    }
    else {
      uVar30 = (undefined4)DAT_180380c40;
      uVar31 = (undefined4)((ulonglong)DAT_180380c40 >> 0x20);
    }
    uVar17 = *(uint *)(local_e0 + 0x20);
    if (DAT_1803fd078 < (double)CONCAT44(uVar28,uVar7) ||
        DAT_1803fd078 == (double)CONCAT44(uVar28,uVar7)) {
      dVar22 = (double)CONCAT44(uVar31,uVar30) + _DAT_1803f9230;
      dVar24 = dVar25;
      if (dVar25 <= dVar22) {
        dVar24 = dVar22;
      }
      pcVar11 = (char *)(ulonglong)DAT_1803fd068;
      dVar24 = dVar24 + (double)(int)DAT_1803fd068 * local_d0[0];
      if ((double)CONCAT44(uVar28,uVar7) <= dVar24 && dVar24 != (double)CONCAT44(uVar28,uVar7)) {
        *(uint *)(local_e0 + 0x20) = uVar17 & 0xfffffffe;
        DAT_1803db438 = 0;
        return pcVar11;
      }
      *(uint *)(local_e0 + 0x20) = uVar17 | 1;
      if (cVar4 != '\0') {
        DAT_1803db5ee = 1;
      }
      if (0.0 < DAT_180400ad0) {
        DAT_1804260b0 = DAT_1804260b0 + 1;
        uVar17 = DAT_1804260b0 & 0x80000007;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffff8) + 1;
        }
        if (uVar17 == 0) {
          dVar24 = (double)CONCAT44(uVar28,uVar7) - DAT_180400ad0;
          if (dVar24 <= 0.0) {
            dVar22 = 0.0;
          }
          else {
            dVar22 = (double)CONCAT44(uVar27,uVar26) / dVar24;
          }
          local_110 = CONCAT44(uVar31,uVar30);
          local_118 = (longlong *)CONCAT44(local_118._4_4_,uVar20);
          FUN_180014410("[AF-SEMI] dt=%.3f cps=%.1f readyLag=%.3f off=%dtick floor=%.3f\n",dVar24,
                        dVar22,(double)CONCAT44(uVar28,uVar7) - dVar25);
          pcVar11 = (char *)(ulonglong)DAT_1803fd068;
        }
      }
      DAT_180400ad0 = (double)CONCAT44(uVar28,uVar7);
      DAT_1803fd078 = (double)CONCAT44(uVar28,uVar7) + _DAT_180380bf8;
      _DAT_1803f9230 = (double)CONCAT44(uVar28,uVar7);
      pcVar15 = pcVar11;
      while( true ) {
        if ((int)pcVar15 != (int)pcVar11) {
          DAT_1803db438 = 0;
          DAT_1803fd068 = (int)pcVar15;
          return pcVar11;
        }
        iVar8 = rand();
        lVar13 = (longlong)iVar8;
        uVar20 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                         (int)((lVar13 / 3 + (lVar13 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
        pcVar15 = (char *)(ulonglong)uVar20;
        iVar9 = iVar9 + 1;
        if (7 < iVar9) break;
        pcVar11 = (char *)(ulonglong)DAT_1803fd068;
      }
      DAT_1803db438 = 0;
      DAT_1803fd068 = uVar20;
      return (char *)(lVar13 * 0x55555556 & 0xffffffff);
    }
    *(uint *)(local_e0 + 0x20) = uVar17 | 1;
    goto LAB_1800d7b61;
  }
  local_f2 = 0;
  uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar14 = FUN_180241610(uVar14,0x9653fa4f0c4e1755);
  pcVar15 = (char *)FUN_1801fcfc0(uVar14);
  if (*pcVar15 == '\0') {
LAB_1800d79b6:
    local_f2 = '\0';
  }
  else {
    uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar14 = FUN_180241610(uVar14,0x69dd0449bc44a7a5);
    pcVar15 = (char *)FUN_1801fcfc0(uVar14);
    if (*pcVar15 == '\0') goto LAB_1800d79b6;
    local_f2 = '\x01';
  }
  if (local_f2 != '\0') {
    local_d8 = 0xffffffff;
    pcVar11 = (char *)FUN_18001e5b0(pcVar11);
    dVar22 = DAT_180380ec0;
    dVar24 = DAT_180380c28;
    dVar25 = DAT_180380be8;
    local_d8 = (int)pcVar11;
    if (local_d8 == 0) {
      DAT_1803db438 = 0;
      DAT_1803fe6a8 = (char)pcVar11;
      return pcVar11;
    }
    if (DAT_180400a20 == '\0') {
      if (DAT_1803fa608 == (char *)0x0) {
        uVar7 = 0;
        uVar28 = 0;
      }
      else {
        uVar7 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
        uVar28 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
      }
      if (DAT_1803ff0b0 == 0.0) {
        do {
          iVar9 = rand();
          dVar23 = (double)(iVar9 % 200) / dVar22 + dVar24;
          if (dVar23 <= DAT_1803ff108) {
            dVar21 = DAT_1803ff108 - dVar23;
          }
          else {
            dVar21 = dVar23 - DAT_1803ff108;
          }
        } while (dVar21 < dVar25);
        DAT_1803ff0b0 = (double)CONCAT44(uVar28,uVar7) + dVar23;
        DAT_1803ff108 = dVar23;
      }
      if ((double)CONCAT44(uVar28,uVar7) <= DAT_1803ff0b0 &&
          DAT_1803ff0b0 != (double)CONCAT44(uVar28,uVar7)) {
        if ((local_f5 == '\0') && (local_f6 == '\0')) {
          DAT_1803db438 = 0;
          DAT_1803fcf40 = 0;
          DAT_1803fe6a8 = 1;
          return (char *)0x0;
        }
        DAT_1803db438 = 0;
        DAT_1803fcf40 = 1;
        DAT_1803fe6a8 = 1;
        return (char *)0x1;
      }
      DAT_1803ff0b0 = 0.0;
      DAT_180400a20 = '\x01';
    }
    DAT_180425fc0 = 0.0;
  }
  DAT_1803fe6a8 = 1;
  if ((local_f5 == '\0') && (local_f6 == '\0')) {
    DAT_1803fcf40 = 0;
  }
  else {
    DAT_180400a38 = 0;
    DAT_1803fcf40 = 1;
  }
  *(uint *)(local_e0 + 0x20) = *(uint *)(local_e0 + 0x20) | 1;
  pcVar11 = local_e0;
LAB_1800d7b61:
  if (cVar4 != '\0') {
    DAT_1803db5ee = 1;
  }
  DAT_1803db438 = 0;
  return pcVar11;
}


