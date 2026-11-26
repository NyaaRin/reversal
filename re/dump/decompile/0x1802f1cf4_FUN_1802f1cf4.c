// 0x1802f1cf4  FUN_1802f1cf4
// size=41 thunk=false
// signature: undefined FUN_1802f1cf4()
// status: ok


void FUN_1802f1cf4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);
  }
  return;
}


