// 0x1802edfb2  FUN_1802edfb2
// size=41 thunk=false
// signature: undefined FUN_1802edfb2()
// status: ok


void FUN_1802edfb2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


