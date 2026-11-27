// 0x1802e5dbd  FUN_1802e5dbd
// size=46 thunk=false
// signature: undefined FUN_1802e5dbd()
// status: ok


void FUN_1802e5dbd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


