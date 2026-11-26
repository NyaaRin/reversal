// 0x1802f65a2  FUN_1802f65a2
// size=46 thunk=false
// signature: undefined FUN_1802f65a2()
// status: ok


void FUN_1802f65a2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);
  }
  return;
}


