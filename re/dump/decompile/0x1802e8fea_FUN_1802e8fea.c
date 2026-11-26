// 0x1802e8fea  FUN_1802e8fea
// size=46 thunk=false
// signature: undefined FUN_1802e8fea()
// status: ok


void FUN_1802e8fea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x100) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


