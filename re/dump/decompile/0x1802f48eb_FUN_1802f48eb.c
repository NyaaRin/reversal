// 0x1802f48eb  FUN_1802f48eb
// size=46 thunk=false
// signature: undefined FUN_1802f48eb()
// status: ok


void FUN_1802f48eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


