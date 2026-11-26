// 0x1802792a0  FUN_1802792a0
// size=124 thunk=false
// signature: undefined FUN_1802792a0()
// status: ok


void FUN_1802792a0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(short *)(lVar2 + 0x26d4) = *(short *)(lVar2 + 0x26d4) + -1;
  iVar1 = *(int *)(lVar2 + 0x2008);
  *(int *)(lVar2 + 0x2008) = iVar1 + -1;
  *(undefined4 *)(lVar2 + 0x1eb8) =
       *(undefined4 *)(*(longlong *)(lVar2 + 0x2010) + -8 + (longlong)iVar1 * 4);
  *(undefined4 *)(lVar2 + 0xc84) =
       *(undefined4 *)
        ((longlong)*(int *)(lVar2 + 0x14f0) * 0x78 + -8 + *(longlong *)(lVar2 + 0x14f8));
  return;
}


