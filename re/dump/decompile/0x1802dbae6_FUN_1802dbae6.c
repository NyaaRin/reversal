// 0x1802dbae6  FUN_1802dbae6
// size=46 thunk=false
// signature: undefined FUN_1802dbae6()
// status: ok


void FUN_1802dbae6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);
  }
  return;
}


