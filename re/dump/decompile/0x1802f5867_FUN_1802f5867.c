// 0x1802f5867  FUN_1802f5867
// size=41 thunk=false
// signature: undefined FUN_1802f5867()
// status: ok


void FUN_1802f5867(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 0x20) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


