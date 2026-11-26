// 0x1802f6c95  FUN_1802f6c95
// size=43 thunk=false
// signature: undefined FUN_1802f6c95()
// status: ok


void FUN_1802f6c95(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


