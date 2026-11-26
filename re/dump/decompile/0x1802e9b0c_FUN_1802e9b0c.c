// 0x1802e9b0c  FUN_1802e9b0c
// size=41 thunk=false
// signature: undefined FUN_1802e9b0c()
// status: ok


void FUN_1802e9b0c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x618);
  }
  return;
}


