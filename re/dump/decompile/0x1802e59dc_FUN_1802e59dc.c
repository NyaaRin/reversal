// 0x1802e59dc  FUN_1802e59dc
// size=41 thunk=false
// signature: undefined FUN_1802e59dc()
// status: ok


void FUN_1802e59dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


