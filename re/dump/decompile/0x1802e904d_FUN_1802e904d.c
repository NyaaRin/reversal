// 0x1802e904d  FUN_1802e904d
// size=41 thunk=false
// signature: undefined FUN_1802e904d()
// status: ok


void FUN_1802e904d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x698);
  }
  return;
}


