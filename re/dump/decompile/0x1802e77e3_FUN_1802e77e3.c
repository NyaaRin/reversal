// 0x1802e77e3  FUN_1802e77e3
// size=43 thunk=false
// signature: undefined FUN_1802e77e3()
// status: ok


void FUN_1802e77e3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


