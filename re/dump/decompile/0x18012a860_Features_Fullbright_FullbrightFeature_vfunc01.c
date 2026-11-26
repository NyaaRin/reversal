// 0x18012a860  Features_Fullbright_FullbrightFeature_vfunc01
// size=5 thunk=true
// signature: undefined Features_Fullbright_FullbrightFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Fullbright_FullbrightFeature_vfunc01(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  uint auStack_d8 [2];
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  float afStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 auStack_98 [2];
  undefined8 auStack_88 [2];
  ulonglong uStack_78;
  
  uStack_78 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  cVar5 = FUN_180129a60();
  auStack_d8[1] = 4;
  auStack_d8[0] = 0;
  afStack_a8[0] = -1.1026308e-38;
  afStack_a8[1] = -NAN;
  uStack_a0 = 0x93fd561a96ab0c67;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
  puVar8 = (uint *)FUN_1802029c0(*plVar7 + 0x28);
  puVar14 = auStack_d8;
  if (-1 < (int)*puVar8) {
    puVar14 = puVar8;
  }
  puVar9 = auStack_d8 + 1;
  if ((int)*puVar8 < 5) {
    puVar9 = puVar14;
  }
  uVar15 = *puVar9;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if ((DAT_1803ff091 != '\0') && (cVar6 == '\0')) {
    if (DAT_1803eb478 != DAT_1803eb480) {
      DAT_1803eb480 = DAT_1803eb478;
    }
    if (DAT_1803e9f48 != DAT_1803e9f50) {
      DAT_1803e9f50 = DAT_1803e9f48;
    }
    _DAT_1803e7868 = -1.0;
    DAT_1803e7cf0 = 0xffffffff;
    DAT_180409880 = 0;
  }
  if ((cVar5 == '\0') || (cVar6 == '\0')) {
    uVar15 = 0xffffffff;
  }
  DAT_1803ff091 = cVar6;
  if ((DAT_1803e7cf0 != 0xffffffff) && (DAT_1803e7cf0 != uVar15)) {
    if (((DAT_1803e7cf0 & 0xfffffffc) == 0) && (DAT_1803e7cf0 != 2)) {
      FUN_18012a100();
    }
    DAT_180409899 = 0;
    DAT_1803e7cf0 = 0xffffffff;
    _DAT_1803e7868 = -1.0;
  }
  uVar3 = DAT_180380db8;
  fVar2 = DAT_180380bb0;
  fVar16 = DAT_1803809ec;
  if (uVar15 != 0) {
    if (uVar15 == 1) {
      if (DAT_1803e7cf0 != 1) {
        FUN_180129db0(1,DAT_180380db8);
        DAT_1803e7cec = (float)uVar3;
        DAT_1803e7cf0 = uVar15;
        DAT_180409880 = 1;
        return;
      }
LAB_18012a6c3:
      DAT_180409880 = 1;
      if (uVar15 == 1) {
        DAT_1803e7cec = (float)uVar3;
        DAT_180409880 = 1;
        return;
      }
      if (uVar15 == 0) goto LAB_18012a6e4;
    }
    else {
      if (uVar15 == 2) {
        DAT_1803e7cec = fVar2;
        DAT_1803e7cf0 = uVar15;
        DAT_180409880 = 1;
        return;
      }
      if (uVar15 == 3) {
        fStack_cc = 1.0;
        fStack_d0 = 0.1;
        uStack_a0 = 0x93fd561a96ab0c67;
        afStack_a8[0] = 6.892128e-15;
        afStack_a8[1] = 1.1325629e-12;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
        pfVar13 = (float *)FUN_180202dc0(*plVar7 + 0x28);
        pfVar10 = &fStack_d0;
        if (fVar16 <= *pfVar13) {
          pfVar10 = pfVar13;
        }
        pfVar11 = &fStack_cc;
        if (*pfVar13 <= fVar2) {
          pfVar11 = pfVar10;
        }
        fVar1 = *pfVar11;
        cVar5 = FUN_180129b00();
        if (cVar5 != '\0') {
          if (DAT_1803e7cf0 == 3) {
            if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
            FUN_18012a100();
          }
          FUN_180129db0(3,fVar1);
          DAT_1803e7cf0 = 3;
          DAT_180409880 = 1;
          _DAT_1803e7868 = fVar1;
          goto LAB_18012a7ae;
        }
        if (DAT_1803e7cf0 == 3) {
          FUN_18012a100();
        }
        DAT_1803e7cf0 = 0xffffffff;
        _DAT_1803e7868 = -1.0;
      }
      else {
        uVar4 = uVar15;
        if ((uVar15 == 4) ||
           ((uVar15 != 0xffffffff && (uVar4 = DAT_1803e7cf0, DAT_1803e7cf0 == uVar15)))) {
          DAT_1803e7cf0 = uVar4;
          DAT_1803e7cec = fVar2;
          DAT_180409880 = 1;
          return;
        }
      }
      DAT_180409880 = 0;
    }
    if (uVar15 != 3) {
      DAT_1803e7cec = fVar2;
      return;
    }
LAB_18012a7ae:
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3f800000);
    afStack_a8[0] = 0.1;
    auStack_98[0] = 0x93fd561a96ab0c67;
    auStack_88[0] = 0x2b9f64e127f850a9;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_c8,auStack_98);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_b8,auStack_88);
    pfVar13 = (float *)FUN_180202dc0(*plVar7 + 0x28);
    pfVar10 = afStack_a8;
    if (fVar16 <= *pfVar13) {
      pfVar10 = pfVar13;
    }
    pfVar11 = (float *)&uStack_a0;
    if (*pfVar13 <= fVar2) {
      pfVar11 = pfVar10;
    }
    DAT_1803e7cec = *pfVar11;
    return;
  }
  uStack_a0 = 0x93fd561a96ab0c67;
  afStack_a8[0] = 6.739325e+09;
  afStack_a8[1] = 5.0995325e+20;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
  pfVar10 = (float *)FUN_180202dc0(*plVar7 + 0x28);
  fVar1 = *pfVar10;
  if (DAT_1803e7cf0 == 0) {
    fVar16 = DAT_1803809ec;
    if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
    FUN_18012a100();
  }
  FUN_180129db0(0,fVar1);
  DAT_1803e7cf0 = 0;
  _DAT_1803e7868 = fVar1;
LAB_18012a6e4:
  DAT_180409880 = 1;
  uStack_a0 = 0x93fd561a96ab0c67;
  afStack_a8[0] = 6.739325e+09;
  afStack_a8[1] = 5.0995325e+20;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
  puVar12 = (undefined4 *)FUN_180202dc0(*plVar7 + 0x28);
  DAT_1803e7cec = (float)*puVar12;
  return;
}


