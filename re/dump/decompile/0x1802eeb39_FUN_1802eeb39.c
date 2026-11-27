// 0x1802eeb39  FUN_1802eeb39
// size=38 thunk=false
// signature: undefined FUN_1802eeb39()
// status: ok


void FUN_1802eeb39(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


