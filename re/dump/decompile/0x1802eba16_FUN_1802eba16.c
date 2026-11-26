// 0x1802eba16  FUN_1802eba16
// size=38 thunk=false
// signature: undefined FUN_1802eba16()
// status: ok


void FUN_1802eba16(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


