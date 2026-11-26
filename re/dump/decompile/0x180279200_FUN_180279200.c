// 0x180279200  FUN_180279200
// size=160 thunk=false
// signature: undefined FUN_180279200()
// status: ok


void FUN_180279200(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  if (*(short *)(lVar4 + 0x26d4) < 1) {
    FUN_18027e9c0("Calling EndDisabled() too many times!");
    return;
  }
  iVar1 = *(int *)(lVar4 + 0x2008);
  uVar2 = *(uint *)(lVar4 + 0x1eb8);
  *(short *)(lVar4 + 0x26d4) = *(short *)(lVar4 + 0x26d4) + -1;
  *(int *)(lVar4 + 0x2008) = iVar1 + -1;
  uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x2010) + -8 + (longlong)iVar1 * 4);
  *(uint *)(lVar4 + 0x1eb8) = uVar3;
  if (((uVar2 & 0x40) != 0) && ((uVar3 & 0x40) == 0)) {
    *(undefined4 *)(lVar4 + 0xc84) = *(undefined4 *)(lVar4 + 0x26d0);
  }
  return;
}


