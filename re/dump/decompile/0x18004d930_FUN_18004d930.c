// 0x18004d930  FUN_18004d930
// size=162 thunk=false
// signature: undefined FUN_18004d930()
// status: ok


undefined8 FUN_18004d930(longlong param_1)

{
  float fVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar2 = *(code **)(*plVar4 + 0xf0);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    fVar1 = *(float *)(lVar3 + 0xcc8);
    (*pcVar2)(plVar4,(double)(fVar1 + fVar1 + *(float *)(lVar3 + 0x1238)));
    return 1;
  }
  return 0;
}


