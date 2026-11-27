// 0x1802f8fa6  FUN_1802f8fa6
// size=41 thunk=false
// signature: undefined FUN_1802f8fa6()
// status: ok


void FUN_1802f8fa6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


