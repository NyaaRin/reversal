// 0x1802833f0  FUN_1802833f0
// size=206 thunk=false
// signature: undefined FUN_1802833f0()
// status: ok


void FUN_1802833f0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar7 + 0xec0);
  lVar8 = *(longlong *)(lVar7 + 0x1520);
  *param_1 = lVar8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar7 + 0x1ef8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar7 + 0x1eb4);
  uVar6 = *(uint *)(lVar7 + 0x1efc);
  *(uint *)(param_1 + 4) = uVar6;
  fVar1 = *(float *)(lVar8 + 300);
  fVar2 = *(float *)(lVar8 + 0x128);
  fVar3 = *(float *)(lVar7 + 0x1f18);
  fVar4 = *(float *)(lVar7 + 0x1f20);
  fVar5 = *(float *)(lVar7 + 0x1f1c);
  *(float *)(param_1 + 2) = *(float *)(lVar7 + 0x1f14) - fVar2;
  *(float *)((longlong)param_1 + 0x14) = fVar3 - fVar1;
  *(float *)(param_1 + 3) = fVar5 - fVar2;
  *(float *)((longlong)param_1 + 0x1c) = fVar4 - fVar1;
  if ((uVar6 >> 0x15 & 1) != 0) {
    param_1[6] = *(longlong *)(lVar7 + 0x1ed0);
  }
  return;
}


