// 0x1802f65d0  FUN_1802f65d0
// size=46 thunk=false
// signature: undefined FUN_1802f65d0()
// status: ok


void FUN_1802f65d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4b0);
  }
  return;
}


