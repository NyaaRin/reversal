// 0x1802e57cc  FUN_1802e57cc
// size=38 thunk=false
// signature: undefined FUN_1802e57cc()
// status: ok


void FUN_1802e57cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


