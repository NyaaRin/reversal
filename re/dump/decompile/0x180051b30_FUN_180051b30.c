// 0x180051b30  FUN_180051b30
// size=278 thunk=false
// signature: undefined FUN_180051b30()
// status: ok


undefined8 FUN_180051b30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  char *_Str2;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
  if (cVar2 == '\0') {
    _Str2 = "";
  }
  else {
    pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
    _Str2 = "";
    if (pcVar5 != (char *)0x0) {
      _Str2 = pcVar5;
    }
  }
  if (*_Str2 != '\0') {
    uVar7 = 0;
    do {
      pcVar5 = (char *)FUN_18026ae50(uVar7);
      if ((pcVar5 != (char *)0x0) && (iVar3 = _stricmp(pcVar5,_Str2), iVar3 == 0)) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        FUN_18004a030(plVar4,(uVar7 + 0xdb) * 0x10 + *(longlong *)(lVar1 + 0xec0));
        return 1;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < 0x3d);
  }
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  return 1;
}


