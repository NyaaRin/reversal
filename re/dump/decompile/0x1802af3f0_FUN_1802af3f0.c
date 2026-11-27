// 0x1802af3f0  FUN_1802af3f0
// size=206 thunk=false
// signature: undefined FUN_1802af3f0()
// status: ok


void FUN_1802af3f0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x1520);
  if (*(char *)(lVar3 + 0xd1) == '\0') {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    uVar1 = *(undefined4 *)(lVar3 + 0x1d4);
    *(undefined4 *)(lVar3 + 0x1d4) = 1;
    *(undefined1 *)(lVar3 + 0x158) = 0;
    if (*(float *)(lVar3 + 0x144) <= 0.0) {
      local_res8[0] = (ulonglong)*(uint *)(lVar2 + 0x1238) << 0x20;
    }
    else {
      local_res8[0] = 0;
    }
    FUN_18027f400(local_res8,DAT_180381384);
    *(undefined4 *)(lVar3 + 0x1d4) = uVar1;
  }
  return;
}


