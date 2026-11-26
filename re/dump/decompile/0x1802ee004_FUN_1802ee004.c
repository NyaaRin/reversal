// 0x1802ee004  FUN_1802ee004
// size=38 thunk=false
// signature: undefined FUN_1802ee004()
// status: ok


void FUN_1802ee004(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


