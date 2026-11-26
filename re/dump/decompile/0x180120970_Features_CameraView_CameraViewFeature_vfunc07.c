// 0x180120970  Features_CameraView_CameraViewFeature_vfunc07
// size=1933 thunk=false
// signature: undefined Features_CameraView_CameraViewFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_CameraView_CameraViewFeature_vfunc07
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  float fVar1;
  short sVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *pcVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined8 local_a0 [2];
  undefined8 local_90 [2];
  float local_80 [2];
  int local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  BVar3 = IsBadReadPtr(param_3,200);
  if (BVar3 != 0) {
    return;
  }
  BVar3 = IsBadWritePtr(param_3,200);
  if (BVar3 != 0) {
    return;
  }
  if (DAT_180423610 != '\0') {
    return;
  }
  local_78 = 0;
  local_74 = 0;
  if (DAT_1803fa668 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_78,&local_74);
  if (local_78 < 1) {
    return;
  }
  if (local_74 < 1) {
    return;
  }
  if (*(int *)((longlong)param_3 + 0x10) != local_78) {
    return;
  }
  if (*(int *)((longlong)param_3 + 0x18) != local_74) {
    return;
  }
  if (*(float *)((longlong)param_3 + 0x38) <= DAT_180380bb0) {
    return;
  }
  if (DAT_180381184 <= *(float *)((longlong)param_3 + 0x38)) {
    return;
  }
  local_80[0] = -9911052.0;
  local_80[1] = 2.9352313e-29;
  local_a8[0] = -6.9921924e+37;
  local_a8[1] = -1.5301077e+32;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_a8);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_a0,local_80);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    if (*(float *)((longlong)param_3 + 0x38) <= DAT_1803810a0 &&
        DAT_1803810a0 != *(float *)((longlong)param_3 + 0x38)) {
      local_a8[0] = -6.9921924e+37;
      local_a8[1] = -1.5301077e+32;
      local_80[0] = 7.553772e-34;
      local_80[1] = -3.4411714e-24;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_a8);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_a0,local_80);
      pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
      if (*pcVar5 == '\0') goto LAB_180120b72;
    }
    local_a8[0] = 2.24208e-43;
    local_90[0] = 0xfb3877511c4b6892;
    local_80[0] = 4.2039e-44;
    local_a0[0] = 0xf4f1688ffe5269e4;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,local_a0);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_c8,local_90);
    pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
    pfVar8 = local_80;
    if (0x1d < (int)*pfVar6) {
      pfVar8 = pfVar6;
    }
    pfVar7 = local_a8;
    if ((int)*pfVar6 < 0xa1) {
      pfVar7 = pfVar8;
    }
    *(float *)((longlong)param_3 + 0x38) = (float)(int)*pfVar7;
  }
LAB_180120b72:
  local_90[0] = 0xf4f1688ffe5269e4;
  local_a0[0] = 0x3506af0b5263e534;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    local_80[0] = 1.82169e-43;
    local_a0[0] = 0x14198b18bdb8cdca;
    local_a8[0] = 4.2039e-44;
    local_90[0] = 0xf4f1688ffe5269e4;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
    pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
    pfVar8 = local_a8;
    if (0x1d < (int)*pfVar6) {
      pfVar8 = pfVar6;
    }
    pfVar7 = local_80;
    if ((int)*pfVar6 < 0x83) {
      pfVar7 = pfVar8;
    }
    *(float *)((longlong)param_3 + 0x3c) = (float)(int)*pfVar7;
  }
  local_90[0] = 0xf4f1688ffe5269e4;
  local_a0[0] = 0x6b51d6e205141ff1;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    local_a0[0] = 0x630699bb15a84dfa;
    local_90[0] = 0xf4f1688ffe5269e4;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
    fVar12 = DAT_180380ac0;
    if (*pcVar5 == '\0') {
      local_90[0] = 0xf4f1688ffe5269e4;
      local_a0[0] = 0x1f3365743787d63f;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
      pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
      fVar12 = DAT_180380ac0;
      if (*pcVar5 == '\0') {
        local_a0[0] = 0xaf72b5e3ad14de05;
        local_a8[0] = 1.4013e-45;
        local_90[0] = 0xf4f1688ffe5269e4;
        plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
        plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
        pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
        local_90[0] = 0xf4f1688ffe5269e4;
        pfVar8 = local_a8;
        if (0 < (int)*pfVar6) {
          pfVar8 = pfVar6;
        }
        if (0x20 < (int)*pfVar6) {
          pfVar8 = (float *)&DAT_18033bf30;
        }
        local_a0[0] = 0xaf72c6e3ad14fae8;
        fVar12 = *pfVar8;
        local_a8[0] = 1.4013e-45;
        plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
        plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
        pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
        pfVar8 = local_a8;
        if (0 < (int)*pfVar6) {
          pfVar8 = pfVar6;
        }
        if (0x20 < (int)*pfVar6) {
          pfVar8 = (float *)&DAT_18033bf30;
        }
        *(float *)((longlong)param_3 + 0x6c) = (float)(int)fVar12 / (float)(int)*pfVar8;
      }
      else {
        fVar10 = *(float *)((longlong)param_3 + 0x6c);
        if (fVar10 <= 0.0) {
          fVar10 = (float)*(int *)((longlong)param_3 + 0x10) /
                   (float)*(int *)((longlong)param_3 + 0x18);
        }
        local_80[0] = 2.0;
        local_a0[0] = 0xd242d32ac1a8eeef;
        local_a8[0] = 0.5;
        local_90[0] = 0xf4f1688ffe5269e4;
        plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
        plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
        pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
        pfVar8 = local_a8;
        if (fVar12 <= *pfVar6) {
          pfVar8 = pfVar6;
        }
        pfVar7 = local_80;
        if (*pfVar6 <= DAT_180380d30) {
          pfVar7 = pfVar8;
        }
        *(float *)((longlong)param_3 + 0x6c) = fVar10 * *pfVar7;
      }
    }
    else {
      fVar10 = *(float *)((longlong)param_3 + 0x6c);
      if (fVar10 <= 0.0) {
        fVar10 = (float)*(int *)((longlong)param_3 + 0x10) /
                 (float)*(int *)((longlong)param_3 + 0x18);
      }
      local_b4 = 2.0;
      local_a0[0] = 0xa317ec6c0b19990a;
      local_b8 = 0.5;
      local_90[0] = 0xf4f1688ffe5269e4;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
      pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
      local_ac = 2.0;
      local_b0 = 0.5;
      local_90[0] = 0xf4f1688ffe5269e4;
      pfVar8 = &local_b8;
      if (fVar12 <= *pfVar6) {
        pfVar8 = pfVar6;
      }
      pfVar7 = &local_b4;
      if (*pfVar6 <= DAT_180380d30) {
        pfVar7 = pfVar8;
      }
      fVar11 = *pfVar7;
      local_a0[0] = 0xa317ed6c0b199abd;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
      pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
      fVar1 = *pfVar6;
      fVar9 = tanf(*(float *)((longlong)param_3 + 0x38) * fVar12 * DAT_180380994);
      fVar9 = atanf(fVar9 / fVar11);
      pfVar8 = &local_b0;
      if (fVar12 <= fVar1) {
        pfVar8 = pfVar6;
      }
      fVar12 = (fVar9 + fVar9) * DAT_1803810bc;
      pfVar6 = &local_ac;
      if (fVar1 <= DAT_180380d30) {
        pfVar6 = pfVar8;
      }
      sVar2 = _fdclass();
      if (((sVar2 < 1) && (DAT_180380f00 < fVar12)) && (fVar12 < DAT_18038117c)) {
        fVar11 = (fVar10 * *pfVar6) / fVar11;
        sVar2 = _fdclass();
        if (((sVar2 < 1) && (DAT_1803809c4 < fVar11)) && (fVar11 < DAT_180380fc8)) {
          *(float *)((longlong)param_3 + 0x38) = fVar12;
          *(float *)((longlong)param_3 + 0x6c) = fVar11;
        }
      }
    }
  }
  return;
}


