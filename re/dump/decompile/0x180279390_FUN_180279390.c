// 0x180279390  FUN_180279390
// size=120 thunk=false
// signature: undefined FUN_180279390()
// status: ok


void FUN_180279390(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  iVar1 = *(int *)(lVar3 + 0x208);
  if (iVar1 < 1) {
    FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x210) + -4 + (longlong)iVar1 * 4);
  *(int *)(lVar3 + 0x208) = iVar1 + -1;
  *(undefined4 *)(lVar3 + 0x1f0) = uVar2;
  return;
}


