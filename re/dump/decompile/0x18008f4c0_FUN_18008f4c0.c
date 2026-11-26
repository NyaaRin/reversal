// 0x18008f4c0  FUN_18008f4c0
// size=799 thunk=false
// signature: undefined FUN_18008f4c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18008f4c0(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_138 [32];
  double local_118;
  uint local_110;
  uint local_108;
  undefined8 **local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  if (DAT_1803f91e8 == 0.0) {
    *param_1 = 1.0;
    *param_2 = 1.0;
    if (DAT_1803fa678 != 0) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      local_88 = (undefined8 **)0x0;
      FUN_18001bcd0(0,&local_98);
      if (local_98 != (undefined8 *)0x0) {
        local_c8 = 0x41b80000;
        local_c4 = 0x42240000;
        FUN_1802d3e70(&local_c8,local_80,&local_b8,&local_a8);
        local_f8 = &local_98;
        local_f0 = &local_c8;
        bVar1 = FUN_18008f7e0(&local_f8,"Right",&local_d8);
        bVar2 = FUN_18008f7e0(&local_f8,&DAT_180348b68,&local_e8);
        fVar5 = DAT_180381384;
        fVar3 = DAT_180380bb0;
        local_108 = (uint)bVar2;
        if (bVar1 == 0) {
          fVar3 = *param_1;
        }
        else if (0.0 <= local_b4 * local_d4 + local_b8 * local_d8 + local_b0 * local_d0) {
          *param_1 = DAT_180380bb0;
        }
        else {
          *param_1 = DAT_180381384;
          fVar3 = fVar5;
        }
        if (bVar2 == 0) {
          fVar5 = *param_2;
          fVar4 = 0.0;
        }
        else {
          if (0.0 <= local_a4 * local_e4 + local_a8 * local_e8 + local_a0 * local_e0) {
            fVar5 = DAT_180380bb0;
          }
          *param_2 = fVar5;
          fVar3 = *param_1;
          fVar4 = local_a4 * local_e4 + local_a8 * local_e8 + local_a0 * local_e0;
        }
        local_118 = (double)fVar5;
        if (bVar1 == 0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = local_b4 * local_d4 + local_b8 * local_d8 + local_b0 * local_d0;
        }
        local_110 = (uint)bVar1;
        FUN_180014410("[ZS-BASIS] Angle:Right dot=%.3f sign=%+.0f | Angle:Up dot=%.3f sign=%+.0f (read %d/%d)\n"
                      ,(double)fVar5,(double)fVar3,(double)fVar4);
        if ((bVar1 != 0) && (bVar2 != 0)) {
          DAT_1803f91e8 = *param_1;
          DAT_180400ae4 = *param_2;
        }
      }
      if (local_98 != (undefined8 *)0x0) {
        (**(code **)*local_98)();
        DAT_1803fa338 = local_88 != (undefined8 **)0x0;
        DAT_1803fa330 = local_f8;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_88;
        }
        DAT_1803fa339 = local_f0._1_4_;
        DAT_1803fa33d = local_f0._5_2_;
        DAT_1803fa33f = local_f0._7_1_;
      }
    }
  }
  else {
    *param_1 = DAT_1803f91e8;
    *param_2 = DAT_180400ae4;
  }
  return;
}


