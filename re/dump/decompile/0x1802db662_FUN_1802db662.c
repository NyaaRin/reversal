// 0x1802db662  FUN_1802db662
// size=38 thunk=false
// signature: undefined FUN_1802db662()
// status: ok


void FUN_1802db662(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


