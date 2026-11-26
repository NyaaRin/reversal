// 0x1802db5d2  FUN_1802db5d2
// size=41 thunk=false
// signature: undefined FUN_1802db5d2()
// status: ok


void FUN_1802db5d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


