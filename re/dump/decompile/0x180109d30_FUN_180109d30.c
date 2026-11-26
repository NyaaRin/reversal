// 0x180109d30  FUN_180109d30
// size=270 thunk=false
// signature: undefined FUN_180109d30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180109d30(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x130))(param_1,0);
    (**(code **)(*param_1 + 0x240))(param_1,0,1);
    (**(code **)(*param_1 + 0x48))(param_1,0,DAT_180380bb0);
  }
  if (DAT_1803fa598 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
    (**(code **)(*DAT_1803fa598 + 0xb8))(DAT_1803fa598,0);
  }
  if (DAT_1803f9280 != (longlong *)0x0) {
    local_28 = 0x3f800000;
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_28);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2,0x8000,0);
  }
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf4a) = 0;
  return;
}


