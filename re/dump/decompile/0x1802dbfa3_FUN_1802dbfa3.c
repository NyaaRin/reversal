// 0x1802dbfa3  FUN_1802dbfa3
// size=41 thunk=false
// signature: undefined FUN_1802dbfa3()
// status: ok


void FUN_1802dbfa3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b8);
  }
  return;
}


