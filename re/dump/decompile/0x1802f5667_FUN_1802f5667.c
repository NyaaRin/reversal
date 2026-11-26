// 0x1802f5667  FUN_1802f5667
// size=46 thunk=false
// signature: undefined FUN_1802f5667()
// status: ok


void FUN_1802f5667(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


