// 0x18017d630  FUN_18017d630
// size=467 thunk=false
// signature: undefined FUN_18017d630()
// status: ok


undefined8 * FUN_18017d630(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)param_1 = 0x3d3020c5;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3d408312;
  *(undefined4 *)(param_1 + 1) = 0x3d810625;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = 0x3d99999a;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3da7ef9e;
  *(undefined4 *)(param_1 + 3) = 0x3de147ae;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3dc8b439;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dd91687;
  *(undefined4 *)(param_1 + 5) = 0x3e10624e;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3e3851ec;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3e50e560;
  *(undefined4 *)(param_1 + 7) = 0x3e86a7f0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f47ae14;
  *(undefined4 *)(param_1 + 8) = 0x3e8e5604;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ef8d4fe;
  *(undefined4 *)(param_1 + 9) = 0x3f7ae148;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3e70a3d7;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f52f1aa;
  *(undefined4 *)(param_1 + 0xb) = 0x3f1cac08;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f347ae1;
  *(undefined4 *)(param_1 + 0xd) = 0x3e8e5604;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f7ae148;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3e926e98;
  *(undefined4 *)(param_1 + 0xf) = 0x3ebae148;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f6ccccd;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f70e560;
  *(undefined4 *)(param_1 + 0x11) = 0x3f791687;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f049ba6;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f0d9168;
  *(undefined4 *)(param_1 + 0x13) = 0x3f239581;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  lVar1 = *(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar2 = *(undefined8 *)(lVar1 + 0xdd8);
  *param_1 = *(undefined8 *)(lVar1 + 0xdd0);
  param_1[1] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xde8);
  param_1[2] = *(undefined8 *)(lVar1 + 0xde0);
  param_1[3] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xe28);
  param_1[4] = *(undefined8 *)(lVar1 + 0xe20);
  param_1[5] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xe08);
  param_1[6] = *(undefined8 *)(lVar1 + 0xe00);
  param_1[7] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xef8);
  param_1[8] = *(undefined8 *)(lVar1 + 0xef0);
  param_1[9] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xf08);
  param_1[10] = *(undefined8 *)(lVar1 + 0xf00);
  param_1[0xb] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xdb8);
  param_1[0x10] = *(undefined8 *)(lVar1 + 0xdb0);
  param_1[0x11] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xdc8);
  param_1[0x12] = *(undefined8 *)(lVar1 + 0xdc0);
  param_1[0x13] = uVar2;
  return param_1;
}


