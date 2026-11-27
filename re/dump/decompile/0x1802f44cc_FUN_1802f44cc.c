// 0x1802f44cc  FUN_1802f44cc
// size=41 thunk=false
// signature: undefined FUN_1802f44cc()
// status: ok


void FUN_1802f44cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


