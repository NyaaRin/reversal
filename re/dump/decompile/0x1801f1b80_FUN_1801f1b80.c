// 0x1801f1b80  FUN_1801f1b80
// size=5682 thunk=false
// signature: undefined FUN_1801f1b80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f1b80(undefined8 param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  undefined4 uVar14;
  BOOL BVar15;
  longlong lVar16;
  longlong *plVar17;
  char *pcVar18;
  int *piVar19;
  char **ppcVar20;
  undefined4 *lp;
  char **ppcVar21;
  char **ppcVar22;
  int iVar23;
  char *pcVar24;
  undefined8 uVar25;
  bool bVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  float fVar27;
  undefined1 auStack_538 [32];
  undefined4 local_518;
  char local_508;
  char local_507;
  char local_506;
  char local_505;
  char local_504;
  undefined1 local_503;
  byte local_502;
  char local_501;
  undefined1 local_500;
  undefined1 local_4ff;
  char local_4fe;
  char local_4fd;
  undefined1 local_4fc;
  undefined1 local_4fb;
  char local_4fa;
  undefined1 local_4f9;
  undefined1 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4d8;
  undefined1 local_4d0;
  ulonglong *local_4c8;
  char *local_4c0;
  longlong local_4b8;
  undefined1 local_4b0 [16];
  longlong *local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  longlong local_488;
  undefined1 local_480 [16];
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  char *local_400;
  char *local_3f8;
  char *local_3f0;
  float local_3e8 [2];
  char *local_3e0 [2];
  undefined8 local_3d0;
  ulonglong local_3c8 [2];
  ulonglong local_3b8;
  ulonglong uStack_3b0;
  ulonglong local_3a8;
  ulonglong uStack_3a0;
  ulonglong local_398;
  ulonglong uStack_390;
  ulonglong local_388;
  ulonglong uStack_380;
  ulonglong local_378;
  ulonglong uStack_370;
  ulonglong local_368;
  ulonglong uStack_360;
  ulonglong local_358;
  ulonglong uStack_350;
  ulonglong local_348;
  ulonglong uStack_340;
  ulonglong local_338;
  ulonglong uStack_330;
  ulonglong local_328;
  ulonglong uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  ulonglong local_2f8;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  ulonglong local_2b8;
  ulonglong uStack_2b0;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  ulonglong local_288;
  ulonglong uStack_280;
  ulonglong local_278;
  ulonglong uStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [16];
  ulonglong local_228;
  undefined1 local_218 [28];
  undefined4 local_1fc;
  undefined1 local_1f4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined1 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined2 local_194;
  undefined1 local_192;
  undefined1 local_148 [28];
  undefined4 local_12c;
  undefined1 local_124;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined2 local_c4;
  undefined1 local_c2;
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_538;
  if (DAT_1803fa478 == 0) {
    return;
  }
  local_4f0 = param_1;
  local_4e8 = param_4;
  local_4e0 = param_3;
  local_4d8 = param_4;
  local_4c8 = param_2;
  local_3d0 = param_1;
  if (DAT_1803ff270 == '\0') {
    local_518 = param_4;
    FUN_1801f1680(param_1,param_1,param_2,param_3);
    return;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(int *)(lVar5 + 0xecc) = *(int *)(lVar5 + 0xecc) + 1;
  local_503 = *(undefined1 *)(lVar5 + 0xf6f);
  *(undefined1 *)(lVar5 + 0xf6f) = 0;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar10 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar10 == '\0')) {
LAB_1801f31fc:
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
    DAT_180425428 = 0;
    DAT_1803fe650 = 0;
    DAT_1803e7498 = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
    DAT_1803e78d0 = -NAN;
    DAT_180425f80 = 0;
    local_518 = param_4;
    FUN_1801f1680(extraout_XMM0_Da_09,param_1,param_2,param_3);
    *(undefined1 *)(lVar5 + 0xf6f) = local_503;
    *(int *)(lVar5 + 0xecc) = *(int *)(lVar5 + 0xecc) + -1;
    return;
  }
  pcVar6 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar14 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar16 = (*pcVar6)(DAT_1803fa360,uVar14);
  if (lVar16 == 0) goto LAB_1801f31fc;
  local_f8 = 0;
  local_fc = 0;
  local_dc = 0;
  local_e0 = 0;
  local_c4 = 1;
  local_124 = 0;
  local_d8 = 0;
  local_c2 = 0;
  local_12c = 0;
  local_4fa = FUN_1801f1180(param_2,local_148);
  local_470 = 0;
  uStack_468 = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  cVar10 = FUN_1801f1120(param_2,&local_470);
  uVar14 = extraout_XMM0_Da;
  if ((cVar10 == '\0') ||
     (cVar10 = FUN_1801f1220(&local_470), uVar14 = extraout_XMM0_Da_00, cVar10 == '\0')) {
    DAT_1804259f8 = DAT_1804259f8 + 1;
    if (DAT_1804259f8 < 6) {
      uVar14 = FUN_180014410(
                            "[SAFE] invalid CViewSetup passed to RenderView #%d; feature pass skipped\n"
                            );
    }
    local_518 = param_4;
    FUN_1801f1680(uVar14,param_1,param_2,param_3);
    *(undefined1 *)(lVar5 + 0xf6f) = local_503;
    *(int *)(lVar5 + 0xecc) = *(int *)(lVar5 + 0xecc) + -1;
    return;
  }
  local_4b8 = 0xecc;
  local_488 = 0xf6f;
  if (DAT_1803ff230 == '\0') {
    local_3f8 = (char *)0x93fd561a96ab0c67;
    local_3f0 = (char *)0xd5eedd6096f28a0d;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3e0,&local_3f8);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_3c8,&local_3f0);
    pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
    cVar10 = *pcVar18;
    if ((DAT_18040a388 == '\0') || (cVar11 = FUN_180114710(), cVar11 == '\0')) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if ((cVar10 == '\0') || (bVar26)) {
      if (DAT_1803ff232 != '\0') {
        DAT_1803e8840 = '\0';
        goto LAB_1801f1e32;
      }
      if (DAT_1803ffb98 == '\0') {
        DAT_1803ffb98 = '\x01';
        FUN_180014410(
                     "[SP] backbuffer clean pass needs gmod_mcore_test 0 (mcore is on) -> staying on the offscreen target\n"
                     );
      }
    }
    DAT_1803e8840 = '\x01';
  }
  else {
    DAT_1803e8840 = '\0';
  }
LAB_1801f1e32:
  local_3f8 = (char *)0x93fd561a96ab0c67;
  local_3f0 = (char *)0xd5eedd6096f28a0d;
  local_507 = DAT_1803e8840;
  plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3e0,&local_3f8);
  plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_3c8,&local_3f0);
  pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
  if (*pcVar18 == '\0') {
    DAT_18040a388 = '\0';
    DAT_18040a370 = 0;
  }
  DAT_1803ff232 = FUN_1801f1720();
  FUN_180115a50();
  local_508 = '\0';
  if ((DAT_1803fa668 != (longlong *)0x0) && (DAT_1803fa608 != (float *)0x0)) {
    local_3e8[0] = 0.0;
    local_3c8[0] = local_3c8[0] & 0xffffffff00000000;
    local_3f0 = (char *)((ulonglong)local_3f0 & 0xffffffff00000000);
    local_3f8 = (char *)((ulonglong)local_3f8 & 0xffffffff00000000);
    cVar10 = FUN_1801f1100(param_2,&local_3f0,&local_3f8);
    if ((cVar10 != '\0') &&
       ((((((**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,local_3e8,local_3c8),
           0 < (int)local_3e8[0] && (0 < (int)local_3c8[0])) && (local_3f0._0_4_ == local_3e8[0]))
         && (((int)local_3f8 == (int)local_3c8[0] && (fVar27 = DAT_1803fa608[1], 0 < (int)fVar27))))
        && (fVar27 != DAT_1803e78d0)))) {
      local_508 = '\x01';
      DAT_1803f925b = 1;
      if (DAT_1803ff25d != '\0') {
        DAT_1803ff26c = DAT_1803ff26c + 1;
      }
      DAT_1803e78d0 = fVar27;
      if (DAT_1804236a5 == '\0') {
        FUN_180115eb0(&DAT_1803e9c40,param_2);
        DAT_1803e8838 = DAT_1803fa608[1];
        DAT_1803e8834 = param_3;
        DAT_1803e883c = param_4;
      }
      local_3f8 = (char *)0x575dfe7fd1bc6251;
      local_3f0 = (char *)0x402819404e703058;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3e0,&local_3f8);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_4b0,&local_3f0);
      pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
      if (*pcVar18 == '\0') {
        local_3f8 = (char *)0x237bcfbdef3b6800;
        local_3f0 = (char *)0x402819404e703058;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_4b0,&local_3f8);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_3e0,&local_3f0);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        if (*pcVar18 != '\0') goto LAB_1801f20b9;
        DAT_180423611 = 0;
      }
      else {
LAB_1801f20b9:
        DAT_180423611 = 1;
      }
      if ((DAT_180409bc3 == '\0') && (DAT_18040a5e0 == '\0')) {
        DAT_180423600 = 0;
      }
      else {
        DAT_180423600 = 1;
      }
    }
  }
  local_3f8 = (char *)(lVar5 + 0x178);
  if (*local_3f8 == '\0') {
    local_3f0 = (char *)0x93fd561a96ab0c67;
    local_3e0[0] = (char *)0xb900ad038caed4bd;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_4b0,&local_3f0);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_480,local_3e0);
    pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
    if (((((*pcVar18 == '\0') || (DAT_1803fa4e8 == (longlong *)0x0)) || (local_508 == '\0')) ||
        (((*(float *)(param_2 + 7) <= DAT_1803809c4 || (DAT_180381184 <= *(float *)(param_2 + 7)))
         || (((int)param_2[2] < 1 || (((int)param_2[3] < 1 || (DAT_1804236a5 != '\0')))))))) ||
       ((DAT_180423650 != 0 || ((DAT_1804236a0 != 0 || (local_504 = '\x01', DAT_1803fa46f != '\0')))
        ))) goto LAB_1801f21c9;
  }
  else {
LAB_1801f21c9:
    local_504 = '\0';
  }
  if (DAT_1803fa608 == (float *)0x0) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = *DAT_1803fa608;
  }
  local_3e0[0] = (char *)0x93fd561a96ab0c67;
  local_3f0 = (char *)0x3b8975e208102780;
  local_3e8[0] = fVar27;
  plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_480,local_3e0);
  plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_4b0,&local_3f0);
  piVar19 = (int *)FUN_1802029c0(*plVar17 + 0x28);
  iVar23 = *piVar19;
  if (iVar23 < 5) {
    iVar23 = 5;
  }
  else if (0xf0 < iVar23) {
    iVar23 = 0xf0;
  }
  if ((0 < DAT_18040a254) ||
     (((DAT_1803fa668 != (longlong *)0x0 &&
       (((cVar10 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar10 != '\0' &&
         (cVar10 = (**(code **)(*DAT_1803fa668 + 0x2a8))(), cVar10 != '\0')) ||
        ((DAT_1803fa668 != (longlong *)0x0 &&
         (cVar10 = (**(code **)(*DAT_1803fa668 + 0x2a8))(), cVar10 != '\0')))))) ||
      ((fVar27 < DAT_1803feae0 || (DAT_180380bb0 / (float)iVar23 <= fVar27 - DAT_1803feae0)))))) {
    bVar26 = true;
  }
  else {
    bVar26 = false;
  }
  cVar10 = local_507;
  fVar8 = DAT_180380bb0;
  if ((local_507 != '\0') || (bVar7 = false, DAT_1803ff232 != '\0')) {
    bVar7 = true;
  }
  if (local_504 != '\0') {
    if ((bVar26) && (bVar7)) {
      local_3b8 = *param_2;
      uStack_3b0 = param_2[1];
      local_3a8 = param_2[2];
      uStack_3a0 = param_2[3];
      local_398 = param_2[4];
      uStack_390 = param_2[5];
      local_388 = param_2[6];
      uStack_380 = param_2[7];
      local_378 = param_2[8];
      uStack_370 = param_2[9];
      local_368 = param_2[10];
      uStack_360 = param_2[0xb];
      local_358 = param_2[0xc];
      uStack_350 = param_2[0xd];
      local_348 = param_2[0xe];
      uStack_340 = param_2[0xf];
      local_338 = param_2[0x10];
      uStack_330 = param_2[0x11];
      local_328 = param_2[0x12];
      uStack_320 = param_2[0x13];
      local_318 = (undefined4)param_2[0x14];
      uStack_314 = *(undefined4 *)((longlong)param_2 + 0xa4);
      uStack_310 = (undefined4)param_2[0x15];
      uStack_30c = *(undefined4 *)((longlong)param_2 + 0xac);
      local_308 = *(undefined1 (*) [16])(param_2 + 0x16);
      local_2f8 = param_2[0x18];
      *local_3f8 = '\x01';
      local_505 = '\0';
      local_506 = '\0';
      local_4fb = 1;
      LOCK();
      DAT_180423650 = DAT_180423650 + 1;
      UNLOCK();
      local_3c8[0] = _set_se_translator(FUN_180014ce0);
      local_501 = 0;
      local_501 = FUN_180071590(0);
      uVar14 = FUN_18012fcf0(0);
      if (DAT_180409880 != '\0') {
        FUN_18012a2e0();
        uVar14 = FUN_18012a210(0);
      }
      if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
        uVar14 = FUN_180130390(fVar8);
      }
      if (cVar10 == '\0') {
        uVar3 = *(undefined1 *)(lVar5 + 0xf49);
        *(undefined1 *)(lVar5 + 0xf49) = 1;
        local_518 = param_4;
        local_4f8 = uVar3;
        local_506 = FUN_1801f1680(uVar14,local_4f0,&local_3b8,param_3);
        if (local_506 != '\0') {
          uVar4 = *(undefined1 *)(lVar5 + 0xf49);
          *(undefined1 *)(lVar5 + 0xf49) = 0;
          local_4f9 = uVar4;
          FUN_180115330();
          *(undefined1 *)(lVar5 + 0xf49) = uVar4;
        }
        *(undefined1 *)(lVar5 + 0xf49) = uVar3;
        cVar10 = local_507;
      }
      else {
        LOCK();
        DAT_18040a389 = '\0';
        UNLOCK();
        plVar17 = (longlong *)FUN_1801153f0();
        if ((((plVar17 != (longlong *)0x0) ||
             (plVar17 = DAT_1803fa630, DAT_1803fa630 != (longlong *)0x0)) &&
            (cVar11 = FUN_180114b30(), cVar11 != '\0')) && (DAT_18040a378 != 0)) {
          local_2c8 = local_398;
          uStack_2c0 = uStack_390;
          local_2b8 = local_388;
          uStack_2b0 = uStack_380;
          local_2a8 = local_378;
          uStack_2a0 = uStack_370;
          local_298 = local_368;
          uStack_290 = uStack_360;
          local_288 = local_358;
          uStack_280 = uStack_350;
          local_278 = local_348;
          uStack_270 = uStack_340;
          local_268 = local_338;
          uStack_260 = uStack_330;
          local_258 = local_328;
          uStack_250 = uStack_320;
          local_248 = local_318;
          uStack_244 = uStack_314;
          uStack_240 = uStack_310;
          uStack_23c = uStack_30c;
          local_238 = local_308;
          local_228 = local_2f8;
          local_2e8 = local_3b8 & 0xffffffff00000000;
          uStack_2e0 = uStack_3b0 & 0xffffffff00000000;
          _local_2d8 = CONCAT44((int)(local_3a8 >> 0x20),DAT_18040a290);
          _uStack_2d0 = CONCAT44((int)(uStack_3a0 >> 0x20),DAT_18040a36c);
          bVar12 = FUN_1801f1a20(plVar17);
          bVar26 = false;
          local_4ff = 0;
          local_502 = bVar12;
          if ((bVar12 != 0) && (cVar10 = FUN_1801f1a50(plVar17), cVar10 != '\0')) {
            cVar10 = FUN_180114ce0();
            if ((cVar10 != '\0') && (DAT_18040a370 = DAT_18040a370 + 1, 0xb4 < DAT_18040a370)) {
              DAT_18040a388 = '\x01';
              FUN_180014410(
                           "[SP] v5 OBS bridge FAILED (no clean RT bind seen in %d clean frames) -> v4 fallback\n"
                           );
            }
            cVar10 = FUN_180114ce0();
            if (cVar10 != '\0') {
              DAT_18040a38a = 1;
            }
            uVar3 = *(undefined1 *)(lVar5 + 0xf49);
            *(undefined1 *)(lVar5 + 0xf49) = 1;
            local_500 = *(undefined1 *)(lVar5 + 0xfc5);
            *(undefined1 *)(lVar5 + 0xfc5) = 1;
            local_518 = local_4e8;
            local_4f9 = local_500;
            local_4d0 = uVar3;
            local_4fe = FUN_1801f1680(0xfc5,local_4f0,&local_2e8,param_3);
            if (local_4fe != '\0') {
              uVar4 = *(undefined1 *)(lVar5 + 0xf49);
              *(undefined1 *)(lVar5 + 0xf49) = 0;
              local_4f8 = uVar4;
              FUN_180115330();
              *(undefined1 *)(lVar5 + 0xf49) = uVar4;
            }
            *(undefined1 *)(lVar5 + 0xfc5) = local_500;
            *(undefined1 *)(lVar5 + 0xf49) = uVar3;
            bVar26 = true;
            local_4ff = 1;
            bVar13 = FUN_1801f1a80(plVar17);
            bVar12 = bVar13 ^ 1;
            local_502 = bVar12;
            if ((local_4fe == '\0') || (bVar13 == 0)) {
              LOCK();
              DAT_18040a389 = '\0';
              UNLOCK();
              param_4 = local_4e8;
            }
            else {
              LOCK();
              DAT_18040a389 = '\x01';
              UNLOCK();
              DAT_18040a260 = GetTickCount64();
              local_505 = '\x01';
              _DAT_1804ecb20 = GetTickCount64();
              cVar10 = FUN_180114710();
              param_4 = local_4e8;
              if (cVar10 != '\0') {
                AcquireSRWLockShared((PSRWLOCK)&DAT_18040a280);
                if ((DAT_18040a258 == 0) || (DAT_18040a26c != DAT_1803e8844)) {
                  ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
                  LOCK();
                  DAT_1803fa454 = 1;
                  UNLOCK();
                  param_4 = local_4e8;
                }
                else {
                  ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
                  param_4 = local_4e8;
                }
              }
            }
          }
          cVar10 = local_507;
          if (bVar12 != 0) {
            local_4fd = FUN_1801f1a80(plVar17);
            if (local_4fd == '\0') {
              if (!bVar26) {
                local_4fd = FUN_1801f1a80(plVar17);
              }
              if (local_4fd == '\0') {
                FUN_1801f1ad0(plVar17);
                DAT_1803fd358 = DAT_1803fd358 + 1;
                if (DAT_1803fd358 < 6) {
                  FUN_180014410("[SP] clean RT stack recovery failed #%d; v5 disabled\n");
                }
              }
            }
            local_502 = 0;
            cVar10 = local_507;
          }
        }
      }
      if (local_501 != '\0') {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423640);
        if (DAT_180423654 != 0) {
          DAT_180423654 = DAT_180423654 + -1;
        }
        FUN_1800716a0();
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
      }
      if ((cVar10 == '\0') && (local_506 != '\0')) {
        LOCK();
        DAT_18040a389 = '\0';
        UNLOCK();
        local_3e0[0] = (char *)0x93fd561a96ab0c67;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_480,local_3e0);
        local_3f0 = (char *)0xb900ad038caed4bd;
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_4b0,&local_3f0);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        if (((*pcVar18 != '\0') &&
            ((cVar10 = FUN_180114b30(), cVar10 != '\0' && (DAT_18040a378 != 0)))) &&
           ((plVar17 = (longlong *)FUN_1801153f0(), plVar17 != (longlong *)0x0 ||
            (plVar17 = DAT_1803fa630, DAT_1803fa630 != (longlong *)0x0)))) {
          FUN_180115110(plVar17);
        }
        local_4fc = 0;
        local_4a0 = DAT_1803fa630;
        if ((DAT_1803fa630 != (longlong *)0x0) ||
           ((DAT_1803fa640 != (longlong *)0x0 &&
            (local_4a0 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x330))(),
            local_4a0 != (longlong *)0x0)))) {
          (**(code **)(*local_4a0 + 0x10))(local_4a0,1);
        }
        cVar10 = FUN_180114790();
        bVar26 = false;
        if (((cVar10 != '\0') && (DAT_1803fa580 != 0)) && (bVar26 = false, DAT_1803fa4f8 != 0)) {
          if (DAT_1803fa4e8 != (longlong *)0x0) {
            (**(code **)(*DAT_1803fa4e8 + 0x150))();
          }
          cVar10 = FUN_1801eb7a0(DAT_1803fa4e8,DAT_1803fa580,1);
          bVar26 = cVar10 != '\0';
          if (bVar26) {
            local_4fc = 1;
            LOCK();
            DAT_1803fa454 = 1;
            UNLOCK();
          }
          if (DAT_1803fa4e8 != (longlong *)0x0) {
            (**(code **)(*DAT_1803fa4e8 + 0x148))();
          }
        }
        if ((DAT_18040a389 != '\0') || (local_505 = '\0', bVar26)) {
          local_505 = '\x01';
        }
      }
      param_1 = local_4f0;
      FUN_18012a350();
      if (DAT_180409880 != '\0') {
        FUN_18012a210(1);
      }
      if (DAT_1803fa46f == '\0') {
        FUN_18012fcf0(1);
      }
      if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
        FUN_180130920();
      }
      local_4fb = 0;
      LOCK();
      DAT_180423650 = DAT_180423650 + -1;
      UNLOCK();
      *local_3f8 = '\0';
      if (local_505 != '\0') {
        DAT_1803feae0 = fVar27;
      }
      _set_se_translator(local_3c8[0]);
    }
    else if (local_507 == '\0') {
      LOCK();
      DAT_1803fa454 = 1;
      UNLOCK();
    }
    else if (DAT_18040a389 != '\0') {
      GetTickCount64();
    }
  }
  uVar25 = local_4f0;
  if ((((DAT_1804236a5 == '\0') && (DAT_180423650 == 0)) && (DAT_1804236a0 == 0)) &&
     (DAT_1803fa46f == '\0')) {
    local_498 = _set_se_translator(FUN_180014ce0);
    pcVar18 = DAT_1803fcc70;
    local_3e0[0] = DAT_1803fcc70;
    for (pcVar24 = DAT_1803fcc68; uVar25 = local_4f0, local_4c0 = pcVar24, pcVar24 != pcVar18;
        pcVar24 = pcVar24 + 8) {
      local_518 = param_4;
      local_400 = pcVar24;
      (**(code **)(**(longlong **)pcVar24 + 0x38))(*(longlong **)pcVar24,param_1,param_2,param_3);
    }
    _set_se_translator(local_498);
  }
  local_1c8 = 0;
  local_1cc = 0;
  local_1ac = 0;
  local_1b0 = 0;
  local_194 = 1;
  local_1f4 = 0;
  local_1a8 = 0;
  local_192 = 0;
  local_1fc = 0;
  uVar14 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  if (((local_508 == '\0') ||
      (cVar10 = FUN_1801f1180(param_2,local_218), uVar14 = extraout_XMM0_Da_01, cVar10 == '\0')) ||
     ((cVar10 = FUN_1801f1120(local_218,&local_438), uVar14 = extraout_XMM0_Da_02, cVar10 == '\0' ||
      (cVar10 = FUN_1801f1220(&local_438), uVar14 = extraout_XMM0_Da_03, cVar10 == '\0')))) {
LAB_1801f2c98:
    if (local_508 != '\0') {
      if ((local_4fa != '\0') && (cVar10 = FUN_1801f1180(local_148,param_2), cVar10 != '\0')) {
        FUN_180115eb0(local_218,local_148);
        DAT_180425844 = DAT_180425844 + 1;
        if (DAT_180425844 < 6) {
          FUN_180014410("[SAFE] restored invalid feature-modified CViewSetup #%d\n");
        }
        goto LAB_1801f2cfc;
      }
      DAT_180425f80 = 0;
LAB_1801f2d63:
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      DAT_180425428 = 0;
      DAT_1803fe650 = 0;
      DAT_1803e7498 = 0xffffffff;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      uVar14 = extraout_XMM0_Da_05;
LAB_1801f2d95:
      if ((((DAT_1804236a5 == '\0') && (DAT_180423650 == 0)) && (DAT_1804236a0 == 0)) &&
         (DAT_1803fa46f == '\0')) {
        local_490 = _set_se_translator(FUN_180014ce0);
        pcVar18 = DAT_1803fcc70;
        local_3e0[0] = DAT_1803fcc70;
        for (pcVar24 = DAT_1803fcc68; local_3f8 = pcVar24, pcVar24 != pcVar18; pcVar24 = pcVar24 + 8
            ) {
          (**(code **)(**(longlong **)pcVar24 + 0x40))();
        }
        uVar14 = _set_se_translator(local_490);
        uVar25 = local_4f0;
      }
    }
  }
  else {
    if ((int)local_438 != (int)local_470) goto LAB_1801f2c98;
    if (local_438._4_4_ != local_470._4_4_) goto LAB_1801f2c98;
LAB_1801f2cfc:
    FUN_180115eb0(&DAT_1803db4e4,local_218);
    DAT_180425f80 = 1;
    if (DAT_1803fa608 == (float *)0x0) {
      fVar27 = -NAN;
    }
    else {
      fVar27 = DAT_1803fa608[1];
    }
    cVar10 = FUN_180021600(local_218,fVar27);
    uVar14 = extraout_XMM0_Da_04;
    if (cVar10 == '\0') {
      if (local_508 != '\0') goto LAB_1801f2d63;
    }
    else if (local_508 != '\0') goto LAB_1801f2d95;
  }
  if ((((DAT_1804236a5 == '\0') && (DAT_180423650 == 0)) && (DAT_1804236a0 == 0)) ||
     (local_504 != '\0')) {
    bVar26 = false;
  }
  else {
    bVar26 = true;
    local_506 = 0;
    cVar10 = FUN_180071590(0);
    uVar14 = extraout_XMM0_Da_06;
    if (cVar10 != '\0') {
      cVar10 = '\x01';
      goto LAB_1801f2eab;
    }
  }
  cVar10 = '\0';
LAB_1801f2eab:
  local_506 = cVar10;
  if (bVar26) {
    if (DAT_180409880 != '\0') {
      FUN_18012a2e0();
      uVar14 = FUN_18012a210(0);
    }
    if (DAT_1803fa46f == '\0') {
      uVar14 = FUN_18012fcf0(0);
    }
    if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
      uVar14 = FUN_180130390(fVar8);
    }
  }
  else if ((*(int *)(local_4b8 +
                    *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8))
            == 1) && (DAT_180409880 != '\0')) {
    if (DAT_1803e7cf0 == 2) {
      local_3f0 = (char *)CONCAT44(local_3f0._4_4_,2);
      local_3f8 = (char *)CONCAT44(local_3f8._4_4_,1);
      local_3e0[0] = (char *)0x93fd561a96ab0c67;
      local_3d0 = 0xaa2fec72fb859f6b;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_480,local_3e0);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_4b0,&local_3d0);
      ppcVar20 = (char **)FUN_1802029c0(*plVar17 + 0x28);
      ppcVar22 = &local_3f8;
      if (0 < *(int *)ppcVar20) {
        ppcVar22 = ppcVar20;
      }
      ppcVar21 = &local_3f0;
      if (*(int *)ppcVar20 < 3) {
        ppcVar21 = ppcVar22;
      }
      uVar14 = FUN_180129d50(*(int *)ppcVar21);
      DAT_180409898 = '\x01';
    }
    if ((((DAT_180409880 != '\0') && (DAT_1803e7cf0 == 3)) && (DAT_180409890 != 0)) &&
       (DAT_180409881 == '\0')) {
      DAT_180409899 = 1;
    }
  }
  if (((local_508 == '\0') || (DAT_1803db458 == '\0')) ||
     ((lp = (undefined4 *)FUN_1801f16c0(), uVar14 = extraout_XMM0_Da_07, lp == (undefined4 *)0x0 ||
      (BVar15 = IsBadWritePtr(lp,0xc), uVar14 = extraout_XMM0_Da_08, BVar15 != 0)))) {
    local_518 = param_4;
    FUN_1801f1680(uVar14,uVar25,param_2,param_3);
  }
  else {
    uVar14 = *lp;
    uVar1 = lp[1];
    uVar2 = lp[2];
    *lp = DAT_1803db44c;
    lp[1] = DAT_1803db450;
    uVar9 = DAT_1803db454;
    lp[2] = DAT_1803db454;
    local_518 = param_4;
    FUN_1801f1680(uVar9,uVar25,param_2,param_3);
    BVar15 = IsBadWritePtr(lp,0xc);
    if (BVar15 == 0) {
      *lp = uVar14;
      lp[1] = uVar1;
      lp[2] = uVar2;
    }
  }
  lVar16 = local_4b8;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_4b8 + lVar5) == 1) && (DAT_180409899 = 0, DAT_180409898 != '\0')) {
    DAT_180409898 = '\0';
    FUN_180129d50(0);
  }
  if (bVar26) {
    FUN_18012a350();
    if (DAT_180409880 != '\0') {
      FUN_18012a210(1);
    }
    if (DAT_1803fa46f == '\0') {
      FUN_18012fcf0(1);
    }
    if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
      FUN_180130920();
    }
  }
  if (cVar10 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423640);
    if (DAT_180423654 != 0) {
      DAT_180423654 = DAT_180423654 + -1;
    }
    FUN_1800716a0();
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423640);
  }
  *(undefined1 *)(local_488 + lVar5) = local_503;
  *(int *)(lVar16 + lVar5) = *(int *)(lVar16 + lVar5) + -1;
  return;
}


