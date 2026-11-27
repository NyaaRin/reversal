// 0x1802e448c  FUN_1802e448c
// size=47 thunk=false
// signature: undefined FUN_1802e448c()
// status: ok


void FUN_1802e448c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x84) & 1) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf8);
  }
  return;
}


