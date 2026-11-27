// 0x1802edf2b  FUN_1802edf2b
// size=47 thunk=false
// signature: undefined FUN_1802edf2b()
// status: ok


void FUN_1802edf2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 2) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 200));
  }
  return;
}


