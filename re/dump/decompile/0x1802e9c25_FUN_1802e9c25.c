// 0x1802e9c25  FUN_1802e9c25
// size=38 thunk=false
// signature: undefined FUN_1802e9c25()
// status: ok


void FUN_1802e9c25(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


