// 0x1802e92f0  FUN_1802e92f0
// size=46 thunk=false
// signature: undefined FUN_1802e92f0()
// status: ok


void FUN_1802e92f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x138);
  }
  return;
}


