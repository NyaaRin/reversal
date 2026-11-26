// 0x1802e7787  FUN_1802e7787
// size=46 thunk=false
// signature: undefined FUN_1802e7787()
// status: ok


void FUN_1802e7787(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


