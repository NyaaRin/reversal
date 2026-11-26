// 0x1802f94ae  FUN_1802f94ae
// size=46 thunk=false
// signature: undefined FUN_1802f94ae()
// status: ok


void FUN_1802f94ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x200) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


