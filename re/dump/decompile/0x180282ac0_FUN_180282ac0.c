// 0x180282ac0  FUN_180282ac0
// size=237 thunk=false
// signature: undefined FUN_180282ac0()
// status: ok


void FUN_180282ac0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar3 = (char *)(lVar1 + 0x10);
  if (*pcVar3 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (param_1 == 0) {
    uVar2 = *(int *)(lVar1 + 0x14d0) - 1;
  }
  else {
    iVar4 = -1;
    uVar2 = *(uint *)(param_1 + 0x14);
    while ((uVar2 & 0x1000000) != 0) {
      param_1 = *(longlong *)(param_1 + 0x3b0);
      iVar4 = 0;
      uVar2 = *(uint *)(param_1 + 0x14);
    }
    if (*pcVar3 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar2 = *(short *)(param_1 + 0xe2) + iVar4;
  }
  if (-1 < (int)uVar2) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x14d8) + (ulonglong)uVar2 * 8);
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0xcd) != '\0')) &&
         ((*(uint *)(lVar5 + 0x14) & 0x10200) != 0x10200)) goto LAB_180282b9b;
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  lVar5 = 0;
LAB_180282b9b:
  FUN_1802827b0(lVar5,1);
  return;
}


