// 0x1802e9ddb  FUN_1802e9ddb
// size=46 thunk=false
// signature: undefined FUN_1802e9ddb()
// status: ok


void FUN_1802e9ddb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);
  }
  return;
}


