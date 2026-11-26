// 0x1800cef20  FUN_1800cef20
// size=2175 thunk=false
// signature: undefined FUN_1800cef20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1800cef20(longlong *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int *piVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *lp;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_3a8 [32];
  longlong **local_388;
  float *local_380;
  undefined4 local_378;
  undefined4 local_370;
  int local_368;
  undefined4 local_364;
  undefined1 local_360;
  float local_358;
  float local_354;
  float local_350;
  undefined4 local_348;
  undefined4 local_344;
  longlong *local_340 [2];
  longlong *local_330;
  longlong *local_328 [2];
  longlong *local_318 [2];
  undefined8 *local_308;
  undefined4 *local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d7 [7];
  longlong *local_2d0;
  longlong *local_2c8 [2];
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined1 local_2ac [12];
  char local_2a0;
  undefined8 local_298;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_3a8;
  iVar19 = 1;
  local_364 = 1;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_330 = param_1;
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  local_2e0 = (*pcVar1)(DAT_1803fa360,uVar4);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_364 = 1;
  fVar20 = (float)FUN_1800ce2c0();
  if (fVar20 != _DAT_1803da560) {
    FUN_180014410("[AIM DIAG] FOV changed to %.1f\n",(double)fVar20);
    _DAT_1803da560 = fVar20;
  }
  if (((local_2e0 != 0) && (DAT_1803fa608 != 0)) && (DAT_1803fa360 != (longlong *)0x0)) {
    local_2a0 = '\0';
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar7 = (*pcVar1)(DAT_1803fa360,uVar4);
    if (lVar7 == 0) {
      if (local_2a0 == '\0') {
        return param_1;
      }
    }
    else {
      puVar8 = (undefined4 *)FUN_180073aa0(&local_358,param_2);
      local_2b8 = *puVar8;
      local_2b4 = puVar8[1];
      local_2b0 = puVar8[2];
      FUN_1802d4050(param_2,local_2ac);
      local_2a0 = '\x01';
    }
    local_2c8[0] = (longlong *)0xf7521f28977a3033;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_358,local_2c8);
    local_2d0 = (longlong *)0x87c123d070d26543;
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_340,&local_2d0);
    piVar10 = (int *)FUN_1802029c0(*plVar9 + 0x28);
    local_2d7[0] = *piVar10 == 1;
    local_2c8[0] = (longlong *)0xf7521f28977a3033;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_358,local_2c8);
    local_2d0 = (longlong *)0xc12dea166e54d7d9;
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_340,&local_2d0);
    puVar11 = (undefined1 *)FUN_1801fcfc0(*plVar9 + 0x28);
    local_2d8 = *puVar11;
    puVar13 = &local_298;
    lVar7 = 4;
    do {
      *puVar13 = _DAT_180381810;
      puVar13[1] = _UNK_180381818;
      puVar13[2] = _DAT_180381810;
      puVar13[3] = _UNK_180381818;
      puVar13[4] = _DAT_180381810;
      puVar13[5] = _UNK_180381818;
      puVar13[6] = _DAT_180381810;
      puVar13[7] = _UNK_180381818;
      puVar13[8] = _DAT_180381810;
      puVar13[9] = _UNK_180381818;
      puVar13[10] = _DAT_180381810;
      puVar13[0xb] = _UNK_180381818;
      puVar13[0xc] = _DAT_180381810;
      puVar13[0xd] = _UNK_180381818;
      puVar13[0xe] = _DAT_180381810;
      puVar13[0xf] = _UNK_180381818;
      puVar13 = puVar13 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *puVar13 = _DAT_180381810;
    local_300 = &local_2b8;
    local_2f8 = &local_2d8;
    local_2f0 = local_2d7;
    local_2c8[0] = (longlong *)0xf7521f28977a3033;
    local_2e8 = param_1;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_358,local_2c8);
    local_2d0 = (longlong *)0x50665d13ff420b11;
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_340,&local_2d0);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
    uVar4 = DAT_180381384;
    if (*pcVar12 != '\0') {
      while (local_368 = iVar19, iVar19 <= *(int *)(DAT_1803fa608 + 0x1c)) {
        puVar13 = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar19);
        cVar3 = FUN_1800c5030(puVar13,local_2e0);
        if (cVar3 == '\0') {
LAB_1800cf3c6:
          iVar19 = iVar19 + 1;
        }
        else {
          local_308 = puVar13;
          cVar3 = FUN_18001e0a0(puVar13);
          puVar17 = puVar13;
          if (((cVar3 == '\b') && (iVar5 = FUN_180071aa0(iVar19), 0 < iVar5)) &&
             ((lp = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar5),
              lp != (undefined8 *)0x0 &&
              ((BVar6 = IsBadReadPtr(lp,8), BVar6 == 0 &&
               (BVar6 = IsBadReadPtr((void *)*lp,8), local_308 = puVar13, BVar6 == 0)))))) {
            puVar17 = lp;
            local_308 = lp;
          }
          local_388 = local_318;
          cVar3 = FUN_1800c4a70(puVar17,local_328,&local_358,local_340);
          if (cVar3 == '\0') goto LAB_1800cf3c6;
          uVar14 = FUN_18001daf0(puVar17,local_2c8);
          local_370 = uVar4;
          local_378 = 0;
          local_380 = &local_358;
          local_388 = local_328;
          uVar21 = FUN_1800cf820(&local_300,puVar13,0,uVar14);
          if (iVar19 - 1U < 0x81) {
            *(undefined4 *)((longlong)&local_298 + (longlong)iVar19 * 4) = uVar21;
          }
          iVar19 = iVar19 + 1;
        }
      }
    }
    local_2c8[0] = (longlong *)0xf7521f28977a3033;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_358,local_2c8);
    local_2d0 = (longlong *)0x699671ccb6cec028;
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_340,&local_2d0);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
    if (*pcVar12 != '\0') {
      iVar19 = *(int *)(DAT_1803fa608 + 0x1c);
      while( true ) {
        iVar19 = iVar19 + 1;
        local_368 = iVar19;
        iVar5 = (**(code **)(*DAT_1803fa360 + 0x30))();
        if (iVar5 <= iVar19) break;
        uVar14 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar19);
        cVar3 = FUN_1800c54e0(uVar14);
        if (cVar3 != '\0') {
          local_388 = local_318;
          cVar3 = FUN_1800c4a70(uVar14,local_328,&local_358,local_340);
          if (cVar3 != '\0') {
            uVar15 = FUN_18001daf0(uVar14,local_2c8);
            local_370 = uVar4;
            local_378 = 0;
            local_380 = &local_358;
            local_388 = local_328;
            FUN_1800cf820(&local_300,uVar14,0,uVar15);
          }
        }
      }
    }
    local_2c8[0] = (longlong *)0x13806d9e35de0023;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_358,local_2c8);
    local_2d0 = (longlong *)0x402819404e703058;
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_340,&local_2d0);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
    if (((*pcVar12 != '\0') || (cVar3 = FUN_1800b8200(), cVar3 != '\0')) &&
       (fVar20 = DAT_180380e9c, DAT_1803fac60 != 0)) {
      local_368 = param_3;
      if ((param_3 < 1) && (DAT_1803fa608 != 0)) {
        local_368 = *(int *)(DAT_1803fa608 + 0x20);
      }
      iVar19 = local_368;
      local_328[0] = &local_2e0;
      local_318[0] = (longlong *)((longlong)DAT_1803fac58 + DAT_1803fac60);
      for (plVar9 = DAT_1803fac58; local_2c8[0] = plVar9, plVar9 != local_318[0];
          plVar9 = (longlong *)((longlong)plVar9 + 1)) {
        puVar13 = *(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & (ulonglong)plVar9) * 8);
        plVar2 = (longlong *)puVar13[1];
        local_340[0] = plVar2;
        for (plVar18 = (longlong *)*puVar13; local_2d0 = plVar18, plVar18 != plVar2;
            plVar18 = plVar18 + 0x30d) {
          if (((iVar19 < 1) || (cVar3 = FUN_1800c69c0(iVar19,plVar18), cVar3 != '\0')) &&
             (cVar3 = FUN_1800cfab0(local_328,*plVar18), cVar3 != '\0')) {
            if (iVar19 < 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = FUN_1800c6ab0(iVar19,plVar18);
            }
            uVar22 = uVar4;
            local_348 = uVar21;
            if ((((longlong *)*plVar18 != (longlong *)0x0) &&
                (plVar16 = (longlong *)(**(code **)(*(longlong *)*plVar18 + 0x20))(),
                plVar16 != (longlong *)0x0)) &&
               (iVar5 = (**(code **)(*plVar16 + 0x48))(plVar16), iVar5 - 1U < 0x81)) {
              uVar22 = *(undefined4 *)((longlong)&local_298 + (longlong)iVar5 * 4);
              local_344 = uVar22;
            }
            if (((char)plVar18[0x30a] == '\0') && (*plVar18 != 0)) {
              FUN_18001daf0(*plVar18,&local_358);
            }
            else {
              local_358 = (*(float *)((longlong)plVar18 + 0x1c) - *(float *)(plVar18 + 2)) * fVar20
                          + *(float *)(plVar18 + 2);
              local_354 = (*(float *)(plVar18 + 4) - *(float *)((longlong)plVar18 + 0x14)) * fVar20
                          + *(float *)((longlong)plVar18 + 0x14);
              local_350 = (*(float *)((longlong)plVar18 + 0x24) - *(float *)(plVar18 + 3)) * fVar20
                          + *(float *)(plVar18 + 3);
            }
            local_388 = (longlong **)(plVar18 + 2);
            local_380 = (float *)((longlong)plVar18 + 0x1c);
            local_378 = uVar21;
            local_370 = uVar22;
            FUN_1800cf820(&local_300,*plVar18,plVar18,&local_358);
          }
        }
      }
    }
    FUN_180212450(*param_1,param_1[1],param_1[1] - *param_1 >> 5,local_360);
  }
  return param_1;
}


