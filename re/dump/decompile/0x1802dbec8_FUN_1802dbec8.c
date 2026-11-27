// 0x1802dbec8  FUN_1802dbec8
// size=46 thunk=false
// signature: undefined FUN_1802dbec8()
// status: ok


void FUN_1802dbec8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a0);
  }
  return;
}


