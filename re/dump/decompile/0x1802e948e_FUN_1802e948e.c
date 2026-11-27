// 0x1802e948e  FUN_1802e948e
// size=46 thunk=false
// signature: undefined FUN_1802e948e()
// status: ok


void FUN_1802e948e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x198);
  }
  return;
}


