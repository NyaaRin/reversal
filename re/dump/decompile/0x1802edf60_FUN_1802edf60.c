// 0x1802edf60  FUN_1802edf60
// size=41 thunk=false
// signature: undefined FUN_1802edf60()
// status: ok


void FUN_1802edf60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


