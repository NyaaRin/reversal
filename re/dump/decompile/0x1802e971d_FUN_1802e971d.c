// 0x1802e971d  FUN_1802e971d
// size=46 thunk=false
// signature: undefined FUN_1802e971d()
// status: ok


void FUN_1802e971d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);
  }
  return;
}


