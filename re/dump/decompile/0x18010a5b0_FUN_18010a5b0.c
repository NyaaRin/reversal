// 0x18010a5b0  FUN_18010a5b0
// size=196 thunk=false
// signature: undefined FUN_18010a5b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010a5b0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  int local_28;
  int local_20;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_14 = 0;
  if (DAT_1803fa668 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_18,&local_14);
  }
  iVar1 = (**(code **)(*DAT_180409658 + 0x18))();
  iVar2 = (**(code **)(*DAT_180409658 + 0x20))();
  if ((((local_18 < 1) || (local_14 < 1)) || (iVar1 < local_18)) || (iVar2 < local_14)) {
    (**(code **)(*param_1 + 0x348))(param_1,DAT_180409658);
  }
  else {
    local_20 = local_14;
    local_28 = local_18;
    (**(code **)(*param_1 + 0x340))(param_1,DAT_180409658,0,0);
  }
  return;
}


