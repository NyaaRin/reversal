// 0x1802f33fe  FUN_1802f33fe
// size=41 thunk=false
// signature: undefined FUN_1802f33fe()
// status: ok


void FUN_1802f33fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);
  }
  return;
}


