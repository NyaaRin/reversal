// 0x1802f9598  FUN_1802f9598
// size=41 thunk=false
// signature: undefined FUN_1802f9598()
// status: ok


void FUN_1802f9598(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x20) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);
  }
  return;
}


