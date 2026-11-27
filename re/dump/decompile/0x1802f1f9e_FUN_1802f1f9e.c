// 0x1802f1f9e  FUN_1802f1f9e
// size=46 thunk=false
// signature: undefined FUN_1802f1f9e()
// status: ok


void FUN_1802f1f9e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);
  }
  return;
}


