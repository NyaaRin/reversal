// 0x18026f680  FUN_18026f680
// size=187 thunk=false
// signature: undefined FUN_18026f680()
// status: ok


void FUN_18026f680(void *param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != (void *)0x0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    if (lVar1 != 0) {
      piVar4 = (int *)(lVar1 + 0x29b0 + (longlong)*(short *)(lVar1 + 0x29ac) * 8);
      if (*piVar4 != *(int *)(lVar1 + 4)) {
        iVar3 = *(short *)(lVar1 + 0x29ac) + 1;
        sVar2 = (short)iVar3 +
                ((short)(iVar3 / 6) + (short)(iVar3 >> 0x1f) +
                (short)(((longlong)iVar3 / 6 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                -6;
        *(short *)(lVar1 + 0x29ac) = sVar2;
        piVar4 = (int *)(lVar1 + ((longlong)sVar2 + 0x536) * 8);
        *piVar4 = *(int *)(lVar1 + 4);
        piVar4[1] = 0;
      }
      *(short *)((longlong)piVar4 + 6) = *(short *)((longlong)piVar4 + 6) + 1;
      *(int *)(lVar1 + 0x29a8) = *(int *)(lVar1 + 0x29a8) + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018026f734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}


