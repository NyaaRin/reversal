// 0x18026f8f0  FUN_18026f8f0
// size=192 thunk=false
// signature: undefined FUN_18026f8f0()
// status: ok


void FUN_18026f8f0(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  FUN_1802827b0(param_1,0);
  FUN_18026ea90(*(undefined4 *)(param_1 + 0x8c),param_1);
  if (*(char *)(lVar3 + 0x76) != '\0') {
    *(undefined1 *)(lVar3 + 0x2068) = 0;
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x3c0) + 0x2c);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x3c0) + 0x28);
  *(undefined1 *)(lVar3 + 0x15a2) = 1;
  *(float *)(lVar3 + 0x15b0) = *(float *)(lVar3 + 0xae4) - fVar1;
  *(float *)(lVar3 + 0x15ac) = *(float *)(lVar3 + 0xae0) - fVar2;
  FUN_180272f20();
  if (((*(byte *)(param_1 + 0x14) & 4) == 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x3c0) + 0x14) & 4) == 0)) {
    *(longlong *)(lVar3 + 0x1540) = param_1;
  }
  return;
}


