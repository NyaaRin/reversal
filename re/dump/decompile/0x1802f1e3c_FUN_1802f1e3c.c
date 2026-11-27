// 0x1802f1e3c  FUN_1802f1e3c
// size=46 thunk=false
// signature: undefined FUN_1802f1e3c()
// status: ok


void FUN_1802f1e3c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x200) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


