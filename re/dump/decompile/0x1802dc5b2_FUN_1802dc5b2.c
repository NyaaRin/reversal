// 0x1802dc5b2  FUN_1802dc5b2
// size=41 thunk=false
// signature: undefined FUN_1802dc5b2()
// status: ok


void FUN_1802dc5b2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


