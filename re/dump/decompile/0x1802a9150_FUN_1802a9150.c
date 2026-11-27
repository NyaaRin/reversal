// 0x1802a9150  FUN_1802a9150
// size=181 thunk=false
// signature: undefined FUN_1802a9150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1802a9150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_1802671a0(param_3,"0x%08X,%d",&local_18,&local_14);
  if (iVar1 < 2) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_1802a89b0(local_18);
  if (puVar2 != (undefined4 *)0x0) {
    if (local_14 <= *(short *)((longlong)puVar2 + 0xe)) {
      FUN_1802a8860(puVar2,local_18);
      return puVar2;
    }
    *puVar2 = 0;
  }
  puVar2 = (undefined4 *)FUN_1802a8910(local_18,local_14);
  return puVar2;
}


