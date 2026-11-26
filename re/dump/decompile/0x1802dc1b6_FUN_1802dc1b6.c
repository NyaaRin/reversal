// 0x1802dc1b6  FUN_1802dc1b6
// size=41 thunk=false
// signature: undefined FUN_1802dc1b6()
// status: ok


void FUN_1802dc1b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x278);
  }
  return;
}


