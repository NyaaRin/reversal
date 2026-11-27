// 0x1802f6b7d  FUN_1802f6b7d
// size=46 thunk=false
// signature: undefined FUN_1802f6b7d()
// status: ok


void FUN_1802f6b7d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x200) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x610);
  }
  return;
}


