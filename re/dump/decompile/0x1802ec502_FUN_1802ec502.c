// 0x1802ec502  FUN_1802ec502
// size=38 thunk=false
// signature: undefined FUN_1802ec502()
// status: ok


void FUN_1802ec502(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


