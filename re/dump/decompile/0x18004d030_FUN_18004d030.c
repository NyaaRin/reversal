// 0x18004d030  FUN_18004d030
// size=188 thunk=false
// signature: undefined FUN_18004d030()
// status: ok


undefined8 FUN_18004d030(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  double dVar5;
  float fVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
    if (cVar3 == '\0') {
      fVar6 = 0.0;
    }
    else {
      dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
      fVar6 = (float)dVar5;
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar2 + 0x1ed8) = fVar6;
  }
  return 0;
}


