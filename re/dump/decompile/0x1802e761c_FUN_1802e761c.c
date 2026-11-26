// 0x1802e761c  FUN_1802e761c
// size=41 thunk=false
// signature: undefined FUN_1802e761c()
// status: ok


void FUN_1802e761c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x408);
  }
  return;
}


