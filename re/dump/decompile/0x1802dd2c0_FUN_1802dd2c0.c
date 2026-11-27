// 0x1802dd2c0  FUN_1802dd2c0
// size=41 thunk=false
// signature: undefined FUN_1802dd2c0()
// status: ok


void FUN_1802dd2c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x118);
  }
  return;
}


