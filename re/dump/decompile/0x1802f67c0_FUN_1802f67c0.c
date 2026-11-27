// 0x1802f67c0  FUN_1802f67c0
// size=41 thunk=false
// signature: undefined FUN_1802f67c0()
// status: ok


void FUN_1802f67c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);
  }
  return;
}


