// 0x180208b60  FUN_180208b60
// size=471 thunk=false
// signature: undefined FUN_180208b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180208b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  uVar1 = *param_1;
  local_b0 = *(undefined8 *)(param_1 + 2);
  uStack_a8 = *(undefined8 *)(param_1 + 4);
  local_a0 = *(undefined8 *)(param_1 + 6);
  local_98 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_80 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_88 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = 0;
  local_90 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = 0;
  local_78 = *(undefined1 *)(param_1 + 0x10);
  local_77 = *(undefined1 *)((longlong)param_1 + 0x41);
  local_76 = *(undefined1 *)((longlong)param_1 + 0x42);
  local_70 = *(undefined8 *)(param_1 + 0x12);
  uStack_68 = *(undefined8 *)(param_1 + 0x14);
  local_60 = *(undefined8 *)(param_1 + 0x16);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = *param_2;
  local_b8 = uVar1;
  FUN_18020e8a0(param_1 + 2,param_2 + 2);
  FUN_18020d830(param_1 + 10,param_2 + 10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  FUN_18020e8a0(param_1 + 0x12,param_2 + 0x12);
  *param_2 = uVar1;
  FUN_18020e8a0(param_2 + 2,&local_b0);
  FUN_18020d830(param_2 + 10,&local_90);
  *(undefined1 *)(param_2 + 0x10) = local_78;
  *(undefined1 *)((longlong)param_2 + 0x41) = local_77;
  *(undefined1 *)((longlong)param_2 + 0x42) = local_76;
  FUN_18020e8a0(param_2 + 0x12,&local_70);
  FUN_18020e450(&local_70);
  FUN_18020d5c0(&local_90);
  FUN_18020e450(&local_b0);
  return;
}


