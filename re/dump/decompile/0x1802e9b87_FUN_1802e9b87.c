// 0x1802e9b87  FUN_1802e9b87
// size=41 thunk=false
// signature: undefined FUN_1802e9b87()
// status: ok


void FUN_1802e9b87(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x10) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x638);
  }
  return;
}


