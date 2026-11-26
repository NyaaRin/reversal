// 0x1800bf160  Features_HVH_Visualize_VisualizeFeature_vfunc06
// size=5584 thunk=false
// signature: undefined Features_HVH_Visualize_VisualizeFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_HVH_Visualize_VisualizeFeature_vfunc06(void)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  BOOL BVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_478 [32];
  double local_458;
  float *local_450;
  char *local_448;
  char *local_440;
  undefined1 *local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined1 *local_420;
  char local_418;
  float local_410;
  float local_40c;
  float local_408;
  undefined8 local_400;
  float local_3f8;
  undefined8 local_3e8;
  float local_3e0;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  undefined4 uStack_3cc;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  undefined8 local_3a8;
  float local_3a0;
  float local_39c;
  float local_398;
  undefined8 local_390;
  float local_388;
  undefined8 local_380;
  float local_378;
  float local_370;
  float local_36c;
  float local_368;
  float local_360;
  float local_35c;
  float local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined6 uStack_2e8;
  undefined2 uStack_2e2;
  undefined6 uStack_2e0;
  undefined8 local_2da;
  undefined6 uStack_2d2;
  undefined2 uStack_2cc;
  undefined6 uStack_2ca;
  undefined8 local_2c4;
  undefined8 uStack_2bc;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined1 local_268 [9];
  undefined8 uStack_25f;
  undefined8 local_257;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  undefined1 local_208 [128];
  undefined1 local_188 [160];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_478;
  if (DAT_1804236a5 != '\0') {
    return;
  }
  cVar5 = FUN_1800bf0b0();
  fVar29 = DAT_180380ac0;
  if (((cVar5 == '\0') || (DAT_1803fa668 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), fVar29 = DAT_180380ac0, cVar5 == '\0')) {
LAB_1800bf52c:
    uVar18 = (ulonglong)_tls_index;
  }
  else {
    uVar18 = (ulonglong)_tls_index;
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar10 + 0xec0) + 0x2060),0,
                           "##Background");
    fVar29 = DAT_180380ac0;
    if (lVar10 != 0) {
      local_370 = 0.0;
      local_380 = local_380 & 0xffffffff00000000;
      (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_370,&local_380);
      fVar31 = DAT_1803810e4;
      fVar9 = DAT_1803810b4;
      fVar19 = DAT_180380fcc;
      fVar29 = DAT_180380ac0;
      fVar28 = (float)(int)local_370 * DAT_180380ac0;
      fVar30 = (float)(int)(float)local_380 * DAT_180380ac0;
      iVar17 = DAT_180409ce0;
      if (DAT_180409cfa != '\0') {
        if (DAT_180409ce0 == 1) {
          iVar17 = 2;
        }
        else if (DAT_180409ce0 == 2) {
          iVar17 = 1;
        }
      }
      local_3b8 = fVar28 - DAT_1803810b4;
      fVar27 = fVar30 - DAT_180380fcc;
      local_3a8 = CONCAT44(fVar30,fVar28 - DAT_1803810e4);
      fVar25 = fVar30 + DAT_180380fcc;
      local_3b4 = fVar25;
      local_3a0 = local_3b8;
      local_39c = fVar27;
      FUN_18020dc30(lVar10 + 0x50,&local_3b8);
      FUN_18020dc30(lVar10 + 0x50,&local_3a8);
      FUN_18020dc30(lVar10 + 0x50,&local_3a0);
      uVar24 = 0xeb82eb78;
      uVar20 = 0x6e7d7d7d;
      if (iVar17 == 1) {
        uVar20 = 0xeb82eb78;
      }
      FUN_1802938c0(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),uVar20);
      *(undefined4 *)(lVar10 + 0x50) = 0;
      local_3b8 = fVar28 + fVar9;
      local_3a8 = CONCAT44(fVar30,fVar28 + fVar31);
      local_3b4 = fVar27;
      local_3a0 = local_3b8;
      local_39c = fVar25;
      FUN_18020dc30(lVar10 + 0x50,&local_3b8);
      FUN_18020dc30(lVar10 + 0x50,&local_3a8);
      FUN_18020dc30(lVar10 + 0x50,&local_3a0);
      uVar20 = 0x6e7d7d7d;
      if (iVar17 == 2) {
        uVar20 = 0xeb82eb78;
      }
      FUN_1802938c0(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),uVar20);
      *(undefined4 *)(lVar10 + 0x50) = 0;
      if ((DAT_180409ce0 != 3) || (DAT_180409cfa != '\0')) {
        uVar24 = 0x6e7d7d7d;
      }
      local_3a0 = fVar28 + fVar19;
      local_3b4 = fVar30 + fVar9;
      local_3a8 = CONCAT44(fVar30 + fVar31,fVar28);
      local_3b8 = fVar28 - fVar19;
      local_39c = local_3b4;
      FUN_18020dc30(lVar10 + 0x50,&local_3b8);
      FUN_18020dc30(lVar10 + 0x50,&local_3a8);
      FUN_18020dc30(lVar10 + 0x50,&local_3a0);
      FUN_1802938c0(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),uVar24);
      *(undefined4 *)(lVar10 + 0x50) = 0;
      goto LAB_1800bf52c;
    }
  }
  fVar19 = 1.4013e-45;
  cVar5 = FUN_1800bf010();
  if (((cVar5 == '\0') || (DAT_1803fa608 == 0)) ||
     ((DAT_1803fa668 == (longlong *)0x0 ||
      (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')))) goto LAB_1800bfae5;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar10 + 0xec0) + 0x2060),0,"##Background")
  ;
  if (lVar11 == 0) goto LAB_1800bfae5;
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar12 = (*pcVar2)(DAT_1803fa360,uVar6);
  local_380 = local_380 & 0xffffffff00000000;
  fVar31 = 0.0;
  local_370 = 0.0;
  local_3b8 = 0.0;
  fVar9 = 0.0;
  if (lVar12 == 0) {
LAB_1800bf637:
    bVar3 = false;
    if (lVar12 != 0) goto LAB_1800bf63f;
LAB_1800bf667:
    local_418 = '\0';
  }
  else {
    cVar5 = FUN_1800b5f30(lVar12,&local_380);
    fVar9 = (float)local_380;
    if (cVar5 == '\0') goto LAB_1800bf637;
    bVar3 = true;
LAB_1800bf63f:
    cVar5 = FUN_1800b5e40(lVar12,2,&local_370);
    local_418 = '\x01';
    fVar31 = local_370;
    if (cVar5 == '\0') goto LAB_1800bf667;
  }
  FUN_1800b6290(lVar12,&local_3b8);
  local_3a0 = 0.0;
  local_3a8 = local_3a8 & 0xffffffff00000000;
  (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_3a0,&local_3a8);
  fVar28 = (float)(int)local_3a0 * fVar29;
  fVar30 = (float)(int)local_3a8 * fVar29 + DAT_18038110c;
  if (bVar3) {
    if (local_418 == '\0') {
      if (!bVar3) goto LAB_1800bfa0b;
      FUN_180203330(local_268,0x60,"LBY  cur %.0f  (calibrating field offsets, turn around)",
                    (double)fVar9);
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_428 = (undefined1 *)((ulonglong)local_428._4_4_ << 0x20);
      local_438 = (undefined1 *)0x0;
      local_440 = (char *)0x0;
      local_448 = (char *)0x0;
      local_450 = (float *)local_268;
      local_458 = (double)CONCAT44(local_458._4_4_,DAT_180381384);
      FUN_18029e350(&local_390,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),DAT_180381308);
      local_3b8 = fVar28 - (float)(int)((float)local_390 + DAT_180380ba8) * fVar29;
      local_3b4 = fVar30;
      if (local_268[0] == '\0') goto LAB_1800bfae5;
      local_438 = (undefined1 *)((ulonglong)local_438 & 0xffffffff00000000);
      local_448 = local_268;
      local_458 = (double)CONCAT44(local_458._4_4_,0xff5ac8ff);
    }
    else {
      fVar27 = (float)FUN_1802d3e00(fVar31 - fVar9);
      fVar25 = DAT_180380bb0;
      uVar6 = 0xff78ff78;
      if (DAT_180380bb0 < (float)((uint)fVar27 & _DAT_1803817c0)) {
        uVar6 = 0xff7878ff;
      }
      local_448 = (char *)(double)local_3b8;
      local_450 = (float *)(double)fVar27;
      local_458 = (double)fVar31;
      FUN_180203330(local_268,0x60,"LBY  cur %.0f  goal %.0f  d %.0f  eye %.0f",(double)fVar9);
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_428 = (undefined1 *)((ulonglong)local_428._4_4_ << 0x20);
      local_438 = (undefined1 *)0x0;
      local_440 = (char *)0x0;
      local_448 = (char *)0x0;
      local_450 = (float *)local_268;
      local_458 = (double)CONCAT44(local_458._4_4_,DAT_180381384);
      FUN_18029e350(&local_390,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),DAT_180381308);
      fVar28 = fVar28 - (float)(int)((float)local_390 + DAT_180380ba8) * fVar29;
      local_3b8 = fVar28 + fVar25;
      local_3b4 = fVar30 + fVar25;
      if (local_268[0] != '\0') {
        local_3d8 = *(float *)(lVar11 + 0x60);
        fStack_3d4 = *(float *)(lVar11 + 100);
        fStack_3d0 = *(float *)(lVar11 + 0x68);
        uStack_3cc = *(undefined4 *)(lVar11 + 0x6c);
        local_430 = 0;
        local_438 = (undefined1 *)((ulonglong)local_438 & 0xffffffff00000000);
        local_440 = (char *)0x0;
        local_448 = local_268;
        local_450 = &local_3d8;
        local_458 = (double)CONCAT44(local_458._4_4_,0xc8000000);
        FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18),lVar11,
                      *(undefined4 *)(*(longlong *)(lVar11 + 0x38) + 0x20),&local_3b8);
      }
      local_3b8 = fVar28;
      local_3b4 = fVar30;
      if (local_268[0] == '\0') goto LAB_1800bfae5;
      local_438 = (undefined1 *)((ulonglong)local_438 & 0xffffffff00000000);
      local_448 = local_268;
      local_458 = (double)CONCAT44(local_458._4_4_,uVar6);
    }
  }
  else {
LAB_1800bfa0b:
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_428 = (undefined1 *)((ulonglong)local_428._4_4_ << 0x20);
    local_438 = (undefined1 *)0x0;
    local_440 = (char *)0x0;
    local_448 = (char *)0x0;
    local_450 = (float *)0x18034c0f0;
    local_458._0_4_ = DAT_180381384;
    FUN_18029e350(&local_390,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),DAT_180381308);
    local_3b8 = fVar28 - (float)(int)((float)local_390 + DAT_180380ba8) * fVar29;
    local_438 = (undefined1 *)((ulonglong)local_438 & 0xffffffff00000000);
    local_448 = "LBY unavailable (animstate pointer unresolved)";
    local_458 = (double)CONCAT44(local_458._4_4_,0xff5a5aff);
  }
  local_450 = &local_3d8;
  local_430 = 0;
  local_440 = (char *)0x0;
  local_3d8 = *(float *)(lVar11 + 0x60);
  fStack_3d4 = *(float *)(lVar11 + 100);
  fStack_3d0 = *(float *)(lVar11 + 0x68);
  uStack_3cc = *(undefined4 *)(lVar11 + 0x6c);
  local_3b4 = fVar30;
  FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18),lVar11,
                *(undefined4 *)(*(longlong *)(lVar11 + 0x38) + 0x20),&local_3b8);
LAB_1800bfae5:
  cVar5 = FUN_1800bf060();
  if (((((cVar5 == '\0') || (cVar5 = FUN_1800b81b0(), cVar5 == '\0')) || (DAT_1803fa608 == 0)) ||
      ((DAT_1803fa360 == (longlong *)0x0 || (DAT_1803fa668 == (longlong *)0x0)))) ||
     (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')) {
    uVar18 = (ulonglong)_tls_index;
  }
  else {
    uVar18 = (ulonglong)_tls_index;
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_400 = (longlong *)
                FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar10 + 0xec0) + 0x2060),0,
                              "##Background");
    fVar30 = DAT_180381120;
    fVar28 = DAT_180380fd8;
    fVar31 = DAT_180380fd4;
    fVar9 = DAT_180380fc4;
    fVar29 = DAT_180380fa8;
    if (local_400 != (longlong *)0x0) {
      fVar25 = (float)*(double *)(DAT_1803fa608 + 0x10);
      local_3a8 = CONCAT44(local_3a8._4_4_,fVar25);
      local_3b8 = 1.4013e-45;
      while ((fVar27 = local_3b8, (int)local_3b8 <= *(int *)(DAT_1803fa608 + 0x1c) &&
             ((int)local_3b8 < 0x81))) {
        plVar13 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_3b8);
        if (((plVar13 != (longlong *)0x0) &&
            (((BVar7 = IsBadReadPtr(plVar13,8), BVar7 == 0 &&
              (BVar7 = IsBadReadPtr((void *)*plVar13,8), BVar7 == 0)) &&
             (plVar14 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13),
             plVar14 != (longlong *)0x0)))) &&
           (((cVar5 = (**(code **)(*plVar14 + 0x40))(plVar14), cVar5 == '\0' &&
             (cVar5 = FUN_18001c330(plVar13), cVar5 != '\0')) &&
            (fVar8 = (float)(**(code **)(*DAT_1803fa668 + 0x60))(), fVar27 != fVar8)))) {
          puVar15 = (undefined8 *)FUN_18001c430(plVar13,&local_3d8);
          local_3e8 = *puVar15;
          local_3e0 = *(float *)(puVar15 + 1);
          cVar5 = FUN_180021ac0(&local_3e8,&local_3a0);
          if (cVar5 != '\0') {
            lVar11 = (longlong)(int)fVar27;
            lVar10 = lVar11 * 0x168;
            FUN_18001d620(plVar13);
            if ((int)fVar27 - 1U < 0x80) {
              FUN_1800b86f0();
            }
            fVar8 = (float)FUN_1800b9e90(fVar27);
            local_348 = 0;
            uStack_340 = 0;
            local_338 = 0;
            uStack_330 = 0;
            local_328 = 0;
            uStack_320 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_308 = 0;
            uStack_300 = 0;
            local_2f8 = 0;
            local_2f0 = 0;
            uStack_2e8 = 0;
            uStack_2e2 = 0;
            uStack_2e0 = 0;
            local_2da = 0;
            uStack_2d2 = 0;
            uStack_2cc = 0;
            uStack_2ca = 0;
            local_2c4 = 0;
            uStack_2bc = 0;
            local_2b4 = 0;
            uStack_2ac = 0;
            local_2a4 = 0;
            uStack_29c = 0;
            local_294 = 0;
            uStack_28c = 0;
            local_284 = 0;
            uStack_27c = 0;
            local_274 = 0;
            local_26c = 0;
            FUN_1800b9590(fVar27);
            local_268[0] = '\0';
            local_268._1_8_ = 0;
            uStack_25f = 0;
            local_257 = 0;
            uStack_24f = 0;
            uStack_248 = 0;
            uStack_247 = 0;
            uStack_240 = 0;
            if ((int)fVar27 - 1U < 0x80) {
              iVar17 = *(int *)(&DAT_18040a958 + lVar11 * 0x318);
              if (iVar17 != 0) {
                if (iVar17 == 1) {
                  pcVar21 = "rotate";
                }
                else if (iVar17 == 2) {
                  pcVar21 = "alternate";
                }
                else if (iVar17 == 3) {
                  pcVar21 = "repeat";
                }
                else {
                  pcVar21 = "none";
                }
                local_458 = (double)(*(float *)(&DAT_18040a960 + lVar11 * 0x318) * fVar30);
                FUN_1802033a0(local_268,0x30,"  %s %.0f%%",pcVar21);
              }
            }
            local_448 = (char *)(double)*(float *)(&DAT_180561180 + lVar11 * 0x2d);
            local_450 = (float *)(double)DAT_180409cb8;
            local_458 = (double)*(float *)((longlong)&DAT_180561180 + lVar10 + 4);
            if ((*(char *)((longlong)&DAT_180561188 + lVar10 + 1) != '\0') ||
               (bVar3 = false, fVar25 < *(float *)(&DAT_18056118c + lVar11 * 0x2d))) {
              bVar3 = true;
            }
            pcVar21 = "legit";
            if (bVar3) {
              pcVar21 = "AA";
            }
            local_438 = local_268;
            local_440 = (char *)CONCAT44(local_440._4_4_,
                                         (uint)(*(char *)(&DAT_180561188 + lVar11 * 0xb4) != '\0'));
            FUN_180203410(local_188,0xa0,"%s  chk %.1f/%.1f  dy %.0f  pitch %d%s",pcVar21);
            puVar22 = &DAT_18033e5ea;
            if ((&DAT_18056119c)[lVar10] != '\0') {
              puVar22 = &DAT_18034b8f4;
            }
            puVar23 = &DAT_18033e5ea;
            if ((&DAT_1805611ac)[lVar10] != '\0') {
              puVar23 = &DAT_18034c158;
            }
            uVar6 = *(undefined4 *)((longlong)&DAT_1805610fc + lVar10 + 4);
            uVar1 = *(undefined4 *)(&DAT_1805610fc + lVar11 * 0x2d);
            if (((&DAT_18056110c)[lVar10] == '\0') ||
               (pcVar21 = " LATCH", *(float *)(&DAT_180561110 + lVar11 * 0x2d) <= fVar25)) {
              pcVar21 = "";
            }
            uVar20 = FUN_1800b8460(SUB84((double)fVar8,0));
            local_438 = (undefined1 *)CONCAT44(local_438._4_4_,uVar1);
            local_448 = (char *)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
            local_450 = (float *)CONCAT44(local_450._4_4_,local_26c);
            local_458 = (double)CONCAT44(local_458._4_4_,
                                         *(undefined4 *)((longlong)&DAT_1805610f4 + lVar10 + 4));
            local_440 = pcVar21;
            local_430 = uVar6;
            local_428 = puVar23;
            local_420 = puVar22;
            FUN_180203480(local_208,0x80,"%s %d/%d  off %+.0f%s  m%d h%d  %s%s",uVar20);
            fVar4 = local_39c;
            fVar8 = local_3a0;
            lVar12 = (longlong)local_400;
            if ((*(char *)((longlong)&DAT_180561188 + lVar10 + 1) != '\0') ||
               (bVar3 = false, fVar25 < *(float *)(&DAT_18056118c + lVar11 * 0x2d))) {
              bVar3 = true;
            }
            uVar6 = 0xffaa9b96;
            if (bVar3) {
              uVar6 = 0xff5abeff;
            }
            local_36c = local_39c - fVar29;
            fVar26 = local_3a0 + fVar28;
            local_458 = 0.0;
            local_370 = fVar26;
            FUN_180295600(local_400,&local_370,0xc8000000,local_188);
            local_380 = CONCAT44(fVar4 - fVar9,fVar8 + fVar31);
            local_458 = 0.0;
            FUN_180295600(lVar12,&local_380,uVar6,local_188);
            local_40c = fVar4 + DAT_180380f00;
            local_458 = 0.0;
            local_410 = fVar26;
            FUN_180295600(lVar12,&local_410,0xc8000000,local_208);
            local_390 = CONCAT44(fVar4 + DAT_180380e9c,fVar8 + fVar31);
            local_458 = 0.0;
            FUN_180295600(lVar12,&local_390,uVar6,local_208);
          }
        }
        local_3b8 = (float)((int)fVar27 + 1);
      }
      uVar18 = (ulonglong)_tls_index;
    }
  }
  cVar5 = FUN_1800bedb0();
  if (((cVar5 != '\0') && (DAT_1803fa608 != 0)) && (DAT_1803fa360 != (longlong *)0x0)) {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = *(longlong *)(lVar10 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar10 + 0x1520) + 0xce) = 1;
    local_3a8 = *(longlong *)(*(longlong *)(lVar10 + 0x1520) + 0x2c8);
    if (local_3a8 != 0) {
      cVar5 = FUN_1800b8160();
      if ((cVar5 != '\0') && (DAT_180409ce4 != '\0')) {
        pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar10 = (*pcVar2)(DAT_1803fa360,uVar6);
        if ((lVar10 != 0) && (cVar5 = FUN_18001c330(lVar10), cVar5 != '\0')) {
          FUN_18001c430(lVar10,&local_400);
          FUN_1802d4050(&DAT_1803eb878,&local_390);
          FUN_1802d4050(&DAT_1803eb858,&local_3b8);
          fVar29 = DAT_1803810c8;
          local_3e8 = CONCAT44(local_390._4_4_ * DAT_1803810c8,(float)local_390 * DAT_1803810c8);
          local_3e0 = local_388 * DAT_1803810c8;
          fVar9 = (float)local_400;
          local_410 = (float)local_400 + (float)local_390 * DAT_1803810c8;
          fVar31 = local_400._4_4_;
          local_40c = local_400._4_4_ + local_390._4_4_ * DAT_1803810c8;
          local_408 = local_3f8 + local_3e0;
          FUN_1800c07c0(&local_3a8,&local_400,&local_410,0xff00ff00);
          local_360 = local_3b8 * fVar29;
          local_35c = local_3b4 * fVar29;
          local_358 = local_3b0 * fVar29;
          local_3a0 = fVar9 + local_360;
          local_39c = fVar31 + local_35c;
          local_398 = local_3f8 + local_358;
          FUN_1800c07c0(&local_3a8,&local_400,&local_3a0,0xff0000ff);
        }
      }
      cVar5 = FUN_1800b81b0();
      if (cVar5 != '\0') {
        pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
        plVar13 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar6);
        fVar29 = DAT_1803810a0;
        local_400 = plVar13;
        while (((int)fVar19 <= *(int *)(DAT_1803fa608 + 0x1c) && ((int)fVar19 < 0x81))) {
          local_3b8 = fVar19;
          plVar14 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,fVar19);
          if ((((plVar14 == (longlong *)0x0) ||
               ((((BVar7 = IsBadReadPtr(plVar14,8), BVar7 != 0 ||
                  (BVar7 = IsBadReadPtr((void *)*plVar14,8), BVar7 != 0)) ||
                 (plVar16 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14),
                 plVar16 == (longlong *)0x0)) ||
                ((cVar5 = (**(code **)(*plVar16 + 0x40))(plVar16), cVar5 != '\0' ||
                 (cVar5 = FUN_18001c330(plVar14), cVar5 == '\0')))))) || (plVar14 == plVar13)) ||
             ((DAT_1803fa668 != (longlong *)0x0 &&
              (fVar9 = (float)(**(code **)(*DAT_1803fa668 + 0x60))(), fVar19 == fVar9)))) {
            fVar19 = (float)((int)fVar19 + 1);
          }
          else {
            FUN_18001c430(plVar14,&local_410);
            puVar15 = (undefined8 *)FUN_18001d620(plVar14);
            local_390 = *puVar15;
            local_388 = *(float *)(puVar15 + 1);
            FUN_1802d4050(&local_390,&local_3a0);
            fVar28 = local_408;
            fVar31 = local_40c;
            fVar9 = local_410;
            local_3c8 = local_3a0 * fVar29;
            local_3c4 = local_39c * fVar29;
            local_3c0 = local_398 * fVar29;
            local_370 = local_410 + local_3c8;
            local_36c = local_40c + local_3c4;
            local_368 = local_408 + local_3c0;
            FUN_1800c07c0(&local_3a8,&local_410,&local_370,0xff3c3cff);
            if ((int)fVar19 - 1U < 0x80) {
              FUN_1800b86f0();
            }
            fVar30 = (float)FUN_1800b9e90(fVar19);
            if (fVar30 != 0.0) {
              local_380 = local_390;
              local_378 = local_388;
              uVar6 = FUN_1802d3e00(local_390._4_4_ + fVar30);
              local_380 = CONCAT44(uVar6,(float)local_380);
              FUN_1802d4050(&local_380,&local_360);
              local_3d8 = local_360 * fVar29;
              fStack_3d4 = local_35c * fVar29;
              fStack_3d0 = local_358 * fVar29;
              local_3e8 = CONCAT44(fVar31 + fStack_3d4,fVar9 + local_3d8);
              local_3e0 = fVar28 + fStack_3d0;
              FUN_1800c07c0(&local_3a8,&local_410,&local_3e8,0xff3cff3c);
            }
            fVar19 = (float)((int)fVar19 + 1);
          }
        }
      }
    }
  }
  return;
}


