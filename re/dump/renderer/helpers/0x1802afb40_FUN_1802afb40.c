// 1802afb40  FUN_1802afb40
// signature: undefined FUN_1802afb40()
// status: ok


void FUN_1802afb40(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    iVar4 = *(int *)(lVar2 + 0x1d4);
    iVar3 = 2 - (uint)(iVar4 != 0);
    if (*(longlong *)(lVar2 + 0x1c8) != 0) {
      bVar5 = iVar4 != 0;
      iVar4 = -iVar4;
      iVar3 = 6 - (uint)bVar5;
    }
    fVar6 = *(float *)(lVar1 + 0xd78);
    if (fVar6 <= 1.0) {
      fVar6 = 1.0;
    }
    FUN_1802af570(iVar3,fVar6,iVar4);
    return;
  }
  return;
}


