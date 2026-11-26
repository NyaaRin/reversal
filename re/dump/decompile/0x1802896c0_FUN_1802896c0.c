// 0x1802896c0  FUN_1802896c0
// size=499 thunk=false
// signature: undefined FUN_1802896c0()
// status: ok


void FUN_1802896c0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  char *local_38 [4];
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar4 + 0xec0);
  *(undefined4 *)(lVar8 + 0x2924) = 0;
  if (*(char *)(lVar8 + 0x2921) != '\0') {
    iVar2 = *(int *)(lVar8 + 0x1580);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined4 *)(*(longlong *)(lVar4 + 0xec0) + 0x2508) = 7;
    cVar7 = FUN_18027bb30(0x20e,1,0);
    if (cVar7 != '\0') {
      *(undefined1 *)(lVar8 + 0x2921) = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x120);
    if (iVar3 == 0x3000) {
      cVar7 = FUN_18027bce0(0,0,0);
      if (cVar7 != '\0') {
        *(undefined1 *)(lVar8 + 0x2922) = 0;
      }
      cVar7 = FUN_18027bce0(1,0,0);
      if (cVar7 != '\0') {
        *(undefined1 *)(lVar8 + 0x2922) = 1;
      }
      cVar7 = FUN_18027bce0(2,0,0);
      if (cVar7 != '\0') {
        *(undefined1 *)(lVar8 + 0x2922) = 2;
      }
    }
    else {
      cVar7 = FUN_18027bce0(*(undefined1 *)(lVar8 + 0x2922),0,0);
      if ((cVar7 != '\0') && (iVar2 != 0)) {
        *(int *)(lVar8 + 0x2924) = iVar2;
        *(undefined1 *)(lVar8 + 0x2921) = 0;
      }
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar4 + 0xec0);
    puVar1 = (uint *)(lVar5 + 0x1f48);
    *puVar1 = *puVar1 | 0x40;
    *(undefined4 *)(lVar5 + 0x1fb0) = 0x3f333333;
    cVar7 = FUN_180280a90(0);
    if (cVar7 != '\0') {
      FUN_1802aaae0("HoveredId: 0x%08X",iVar2);
      FUN_1802aaae0("Press ESC to abort picking.");
      local_38[0] = "Left";
      local_38[1] = "Right";
      local_38[2] = "Middle";
      if (iVar3 == 0x3000) {
        FUN_1802aaae0("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.");
      }
      else {
        pcVar6 = local_38[*(byte *)(lVar8 + 0x2922)];
        if (*(char *)(lVar4 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar8 = 0xdb0;
        if (iVar2 == 0) {
          lVar8 = 0xdc0;
        }
        FUN_1802aabb0(lVar8 + *(longlong *)(lVar4 + 0xec0),
                      "Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",pcVar6);
      }
      FUN_180278d40();
    }
  }
  return;
}


