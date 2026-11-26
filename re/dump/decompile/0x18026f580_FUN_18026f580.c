// 0x18026f580  FUN_18026f580
// size=247 thunk=false
// signature: undefined FUN_18026f580()
// status: ok


void * FUN_18026f580(size_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  pvVar2 = malloc(param_1);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (lVar1 == 0) {
    return pvVar2;
  }
  piVar5 = (int *)(lVar1 + 0x29b0 + (longlong)*(short *)(lVar1 + 0x29ac) * 8);
  if (*piVar5 != *(int *)(lVar1 + 4)) {
    iVar4 = *(short *)(lVar1 + 0x29ac) + 1;
    sVar3 = (short)iVar4 +
            ((short)(iVar4 / 6) + (short)(iVar4 >> 0x1f) +
            (short)(((longlong)iVar4 / 6 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -6;
    *(short *)(lVar1 + 0x29ac) = sVar3;
    piVar5 = (int *)(lVar1 + ((longlong)sVar3 + 0x536) * 8);
    *piVar5 = *(int *)(lVar1 + 4);
    piVar5[1] = 0;
  }
  if (param_1 != 0xffffffffffffffff) {
    *(short *)(piVar5 + 1) = (short)piVar5[1] + 1;
    *(int *)(lVar1 + 0x29a4) = *(int *)(lVar1 + 0x29a4) + 1;
    return pvVar2;
  }
  *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
  *(int *)(lVar1 + 0x29a8) = *(int *)(lVar1 + 0x29a8) + 1;
  return pvVar2;
}


