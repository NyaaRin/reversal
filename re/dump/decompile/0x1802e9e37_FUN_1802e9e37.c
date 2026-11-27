// 0x1802e9e37  FUN_1802e9e37
// size=46 thunk=false
// signature: undefined FUN_1802e9e37()
// status: ok


void FUN_1802e9e37(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


