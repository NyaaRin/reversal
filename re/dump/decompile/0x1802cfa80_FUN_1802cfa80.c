// 0x1802cfa80  FUN_1802cfa80
// size=156 thunk=false
// signature: undefined FUN_1802cfa80()
// status: ok


void FUN_1802cfa80(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xec0) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0xec0) + 0xc0);
  }
  (**(code **)(*(longlong *)*puVar2 + 0x228))((longlong *)*puVar2,0,6,2);
                    /* WARNING: Could not recover jumptable at 0x0001802cfb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar2 + 0x228))((longlong *)*puVar2,0,5,2);
  return;
}


