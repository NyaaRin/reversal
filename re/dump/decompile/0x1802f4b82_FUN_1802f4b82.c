// 0x1802f4b82  FUN_1802f4b82
// size=46 thunk=false
// signature: undefined FUN_1802f4b82()
// status: ok


void FUN_1802f4b82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


