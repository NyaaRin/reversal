// 0x18004ce60  FUN_18004ce60
// size=230 thunk=false
// signature: undefined FUN_18004ce60()
// status: ok


undefined8 FUN_18004ce60(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_180039770();
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    lVar4 = *(longlong *)(lVar3 + 0x1520);
    if ((*(longlong *)(lVar4 + 0x1c8) != 0) || (lVar6 = 0x280, *(longlong *)(lVar3 + 0x2368) != 0))
    {
      lVar6 = 0x250;
    }
    fVar1 = *(float *)(lVar4 + 4 + lVar6);
    fVar2 = *(float *)(lVar4 + 0x11c);
    (**(code **)(*plVar5 + 0xf0))
              (plVar5,(double)(*(float *)(lVar4 + lVar6) - *(float *)(lVar4 + 0x118)));
    (**(code **)(*plVar5 + 0xf0))(plVar5,(double)(fVar1 - fVar2));
    return 2;
  }
  return 0;
}


