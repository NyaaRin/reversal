// 0x1800511d0  FUN_1800511d0
// size=195 thunk=false
// signature: undefined FUN_1800511d0()
// status: ok


undefined8 FUN_1800511d0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  pcVar2 = *(code **)(*plVar4 + 0xf8);
  if (DAT_1803ff8ec != '\0') {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    iVar1 = *(int *)(lVar3 + 0x1594);
    if ((iVar1 != 0) && (iVar1 == *(int *)(lVar3 + 0x1ef8))) {
      (*pcVar2)(plVar4,1);
      return 1;
    }
  }
  (*pcVar2)(plVar4,0);
  return 1;
}


