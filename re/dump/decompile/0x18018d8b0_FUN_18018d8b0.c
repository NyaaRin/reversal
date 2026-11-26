// 0x18018d8b0  FUN_18018d8b0
// size=256 thunk=false
// signature: undefined FUN_18018d8b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018d8b0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_88[2] = param_1[2];
  local_88[0] = *param_1;
  local_88[1] = param_1[1];
  lVar1 = 0;
  local_78 = param_2[1];
  local_70 = *param_2;
  local_50 = param_2[2];
  local_88[3] = local_88[0];
  local_74 = local_88[2];
  local_6c = local_88[1];
  local_68 = local_88[2];
  local_64 = local_70;
  local_60 = local_78;
  local_5c = local_88[2];
  local_58 = local_88[0];
  local_54 = local_88[1];
  local_4c = local_88[0];
  local_48 = local_78;
  local_44 = local_50;
  local_40 = local_70;
  local_3c = local_88[1];
  local_38 = local_50;
  local_34 = local_70;
  local_30 = local_78;
  local_2c = local_50;
  do {
    FUN_1802d46f0(local_88 + lVar1 * 3,param_3,param_4 + lVar1 * 0xc);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  return;
}


