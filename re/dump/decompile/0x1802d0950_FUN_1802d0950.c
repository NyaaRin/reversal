// 0x1802d0950  FUN_1802d0950
// size=221 thunk=false
// signature: undefined FUN_1802d0950()
// status: ok


void FUN_1802d0950(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar3 = *(char *)(lVar1 + 0x10);
  if (cVar3 == '\0') {
    __dyn_tls_on_demand_init();
    cVar3 = *(char *)(lVar1 + 0x10);
  }
  plVar4 = (longlong *)0x0;
  if (*(longlong *)(lVar1 + 0xec0) != 0) {
    if (cVar3 == '\0') {
      __dyn_tls_on_demand_init();
      cVar3 = *(char *)(lVar1 + 0x10);
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0xc0);
  }
  if (cVar3 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  FUN_1802d0630();
  if ((longlong *)*plVar4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar4 + 0x10))();
  }
  *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) & 0xffffffe7;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 0xc3c) = 0;
  *(undefined8 *)(lVar1 + 0xc48) = 0;
  *(undefined8 *)(lVar1 + 0xc60) = 0;
  *(undefined8 *)(lVar1 + 0xc58) = 0;
  *(undefined8 *)(lVar1 + 0xc50) = 0;
  FUN_18026f680(plVar4);
  return;
}


