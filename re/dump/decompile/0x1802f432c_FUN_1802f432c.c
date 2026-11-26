// 0x1802f432c  FUN_1802f432c
// size=38 thunk=false
// signature: undefined FUN_1802f432c()
// status: ok


void FUN_1802f432c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


