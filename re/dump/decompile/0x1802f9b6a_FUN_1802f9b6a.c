// 0x1802f9b6a  FUN_1802f9b6a
// size=41 thunk=false
// signature: undefined FUN_1802f9b6a()
// status: ok


void FUN_1802f9b6a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


