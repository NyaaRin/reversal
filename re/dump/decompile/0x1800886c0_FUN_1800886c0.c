// 0x1800886c0  FUN_1800886c0
// size=692 thunk=false
// signature: undefined FUN_1800886c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1800886c0(undefined8 param_1,undefined8 *param_2,float *param_3,int *param_4,float param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if (((param_5 <= 0.0) || (param_4 == (int *)0x0)) || (*param_4 < 1)) {
LAB_18008893f:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    cVar3 = FUN_180015e50();
    fVar4 = DAT_180380a28;
    fVar5 = DAT_180381350;
    if (((cVar3 != '\b') && (fVar4 = DAT_180381360, fVar5 = DAT_18038134c, cVar3 != -0x59)) &&
       ((fVar4 = DAT_180381334, fVar5 = DAT_1803809f8, cVar3 != -0x32 &&
        (fVar4 = DAT_180381338, fVar5 = DAT_180381364, cVar3 != -0x25)))) {
      if (DAT_1803fa5c0 == (longlong *)0x0) goto LAB_18008893f;
      (**(code **)*DAT_1803fa5c0)();
      uVar2 = DAT_18038135c;
      uVar8 = DAT_180380ac0;
      pcVar1 = *(code **)(*DAT_1803fa5c0 + 8);
      fVar4 = (float)(*pcVar1)(DAT_1803fa5c0,DAT_18038135c,DAT_180380ac0);
      fVar5 = (float)(*pcVar1)(DAT_1803fa5c0,uVar2,uVar8);
      pcVar1 = *(code **)(*DAT_1803fa5c0 + 8);
      fVar6 = (float)(*pcVar1)(DAT_1803fa5c0,uVar2,uVar8);
      fVar7 = (float)(*pcVar1)(DAT_1803fa5c0,uVar2,uVar8);
      fVar4 = fVar4 + fVar5;
      fVar5 = fVar6 + fVar7;
    }
    FUN_1802d3e70(param_3,&local_a8,&local_b8,&local_98);
    fVar4 = fVar4 * param_5;
    local_c8 = 0;
    fVar5 = fVar5 * param_5;
    local_c0 = 0.0;
    local_88 = fVar4 * local_b8 + local_a8 + fVar5 * local_98;
    local_84 = fVar4 * local_b4 + local_a4 + fVar5 * local_94;
    local_80 = fVar4 * local_b0 + local_a0 + fVar5 * local_90;
    FUN_1802d4540(&local_88,&local_c8);
    local_c8._0_4_ = (float)local_c8 - *param_3;
    local_c8._4_4_ = local_c8._4_4_ - param_3[1];
    local_c0 = local_c0 - param_3[2];
    uVar8 = FUN_1802d3e00();
    local_c8 = CONCAT44(local_c8._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_c8._4_4_);
    *param_2 = CONCAT44(uVar8,(int)local_c8);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}


