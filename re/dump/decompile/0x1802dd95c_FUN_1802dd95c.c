// 0x1802dd95c  FUN_1802dd95c
// size=38 thunk=false
// signature: undefined FUN_1802dd95c()
// status: ok


void FUN_1802dd95c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


