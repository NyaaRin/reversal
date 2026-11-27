// 0x1802809c0  FUN_1802809c0
// size=203 thunk=false
// signature: undefined FUN_1802809c0()
// status: ok


void FUN_1802809c0(float param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  fVar1 = *(float *)(lVar3 + 0x5c);
  fVar4 = *(float *)(lVar2 + 0xcd8);
  fVar5 = fVar1;
  if (fVar1 <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)(lVar3 + 0xb4) = param_1;
  fVar4 = *(float *)(lVar3 + 0x124) - fVar5;
  *(float *)(lVar3 + 0xac) =
       (float)(int)(((((((*(float *)(lVar3 + 0x124) + *(float *)(lVar3 + 0x14c) + fVar5) - fVar4) *
                        param_1 + fVar4) - *(float *)(lVar3 + 0x2c)) - *(float *)(lVar3 + 0x74)) -
                    *(float *)(lVar3 + 0x84)) + *(float *)(lVar3 + 0x9c));
  fVar4 = 0.0;
  if (0.0 <= fVar1 - fVar5) {
    fVar4 = fVar1 - fVar5;
  }
  *(float *)(lVar3 + 0xbc) = fVar4;
  return;
}


