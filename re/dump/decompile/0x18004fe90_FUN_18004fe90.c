// 0x18004fe90  FUN_18004fe90
// size=423 thunk=false
// signature: undefined FUN_18004fe90()
// status: ok


undefined8 FUN_18004fe90(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  double dVar11;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_1)) {
    pcVar1 = *(code **)(*plVar7 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar7,0);
      return 1;
    }
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,3);
    if (cVar4 == '\0') {
      uVar10 = 0;
    }
    else {
      dVar11 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);
      uVar10 = (uint)dVar11;
    }
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);
    if (cVar4 == '\0') {
      puVar9 = &DAT_18033e5ea;
    }
    else {
      puVar8 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);
      puVar9 = &DAT_18033e5ea;
      if (puVar8 != (undefined1 *)0x0) {
        puVar9 = puVar8;
      }
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
    plVar3 = *(longlong **)(lVar2 + 0x1520);
    if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
      iVar6 = FUN_180268980(puVar9,0,*(undefined4 *)
                                      (plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
      if (*(int *)(*plVar3 + 0x1578) == iVar6) {
        FUN_1802899e0(iVar6,0xb,puVar9);
      }
      uVar5 = FUN_1802bff90(iVar6,uVar10 | 0x1a,puVar9,0);
    }
    else {
      uVar5 = 0;
    }
    (*pcVar1)(plVar7,uVar5);
    return 1;
  }
  return 0;
}


