// 0x180136c90  FUN_180136c90
// size=229 thunk=false
// signature: undefined FUN_180136c90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180136c90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_868 [32];
  undefined8 *local_848;
  undefined4 local_840;
  undefined2 local_838;
  undefined1 local_830;
  undefined8 local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_868;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_828[0] = 4000;
    iVar1 = FUN_1801318c0(param_1,param_2,"InitiateGameConnection");
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_830 = 1;
      local_838 = 0x6987;
      local_840 = 0x7f000001;
      local_848 = local_828;
      uVar2 = (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,local_818,0x800,0);
    }
    iVar1 = FUN_1801318c0(param_1);
    if (-1 < iVar1) {
      (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,0x7f000001,0x6987);
    }
  }
  return uVar2;
}


