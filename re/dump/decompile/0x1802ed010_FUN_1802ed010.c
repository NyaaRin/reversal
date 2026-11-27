// 0x1802ed010  FUN_1802ed010
// size=38 thunk=false
// signature: undefined FUN_1802ed010()
// status: ok


void FUN_1802ed010(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


