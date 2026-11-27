// 0x1802b1130  FUN_1802b1130
// size=180 thunk=false
// signature: undefined FUN_1802b1130()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b1130(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(int *)(lVar1 + 0x2648) = *(int *)(lVar1 + 0x2648) + -1;
  FUN_180268750(local_28,0x10,"##Combo_%02d",*(undefined4 *)(lVar1 + 0x2648));
  iVar2 = strcmp(*(char **)(*(longlong *)(lVar1 + 0x1520) + 8),local_28);
  if (iVar2 != 0) {
    FUN_18027e9c0("Calling EndCombo() in wrong window!");
    return;
  }
  FUN_180281800();
  return;
}


