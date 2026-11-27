// 0x1802dc10d  FUN_1802dc10d
// size=46 thunk=false
// signature: undefined FUN_1802dc10d()
// status: ok


void FUN_1802dc10d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 800);
  }
  return;
}


