// 0x1802f624a  FUN_1802f624a
// size=46 thunk=false
// signature: undefined FUN_1802f624a()
// status: ok


void FUN_1802f624a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


