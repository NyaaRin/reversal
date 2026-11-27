// 0x180282e10  FUN_180282e10
// size=327 thunk=false
// signature: undefined FUN_180282e10()
// status: ok


void FUN_180282e10(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  if (*(longlong *)(lVar6 + 0x2070) != param_2) {
    FUN_180282c60(param_2);
  }
  lVar8 = (longlong)*(int *)(param_2 + 0x170);
  *(int *)(lVar6 + 0x207c) = *(int *)(param_2 + 0x170);
  *(int *)(lVar6 + 0x206c) = param_1;
  FUN_180279b90(*(undefined4 *)(lVar6 + 0x1eb4));
  *(int *)(param_2 + 0x3f0 + lVar8 * 4) = param_1;
  if (*(int *)(lVar6 + 0x1ef8) == param_1) {
    fVar1 = *(float *)(param_2 + 300);
    fVar2 = *(float *)(param_2 + 0x128);
    fVar3 = *(float *)(lVar6 + 0x1f18);
    fVar4 = *(float *)(lVar6 + 0x1f20);
    fVar5 = *(float *)(lVar6 + 0x1f1c);
    *(float *)(param_2 + 0x3f8 + lVar8 * 0x10) = *(float *)(lVar6 + 0x1f14) - fVar2;
    *(float *)(param_2 + 0x3fc + lVar8 * 0x10) = fVar3 - fVar1;
    *(float *)(param_2 + 0x400 + lVar8 * 0x10) = fVar5 - fVar2;
    *(float *)(param_2 + 0x404 + lVar8 * 0x10) = fVar4 - fVar1;
    if (*(int *)(lVar6 + 0x1ef8) == param_1) {
      uVar7 = *(undefined4 *)(lVar6 + 0x1efc);
      goto LAB_180282f05;
    }
  }
  uVar7 = 0;
LAB_180282f05:
  *(undefined4 *)(lVar6 + 0x2080) = uVar7;
  if (param_1 == *(int *)(lVar6 + 0x1598)) {
    *(undefined1 *)(lVar6 + 0x206b) = 1;
  }
  if (*(int *)(lVar6 + 0x15b4) - 2U < 2) {
    *(undefined1 *)(lVar6 + 0x2069) = 1;
  }
  else if (*(char *)(lVar6 + 0x76) != '\0') {
    *(undefined1 *)(lVar6 + 0x2068) = 0;
  }
  FUN_180282d00(0);
  FUN_180282d00(1);
  return;
}


