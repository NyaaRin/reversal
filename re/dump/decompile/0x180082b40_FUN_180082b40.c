// 0x180082b40  FUN_180082b40
// size=862 thunk=false
// signature: undefined FUN_180082b40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180082b40(undefined8 param_1,float *param_2,float param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_cf;
  undefined2 local_cb;
  undefined1 local_c9;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  float local_b0;
  float local_ac;
  int local_a8;
  float *local_a0;
  undefined4 local_98;
  undefined8 local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_a0 = param_2;
  FUN_18001bcd0(0,&local_c8);
  if (local_c8 != (longlong *)0x0) {
    local_b0 = 0.0;
    local_ac = 0.0;
    iVar2 = (**(code **)*local_c8)();
    local_a8 = iVar2;
    FUN_180023e60(local_c8,0);
    FUN_18002db10(local_c8[1],0xffffffff,&DAT_180341c48);
    FUN_18002db10(local_c8[1],0xffffffff,&DAT_180346dac);
    (**(code **)(*local_c8 + 0xf0))(local_c8,0);
    (**(code **)(*local_c8 + 0xf0))(local_c8,DAT_180380d08);
    FUN_180023180(local_c8[1],2,1);
    dVar1 = (double)(**(code **)(*local_c8 + 0xc0))(local_c8,0xffffffff);
    fVar5 = (float)dVar1;
    local_b0 = fVar5;
    (**(code **)(*local_c8 + 0x10))(local_c8,1);
    FUN_18002d9c0(local_c8[1],0xffffffff,&DAT_180346dac);
    (**(code **)(*local_c8 + 0xf0))(local_c8,0);
    (**(code **)(*local_c8 + 0xf0))(local_c8,DAT_180380d98);
    FUN_180023180(local_c8[1],2,1);
    dVar1 = (double)(**(code **)(*local_c8 + 0xc0))(local_c8,0xffffffff);
    fVar6 = (float)dVar1;
    local_ac = fVar6;
    iVar3 = (**(code **)*local_c8)();
    while (iVar2 < iVar3) {
      (**(code **)(*local_c8 + 0x10))(local_c8,1);
      iVar3 = (**(code **)*local_c8)();
    }
    local_94 = 0;
    local_98 = 0;
    FUN_1802d4540(param_2,&local_98);
    FUN_1802d3e70(&local_98,local_68,&local_88,&local_78);
    fVar4 = sinf(fVar6);
    fVar4 = fVar4 * fVar5;
    fVar6 = cosf(fVar6);
    fVar6 = fVar6 * fVar5;
    *param_2 = local_88 * param_3 * fVar4 + *param_2 + local_78 * param_3 * fVar6;
    param_2[1] = local_84 * param_3 * fVar4 + param_2[1] + local_74 * param_3 * fVar6;
    param_2[2] = local_80 * param_3 * fVar4 + param_2[2] + local_70 * param_3 * fVar6;
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)*local_c8)();
    DAT_1803fa338 = local_b8 != 0;
    DAT_1803fa330 = local_d8;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_b8;
    }
    DAT_1803fa339 = local_cf;
    DAT_1803fa33d = local_cb;
    DAT_1803fa33f = local_c9;
  }
  return;
}


