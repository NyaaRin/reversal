// 0x180051430  FUN_180051430
// size=174 thunk=false
// signature: undefined FUN_180051430()
// status: ok


undefined8 FUN_180051430(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    fVar1 = *(float *)(lVar2 + 0x104);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*(float *)(lVar2 + 0x100));
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);
    return 2;
  }
  return 0;
}


