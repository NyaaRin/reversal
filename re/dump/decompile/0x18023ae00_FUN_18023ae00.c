// 0x18023ae00  FUN_18023ae00
// size=344 thunk=false
// signature: undefined FUN_18023ae00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023ae00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uVar1 = *param_1;
  puVar2 = (undefined8 *)(param_1 + 2);
  local_80 = *puVar2;
  uStack_78 = *(undefined8 *)(param_1 + 4);
  local_70 = *(undefined8 *)(param_1 + 6);
  local_68 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  local_60 = *(undefined8 *)(param_1 + 10);
  uStack_58 = *(undefined8 *)(param_1 + 0xc);
  local_50 = *(undefined8 *)(param_1 + 0xe);
  local_48 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xf;
  local_40 = param_1[0x12];
  local_3c = *(undefined1 *)(param_1 + 0x13);
  *param_1 = *param_2;
  local_88 = uVar1;
  FUN_18020e8a0(puVar2,param_2 + 2);
  FUN_18020e8a0(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *param_2 = uVar1;
  FUN_18020e8a0(param_2 + 2,&local_80);
  FUN_18020e8a0(param_2 + 10,&local_60);
  param_2[0x12] = local_40;
  *(undefined1 *)(param_2 + 0x13) = local_3c;
  FUN_18020e450(&local_60);
  FUN_18020e450(&local_80);
  return;
}


