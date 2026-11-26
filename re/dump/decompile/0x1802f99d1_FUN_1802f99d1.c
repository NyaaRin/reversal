// 0x1802f99d1  FUN_1802f99d1
// size=41 thunk=false
// signature: undefined FUN_1802f99d1()
// status: ok


void FUN_1802f99d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


