// 0x180281660  FUN_180281660
// size=191 thunk=false
// signature: undefined FUN_180281660()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180281660(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar3 = FUN_180280db0(param_1,0);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(lVar1 + 0x1f48) = 0;
  }
  else {
    FUN_180268750(local_28,0x14,"##Popup_%08x",param_1);
    bVar2 = FUN_180276630(local_28,0,param_2 | 0x4000000);
    if (bVar2 == 0) {
      FUN_180281800();
    }
    uVar3 = (ulonglong)bVar2;
  }
  return uVar3;
}


