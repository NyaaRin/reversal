// 0x1802f918a  FUN_1802f918a
// size=38 thunk=false
// signature: undefined FUN_1802f918a()
// status: ok


void FUN_1802f918a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


