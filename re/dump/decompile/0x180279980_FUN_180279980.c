// 0x180279980  FUN_180279980
// size=114 thunk=false
// signature: undefined FUN_180279980()
// status: ok


void FUN_180279980(float *param_1)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 4;
  fVar1 = *param_1;
  *(float *)(lVar2 + 0x1f74) = (float)(int)param_1[1];
  *(float *)(lVar2 + 0x1f70) = (float)(int)fVar1;
  return;
}


