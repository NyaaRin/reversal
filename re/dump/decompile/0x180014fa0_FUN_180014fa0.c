// 0x180014fa0  FUN_180014fa0
// size=207 thunk=false
// signature: undefined FUN_180014fa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180014fa0(undefined8 *param_1,byte *param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar2 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar2 = (uVar2 ^ *param_2) * 0x100000001b3;
  }
  local_30 = param_1;
  FUN_180012ac0(local_28,0x11,"%016llx",uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_28);
  FUN_18001d080(param_1,local_28,sVar1);
  return param_1;
}


