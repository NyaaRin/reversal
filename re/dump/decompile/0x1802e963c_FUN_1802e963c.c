// 0x1802e963c  FUN_1802e963c
// size=41 thunk=false
// signature: undefined FUN_1802e963c()
// status: ok


void FUN_1802e963c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4f8);
  }
  return;
}


