// 0x1802f1f36  FUN_1802f1f36
// size=46 thunk=false
// signature: undefined FUN_1802f1f36()
// status: ok


void FUN_1802f1f36(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


