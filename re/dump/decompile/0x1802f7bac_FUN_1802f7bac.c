// 0x1802f7bac  FUN_1802f7bac
// size=41 thunk=false
// signature: undefined FUN_1802f7bac()
// status: ok


void FUN_1802f7bac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


