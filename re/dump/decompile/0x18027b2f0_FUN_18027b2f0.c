// 0x18027b2f0  FUN_18027b2f0
// size=211 thunk=false
// signature: undefined FUN_18027b2f0()
// status: ok


int FUN_18027b2f0(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  pcVar4 = (char *)FUN_180267330(param_1);
  if (*pcVar4 != '\0') {
    fVar1 = *(float *)(pcVar4 + 4);
    if (fVar1 == 0.0) {
      return 1;
    }
    fVar6 = fVar1 - *(float *)(lVar2 + 0x40);
    if (fVar6 < fVar1) {
      if (0.0 < param_3) {
        iVar3 = -1;
        if (param_2 <= fVar6) {
          iVar5 = (int)((fVar6 - param_2) / param_3);
        }
        else {
          iVar5 = -1;
        }
        if (param_2 <= fVar1) {
          iVar3 = (int)((fVar1 - param_2) / param_3);
        }
        return iVar3 - iVar5;
      }
      if ((fVar6 < param_2) && (param_2 <= fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}


