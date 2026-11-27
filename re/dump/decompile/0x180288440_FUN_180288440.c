// 0x180288440  FUN_180288440
// size=288 thunk=false
// signature: undefined FUN_180288440()
// status: ok


undefined * FUN_180288440(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  void *_Dst;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  piVar1 = (int *)(lVar3 + 0x27a8);
  *(undefined4 *)(lVar3 + 0x27a4) = 0;
  FUN_18028a8d0(piVar1,0);
  iVar6 = *(int *)(lVar3 + 0x27ac);
  if (*piVar1 == iVar6) {
    iVar7 = *piVar1 + 1;
    if (iVar6 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar6 / 2 + iVar6;
    }
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar6 < iVar7) {
      _Dst = (void *)FUN_18026f580((longlong)iVar7);
      if (*(void **)(lVar3 + 0x27b0) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x27b0),(longlong)*piVar1);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x27b0));
      }
      *(void **)(lVar3 + 0x27b0) = _Dst;
      *(int *)(lVar3 + 0x27ac) = iVar7;
    }
  }
  *(undefined1 *)((longlong)*piVar1 + *(longlong *)(lVar3 + 0x27b0)) = 0;
  *piVar1 = *piVar1 + 1;
  lVar8 = *(longlong *)(lVar3 + 0x27c0);
  lVar2 = lVar8 + (longlong)*(int *)(lVar3 + 0x27b8) * 0x48;
  for (; lVar8 != lVar2; lVar8 = lVar8 + 0x48) {
    (**(code **)(lVar8 + 0x38))(lVar3,lVar8,piVar1);
  }
  if (param_1 != (longlong *)0x0) {
    iVar6 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar6 = 0;
    }
    *param_1 = (longlong)iVar6;
  }
  puVar5 = &DAT_1803fa56f;
  if (*(undefined **)(lVar3 + 0x27b0) != (undefined *)0x0) {
    puVar5 = *(undefined **)(lVar3 + 0x27b0);
  }
  return puVar5;
}


