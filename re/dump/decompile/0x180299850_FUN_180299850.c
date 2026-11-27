// 0x180299850  FUN_180299850
// size=346 thunk=false
// signature: undefined FUN_180299850()
// status: ok


void FUN_180299850(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar7 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar7 + *(int *)(param_1 + 0x68);
  if (plVar7 != plVar1) {
    do {
      lVar8 = *plVar7;
      iVar2 = *(int *)(lVar8 + 0x24);
      if (iVar2 < 0) {
        iVar4 = (iVar2 + 1 >> 1) + iVar2;
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar2 < iVar6) {
          pvVar5 = (void *)FUN_18026f580((longlong)iVar6 << 3);
          if (*(void **)(lVar8 + 0x28) != (void *)0x0) {
            memcpy(pvVar5,*(void **)(lVar8 + 0x28),(longlong)*(int *)(lVar8 + 0x20) << 3);
            FUN_18026f680(*(undefined8 *)(lVar8 + 0x28));
          }
          *(void **)(lVar8 + 0x28) = pvVar5;
          *(int *)(lVar8 + 0x24) = iVar6;
        }
      }
      plVar7 = plVar7 + 1;
      *(undefined4 *)(lVar8 + 0x20) = 0;
    } while (plVar7 != plVar1);
  }
  lVar8 = *(longlong *)(param_1 + 0x80);
  lVar9 = (longlong)*(int *)(param_1 + 0x78) * 0xa0 + lVar8;
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0xa0) {
    lVar3 = *(longlong *)(lVar8 + 0x80);
    iVar2 = *(int *)(lVar3 + 0x24);
    if (*(int *)(lVar3 + 0x20) == iVar2) {
      iVar6 = *(int *)(lVar3 + 0x20) + 1;
      if (iVar2 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar2 / 2 + iVar2;
      }
      if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      if (iVar2 < iVar6) {
        pvVar5 = (void *)FUN_18026f580((longlong)iVar6 << 3);
        if (*(void **)(lVar3 + 0x28) != (void *)0x0) {
          memcpy(pvVar5,*(void **)(lVar3 + 0x28),(longlong)*(int *)(lVar3 + 0x20) << 3);
          FUN_18026f680(*(undefined8 *)(lVar3 + 0x28));
        }
        *(void **)(lVar3 + 0x28) = pvVar5;
        *(int *)(lVar3 + 0x24) = iVar6;
      }
    }
    *(longlong *)(*(longlong *)(lVar3 + 0x28) + (longlong)*(int *)(lVar3 + 0x20) * 8) = lVar8;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}


