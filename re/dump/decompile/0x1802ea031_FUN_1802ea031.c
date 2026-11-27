// 0x1802ea031  FUN_1802ea031
// size=46 thunk=false
// signature: undefined FUN_1802ea031()
// status: ok


void FUN_1802ea031(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


