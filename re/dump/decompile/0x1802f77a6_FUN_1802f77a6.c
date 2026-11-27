// 0x1802f77a6  FUN_1802f77a6
// size=38 thunk=false
// signature: undefined FUN_1802f77a6()
// status: ok


void FUN_1802f77a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


