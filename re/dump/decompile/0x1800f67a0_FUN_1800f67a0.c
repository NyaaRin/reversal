// 0x1800f67a0  FUN_1800f67a0
// size=2165 thunk=false
// signature: undefined FUN_1800f67a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f67a0(longlong param_1,uint param_2,undefined8 param_3,float param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  float local_108;
  float local_100;
  undefined4 local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  local_d8 = param_3;
  if (param_2 < 5) {
    local_100 = param_4 * _DAT_180380d58;
    local_108 = (float)param_5;
    cVar6 = FUN_180022250(local_100,DAT_1803fa5d8,(&PTR_DAT_1803390b8)[(int)param_2],param_3);
    if (cVar6 != '\0') {
      return;
    }
  }
  fVar7 = DAT_180380e60;
  fVar8 = DAT_180380ac0;
  fVar12 = (float)param_3;
  fVar10 = local_d8._4_4_;
  if (param_2 == 0) {
    fVar9 = fVar12 - param_4;
    local_f8 = 0;
    fVar7 = local_d8._4_4_ - param_4 * DAT_180380b34;
    local_100 = (float)DAT_180380c34;
    fVar11 = param_4 * DAT_180380b34 + local_d8._4_4_;
    local_108 = param_4 * DAT_180380a88;
    local_e0 = param_4 + fVar12;
    local_dc = fVar11;
    local_d0 = fVar9;
    local_cc = fVar7;
    FUN_180294f00(param_1,&local_d0,&local_e0,param_5);
    local_e0 = (param_4 + fVar12) - DAT_180380bb0;
    local_dc = fVar10;
    local_d0 = fVar9 + DAT_180380bb0;
    local_cc = fVar10;
    local_108 = (float)DAT_180380bf0;
    FUN_180294c90(param_1,&local_d0,&local_e0,param_5);
    fVar8 = DAT_180380ac0;
    fVar12 = param_4 * DAT_180380a20;
    local_dc = (fVar7 + fVar10) * DAT_180380ac0;
    local_e8 = param_4 * DAT_180380ad4 + fVar9;
    local_e0 = local_e8;
    if (((param_5 & 0xff000000) == 0) || (fVar12 < DAT_180380ac0)) {
      if ((param_5 & 0xff000000) == 0) {
        return;
      }
    }
    else {
      local_108 = 6.72623e-44;
      FUN_180293e00(param_1,&local_e0,fVar12,0);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    local_e4 = (fVar11 + fVar10) * fVar8;
    if (fVar12 < fVar8) {
      return;
    }
    local_108 = 6.72623e-44;
    FUN_180293e00(param_1,&local_e8,fVar12,0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  }
  else if (param_2 == 1) {
    fVar10 = param_4 * _DAT_180380b48;
    local_100 = 0.0;
    local_108 = DAT_180380e60;
    FUN_1802941e0(param_1,&local_d8,fVar10,DAT_180381388);
    local_100 = 0.0;
    local_108 = (float)DAT_180380c50;
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5);
    *(undefined4 *)(param_1 + 0x50) = 0;
    fVar8 = cosf(fVar7);
    fVar12 = fVar8 * fVar10 + fVar12;
    fVar7 = sinf(fVar7);
    local_d0 = param_4 * fVar8 * _DAT_180380a90;
    local_cc = param_4 * fVar7 * _DAT_180380a90;
    local_e8 = fVar12 - local_d0;
    local_d0 = local_d0 + fVar12;
    fVar10 = fVar7 * fVar10 + local_d8._4_4_;
    local_dc = param_4 * fVar8 * DAT_180380af0 + fVar10;
    local_e4 = fVar10 - local_cc;
    local_cc = local_cc + fVar10;
    local_e0 = fVar12 - param_4 * fVar7 * DAT_180380af0;
    if ((param_5 & 0xff000000) == 0) {
      return;
    }
    FUN_18020dc30(param_1 + 0x50,&local_e0);
    FUN_18020dc30(param_1 + 0x50,&local_d0);
    FUN_18020dc30(param_1 + 0x50,&local_e8);
  }
  else {
    if (param_2 == 2) {
      if (((param_5 & 0xff000000) != 0) && (DAT_180380ac0 <= param_4 * DAT_180380a40)) {
        local_108 = 6.72623e-44;
        FUN_180293e00(param_1,&local_d8,param_4 * DAT_180380a40,0);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_5);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      uVar5 = DAT_180381380;
      uVar1 = DAT_180380b64;
      fVar8 = param_4 * _DAT_180380ae0;
      local_100 = 0.0;
      local_108 = (float)DAT_180380b64;
      FUN_1802941e0(param_1,&local_d8,fVar8,DAT_180381380);
      uVar2 = DAT_180380c10;
      local_100 = 0.0;
      local_108 = (float)DAT_180380c10;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5)
      ;
      uVar4 = DAT_180380ea8;
      uVar3 = DAT_180380d70;
      local_100 = 0.0;
      local_108 = (float)DAT_180380ea8;
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_1802941e0(param_1,&local_d8,fVar8,uVar3);
      local_100 = 0.0;
      local_108 = (float)uVar2;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5)
      ;
      local_100 = 0.0;
      local_108 = (float)uVar1;
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_1802941e0(param_1,&local_d8,param_4,uVar5);
      local_100 = 0.0;
      local_108 = (float)uVar2;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5)
      ;
      local_100 = 0.0;
      local_108 = (float)uVar4;
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_1802941e0(param_1,&local_d8,param_4,uVar3);
      local_100 = 0.0;
      local_108 = (float)uVar2;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5)
      ;
      goto LAB_1800f6fb8;
    }
    if (param_2 != 3) {
      if (param_2 != 4) {
        return;
      }
      if (((param_5 & 0xff000000) != 0) && (DAT_180380ac0 <= param_4 * DAT_180380b4c)) {
        local_108 = 6.72623e-44;
        FUN_180293e00(param_1,&local_d8,param_4 * DAT_180380b4c - DAT_180380ac0,0);
        local_108 = (float)DAT_180380c34;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        local_100 = 7.17465e-43;
        FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_5);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      uVar1 = DAT_180380c10;
      fVar7 = local_d8._4_4_;
      local_108 = (float)DAT_180380c10;
      local_e4 = local_d8._4_4_ - param_4 * fVar8;
      local_e8 = fVar12;
      FUN_180294c90(param_1,&local_d8,&local_e8,param_5);
      local_108 = (float)uVar1;
      local_e8 = param_4 * _DAT_180380a98 + fVar12;
      local_e4 = param_4 * DAT_1803809fc + fVar7;
      FUN_180294c90(param_1,&local_d8,&local_e8,param_5);
      return;
    }
    local_c8 = fVar12 - param_4;
    local_100 = 0.0;
    local_c4 = param_4 * DAT_180380ad4 + local_d8._4_4_;
    local_c0 = fVar12 - param_4 * DAT_180380a58;
    local_b8 = fVar12 + param_4 * DAT_180380a1c;
    local_bc = local_d8._4_4_ - param_4 * DAT_180380a1c;
    local_b4 = local_d8._4_4_ + param_4 * DAT_180380a58;
    fVar8 = local_d8._4_4_ - param_4 * DAT_180380ae4;
    local_108 = (float)DAT_180380c50;
    local_b0 = param_4 + fVar12;
    local_ac = fVar8;
    FUN_1802929d0(param_1,&local_c8,4,param_5);
    local_e0 = param_4 * DAT_180380b74 + fVar12;
    local_d0 = param_4 * DAT_180380a94 + fVar12;
    local_dc = fVar10 - param_4 * DAT_1803809a0;
    local_cc = fVar10 - param_4 * _DAT_180380b0c;
    if ((param_5 & 0xff000000) == 0) {
      return;
    }
    local_e8 = param_4 + fVar12;
    local_e4 = fVar8;
    FUN_18020dc30(param_1 + 0x50,&local_e8);
    FUN_18020dc30(param_1 + 0x50,&local_d0);
    FUN_18020dc30(param_1 + 0x50,&local_e0);
  }
  FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5);
LAB_1800f6fb8:
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


