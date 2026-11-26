// 0x1802f66b6  FUN_1802f66b6
// size=46 thunk=false
// signature: undefined FUN_1802f66b6()
// status: ok


void FUN_1802f66b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f0);
  }
  return;
}


