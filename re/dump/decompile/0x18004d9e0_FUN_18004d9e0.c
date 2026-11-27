// 0x18004d9e0  FUN_18004d9e0
// size=158 thunk=false
// signature: undefined FUN_18004d9e0()
// status: ok


undefined8 FUN_18004d9e0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar3 + 0xf0);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    (*pcVar1)(plVar3,(double)(*(float *)(lVar2 + 0x1238) + *(float *)(lVar2 + 0xcd8)));
    return 1;
  }
  return 0;
}


