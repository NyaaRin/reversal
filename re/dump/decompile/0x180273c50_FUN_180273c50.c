// 0x180273c50  FUN_180273c50
// size=237 thunk=false
// signature: undefined FUN_180273c50()
// status: ok


float * FUN_180273c50(float *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = DAT_180380e9c;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    uVar1 = *(uint *)(param_2 + 0x18);
    fVar4 = DAT_180380e9c;
    if ((uVar1 & 4) != 0) {
      fVar4 = *(float *)(lVar2 + 0xca0);
    }
    *param_1 = fVar4;
    if ((uVar1 & 8) != 0) {
      fVar5 = *(float *)(lVar2 + 0xca4);
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    fVar5 = *(float *)(lVar2 + 0xca4);
    *param_1 = *(float *)(lVar2 + 0xca0);
  }
  else {
    *param_1 = 4.0;
  }
  fVar3 = *(float *)(lVar2 + 0xc94) - DAT_180380bb0;
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar4 = fVar4 + *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x68);
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  param_1[1] = fVar5;
  return param_1;
}


