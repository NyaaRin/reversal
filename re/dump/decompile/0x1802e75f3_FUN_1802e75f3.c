// 0x1802e75f3  FUN_1802e75f3
// size=41 thunk=false
// signature: undefined FUN_1802e75f3()
// status: ok


void FUN_1802e75f3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);
  }
  return;
}


