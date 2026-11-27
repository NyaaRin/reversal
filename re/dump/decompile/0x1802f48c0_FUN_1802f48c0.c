// 0x1802f48c0  FUN_1802f48c0
// size=43 thunk=false
// signature: undefined FUN_1802f48c0()
// status: ok


void FUN_1802f48c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


