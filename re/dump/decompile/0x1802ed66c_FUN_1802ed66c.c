// 0x1802ed66c  FUN_1802ed66c
// size=38 thunk=false
// signature: undefined FUN_1802ed66c()
// status: ok


void FUN_1802ed66c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


