// 0x180054f70  FUN_180054f70
// size=213 thunk=false
// signature: undefined FUN_180054f70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180054f70(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  float local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else if (DAT_1803fa668 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    uVar2 = 1;
  }
  else {
    local_24 = 0;
    local_28 = 0.0;
    (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_28);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_24);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24._4_4_);
    uVar2 = 3;
  }
  return uVar2;
}


