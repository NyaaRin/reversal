// 0x1802e91ae  FUN_1802e91ae
// size=46 thunk=false
// signature: undefined FUN_1802e91ae()
// status: ok


void FUN_1802e91ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf8);
  }
  return;
}


