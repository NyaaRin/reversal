// 0x1802f90aa  FUN_1802f90aa
// size=41 thunk=false
// signature: undefined FUN_1802f90aa()
// status: ok


void FUN_1802f90aa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


