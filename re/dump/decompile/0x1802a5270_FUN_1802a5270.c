// 0x1802a5270  FUN_1802a5270
// size=157 thunk=false
// signature: undefined FUN_1802a5270()
// status: ok


ulonglong FUN_1802a5270(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar2 = *(ulonglong *)(lVar1 + 0xec0);
  lVar1 = *(longlong *)(uVar2 + 0x2368);
  if (lVar1 == 0) {
LAB_1802a5300:
    return uVar2 & 0xffffffffffffff00;
  }
  if (*(int *)(lVar1 + 0x74) != param_1) {
    if (*(int *)(lVar1 + 0x74) != -1) {
      FUN_1802a55b0(lVar1);
    }
    if ((param_1 < 0) || (*(int *)(lVar1 + 0x6c) <= param_1)) {
      uVar2 = FUN_18027e9c0("TableSetColumnIndex() invalid column index!");
      goto LAB_1802a5300;
    }
    FUN_1802a53c0(lVar1,param_1);
  }
  return (ulonglong)*(byte *)((longlong)param_1 * 0x74 + 0x6b + *(longlong *)(lVar1 + 0x18));
}


