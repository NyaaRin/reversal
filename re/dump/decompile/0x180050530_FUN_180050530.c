// 0x180050530  FUN_180050530
// size=426 thunk=false
// signature: undefined FUN_180050530()
// status: ok


undefined8 FUN_180050530(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  double dVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  if (DAT_1803ff8ec == '\0') {
    (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    return 1;
  }
  cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    dVar7 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
    uVar5 = (uint)dVar7;
  }
  cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
  if (cVar2 == '\0') {
    puVar6 = &DAT_18034324c;
  }
  else {
    puVar4 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
    puVar6 = &DAT_18034324c;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(*(longlong *)(lVar1 + 0x1520) + 0xd1) == '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x23d0);
    if (lVar1 != 0) {
      cVar2 = FUN_1802c6840(lVar1,puVar6,0,uVar5,0);
      if (cVar2 != '\0') {
        if ((uVar5 & 8) == 0) {
          FUN_18027af00(*(undefined4 *)
                         ((longlong)*(short *)(lVar1 + 0x8a) * 0x2c + *(longlong *)(lVar1 + 0x10)));
        }
        else if (cVar2 == '\0') goto LAB_1800506a2;
        FUN_180049be0(5);
      }
      goto LAB_1800506a2;
    }
    FUN_18027e9c0("Needs to be called between BeginTabBar() and EndTabBar()!");
  }
  cVar2 = '\0';
LAB_1800506a2:
  (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);
  return 1;
}


