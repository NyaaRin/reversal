// 0x180289100  FUN_180289100
// size=98 thunk=false
// signature: undefined FUN_180289100()
// status: ok


void FUN_180289100(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (*(int *)(lVar2 + 0x1fc4) != 0x3d) {
    uVar3 = *(undefined8 *)(lVar2 + 0x2934);
    puVar1 = (undefined8 *)(lVar2 + ((longlong)*(int *)(lVar2 + 0x1fc4) + 0xdb) * 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x292c);
    puVar1[1] = uVar3;
  }
  *(undefined4 *)(lVar2 + 0x1fc4) = 0x3d;
  return;
}


