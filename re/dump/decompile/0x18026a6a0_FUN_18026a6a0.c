// 0x18026a6a0  FUN_18026a6a0
// size=132 thunk=false
// signature: undefined FUN_18026a6a0()
// status: ok


void FUN_18026a6a0(int param_1,float param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (undefined4 *)(lVar2 + ((longlong)param_1 + 0xdb) * 0x10);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  fStack_1c = (float)puVar1[3] * param_2 * *(float *)(lVar2 + 0xc84);
  FUN_180268ed0(&local_28);
  return;
}


