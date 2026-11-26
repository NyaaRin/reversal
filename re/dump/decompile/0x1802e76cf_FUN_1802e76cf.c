// 0x1802e76cf  FUN_1802e76cf
// size=46 thunk=false
// signature: undefined FUN_1802e76cf()
// status: ok


void FUN_1802e76cf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x400) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


