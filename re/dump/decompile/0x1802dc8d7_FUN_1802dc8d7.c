// 0x1802dc8d7  FUN_1802dc8d7
// size=43 thunk=false
// signature: undefined FUN_1802dc8d7()
// status: ok


void FUN_1802dc8d7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


