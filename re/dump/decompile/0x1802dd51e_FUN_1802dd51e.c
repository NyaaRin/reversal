// 0x1802dd51e  FUN_1802dd51e
// size=41 thunk=false
// signature: undefined FUN_1802dd51e()
// status: ok


void FUN_1802dd51e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


