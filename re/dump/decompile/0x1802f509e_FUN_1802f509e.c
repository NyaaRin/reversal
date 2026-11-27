// 0x1802f509e  FUN_1802f509e
// size=46 thunk=false
// signature: undefined FUN_1802f509e()
// status: ok


void FUN_1802f509e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x800) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


