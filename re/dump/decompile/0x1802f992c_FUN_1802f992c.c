// 0x1802f992c  FUN_1802f992c
// size=41 thunk=false
// signature: undefined FUN_1802f992c()
// status: ok


void FUN_1802f992c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x20) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


