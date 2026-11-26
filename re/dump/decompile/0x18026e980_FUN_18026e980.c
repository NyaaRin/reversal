// 0x18026e980  FUN_18026e980
// size=263 thunk=false
// signature: undefined FUN_18026e980()
// status: ok


void FUN_18026e980(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(longlong *)(lVar2 + 0x1520) = param_1;
  if (param_1 == 0) {
    *(undefined8 *)(lVar2 + 0x28d8) = 0;
  }
  else {
    *(longlong *)(lVar2 + 0x28d8) =
         (longlong)(*(int *)(lVar2 + 0x14f0) + -1) * 0x78 + *(longlong *)(lVar2 + 0x14f8) + 0x58;
    if (*(int *)(param_1 + 0x1d0) != -1) {
      *(longlong *)(lVar2 + 0x2368) =
           (longlong)*(int *)(param_1 + 0x1d0) * 0x250 + *(longlong *)(lVar2 + 0x2390);
      *(undefined4 *)(lVar2 + 0x1248) = 0x3f800000;
      goto LAB_18026ea35;
    }
  }
  *(undefined8 *)(lVar2 + 0x2368) = 0;
  *(undefined4 *)(lVar2 + 0x1248) = 0x3f800000;
  if (param_1 == 0) {
    return;
  }
LAB_18026ea35:
  if ((*(byte *)(lVar2 + 0x2c) & 0x10) != 0) {
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x18);
    if (fVar3 == 0.0) {
      fVar3 = *(float *)(lVar2 + 0x38);
    }
    *(float *)(lVar2 + 0x1244) = fVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xd1);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  FUN_18027a710(0);
  *(undefined1 *)(param_1 + 0xd1) = uVar1;
  FUN_1802834c0();
  return;
}


