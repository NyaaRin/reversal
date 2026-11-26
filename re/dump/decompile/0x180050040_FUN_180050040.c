// 0x180050040  FUN_180050040
// size=439 thunk=false
// signature: undefined FUN_180050040()
// status: ok


undefined8 FUN_180050040(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  double dVar9;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar5 + 0xf8))(plVar5,0);
      return 1;
    }
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);
    if (cVar3 == '\0') {
      iVar8 = 0;
    }
    else {
      dVar9 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
      iVar8 = (int)dVar9;
    }
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4);
    if (cVar3 == '\0') {
      puVar7 = &DAT_18033e5ea;
    }
    else {
      puVar6 = (undefined1 *)(**(code **)(*plVar5 + 0xb8))(plVar5,1,0);
      puVar7 = &DAT_18033e5ea;
      if (puVar6 != (undefined1 *)0x0) {
        puVar7 = puVar6;
      }
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    plVar2 = *(longlong **)(lVar1 + 0x1520);
    if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
      iVar4 = FUN_180268980(puVar7,0,*(undefined4 *)
                                      (plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
      if (*(int *)(*plVar2 + 0x1578) == iVar4) {
        FUN_1802899e0(iVar4,0xb,puVar7);
      }
      cVar3 = FUN_1802bff90(iVar4,iVar8,puVar7,0);
      if (cVar3 != '\0') {
        FUN_180049be0(8);
      }
    }
    else {
      cVar3 = '\0';
    }
    (**(code **)(*plVar5 + 0xf8))(plVar5,cVar3);
    return 1;
  }
  return 0;
}


