// 0x1802e685c  FUN_1802e685c
// size=38 thunk=false
// signature: undefined FUN_1802e685c()
// status: ok


void FUN_1802e685c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


