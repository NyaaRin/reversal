// 0x1802edf89  FUN_1802edf89
// size=41 thunk=false
// signature: undefined FUN_1802edf89()
// status: ok


void FUN_1802edf89(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


