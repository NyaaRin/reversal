// 0x1802f46d1  FUN_1802f46d1
// size=46 thunk=false
// signature: undefined FUN_1802f46d1()
// status: ok


void FUN_1802f46d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


