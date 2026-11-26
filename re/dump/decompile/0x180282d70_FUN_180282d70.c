// 0x180282d70  FUN_180282d70
// size=153 thunk=false
// signature: undefined FUN_180282d70()
// status: ok


void FUN_180282d70(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(undefined4 *)(lVar2 + 0x206c) = param_1;
  *(int *)(lVar2 + 0x207c) = param_2;
  FUN_180279b90(param_3);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x2070) + 0x3f0 + (longlong)param_2 * 4) = param_1;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x2070) + 0x3f8 + (longlong)param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  FUN_180282d00(0);
  FUN_180282d00(1);
  return;
}


