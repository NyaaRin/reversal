// 0x1802eeade  FUN_1802eeade
// size=38 thunk=false
// signature: undefined FUN_1802eeade()
// status: ok


void FUN_1802eeade(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


