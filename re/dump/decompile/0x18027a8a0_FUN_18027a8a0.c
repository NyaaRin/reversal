// 0x18027a8a0  FUN_18027a8a0
// size=355 thunk=false
// signature: undefined FUN_18027a8a0()
// status: ok


void FUN_18027a8a0(longlong param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  int iVar9;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  if (param_1 == 0) {
    param_1 = *(longlong *)(lVar4 + 0x1228);
  }
  iVar3 = *(int *)(lVar4 + 0x1fec);
  uVar5 = *(undefined8 *)(lVar4 + 0x1228);
  uVar1 = *(undefined4 *)(lVar4 + 0x123c);
  uVar2 = *(undefined4 *)(lVar4 + 0x1238);
  if (*(int *)(lVar4 + 0x1fe8) == iVar3) {
    iVar9 = *(int *)(lVar4 + 0x1fe8) + 1;
    if (iVar3 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar3 / 2 + iVar3;
    }
    if (iVar9 < iVar7) {
      iVar9 = iVar7;
    }
    if (iVar3 < iVar9) {
      _Dst = (void *)FUN_18026f580((longlong)iVar9 << 4);
      if (*(void **)(lVar4 + 0x1ff0) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar4 + 0x1ff0),(longlong)*(int *)(lVar4 + 0x1fe8) << 4);
        FUN_18026f680(*(undefined8 *)(lVar4 + 0x1ff0));
      }
      *(void **)(lVar4 + 0x1ff0) = _Dst;
      *(int *)(lVar4 + 0x1fec) = iVar9;
    }
  }
  lVar8 = (longlong)*(int *)(lVar4 + 0x1fe8);
  lVar6 = *(longlong *)(lVar4 + 0x1ff0);
  *(undefined8 *)(lVar6 + lVar8 * 0x10) = uVar5;
  *(undefined4 *)(lVar6 + 8 + lVar8 * 0x10) = uVar1;
  *(undefined4 *)(lVar6 + 0xc + lVar8 * 0x10) = uVar2;
  *(int *)(lVar4 + 0x1fe8) = *(int *)(lVar4 + 0x1fe8) + 1;
  if (param_2 == 0.0) {
    param_2 = *(float *)(lVar4 + 0x123c);
  }
  FUN_18027a5f0(param_1,param_2);
  return;
}


