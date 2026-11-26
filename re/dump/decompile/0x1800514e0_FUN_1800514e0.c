// 0x1800514e0  FUN_1800514e0
// size=273 thunk=false
// signature: undefined FUN_1800514e0()
// status: ok


undefined8 FUN_1800514e0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    uVar5 = 0;
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
    if (cVar3 == '\0') {
      iVar6 = 0;
    }
    else {
      uVar5 = 0;
      dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
      iVar6 = (int)dVar7;
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(lVar2 + 0xec0) + 0x108 + (longlong)iVar6) != '\0') {
      uVar5 = 0;
      cVar3 = FUN_18027deb0(iVar6 + 0x290,0);
      if (cVar3 != '\0') {
        (*pcVar1)(plVar4,1);
        return 1;
      }
    }
    (*pcVar1)(plVar4,uVar5 & 0xffffffffffffff00);
    return 1;
  }
  return 0;
}


