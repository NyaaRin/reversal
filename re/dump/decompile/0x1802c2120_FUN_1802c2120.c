// 0x1802c2120  FUN_1802c2120
// size=220 thunk=false
// signature: undefined FUN_1802c2120()
// status: ok


void FUN_1802c2120(undefined4 param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined4 *)(lVar1 + 0x2420) = param_1;
  *(bool *)(lVar1 + 0x2426) = param_2 == -1;
  *(bool *)(lVar1 + 0x2427) = param_2 == -1;
  *(undefined1 *)(lVar1 + 0x2425) = 1;
  *(undefined2 *)(lVar1 + 0x242c) = *(undefined2 *)(lVar1 + 0x120);
  fVar3 = *(float *)(lVar1 + 0x100) - *(float *)(*(longlong *)(lVar1 + 0x1520) + 0x128);
  fVar2 = *(float *)(lVar1 + 0x104) - *(float *)(*(longlong *)(lVar1 + 0x1520) + 300);
  *(undefined8 *)(lVar1 + 0x2440) = 0;
  *(float *)(lVar1 + 0x2438) = fVar3;
  *(float *)(lVar1 + 0x243c) = fVar2;
  *(float *)(lVar1 + 0x2430) = fVar3;
  *(float *)(lVar1 + 0x2434) = fVar2;
  return;
}


