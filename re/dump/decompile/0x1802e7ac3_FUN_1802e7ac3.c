// 0x1802e7ac3  FUN_1802e7ac3
// size=46 thunk=false
// signature: undefined FUN_1802e7ac3()
// status: ok


void FUN_1802e7ac3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


