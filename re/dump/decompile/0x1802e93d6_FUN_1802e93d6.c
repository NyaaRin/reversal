// 0x1802e93d6  FUN_1802e93d6
// size=46 thunk=false
// signature: undefined FUN_1802e93d6()
// status: ok


void FUN_1802e93d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x178);
  }
  return;
}


