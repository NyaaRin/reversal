// 0x1802e9b35  FUN_1802e9b35
// size=41 thunk=false
// signature: undefined FUN_1802e9b35()
// status: ok


void FUN_1802e9b35(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 4) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x338);
  }
  return;
}


