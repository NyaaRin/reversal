// 0x180305c60  FUN_180305c60
// size=41 thunk=false
// signature: undefined FUN_180305c60()
// status: ok


void FUN_180305c60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


