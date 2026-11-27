// 0x1802f8eb0  FUN_1802f8eb0
// size=41 thunk=false
// signature: undefined FUN_1802f8eb0()
// status: ok


void FUN_1802f8eb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


