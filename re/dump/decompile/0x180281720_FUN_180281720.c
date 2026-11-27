// 0x180281720  FUN_180281720
// size=211 thunk=false
// signature: undefined FUN_180281720()
// status: ok


longlong FUN_180281720(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  if (*(int *)(lVar3 + 0x2028) <= *(int *)(lVar3 + 0x2038)) {
    *(undefined4 *)(lVar3 + 0x1f48) = 0;
    return (ulonglong)(uint3)((uint)*(int *)(lVar3 + 0x2038) >> 8) << 8;
  }
  plVar1 = *(longlong **)(lVar3 + 0x1520);
  iVar2 = FUN_180268980(param_1,0,
                        *(undefined4 *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  if (*(int *)(*plVar1 + 0x1578) == iVar2) {
    FUN_1802899e0(iVar2,0xb,param_1);
  }
  lVar3 = FUN_180281660(iVar2,param_2 | 0x141);
  return lVar3;
}


