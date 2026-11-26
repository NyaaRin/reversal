// 0x1802f4c02  FUN_1802f4c02
// size=46 thunk=false
// signature: undefined FUN_1802f4c02()
// status: ok


void FUN_1802f4c02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


