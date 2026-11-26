// 0x1802f4d45  FUN_1802f4d45
// size=41 thunk=false
// signature: undefined FUN_1802f4d45()
// status: ok


void FUN_1802f4d45(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


