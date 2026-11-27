// 0x1802dafaa  FUN_1802dafaa
// size=41 thunk=false
// signature: undefined FUN_1802dafaa()
// status: ok


void FUN_1802dafaa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb8);
  }
  return;
}


