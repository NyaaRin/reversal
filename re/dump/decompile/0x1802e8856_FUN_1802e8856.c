// 0x1802e8856  FUN_1802e8856
// size=46 thunk=false
// signature: undefined FUN_1802e8856()
// status: ok


void FUN_1802e8856(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 400);
  }
  return;
}


