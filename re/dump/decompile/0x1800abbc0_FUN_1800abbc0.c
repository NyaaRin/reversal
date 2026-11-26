// 0x1800abbc0  FUN_1800abbc0
// size=458 thunk=false
// signature: undefined FUN_1800abbc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1800abbc0(uint *param_1,uint *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined6 uStack_42;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_6c._0_12_ = ZEXT812(0);
  local_6c._12_4_ = 0;
  local_5c = 0;
  uStack_58 = local_6c._4_8_;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  *param_5 = local_98;
  param_5[1] = uStack_90;
  param_5[2] = local_88;
  param_5[3] = uStack_80;
  *(undefined4 *)(param_5 + 4) = local_78;
  *(undefined4 *)((longlong)param_5 + 0x24) = local_74;
  *(undefined1 *)(param_5 + 5) = local_70;
  *(undefined1 *)((longlong)param_5 + 0x29) = local_6f;
  *(undefined1 *)((longlong)param_5 + 0x2a) = local_6e;
  *(undefined1 *)((longlong)param_5 + 0x2b) = local_6d;
  *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
  *(undefined4 *)(param_5 + 6) = 0;
  *(undefined2 *)((longlong)param_5 + 0x34) = 0;
  *(undefined1 *)((longlong)param_5 + 0x36) = 0;
  *(undefined1 *)((longlong)param_5 + 0x37) = 0;
  *(undefined4 *)(param_5 + 7) = 0;
  param_5[8] = uStack_58;
  param_5[9] = 0;
  *(undefined4 *)(param_5 + 10) = 0;
  uVar1 = 0;
  *(undefined2 *)((longlong)param_5 + 0x54) = 0;
  param_5[0xb] = 0;
  *(undefined4 *)(param_5 + 0xc) = 0;
  if ((((DAT_1803fa610 != (longlong *)0x0) && (uVar1 = *param_1 & 0x7f800000, uVar1 != 0x7f800000))
      && (uVar1 = param_1[1] & 0x7f800000, uVar1 != 0x7f800000)) &&
     (((uVar1 = param_1[2] & 0x7f800000, uVar1 != 0x7f800000 &&
       (uVar1 = *param_2 & 0x7f800000, uVar1 != 0x7f800000)) &&
      ((uVar1 = param_2[1] & 0x7f800000, uVar1 != 0x7f800000 &&
       (uVar1 = param_2[2] & 0x7f800000, uVar1 != 0x7f800000)))))) {
    uStack_58 = 0;
    local_a8 = *(undefined8 *)param_2;
    local_a0 = param_2[2];
    local_4c = local_5c;
    FUN_18001fde0(&local_98,param_1,&local_a8);
    local_b8 = param_5;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_98,param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


