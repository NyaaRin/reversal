// 0x1802f6892  FUN_1802f6892
// size=46 thunk=false
// signature: undefined FUN_1802f6892()
// status: ok


void FUN_1802f6892(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);
  }
  return;
}


