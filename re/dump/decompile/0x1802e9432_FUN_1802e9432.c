// 0x1802e9432  FUN_1802e9432
// size=46 thunk=false
// signature: undefined FUN_1802e9432()
// status: ok


void FUN_1802e9432(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x478);
  }
  return;
}


