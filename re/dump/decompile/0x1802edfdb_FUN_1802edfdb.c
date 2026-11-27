// 0x1802edfdb  FUN_1802edfdb
// size=41 thunk=false
// signature: undefined FUN_1802edfdb()
// status: ok


void FUN_1802edfdb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


