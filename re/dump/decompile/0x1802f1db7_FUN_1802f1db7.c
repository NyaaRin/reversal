// 0x1802f1db7  FUN_1802f1db7
// size=41 thunk=false
// signature: undefined FUN_1802f1db7()
// status: ok


void FUN_1802f1db7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


