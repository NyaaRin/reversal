// 0x18026f7d0  FUN_18026f7d0
// size=280 thunk=false
// signature: undefined FUN_18026f7d0()
// status: ok


longlong FUN_18026f7d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 *local_res20;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar3 = *(longlong *)(param_1 + 0x48 + param_2 * 8);
  if (lVar3 == 0) {
    local_res10 = FUN_18026f580(0xe0);
    local_res20 = local_res8;
    local_38 = local_res10;
    if (local_res10 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_180291cd0(local_res10,lVar1 + 0x1250);
    }
    *(undefined8 *)(lVar3 + 0xd8) = param_3;
    *(longlong *)(param_1 + 0x48 + param_2 * 8) = lVar3;
  }
  if (*(float *)(param_1 + 0x40 + param_2 * 4) != (float)*(double *)(lVar1 + 0x10)) {
    FUN_180291fa0(lVar3);
    lVar2 = *(longlong *)(lVar1 + 0x60);
    local_38 = *(longlong *)(lVar2 + 0x28);
    uStack_30 = *(undefined4 *)(lVar2 + 0x30);
    uStack_2c = *(undefined4 *)(lVar2 + 0x34);
    FUN_1802926d0(lVar3,&local_38);
    local_res10 = CONCAT44(*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14),
                           *(float *)(param_1 + 8) + *(float *)(param_1 + 0x10));
    FUN_180292550(lVar3,(float *)(param_1 + 8),&local_res10,0);
    *(float *)(param_1 + 0x40 + param_2 * 4) = (float)*(double *)(lVar1 + 0x10);
  }
  return lVar3;
}


