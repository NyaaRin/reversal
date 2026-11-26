// 0x1800779c0  vfunc_shared_1800779c0
// size=764 thunk=false
// signature: undefined vfunc_shared_1800779c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
vfunc_shared_1800779c0(longlong *param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
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
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar6 = (*pcVar1)(DAT_1803fa360,uVar5);
  if (((lVar6 == 0) ||
      ((((**(code **)(*param_1 + 0x100))(param_1,&local_108,param_3,param_4), local_108 == 0.0 &&
        (local_104 == 0.0)) || (*param_4 < 1)))) || (DAT_1803fa5c0 == (longlong *)0x0)) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    uVar4 = FUN_180015e50();
    (**(code **)*DAT_1803fa5c0)(DAT_1803fa5c0,uVar4);
    uVar3 = DAT_18038135c;
    fVar2 = DAT_180380bb0;
    uVar5 = DAT_180380ac0;
    iVar7 = 0;
    do {
      pcVar1 = *(code **)(*DAT_1803fa5c0 + 8);
      fVar8 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar5);
      fVar9 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar5);
      fVar8 = fVar8 + fVar9;
      pcVar1 = *(code **)(*DAT_1803fa5c0 + 8);
      fVar9 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar5);
      fVar10 = (float)(*pcVar1)(DAT_1803fa5c0,uVar3,uVar5);
      fVar9 = fVar9 + fVar10;
      if (fVar9 * fVar9 + fVar8 * fVar8 <= fVar2) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x10);
    FUN_1802d3e70(param_4 + 2,&local_d8,&local_e8,&local_c8);
    fVar8 = fVar8 * local_108;
    local_f8 = 0;
    fVar9 = fVar9 * local_104;
    local_f0 = 0.0;
    local_b8 = fVar8 * local_e8 + local_d8 + fVar9 * local_c8;
    local_b4 = fVar8 * local_e4 + local_d4 + fVar9 * local_c4;
    local_b0 = fVar8 * local_e0 + local_d0 + fVar9 * local_c0;
    FUN_1802d4540(&local_b8,&local_f8);
    local_f8._0_4_ = (float)local_f8 - (float)param_4[2];
    local_f8._4_4_ = local_f8._4_4_ - (float)param_4[3];
    local_f0 = local_f0 - (float)param_4[4];
    uVar5 = FUN_1802d3e00();
    local_f8 = CONCAT44(local_f8._4_4_,uVar5);
    uVar5 = FUN_1802d3e00(local_f8._4_4_);
    *param_2 = CONCAT44(uVar5,(int)local_f8);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}


