// 0x180287f50  FUN_180287f50
// size=283 thunk=false
// signature: undefined FUN_180287f50()
// status: ok


void FUN_180287f50(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  void *_Dst;
  longlong lVar7;
  int iVar8;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar2 = *(int *)(lVar3 + 0x27bc);
  if (*(int *)(lVar3 + 0x27b8) == iVar2) {
    iVar8 = *(int *)(lVar3 + 0x27b8) + 1;
    if (iVar2 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar2 / 2 + iVar2;
    }
    if (iVar8 < iVar6) {
      iVar8 = iVar6;
    }
    if (iVar2 < iVar8) {
      _Dst = (void *)FUN_18026f580((longlong)iVar8 * 0x48);
      if (*(void **)(lVar3 + 0x27c0) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x27c0),(longlong)*(int *)(lVar3 + 0x27b8) * 0x48);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x27c0));
      }
      *(void **)(lVar3 + 0x27c0) = _Dst;
      *(int *)(lVar3 + 0x27bc) = iVar8;
    }
  }
  lVar7 = (longlong)*(int *)(lVar3 + 0x27b8);
  uVar5 = param_1[1];
  lVar4 = *(longlong *)(lVar3 + 0x27c0);
  puVar1 = (undefined8 *)(lVar4 + lVar7 * 0x48);
  *puVar1 = *param_1;
  puVar1[1] = uVar5;
  uVar5 = param_1[3];
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7 * 0x48);
  *puVar1 = param_1[2];
  puVar1[1] = uVar5;
  uVar5 = param_1[5];
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7 * 0x48);
  *puVar1 = param_1[4];
  puVar1[1] = uVar5;
  uVar5 = param_1[7];
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7 * 0x48);
  *puVar1 = param_1[6];
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar4 + 0x40 + lVar7 * 0x48) = param_1[8];
  *(int *)(lVar3 + 0x27b8) = *(int *)(lVar3 + 0x27b8) + 1;
  return;
}


