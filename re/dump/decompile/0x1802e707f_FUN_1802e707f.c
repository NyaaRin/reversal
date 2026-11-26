// 0x1802e707f  FUN_1802e707f
// size=41 thunk=false
// signature: undefined FUN_1802e707f()
// status: ok


void FUN_1802e707f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


