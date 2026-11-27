// 0x1802e8750  FUN_1802e8750
// size=41 thunk=false
// signature: undefined FUN_1802e8750()
// status: ok


void FUN_1802e8750(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


