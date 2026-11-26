// 0x1802dd4f5  FUN_1802dd4f5
// size=41 thunk=false
// signature: undefined FUN_1802dd4f5()
// status: ok


void FUN_1802dd4f5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


