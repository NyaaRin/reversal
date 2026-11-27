// 0x1802f91b0  FUN_1802f91b0
// size=41 thunk=false
// signature: undefined FUN_1802f91b0()
// status: ok


void FUN_1802f91b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


