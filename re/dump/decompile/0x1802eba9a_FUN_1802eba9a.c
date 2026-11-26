// 0x1802eba9a  FUN_1802eba9a
// size=38 thunk=false
// signature: undefined FUN_1802eba9a()
// status: ok


void FUN_1802eba9a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


