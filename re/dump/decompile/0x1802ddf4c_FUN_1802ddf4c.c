// 0x1802ddf4c  FUN_1802ddf4c
// size=38 thunk=false
// signature: undefined FUN_1802ddf4c()
// status: ok


void FUN_1802ddf4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


