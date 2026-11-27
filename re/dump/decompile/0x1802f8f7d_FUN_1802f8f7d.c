// 0x1802f8f7d  FUN_1802f8f7d
// size=41 thunk=false
// signature: undefined FUN_1802f8f7d()
// status: ok


void FUN_1802f8f7d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


