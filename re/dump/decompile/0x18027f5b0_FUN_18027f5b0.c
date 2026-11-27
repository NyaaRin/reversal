// 0x18027f5b0  FUN_18027f5b0
// size=234 thunk=false
// signature: undefined FUN_18027f5b0()
// status: ok


void FUN_18027f5b0(float param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    if (param_1 == 0.0) {
      if (param_2 < 0.0) {
        param_2 = *(float *)(lVar1 + 0xcd4);
      }
      param_2 = param_2 + *(float *)(lVar2 + 0x120);
    }
    else {
      fVar3 = 0.0;
      if (0.0 <= param_2) {
        fVar3 = param_2;
      }
      param_2 = (*(float *)(lVar2 + 0x28) - *(float *)(lVar2 + 0x98)) + param_1 + fVar3 +
                *(float *)(lVar2 + 0x164) + *(float *)(lVar2 + 0x160);
    }
    *(float *)(lVar2 + 0x118) = param_2;
    *(undefined4 *)(lVar2 + 0x11c) = *(undefined4 *)(lVar2 + 0x124);
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0x148);
    *(undefined4 *)(lVar2 + 0x150) = *(undefined4 *)(lVar2 + 0x154);
    *(undefined1 *)(lVar2 + 0x158) = 1;
  }
  return;
}


