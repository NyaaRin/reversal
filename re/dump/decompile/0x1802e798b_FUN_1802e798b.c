// 0x1802e798b  FUN_1802e798b
// size=41 thunk=false
// signature: undefined FUN_1802e798b()
// status: ok


void FUN_1802e798b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x240);
  }
  return;
}


