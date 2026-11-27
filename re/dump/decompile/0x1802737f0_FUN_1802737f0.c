// 0x1802737f0  FUN_1802737f0
// size=433 thunk=false
// signature: undefined FUN_1802737f0()
// status: ok


void FUN_1802737f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = **(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0x2060);
  fVar5 = *(float *)(lVar1 + 8);
  fVar6 = *(float *)(lVar1 + 0xc);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0xf2) = 0xf0f;
  *(undefined1 *)(param_1 + 0xf1) = 0xf;
  fVar5 = fVar5 + DAT_1803810c8;
  fVar6 = fVar6 + DAT_1803810c8;
  *(float *)(param_1 + 0x28) = fVar5;
  *(float *)(param_1 + 0x2c) = fVar6;
  if (param_2 == 0) {
    fVar4 = 0.0;
  }
  else {
    *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) & 0xfb;
    *(undefined2 *)(param_1 + 0xf1) = 0xb0b;
    fVar5 = (float)(int)*(short *)(param_2 + 4);
    fVar6 = (float)(int)*(short *)(param_2 + 6);
    *(float *)(param_1 + 0x28) = fVar5;
    *(float *)(param_1 + 0x2c) = fVar6;
    if ((*(short *)(param_2 + 8) < 1) || (*(short *)(param_2 + 10) < 1)) {
      fVar4 = 0.0;
      *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xc);
    }
    else {
      fVar4 = (float)(int)*(short *)(param_2 + 8);
      fVar3 = (float)(int)*(short *)(param_2 + 10);
      *(float *)(param_1 + 0x38) = fVar4;
      *(float *)(param_1 + 0x3c) = fVar3;
      *(float *)(param_1 + 0x30) = fVar4;
      *(float *)(param_1 + 0x34) = fVar3;
      *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xc);
    }
  }
  *(float *)(param_1 + 0x138) = fVar5;
  *(float *)(param_1 + 0x13c) = fVar6;
  *(float *)(param_1 + 0x130) = fVar5;
  *(float *)(param_1 + 0x134) = fVar6;
  *(float *)(param_1 + 0x128) = fVar5;
  *(float *)(param_1 + 300) = fVar6;
  if ((*(byte *)(param_1 + 0x14) & 0x40) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = 0x202;
    *(undefined1 *)(param_1 + 0xea) = 0;
    return;
  }
  if (fVar4 <= 0.0) {
    *(undefined1 *)(param_1 + 0xe8) = 2;
  }
  if (*(float *)(param_1 + 0x34) <= 0.0) {
    *(undefined1 *)(param_1 + 0xe9) = 2;
  }
  if ((*(char *)(param_1 + 0xe8) < '\x01') && (*(char *)(param_1 + 0xe9) < '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xea) = uVar2;
  return;
}


