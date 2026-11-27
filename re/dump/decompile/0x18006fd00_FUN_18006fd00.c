// 0x18006fd00  FUN_18006fd00
// size=287 thunk=false
// signature: undefined FUN_18006fd00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006fd00(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  if ((DAT_18042586d != '\0') && (DAT_1803feff0 != '\0')) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      local_20[0] = 0;
    }
    else {
      plVar1 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))();
      local_20[0] = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xb8))(plVar1,1,local_20);
      }
    }
    uVar2 = FUN_180013ba0(local_40,local_20[0]);
    uVar2 = FUN_1801fd1b0(local_60,"net.WriteData(",uVar2);
    uVar2 = FUN_1801fc680(local_80,uVar2," bytes)");
    if (DAT_1803feff0 != '\0') {
      FUN_18020d6f0(&DAT_1803eb820,uVar2);
    }
    FUN_18020e450(local_80);
    FUN_18020e450(local_60);
    FUN_18020e450(local_40);
  }
  (*DAT_1803fef88)(param_1);
  return;
}


