// 0x1802d0cb0  FUN_1802d0cb0
// size=181 thunk=false
// signature: undefined FUN_1802d0cb0()
// status: ok


void FUN_1802d0cb0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_1802d0a30();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(HMODULE *)(lVar3 + 0x38) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(lVar3 + 0x38));
  }
  *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) & 0xfffffff8;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 0xc00) = 0;
  *(undefined8 *)(lVar1 + 0xc08) = 0;
  *(undefined8 *)(lVar1 + 0xc10) = 0;
  *(undefined8 *)(lVar1 + 0xc18) = 0;
  *(undefined8 *)(lVar1 + 0xc20) = 0;
  *(undefined8 *)(lVar1 + 0xc28) = 0;
  *(undefined8 *)(lVar1 + 0xc30) = 0;
  FUN_18026f680(lVar3);
  return;
}


