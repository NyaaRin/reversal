// 0x1802e5ad2  FUN_1802e5ad2
// size=41 thunk=false
// signature: undefined FUN_1802e5ad2()
// status: ok


void FUN_1802e5ad2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x40) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3b0);
  }
  return;
}


