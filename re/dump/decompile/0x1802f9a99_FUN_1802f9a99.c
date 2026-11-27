// 0x1802f9a99  FUN_1802f9a99
// size=41 thunk=false
// signature: undefined FUN_1802f9a99()
// status: ok


void FUN_1802f9a99(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x40) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


