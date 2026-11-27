// 0x1802f65fe  FUN_1802f65fe
// size=46 thunk=false
// signature: undefined FUN_1802f65fe()
// status: ok


void FUN_1802f65fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d0);
  }
  return;
}


