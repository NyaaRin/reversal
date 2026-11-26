// 0x1802e5aa9  FUN_1802e5aa9
// size=41 thunk=false
// signature: undefined FUN_1802e5aa9()
// status: ok


void FUN_1802e5aa9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x20) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3d0);
  }
  return;
}


