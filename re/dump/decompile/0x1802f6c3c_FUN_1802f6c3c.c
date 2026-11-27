// 0x1802f6c3c  FUN_1802f6c3c
// size=46 thunk=false
// signature: undefined FUN_1802f6c3c()
// status: ok


void FUN_1802f6c3c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x630);
  }
  return;
}


