// 0x18024ebd0  FUN_18024ebd0
// size=315 thunk=false
// signature: undefined FUN_18024ebd0()
// status: ok


void FUN_18024ebd0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pcVar5 = *(code **)(*(longlong *)(lVar4 + 0xec0) + 0xc00);
  if (pcVar5 != (code *)0x0) {
    local_20 = (char *)(*pcVar5)();
    if (local_20 != (char *)0x0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      FUN_180253050(param_1,&local_38,1);
      local_18 = strlen(local_20);
      local_28 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      local_48 = local_38;
      plStack_40 = plStack_30;
      FUN_1802532f0(param_1,&local_48,&local_20);
      local_28 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      local_48 = local_38;
      plStack_40 = plStack_30;
      FUN_180253190(param_1,&local_48);
      plVar6 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
    }
  }
  return;
}


