// 180272fa0  FUN_180272fa0
// signature: undefined FUN_180272fa0()
// status: ok


void FUN_180272fa0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar1 + 0x1520);
  iVar3 = FUN_180268980(param_1,0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(int *)(*plVar2 + 0x1578) == iVar3) {
    FUN_1802899e0(iVar3,0xb,param_1);
  }
  FUN_180273060(param_1,iVar3,param_2,param_3,param_4);
  return;
}


