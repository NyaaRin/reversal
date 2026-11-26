// 0x18027b010  FUN_18027b010
// size=144 thunk=false
// signature: undefined FUN_18027b010()
// status: ok


ulonglong FUN_18027b010(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  uVar3 = FUN_180268980(param_1,0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(int *)(*plVar2 + 0x1578) == (int)uVar3) {
    FUN_1802899e0(uVar3 & 0xffffffff,0xb,param_1);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}


