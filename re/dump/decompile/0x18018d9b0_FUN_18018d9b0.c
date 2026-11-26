// 0x18018d9b0  FUN_18018d9b0
// size=1391 thunk=false
// signature: undefined FUN_18018d9b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_18018d9b0(undefined8 *param_1,longlong param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  longlong lVar12;
  uint uVar13;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_378 [32];
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348 [2];
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
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8 [2];
  undefined8 uStack_1b0;
  ulonglong local_78;
  ulonglong uVar14;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_378;
  uVar17 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  if (((param_2 != 0) && (1 < param_4)) && (1 < param_5)) {
    local_348[0] = 0.0;
    local_348[1] = 0.0;
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
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    memset(local_1b8,0,0x140);
    uVar18 = _DAT_1803817c0;
    fVar23 = DAT_180380930;
    bVar8 = false;
    bVar9 = false;
    uVar14 = uVar17;
    uVar16 = uVar17;
    do {
      fVar25 = *(float *)(param_2 + uVar14 * 0xc);
      fVar22 = *(float *)(param_2 + 4 + uVar14 * 0xc);
      fVar1 = *(float *)(param_2 + 8 + uVar14 * 0xc);
      fVar2 = param_3[9];
      fVar26 = param_3[0xd];
      fVar3 = param_3[0xc];
      fVar24 = fVar22 * param_3[1] + fVar25 * *param_3 + fVar1 * param_3[2] + param_3[3];
      fVar4 = param_3[8];
      fVar5 = param_3[10];
      fVar6 = param_3[0xe];
      fVar27 = fVar22 * param_3[5] + fVar25 * param_3[4] + fVar1 * param_3[6] + param_3[7];
      local_348[uVar14 * 4] = fVar24;
      local_348[uVar14 * 4 + 1] = fVar27;
      fVar26 = fVar25 * fVar3 + fVar22 * fVar26 + fVar1 * fVar6 + param_3[0xf];
      fVar25 = fVar22 * fVar2 + fVar25 * fVar4 + fVar1 * fVar5 + param_3[0xb];
      *(float *)((longlong)&uStack_340 + uVar14 * 0x10 + 4) = fVar26;
      *(float *)(&uStack_340 + uVar14 * 2) = fVar25;
      if (((uint)fVar24 & 0x7f800000) == 0x7f800000) {
        return param_1;
      }
      if (((uint)fVar27 & 0x7f800000) == 0x7f800000) {
        return param_1;
      }
      if (((uint)fVar25 & 0x7f800000) == 0x7f800000) {
        return param_1;
      }
      if (((uint)fVar26 & 0x7f800000) == 0x7f800000) {
        return param_1;
      }
      bVar8 = (bool)(bVar8 | fVar25 < 0.0);
      bVar9 = (bool)(bVar9 | 0.0 <= fVar25);
      if ((0.0 <= fVar25) && (iVar15 = (int)uVar16, iVar15 < 0x14)) {
        uVar7 = (&uStack_340)[uVar14 * 2];
        uVar16 = (ulonglong)(iVar15 + 1);
        *(undefined8 *)(local_1b8 + (longlong)iVar15 * 4) = *(undefined8 *)(local_348 + uVar14 * 4);
        (&uStack_1b0)[(longlong)iVar15 * 2] = uVar7;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < 8);
    if ((bVar8) && (bVar9)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    piVar21 = &DAT_18033bbd0;
    *(undefined1 *)((longlong)param_1 + 0x14) = uVar10;
    do {
      lVar19 = (longlong)*piVar21;
      lVar20 = (longlong)piVar21[1];
      fVar25 = *(float *)(&uStack_340 + lVar19 * 2);
      if (((0.0 <= fVar25 != 0.0 <= *(float *)(&uStack_340 + lVar20 * 2)) &&
          (fVar22 = fVar25 - *(float *)(&uStack_340 + lVar20 * 2),
          fVar23 <= (float)((uint)fVar22 & uVar18))) && (iVar15 = (int)uVar16, iVar15 < 0x14)) {
        fVar1 = local_348[lVar19 * 4 + 1];
        fVar2 = local_348[lVar20 * 4 + 1];
        fVar26 = *(float *)((longlong)&uStack_340 + lVar20 * 0x10 + 4);
        fVar25 = fVar25 / fVar22;
        lVar12 = (longlong)iVar15;
        uVar16 = (ulonglong)(iVar15 + 1);
        fVar22 = *(float *)((longlong)&uStack_340 + lVar19 * 0x10 + 4);
        local_1b8[lVar12 * 4] =
             (local_348[lVar20 * 4] - local_348[lVar19 * 4]) * fVar25 + local_348[lVar19 * 4];
        local_1b8[lVar12 * 4 + 1] = (fVar2 - fVar1) * fVar25 + fVar1;
        *(undefined4 *)(&uStack_1b0 + lVar12 * 2) = 0;
        *(float *)((longlong)&uStack_1b0 + lVar12 * 0x10 + 4) = (fVar26 - fVar22) * fVar25 + fVar22;
      }
      piVar21 = piVar21 + 2;
    } while (piVar21 != (int *)&DAT_18033bc30);
    if (0 < (int)uVar16) {
      local_2b8 = ZEXT816(0);
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_298 = local_2b8;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = local_2b8;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = local_2b8;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = local_2b8;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = local_2b8;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = local_2b8;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = local_2b8;
      local_1c8 = 0;
      uStack_1c0 = 0;
      uVar14 = uVar17;
      local_358 = DAT_180381308;
      fStack_350 = DAT_180381454;
      fStack_354 = DAT_180381308;
      fStack_34c = DAT_180381454;
      do {
        lVar19 = (longlong)(int)uVar14;
        fVar23 = *(float *)((longlong)&uStack_1b0 + lVar19 * 0x10 + 4);
        if (((((uint)fVar23 & 0x7f800000) != 0x7f800000) && (DAT_180380964 < fVar23)) &&
           ((fVar25 = (local_1b8[lVar19 * 4] / fVar23) * (float)param_4 * DAT_180380ac0 +
                      (float)param_4 * DAT_180380ac0, ((uint)fVar25 & 0x7f800000) != 0x7f800000 &&
            (fVar23 = (float)param_5 * DAT_180380ac0 -
                      (local_1b8[lVar19 * 4 + 1] / fVar23) * (float)param_5 * DAT_180380ac0,
            ((uint)fVar23 & 0x7f800000) != 0x7f800000)))) {
          if (fVar25 <= local_358) {
            local_358 = fVar25;
          }
          if (fStack_350 <= fVar25) {
            fStack_350 = fVar25;
          }
          if (fVar23 <= fStack_354) {
            fStack_354 = fVar23;
          }
          if (fStack_34c <= fVar23) {
            fStack_34c = fVar23;
          }
          iVar15 = (int)uVar17;
          if (iVar15 < 0x20) {
            uVar17 = (ulonglong)(iVar15 + 1);
            *(float *)(local_2b8 + (longlong)iVar15 * 8) = fVar25;
            *(float *)(local_2b8 + (longlong)iVar15 * 8 + 4) = fVar23;
          }
        }
        uVar18 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar18;
      } while ((int)uVar18 < (int)uVar16);
      if (0 < (int)uVar17) {
        local_2c8 = 0;
        uStack_2c0 = 0;
        cVar11 = FUN_18018cb40(&local_358,param_4,param_5,&local_2c8);
        if ((cVar11 != '\0') &&
           (cVar11 = FUN_18018d080(local_2b8,uVar17,param_4,param_5), cVar11 != '\0')) {
          *(undefined4 *)param_1 = 3;
          *(ulonglong *)((longlong)param_1 + 4) = CONCAT44(fStack_354,local_358);
          *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fStack_34c,fStack_350);
          return param_1;
        }
        *(undefined4 *)param_1 = 2;
        *(ulonglong *)((longlong)param_1 + 4) = CONCAT44(fStack_354,local_358);
        *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fStack_34c,fStack_350);
        return param_1;
      }
    }
    *(undefined4 *)param_1 = 1;
  }
  return param_1;
}


