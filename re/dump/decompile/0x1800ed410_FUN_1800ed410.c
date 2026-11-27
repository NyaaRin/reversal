// 0x1800ed410  FUN_1800ed410
// size=215 thunk=false
// signature: undefined FUN_1800ed410()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ed410(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    return 0;
  }
  puVar4 = (ulonglong *)&local_18;
  local_18 = 0;
  local_14 = 2;
  while ((plVar1 = (longlong *)FUN_1800ebf80((int)*puVar4), plVar1 == (longlong *)0x0 ||
         (plVar1[1] != param_1))) {
    puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    if (puVar4 == &local_10) {
      return 0;
    }
  }
  lVar2 = (**(code **)(*plVar1 + 0x158))(plVar1,1);
  lVar3 = (**(code **)(*plVar1 + 0x158))(plVar1,2);
  if (lVar2 == 0) {
    return 0;
  }
  if (lVar3 == 0) {
    return 0;
  }
  FUN_180039dd0(plVar1,lVar2,lVar3);
  return 0;
}


