// 0x18027f6a0  FUN_18027f6a0
// size=147 thunk=false
// signature: undefined FUN_18027f6a0()
// status: ok


void FUN_18027f6a0(float *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x1520);
  fVar1 = param_1[1];
  fVar2 = *param_1;
  *(undefined1 *)(lVar3 + 0x159) = 1;
  *(float *)(lVar3 + 0x11c) = (*(float *)(lVar3 + 0x2c) - *(float *)(lVar3 + 0x9c)) + fVar1;
  *(float *)(lVar3 + 0x118) = (*(float *)(lVar3 + 0x28) - *(float *)(lVar3 + 0x98)) + fVar2;
  return;
}


