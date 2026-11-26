// 0x1802f44f5  FUN_1802f44f5
// size=41 thunk=false
// signature: undefined FUN_1802f44f5()
// status: ok


void FUN_1802f44f5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


