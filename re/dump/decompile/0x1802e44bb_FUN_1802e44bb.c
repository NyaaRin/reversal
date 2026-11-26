// 0x1802e44bb  FUN_1802e44bb
// size=47 thunk=false
// signature: undefined FUN_1802e44bb()
// status: ok


void FUN_1802e44bb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x84) & 2) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);
  }
  return;
}


