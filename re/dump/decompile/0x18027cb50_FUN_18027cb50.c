// 0x18027cb50  FUN_18027cb50
// size=440 thunk=false
// signature: undefined FUN_18027cb50()
// status: ok


longlong FUN_18027cb50(float *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = 0;
  lVar4 = 0;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (*param_1 != 0.0) {
    lVar5 = *(longlong *)(lVar2 + 0x1528);
    uVar1 = *(uint *)(lVar5 + 0x14);
    while (((uVar1 & 0x1000000) != 0 &&
           ((*(float *)(lVar5 + 0xa0) == 0.0 || ((*(uint *)(lVar5 + 0x14) & 0x210) == 0x10))))) {
      lVar5 = *(longlong *)(lVar5 + 0x3b0);
      uVar1 = *(uint *)(lVar5 + 0x14);
    }
  }
  if (param_1[1] != 0.0) {
    lVar4 = *(longlong *)(lVar2 + 0x1528);
    uVar1 = *(uint *)(lVar4 + 0x14);
    while (((uVar1 & 0x1000000) != 0 &&
           ((*(float *)(lVar4 + 0xa4) == 0.0 || ((*(uint *)(lVar4 + 0x14) & 0x210) == 0x10))))) {
      lVar4 = *(longlong *)(lVar4 + 0x3b0);
      uVar1 = *(uint *)(lVar4 + 0x14);
    }
  }
  if (lVar5 == 0) {
    lVar5 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else if (lVar5 == lVar4) {
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  else if (lVar4 != 0) {
    iVar3 = *(int *)(lVar2 + 0x1558);
    if (iVar3 == -1) {
      iVar3 = *(int *)(lVar2 + 4);
      *(int *)(lVar2 + 0x1558) = iVar3;
    }
    if (((iVar3 != *(int *)(lVar2 + 4)) || (*param_1 == 0.0)) || (param_1[1] == 0.0)) {
      if (*(float *)(lVar2 + 0x156c) != *(float *)(lVar2 + 0x1570)) {
        if (*(float *)(lVar2 + 0x1570) < *(float *)(lVar2 + 0x156c)) {
          lVar4 = lVar5;
        }
        return lVar4;
      }
    }
    *(undefined8 *)(lVar2 + 0x1564) = *(undefined8 *)param_1;
    return 0;
  }
  return lVar5;
}


