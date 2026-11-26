// 0x1802e8617  FUN_1802e8617
// size=41 thunk=false
// signature: undefined FUN_1802e8617()
// status: ok


void FUN_1802e8617(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


