// 0x1802f8ed9  FUN_1802f8ed9
// size=41 thunk=false
// signature: undefined FUN_1802f8ed9()
// status: ok


void FUN_1802f8ed9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);
  }
  return;
}


