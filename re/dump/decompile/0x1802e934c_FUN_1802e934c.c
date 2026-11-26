// 0x1802e934c  FUN_1802e934c
// size=46 thunk=false
// signature: undefined FUN_1802e934c()
// status: ok


void FUN_1802e934c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x158);
  }
  return;
}


