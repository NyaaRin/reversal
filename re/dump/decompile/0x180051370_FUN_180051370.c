// 0x180051370  FUN_180051370
// size=186 thunk=false
// signature: undefined FUN_180051370()
// status: ok


undefined8 FUN_180051370(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  pcVar1 = *(code **)(*plVar3 + 0xf8);
  if (DAT_1803ff8ec != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0xec0) + 0x1f00) & 4) != 0) {
      (*pcVar1)(plVar3,1);
      return 1;
    }
  }
  (*pcVar1)(plVar3,0);
  return 1;
}


