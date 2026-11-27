// 0x1802e9f1d  FUN_1802e9f1d
// size=46 thunk=false
// signature: undefined FUN_1802e9f1d()
// status: ok


void FUN_1802e9f1d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


