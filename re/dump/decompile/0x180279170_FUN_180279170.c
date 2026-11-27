// 0x180279170  FUN_180279170
// size=142 thunk=false
// signature: undefined FUN_180279170()
// status: ok


void FUN_180279170(char param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  uVar1 = *(uint *)(lVar2 + 0x1eb8);
  if ((uVar1 & 0x40) == 0) {
    if (param_1 == '\0') goto LAB_1802791e0;
    *(float *)(lVar2 + 0x26d0) = *(float *)(lVar2 + 0xc84);
    *(float *)(lVar2 + 0xc84) = *(float *)(lVar2 + 0xc84) * *(float *)(lVar2 + 0xc88);
  }
  *(uint *)(lVar2 + 0x1eb8) = uVar1 | 0x40;
LAB_1802791e0:
  FUN_18028a630(lVar2 + 0x2008);
  *(short *)(lVar2 + 0x26d4) = *(short *)(lVar2 + 0x26d4) + 1;
  return;
}


