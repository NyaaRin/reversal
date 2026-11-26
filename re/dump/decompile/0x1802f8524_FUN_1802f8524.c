// 0x1802f8524  FUN_1802f8524
// size=41 thunk=false
// signature: undefined FUN_1802f8524()
// status: ok


void FUN_1802f8524(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


