// 0x1802f55c3  FUN_1802f55c3
// size=41 thunk=false
// signature: undefined FUN_1802f55c3()
// status: ok


void FUN_1802f55c3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 8) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


