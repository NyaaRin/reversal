// 0x1800ec630  FUN_1800ec630
// size=168 thunk=false
// signature: undefined FUN_1800ec630()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ec630(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    return 0;
  }
  puVar3 = (ulonglong *)&local_18;
  local_18 = 0;
  local_14 = 2;
  while ((plVar1 = (longlong *)FUN_1800ebf80((int)*puVar3), plVar1 == (longlong *)0x0 ||
         (plVar1[1] != param_1))) {
    puVar3 = (ulonglong *)((longlong)puVar3 + 4);
    if (puVar3 == &local_10) {
      return 0;
    }
  }
  uVar2 = (**(code **)(*plVar1 + 0x158))(plVar1,1);
  FUN_180014410("[LUA] %s\n",uVar2);
  return 0;
}


