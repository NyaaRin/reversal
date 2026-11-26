// 0x1802e988d  FUN_1802e988d
// size=46 thunk=false
// signature: undefined FUN_1802e988d()
// status: ok


void FUN_1802e988d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x298);
  }
  return;
}


