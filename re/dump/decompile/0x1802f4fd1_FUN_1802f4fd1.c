// 0x1802f4fd1  FUN_1802f4fd1
// size=41 thunk=false
// signature: undefined FUN_1802f4fd1()
// status: ok


void FUN_1802f4fd1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x10) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


