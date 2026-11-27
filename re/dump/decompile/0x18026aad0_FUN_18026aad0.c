// 0x18026aad0  FUN_18026aad0
// size=212 thunk=false
// signature: undefined FUN_18026aad0()
// status: ok


void FUN_18026aad0(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((&DAT_180331c71)[(longlong)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_180331c70 + (longlong)param_1 * 4) == '\x02')) {
    uVar2 = (ulonglong)(*(uint *)(&DAT_180331c70 + (longlong)param_1 * 4) >> 0x10);
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    local_14 = *(undefined4 *)(uVar2 + 0xc78 + lVar1);
    local_10 = *(undefined4 *)(uVar2 + 0xc7c + lVar1);
    local_18 = param_1;
    FUN_18028a160(lVar1 + 0x1fd8,&local_18);
    *(undefined8 *)(uVar2 + 0xc78 + lVar1) = *param_2;
    return;
  }
  FUN_18027e9c0("Calling PushStyleVar() variant with wrong type!");
  return;
}


