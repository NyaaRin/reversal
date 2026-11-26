// 0x1802f665a  FUN_1802f665a
// size=46 thunk=false
// signature: undefined FUN_1802f665a()
// status: ok


void FUN_1802f665a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4d0);
  }
  return;
}


