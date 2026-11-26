// 0x1802e96c1  FUN_1802e96c1
// size=46 thunk=false
// signature: undefined FUN_1802e96c1()
// status: ok


void FUN_1802e96c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x518);
  }
  return;
}


