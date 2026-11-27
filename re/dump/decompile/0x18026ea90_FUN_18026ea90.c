// 0x18026ea90  FUN_18026ea90
// size=504 thunk=false
// signature: undefined FUN_18026ea90()
// status: ok


void FUN_18026ea90(int param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar3 + 0x1594);
  if (iVar1 != 0) {
    *(int *)(lVar3 + 0x15c4) = iVar1;
    iVar7 = *(int *)(lVar3 + 4);
    if (*(int *)(lVar3 + 0x1ef8) != iVar1) {
      iVar7 = *(int *)(lVar3 + 4) + 1;
    }
    *(int *)(lVar3 + 0x15c8) = iVar7;
    *(undefined1 *)(lVar3 + 0x15cc) = *(undefined1 *)(lVar3 + 0x15a4);
    *(bool *)(lVar3 + 0x15cd) = *(int *)(lVar3 + 0x1598) == iVar1;
    if (*(int *)(lVar3 + 0x252c) == iVar1) {
      FUN_1802b7000(iVar1);
    }
    if ((*(longlong *)(lVar3 + 0x1540) != 0) &&
       (*(int *)(lVar3 + 0x1594) == *(int *)(*(longlong *)(lVar3 + 0x1540) + 0x8c))) {
      if ((*(byte *)(lVar3 + 0x28e4) & 2) != 0) {
        FUN_180289170("SetActiveID() cancel MovingWindow\n");
      }
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1540) = 0;
    }
  }
  iVar1 = *(int *)(lVar3 + 0x1594);
  *(bool *)(lVar3 + 0x15a0) = iVar1 != param_1;
  if (iVar1 != param_1) {
    if ((*(byte *)(lVar3 + 0x28e4) & 2) != 0) {
      if (*(longlong *)(lVar3 + 0x15b8) == 0) {
        puVar8 = &DAT_18033e5ea;
      }
      else {
        puVar8 = *(undefined1 **)(*(longlong *)(lVar3 + 0x15b8) + 8);
      }
      if (param_2 == 0) {
        puVar6 = &DAT_18033e5ea;
        iVar7 = 0x14;
      }
      else {
        sVar5 = strlen(*(char **)(param_2 + 8));
        puVar6 = *(undefined1 **)(param_2 + 8);
        iVar7 = 0x14 - (int)sVar5;
        if (iVar7 < 1) {
          iVar7 = 0;
        }
      }
      FUN_180289170("SetActiveID() 0x%08X in \"%s\"%*s(previously 0x%08X in \"%s\")\n",param_1,
                    puVar6,iVar7,&DAT_18033e5ea,iVar1,puVar8);
    }
    *(undefined4 *)(lVar3 + 0x159c) = 0;
    *(undefined2 *)(lVar3 + 0x15a3) = 0;
    *(undefined1 *)(lVar3 + 0x15a7) = 0xff;
    if (param_1 != 0) {
      *(int *)(lVar3 + 0x15d8) = param_1;
      *(undefined4 *)(lVar3 + 0x15dc) = 0;
    }
  }
  *(int *)(lVar3 + 0x1594) = param_1;
  *(undefined2 *)(lVar3 + 0x15a1) = 0;
  *(longlong *)(lVar3 + 0x15b8) = param_2;
  *(undefined2 *)(lVar3 + 0x15a5) = 0;
  *(undefined4 *)(lVar3 + 0x15a8) = 0;
  if (param_1 != 0) {
    *(int *)(lVar3 + 0x1598) = param_1;
    if ((*(int *)(lVar3 + 0x2084) == param_1) || (uVar4 = 1, *(int *)(lVar3 + 0x223c) == param_1)) {
      uVar4 = *(undefined4 *)(lVar3 + 0x20c0);
    }
    *(undefined4 *)(lVar3 + 0x15b4) = uVar4;
  }
  *(undefined1 *)(lVar3 + 0x1eac) = 0;
  *(undefined4 *)(lVar3 + 0x1ea8) = 0;
  return;
}


