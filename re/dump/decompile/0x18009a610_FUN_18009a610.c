// 0x18009a610  FUN_18009a610
// size=659 thunk=false
// signature: undefined FUN_18009a610()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18009a610(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  undefined8 local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = *(undefined8 *)param_3;
  local_b0 = 0;
  uVar3 = FUN_1802d3e00();
  local_b8 = CONCAT44(local_b8._4_4_,uVar3);
  fVar4 = (float)FUN_1802d3e00(local_b8._4_4_);
  fVar1 = DAT_180380938;
  iVar2 = 0;
  local_b8._4_4_ = fVar4;
  while( true ) {
    FUN_1802d3e70(&local_b8,&local_78,&local_88,&local_68);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar8 = fVar4 * local_88 + local_78 + fVar9 * local_68;
    fVar7 = fVar4 * local_84 + local_74 + fVar9 * local_64;
    local_a0 = fVar4 * local_80 + local_70 + fVar9 * local_60;
    local_a8 = CONCAT44(fVar7,fVar8);
    if ((((((uint)fVar8 & 0x7f800000) == 0x7f800000) || (((uint)fVar7 & 0x7f800000) == 0x7f800000))
        || (((uint)local_a0 & 0x7f800000) == 0x7f800000)) ||
       (fVar7 * fVar7 + fVar8 * fVar8 + local_a0 * local_a0 < fVar1)) break;
    local_94 = 0;
    local_98 = 0.0;
    FUN_1802d4540(&local_a8,&local_98);
    fVar9 = (float)local_94 - param_3[1];
    fVar4 = (float)FUN_1802d3e00(local_98 - *param_3);
    fVar9 = (float)FUN_1802d3e00(fVar9);
    local_b8._0_4_ = (float)local_b8 - fVar4;
    local_b8._4_4_ = local_b8._4_4_ - fVar9;
    local_b0 = 0;
    uVar3 = FUN_1802d3e00((float)local_b8);
    local_b8 = CONCAT44(local_b8._4_4_,uVar3);
    fVar4 = (float)FUN_1802d3e00(local_b8._4_4_);
    iVar2 = iVar2 + 1;
    local_b8._4_4_ = fVar4;
    if (3 < iVar2) {
      fVar1 = param_3[1];
      uVar5 = FUN_1802d3e00(*param_3 - (float)local_b8);
      uVar6 = FUN_1802d3e00(fVar1 - fVar4);
      if (((uVar5 & 0x7f800000) == 0x7f800000) || ((uVar6 & 0x7f800000) == 0x7f800000)) {
        local_a8 = 0;
      }
      else {
        local_a8 = CONCAT44(uVar6,uVar5);
      }
      *param_2 = local_a8;
      *(undefined4 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}


