// 0x1802f9a2f  FUN_1802f9a2f
// size=41 thunk=false
// signature: undefined FUN_1802f9a2f()
// status: ok


void FUN_1802f9a2f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x10) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


