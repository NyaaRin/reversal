// 0x18027a430  FUN_18027a430
// size=445 thunk=false
// signature: undefined FUN_18027a430()
// status: ok


void FUN_18027a430(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar7 = 8;
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
  iVar2 = *(int *)(lVar3 + 0x121c);
  if (*(int *)(lVar3 + 0x1218) == iVar2) {
    iVar8 = *(int *)(lVar3 + 0x1218) + 1;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    if (iVar2 < iVar8) {
      pvVar5 = (void *)FUN_18026f580((longlong)iVar8 << 3);
      if (*(void **)(lVar3 + 0x1220) != (void *)0x0) {
        memcpy(pvVar5,*(void **)(lVar3 + 0x1220),(longlong)*(int *)(lVar3 + 0x1218) << 3);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x1220));
      }
      *(void **)(lVar3 + 0x1220) = pvVar5;
      *(int *)(lVar3 + 0x121c) = iVar8;
    }
  }
  *(longlong *)(*(longlong *)(lVar3 + 0x1220) + (longlong)*(int *)(lVar3 + 0x1218) * 8) = param_1;
  *(int *)(lVar3 + 0x1218) = *(int *)(lVar3 + 0x1218) + 1;
  iVar2 = *(int *)(param_1 + 0x2a4);
  if (*(int *)(param_1 + 0x2a0) == iVar2) {
    iVar8 = *(int *)(param_1 + 0x2a0) + 1;
    if (iVar2 != 0) {
      iVar7 = iVar2 + iVar2 / 2;
    }
    if (iVar8 < iVar7) {
      iVar8 = iVar7;
    }
    if (iVar2 < iVar8) {
      pvVar5 = (void *)FUN_18026f580((longlong)iVar8 << 3);
      if (*(void **)(param_1 + 0x2a8) != (void *)0x0) {
        memcpy(pvVar5,*(void **)(param_1 + 0x2a8),(longlong)*(int *)(param_1 + 0x2a0) << 3);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x2a8));
      }
      *(void **)(param_1 + 0x2a8) = pvVar5;
      *(int *)(param_1 + 0x2a4) = iVar8;
    }
  }
  *(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)*(int *)(param_1 + 0x2a0) * 8) =
       lVar3 + 0x1250;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  plVar6 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar6 + *(int *)(param_1 + 0x40);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    *(undefined2 *)(*plVar6 + 0x54) = *(undefined2 *)(param_1 + 0x2d4);
  }
  return;
}


