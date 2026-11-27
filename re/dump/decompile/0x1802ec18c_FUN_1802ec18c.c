// 0x1802ec18c  FUN_1802ec18c
// size=38 thunk=false
// signature: undefined FUN_1802ec18c()
// status: ok


void FUN_1802ec18c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


