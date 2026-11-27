// 0x1802e909f  FUN_1802e909f
// size=41 thunk=false
// signature: undefined FUN_1802e909f()
// status: ok


void FUN_1802e909f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb8);
  }
  return;
}


