// 0x1802ec1ca  FUN_1802ec1ca
// size=38 thunk=false
// signature: undefined FUN_1802ec1ca()
// status: ok


void FUN_1802ec1ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


