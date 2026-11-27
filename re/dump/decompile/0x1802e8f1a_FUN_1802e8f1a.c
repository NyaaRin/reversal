// 0x1802e8f1a  FUN_1802e8f1a
// size=41 thunk=false
// signature: undefined FUN_1802e8f1a()
// status: ok


void FUN_1802e8f1a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd8);
  }
  return;
}


