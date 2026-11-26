// 0x1802f6354  FUN_1802f6354
// size=46 thunk=false
// signature: undefined FUN_1802f6354()
// status: ok


void FUN_1802f6354(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);
  }
  return;
}


