// 0x1802f2dda  FUN_1802f2dda
// size=38 thunk=false
// signature: undefined FUN_1802f2dda()
// status: ok


void FUN_1802f2dda(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


