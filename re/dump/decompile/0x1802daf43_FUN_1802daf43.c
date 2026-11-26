// 0x1802daf43  FUN_1802daf43
// size=38 thunk=false
// signature: undefined FUN_1802daf43()
// status: ok


void FUN_1802daf43(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


