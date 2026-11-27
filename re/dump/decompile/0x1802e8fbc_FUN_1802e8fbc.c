// 0x1802e8fbc  FUN_1802e8fbc
// size=46 thunk=false
// signature: undefined FUN_1802e8fbc()
// status: ok


void FUN_1802e8fbc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x80) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


