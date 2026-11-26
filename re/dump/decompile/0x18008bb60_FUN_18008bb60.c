// 0x18008bb60  FUN_18008bb60
// size=651 thunk=false
// signature: undefined FUN_18008bb60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18008bb60(undefined8 param_1,undefined8 *param_2,float *param_3,int *param_4,float param_5)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  if ((((param_5 <= 0.0) || (param_4 == (int *)0x0)) || (*param_4 < 1)) ||
     (DAT_1803fa5c0 == (longlong *)0x0)) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    uVar4 = FUN_180015e50();
    (**(code **)*DAT_1803fa5c0)(DAT_1803fa5c0,uVar4);
    uVar3 = DAT_18038135c;
    fVar2 = DAT_180380bb0;
    uVar9 = DAT_180380ac0;
    iVar5 = 0;
    do {
      pcVar1 = *(code **)(*DAT_1803fa5c0 + 8);
      fVar6 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar9);
      fVar7 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar9);
      fVar6 = fVar6 + fVar7;
      pcVar1 = *(code **)(*DAT_1803fa5c0 + 8);
      fVar7 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar9);
      fVar8 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar9);
      fVar7 = fVar7 + fVar8;
      if (fVar7 * fVar7 + fVar6 * fVar6 <= fVar2) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10);
    FUN_1802d3e70(param_3,&local_c8,&local_d8,&local_b8);
    fVar6 = fVar6 * param_5;
    local_e8 = 0;
    fVar7 = fVar7 * param_5;
    local_e0 = 0.0;
    local_a8 = fVar6 * local_d8 + local_c8 + fVar7 * local_b8;
    local_a4 = fVar6 * local_d4 + local_c4 + fVar7 * local_b4;
    local_a0 = fVar6 * local_d0 + local_c0 + fVar7 * local_b0;
    FUN_1802d4540(&local_a8,&local_e8);
    local_e8._0_4_ = (float)local_e8 - *param_3;
    local_e8._4_4_ = local_e8._4_4_ - param_3[1];
    local_e0 = local_e0 - param_3[2];
    uVar9 = FUN_1802d3e00();
    local_e8 = CONCAT44(local_e8._4_4_,uVar9);
    uVar9 = FUN_1802d3e00(local_e8._4_4_);
    *param_2 = CONCAT44(uVar9,(int)local_e8);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}


