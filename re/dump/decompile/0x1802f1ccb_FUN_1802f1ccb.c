// 0x1802f1ccb  FUN_1802f1ccb
// size=41 thunk=false
// signature: undefined FUN_1802f1ccb()
// status: ok


void FUN_1802f1ccb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


