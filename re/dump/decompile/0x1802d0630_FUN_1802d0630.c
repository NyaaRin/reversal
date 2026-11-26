// 0x1802d0630  FUN_1802d0630
// size=237 thunk=false
// signature: undefined FUN_1802d0630()
// status: ok


void FUN_1802d0630(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar2 + 0xec0) != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xec0) + 0xc0);
    if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0xec0) + 0xc70);
      plVar1 = plVar4 + *(int *)(*(longlong *)(lVar2 + 0xec0) + 0xc68);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*(short *)(*plVar4 + 0x54) == 1) {
          *(undefined4 *)(*plVar4 + 4) = 4;
          FUN_1802d0360();
        }
      }
      if ((longlong *)plVar3[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar3[1] + 0x10))();
        plVar3[1] = 0;
      }
      if ((longlong *)plVar3[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar3[2] + 0x10))();
        plVar3[2] = 0;
      }
    }
  }
  return;
}


