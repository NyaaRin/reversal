// 0x1802e4cbc  FUN_1802e4cbc
// size=38 thunk=false
// signature: undefined FUN_1802e4cbc()
// status: ok


void FUN_1802e4cbc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


