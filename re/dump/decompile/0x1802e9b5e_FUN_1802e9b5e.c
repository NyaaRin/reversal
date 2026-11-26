// 0x1802e9b5e  FUN_1802e9b5e
// size=41 thunk=false
// signature: undefined FUN_1802e9b5e()
// status: ok


void FUN_1802e9b5e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 8) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x338);
  }
  return;
}


