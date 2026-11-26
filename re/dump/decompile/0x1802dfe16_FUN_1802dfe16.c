// 0x1802dfe16  FUN_1802dfe16
// size=38 thunk=false
// signature: undefined FUN_1802dfe16()
// status: ok


void FUN_1802dfe16(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


