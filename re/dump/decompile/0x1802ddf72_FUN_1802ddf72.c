// 0x1802ddf72  FUN_1802ddf72
// size=38 thunk=false
// signature: undefined FUN_1802ddf72()
// status: ok


void FUN_1802ddf72(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


