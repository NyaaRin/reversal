// 0x1802f1f70  FUN_1802f1f70
// size=46 thunk=false
// signature: undefined FUN_1802f1f70()
// status: ok


void FUN_1802f1f70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);
  }
  return;
}


