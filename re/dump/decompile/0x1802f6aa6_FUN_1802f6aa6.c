// 0x1802f6aa6  FUN_1802f6aa6
// size=41 thunk=false
// signature: undefined FUN_1802f6aa6()
// status: ok


void FUN_1802f6aa6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);
  }
  return;
}


