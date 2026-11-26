// 0x1802d97dc  FUN_1802d97dc
// size=41 thunk=false
// signature: undefined FUN_1802d97dc()
// status: ok


void FUN_1802d97dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}


