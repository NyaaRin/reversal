// 0x1802736c0  FUN_1802736c0
// size=187 thunk=false
// signature: undefined FUN_1802736c0()
// status: ok


undefined8 FUN_1802736c0(uint param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar4 = (ulonglong)*(int *)(lVar1 + 0x1500);
  puVar2 = *(uint **)(lVar1 + 0x1508);
  uVar5 = uVar4;
  puVar6 = puVar2;
  while (uVar3 = uVar5, uVar3 != 0) {
    uVar5 = uVar3 >> 1;
    if (puVar6[uVar5 * 4] < param_1) {
      puVar6 = puVar6 + uVar5 * 4 + 4;
      uVar5 = uVar3 + (-1 - uVar5);
    }
  }
  if ((puVar6 != puVar2 + uVar4 * 4) && (*puVar6 == param_1)) {
    return *(undefined8 *)(puVar6 + 2);
  }
  return 0;
}


