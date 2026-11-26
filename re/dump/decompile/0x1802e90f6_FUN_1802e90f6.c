// 0x1802e90f6  FUN_1802e90f6
// size=46 thunk=false
// signature: undefined FUN_1802e90f6()
// status: ok


void FUN_1802e90f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3b8);
  }
  return;
}


