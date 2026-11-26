// 0x18004cd40  FUN_18004cd40
// size=285 thunk=false
// signature: undefined FUN_18004cd40()
// status: ok


undefined8 FUN_18004cd40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    fVar5 = 0.0;
    if (cVar2 == '\0') {
      fVar6 = 0.0;
    }
    else {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      fVar6 = (float)dVar4;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      fVar5 = (float)dVar4;
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x1520);
    *(float *)(lVar1 + 0x118) = fVar5;
    *(float *)(lVar1 + 0x11c) = fVar6;
    *(undefined1 *)(lVar1 + 0x159) = 1;
  }
  return 0;
}


