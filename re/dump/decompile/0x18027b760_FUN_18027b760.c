// 0x18027b760  FUN_18027b760
// size=144 thunk=false
// signature: undefined FUN_18027b760()
// status: ok


int FUN_18027b760(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = (uint)param_1;
  if (((((param_1 & 0x1000) == 0) || ((uVar3 >> 0xe & 1) != 0)) &&
      ((lVar2 = *(longlong *)(lVar2 + 0xec0), *(char *)(lVar2 + 0x79) == '\0' ||
       ((param_1 & 0x1000) == 0)))) && ((param_1 & 0xffff0fff) != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x15f8 + ((longlong)(int)(uVar3 & 0xffff0fff) + -0x200 >> 5) * 4);
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (uVar3 & 0x1f) & 1) != 0);
  }
  return (uint)((uint3)(param_1 >> 8) & 0x10) << 8;
}


