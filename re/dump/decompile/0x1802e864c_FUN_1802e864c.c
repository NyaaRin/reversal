// 0x1802e864c  FUN_1802e864c
// size=43 thunk=false
// signature: undefined FUN_1802e864c()
// status: ok


void FUN_1802e864c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


