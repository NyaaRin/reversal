// 0x1802f504c  FUN_1802f504c
// size=46 thunk=false
// signature: undefined FUN_1802f504c()
// status: ok


void FUN_1802f504c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x100) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


