// 0x1802e9c4b  FUN_1802e9c4b
// size=38 thunk=false
// signature: undefined FUN_1802e9c4b()
// status: ok


void FUN_1802e9c4b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


