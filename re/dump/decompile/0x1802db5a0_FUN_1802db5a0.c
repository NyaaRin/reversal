// 0x1802db5a0  FUN_1802db5a0
// size=38 thunk=false
// signature: undefined FUN_1802db5a0()
// status: ok


void FUN_1802db5a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


