// 0x18004c140  FUN_18004c140
// size=257 thunk=false
// signature: undefined FUN_18004c140()
// status: ok


undefined8 FUN_18004c140(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  int iVar6;
  double dVar7;
  
  plVar5 = (longlong *)FUN_180039770();
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);
    if (cVar3 == '\0') {
      iVar6 = 4;
    }
    else {
      dVar7 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
      iVar6 = (int)dVar7;
    }
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,1);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 200))(plVar5,1);
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar1 + 0x1f48) = *(uint *)(lVar1 + 0x1f48) | 8;
    *(undefined1 *)(lVar1 + 0x1f88) = uVar4;
    iVar2 = 1;
    if (iVar6 != 0) {
      iVar2 = iVar6;
    }
    *(int *)(lVar1 + 0x1f54) = iVar2;
  }
  return 0;
}


