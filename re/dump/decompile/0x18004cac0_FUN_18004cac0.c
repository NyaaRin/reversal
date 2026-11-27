// 0x18004cac0  FUN_18004cac0
// size=215 thunk=false
// signature: undefined FUN_18004cac0()
// status: ok


undefined8 FUN_18004cac0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_180039770();
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
    fVar1 = *(float *)(lVar4 + 0x11c);
    fVar2 = *(float *)(lVar4 + 0x2c);
    fVar3 = *(float *)(lVar4 + 0x9c);
    (**(code **)(*plVar5 + 0xf0))
              (plVar5,(double)((*(float *)(lVar4 + 0x118) - *(float *)(lVar4 + 0x28)) +
                              *(float *)(lVar4 + 0x98)));
    (**(code **)(*plVar5 + 0xf0))(plVar5,(double)((fVar1 - fVar2) + fVar3));
    return 2;
  }
  return 0;
}


