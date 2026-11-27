// 0x18012acc0  FUN_18012acc0
// size=161 thunk=false
// signature: undefined FUN_18012acc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012acc0(char *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if (((DAT_1803fa640 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    FUN_180203ab0(local_98,"skybox/%s",param_1);
    uVar1 = (**(code **)(*DAT_1803fa640 + 0x350))();
    local_a8 = uVar1;
    (**(code **)(*DAT_1803fa640 + 0x248))(DAT_1803fa640,local_98);
    (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar1);
  }
  return;
}


