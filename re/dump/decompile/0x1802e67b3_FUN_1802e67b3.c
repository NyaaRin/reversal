// 0x1802e67b3  FUN_1802e67b3
// size=38 thunk=false
// signature: undefined FUN_1802e67b3()
// status: ok


void FUN_1802e67b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


