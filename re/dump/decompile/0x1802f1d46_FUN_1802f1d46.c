// 0x1802f1d46  FUN_1802f1d46
// size=41 thunk=false
// signature: undefined FUN_1802f1d46()
// status: ok


void FUN_1802f1d46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


