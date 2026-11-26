// 180272ea0  FUN_180272ea0
// signature: undefined FUN_180272ea0()
// status: ok


ulonglong FUN_180272ea0(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if ((*(uint *)(lVar2 + 0x1f00) & 0x20) != 0) {
    return (ulonglong)(*(uint *)(lVar2 + 0x1f00) >> 6) & 0xffffffffffffff01;
  }
  uVar1 = *(uint *)(lVar2 + 0x1ef8);
  uVar3 = (ulonglong)uVar1;
  if ((*(uint *)(lVar2 + 0x15c4) == uVar1) && (uVar1 != 0)) {
    uVar1 = *(uint *)(lVar2 + 4);
    uVar3 = (ulonglong)uVar1;
    if ((int)uVar1 <= *(int *)(lVar2 + 0x15c8)) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


