// 0x1802e96ef  FUN_1802e96ef
// size=46 thunk=false
// signature: undefined FUN_1802e96ef()
// status: ok


void FUN_1802e96ef(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);
  }
  return;
}


