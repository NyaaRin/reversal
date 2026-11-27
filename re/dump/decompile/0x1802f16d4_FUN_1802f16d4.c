// 0x1802f16d4  FUN_1802f16d4
// size=38 thunk=false
// signature: undefined FUN_1802f16d4()
// status: ok


void FUN_1802f16d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


