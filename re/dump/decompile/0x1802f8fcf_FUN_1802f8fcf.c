// 0x1802f8fcf  FUN_1802f8fcf
// size=46 thunk=false
// signature: undefined FUN_1802f8fcf()
// status: ok


void FUN_1802f8fcf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


