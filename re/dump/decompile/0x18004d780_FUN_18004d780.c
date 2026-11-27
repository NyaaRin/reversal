// 0x18004d780  FUN_18004d780
// size=428 thunk=false
// signature: undefined FUN_18004d780()
// status: ok


undefined8 FUN_18004d780(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float local_res10;
  float local_res14;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xec0) != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228) != 0) {
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
      if (cVar2 == '\0') {
        puVar5 = &DAT_18033e5ea;
      }
      else {
        puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
        puVar5 = &DAT_18033e5ea;
        if (puVar4 != (undefined1 *)0x0) {
          puVar5 = puVar4;
        }
      }
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      FUN_18029e350(&local_res10,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),DAT_180381308,
                    DAT_180381384,puVar5,0,0,0);
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)(int)(local_res10 + DAT_180380ba8));
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_res14);
      return 2;
    }
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


