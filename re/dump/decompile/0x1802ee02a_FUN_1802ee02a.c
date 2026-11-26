// 0x1802ee02a  FUN_1802ee02a
// size=41 thunk=false
// signature: undefined FUN_1802ee02a()
// status: ok


void FUN_1802ee02a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


