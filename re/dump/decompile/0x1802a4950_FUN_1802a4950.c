// 0x1802a4950  FUN_1802a4950
// size=539 thunk=false
// signature: undefined FUN_1802a4950()
// status: ok


void FUN_1802a4950(undefined2 param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  lVar4 = *(longlong *)(lVar3 + 0x2368);
  if (*(char *)(lVar4 + 0x239) == '\0') {
    FUN_1802a2470(lVar4);
  }
  if (*(char *)(lVar4 + 0x23a) != '\0') {
    FUN_1802a4b70(lVar4);
  }
  lVar5 = *(longlong *)(lVar4 + 0x188);
  *(undefined2 *)(lVar4 + 0x96) = *(undefined2 *)(lVar4 + 0x94);
  *(undefined2 *)(lVar4 + 0x94) = param_1;
  uVar9 = *(undefined4 *)(lVar3 + 0xce8);
  piVar1 = (int *)(lVar4 + 0x70);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(lVar4 + 0x88) = uVar9;
  *(undefined4 *)(lVar4 + 0xa0) = 0x1000000;
  *(undefined4 *)(lVar4 + 0x9c) = 0x1000000;
  uVar9 = *(undefined4 *)(lVar4 + 0x80);
  *(undefined4 *)(lVar4 + 0x74) = 0xffffffff;
  *(undefined2 *)(lVar4 + 0x230) = 0xffff;
  *(float *)(lVar4 + 0x84) = param_2;
  *(undefined1 *)(lVar4 + 0x23a) = 1;
  if ((*piVar1 == 0) && (0 < *(short *)(lVar4 + 0x22a))) {
    uVar9 = *(undefined4 *)(lVar4 + 0xf4);
    *(undefined4 *)(lVar5 + 0x11c) = uVar9;
  }
  *(undefined4 *)(lVar4 + 0x80) = uVar9;
  *(undefined4 *)(lVar4 + 0x8c) = 0;
  *(undefined4 *)(lVar4 + 0x7c) = uVar9;
  *(float *)(lVar4 + 0x90) = *(float *)(lVar5 + 0x15c) - *(float *)(lVar4 + 0xb4);
  *(undefined4 *)(lVar5 + 0x154) = 0;
  fVar8 = *(float *)(lVar4 + 0x88);
  *(undefined4 *)(lVar5 + 0x134) = uVar9;
  *(undefined4 *)(lVar5 + 0x120) = *(undefined4 *)(lVar5 + 0x118);
  *(undefined8 *)(lVar5 + 0x140) = 0;
  *(undefined8 *)(lVar5 + 0x148) = 0;
  *(float *)(lVar5 + 0x124) = *(float *)(lVar5 + 0x11c) + fVar8;
  *(undefined2 *)(lVar5 + 0x158) = 0;
  if ((*(byte *)(lVar4 + 0x94) & 1) != 0) {
    iVar6 = FUN_18026a6a0(0x2e,DAT_180380bb0);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x2368);
    if (lVar2 == 0) {
      FUN_18027e9c0("Call should only be done while in BeginTable() scope!");
    }
    else {
      iVar7 = 0;
      if (iVar6 != 0x1000000) {
        iVar7 = iVar6;
      }
      if (*(float *)(lVar2 + 0x7c) < *(float *)(lVar2 + 300) ||
          *(float *)(lVar2 + 0x7c) == *(float *)(lVar2 + 300)) {
        *(int *)(lVar2 + 0x9c) = iVar7;
      }
    }
    if (*(int *)(lVar4 + 0x70) == 0) {
      *(undefined1 *)(lVar4 + 0x23d) = 1;
    }
  }
  param_2 = param_2 + *(float *)(lVar4 + 0x7c);
  fVar8 = *(float *)(lVar4 + 0x88) + *(float *)(lVar4 + 0x88) + *(float *)(lVar4 + 0x80);
  if (fVar8 <= param_2) {
    fVar8 = param_2;
  }
  *(float *)(lVar4 + 0x80) = fVar8;
  *(undefined1 *)(*(longlong *)(lVar4 + 0x188) + 0xd1) = 1;
  return;
}


