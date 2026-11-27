// 0x1802e678d  FUN_1802e678d
// size=38 thunk=false
// signature: undefined FUN_1802e678d()
// status: ok


void FUN_1802e678d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


