// 0x1800985f0  FUN_1800985f0
// size=2142 thunk=false
// signature: undefined FUN_1800985f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1800985f0(longlong *param_1,undefined8 param_2,undefined4 param_3,uint *param_4,
                  uint *param_5,undefined4 param_6,char param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  char *pcVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  char **ppcVar15;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  char local_350;
  undefined4 local_348 [2];
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 local_32c;
  char local_328;
  uint *local_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined4 local_308;
  undefined8 local_304;
  uint *local_2f8;
  longlong *local_2e8;
  undefined4 local_2dc;
  undefined8 uStack_2d8;
  undefined4 auStack_2d0 [62];
  int local_1d8;
  longlong *local_1c8;
  undefined4 local_1bc;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [62];
  int local_b8;
  char *local_a8 [3];
  char *local_90 [7];
  char *local_58 [3];
  
  local_58[0] = (char *)(DAT_1803da4c0 ^ (ulonglong)auStack_378);
  local_2f8 = param_5;
  DAT_180423978 = 0;
  DAT_18040a208 = 0;
  local_348[0] = param_3;
  local_320 = param_4;
  if ((param_7 != '\0') && (DAT_1803de067 != '\0')) {
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar11 = (*pcVar4)(DAT_1803fa360,uVar9);
    if (lVar11 != 0) {
      FUN_18001d810(lVar11);
    }
  }
  local_314 = 0;
  local_318 = 0;
  local_304 = 0;
  local_308 = 0;
  cVar7 = FUN_180095a10(param_1,param_3,"WorldPos",&local_340);
  if (cVar7 != '\0') {
    cVar7 = FUN_180095a10(param_1,param_3,"LocalMuzzlePos",&local_340);
    if (cVar7 != '\0') {
      cVar7 = FUN_180095b20(param_1,param_3,"WorldAng",&local_318);
      if (cVar7 != '\0') {
        cVar7 = FUN_180095b20(param_1,param_3,"LocalMuzzleAng",&local_308);
        if (cVar7 != '\0') {
          local_a8[0] = "WorldModel_Transform";
          local_a8[1] = "PosAngChanges";
          local_a8[2] = "GetTrace";
          ppcVar15 = local_a8;
          do {
            if (DAT_1803faee8 != (code *)0x0) {
              pcVar5 = *ppcVar15;
              lVar11 = param_1[1];
              FUN_180023010(&local_340,lVar11);
              (*DAT_1803faee8)(lVar11,param_3,pcVar5);
              if ((local_328 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
                (*DAT_1803fae90)(local_340,CONCAT44(uStack_334,local_338),local_330,local_32c);
              }
            }
            cVar7 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
            (**(code **)(*param_1 + 0x10))(param_1,1);
            if (cVar7 == '\0') goto LAB_180098876;
            ppcVar15 = ppcVar15 + 1;
          } while (ppcVar15 != local_90);
          FUN_180098400(param_1,param_2,param_3,0);
          cVar7 = FUN_180097d30();
          if (cVar7 == '\0') {
            local_350 = param_7;
            local_358 = param_6;
            cVar7 = FUN_180096280(param_1,param_3,param_5,local_320);
            if (cVar7 != '\0') {
              return '\x01';
            }
          }
          DAT_18040a208 = 0;
          goto LAB_180098887;
        }
      }
    }
  }
LAB_180098876:
  FUN_180098400(param_1,param_2,param_3,1);
LAB_180098887:
  if (DAT_1803faee8 != (code *)0x0) {
    lVar11 = param_1[1];
    FUN_180023010(&local_340,lVar11);
    (*DAT_1803faee8)(lVar11,param_3,"GetTrace");
    if ((local_328 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_340,CONCAT44(uStack_334,local_338),local_330,local_32c);
    }
  }
  cVar7 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if ((cVar7 == '\0') || (cVar7 = FUN_18001e2b0(param_2,param_1), cVar7 == '\0')) {
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return '\0';
  }
  FUN_180095590(&local_2e8,param_1,param_3);
  uVar9 = uStack_334;
  local_90[0] = "last_transform";
  local_90[1] = "setrhik";
  local_90[2] = "setlhik";
  local_90[3] = "fuckingfuckangle";
  local_90[4] = "fuckingfuckpos";
  local_90[5] = "desiredPos";
  local_90[6] = "desiredAng";
  ppcVar15 = local_90;
  do {
    iVar14 = local_1d8;
    plVar6 = local_2e8;
    if (0xf < local_1d8) {
      local_348[0] = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_348,(ThrowInfo *)&DAT_1803d59f0);
    }
    pcVar5 = *ppcVar15;
    (**(code **)(*local_2e8 + 0x128))(local_2e8,local_2dc);
    FUN_18002db10(plVar6[1],0xffffffff,pcVar5);
    uVar10 = (**(code **)(*plVar6 + 0x118))(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6,1);
    lVar11 = (longlong)iVar14;
    (&uStack_2d8)[lVar11 * 2] = pcVar5;
    auStack_2d0[lVar11 * 4] = uVar10;
    auStack_2d0[lVar11 * 4 + 1] = uVar9;
    local_1d8 = local_1d8 + 1;
    ppcVar15 = ppcVar15 + 1;
  } while (ppcVar15 != local_58);
  FUN_180095710(&local_2e8,"prankang",1);
  lVar11 = (longlong)local_1d8;
  if (local_1d8 < 0x10) {
    (**(code **)(*local_2e8 + 0x128))(local_2e8,local_2dc);
    FUN_18002db10(local_2e8[1],0xffffffff,"cache_trace");
    uVar9 = (**(code **)(*local_2e8 + 0x118))(local_2e8);
    (**(code **)(*local_2e8 + 0x10))(local_2e8,1);
    (&uStack_2d8)[lVar11 * 2] = "cache_trace";
    auStack_2d0[lVar11 * 4] = uVar9;
    auStack_2d0[lVar11 * 4 + 1] = uStack_334;
    local_1d8 = local_1d8 + 1;
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar11 = (*pcVar4)(DAT_1803fa360,uVar9);
    if ((lVar11 == 0) || (cVar7 = FUN_18001e2b0(lVar11,param_1), cVar7 == '\0')) {
      cVar7 = '\0';
    }
    else {
      uVar9 = (**(code **)*param_1)(param_1);
      FUN_180095590(&local_1c8,param_1,uVar9);
      plVar6 = local_1c8;
      lVar11 = (longlong)local_b8;
      if (0xf < local_b8) {
        local_348[0] = 0;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_348,(ThrowInfo *)&DAT_1803d59f0);
      }
      (**(code **)(*local_1c8 + 0x128))(local_1c8,local_1bc);
      FUN_18002db10(plVar6[1],0xffffffff,"cachedeyetrace");
      uVar9 = (**(code **)(*plVar6 + 0x118))(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
      (&uStack_1b8)[lVar11 * 2] = "cachedeyetrace";
      auStack_1b0[lVar11 * 4] = uVar9;
      auStack_1b0[lVar11 * 4 + 1] = uStack_334;
      iVar14 = local_b8 + 1;
      local_b8 = iVar14;
      if (0xf < iVar14) {
        local_348[0] = 0;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_348,(ThrowInfo *)&DAT_1803d59f0);
      }
      (**(code **)(*local_1c8 + 0x128))(local_1c8,local_1bc);
      FUN_18002db10(local_1c8[1],0xffffffff,"cachedhulltrace");
      uVar9 = (**(code **)(*local_1c8 + 0x118))(local_1c8);
      (**(code **)(*local_1c8 + 0x10))(local_1c8,1);
      lVar11 = (longlong)iVar14;
      (&uStack_1b8)[lVar11 * 2] = "cachedhulltrace";
      auStack_1b0[lVar11 * 4] = uVar9;
      auStack_1b0[lVar11 * 4 + 1] = uStack_334;
      local_b8 = local_b8 + 1;
      (**(code **)(*param_1 + 0x10))(param_1,1);
      (**(code **)(*param_1 + 0xe0))(param_1);
      FUN_18002da40(param_1[1],local_348[0],"cache_trace");
      (**(code **)(*param_1 + 0xf8))(param_1,0);
      (**(code **)(*param_1 + 0xe0))(param_1);
      (**(code **)(*param_1 + 0xe0))(param_1);
      (**(code **)(*param_1 + 0xf8))(param_1,1);
      (**(code **)(*param_1 + 0xf8))(param_1,1);
      iVar14 = FUN_180023180(param_1[1],6,3);
      if (iVar14 == 0) {
        cVar7 = '\0';
        cVar8 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb);
        if (cVar8 != '\0') {
          puVar12 = (uint *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
          uVar1 = *puVar12;
          *local_320 = uVar1;
          uVar2 = puVar12[1];
          local_320[1] = uVar2;
          uVar3 = puVar12[2];
          local_320[2] = uVar3;
          if ((((uVar1 & 0x7f800000) != 0x7f800000) && ((uVar2 & 0x7f800000) != 0x7f800000)) &&
             ((uVar3 & 0x7f800000) != 0x7f800000)) {
            cVar7 = '\x01';
          }
        }
        puVar12 = local_2f8;
        local_2f8[0] = 0;
        local_2f8[1] = 0;
        local_2f8[2] = 0;
        if ((cVar7 != '\0') &&
           (cVar8 = (**(code **)(*param_1 + 0x138))(param_1,0xfffffffe,10), cVar8 != '\0')) {
          puVar13 = (uint *)(**(code **)(*param_1 + 0x178))(param_1,0xfffffffe);
          if (((*puVar13 & 0x7f800000) != 0x7f800000) &&
             ((uVar1 = puVar13[1], (uVar1 & 0x7f800000) != 0x7f800000 &&
              (uVar2 = puVar13[2], (uVar2 & 0x7f800000) != 0x7f800000)))) {
            *puVar12 = *puVar13;
            puVar12[1] = uVar1;
            puVar12[2] = uVar2;
          }
        }
        (**(code **)(*param_1 + 0x10))(param_1,3);
      }
      else {
        (**(code **)(*param_1 + 0x10))(param_1,1);
        cVar7 = '\0';
      }
      FUN_180095910(&local_1c8);
    }
    FUN_180095910(&local_2e8);
    return cVar7;
  }
  local_348[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_348,(ThrowInfo *)&DAT_1803d59f0);
}


