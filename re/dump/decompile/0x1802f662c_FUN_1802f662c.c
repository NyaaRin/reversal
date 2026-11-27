// 0x1802f662c  FUN_1802f662c
// size=46 thunk=false
// signature: undefined FUN_1802f662c()
// status: ok


void FUN_1802f662c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d0);
  }
  return;
}


