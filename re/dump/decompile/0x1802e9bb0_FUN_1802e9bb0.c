// 0x1802e9bb0  FUN_1802e9bb0
// size=38 thunk=false
// signature: undefined FUN_1802e9bb0()
// status: ok


void FUN_1802e9bb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x20) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);
  }
  return;
}


