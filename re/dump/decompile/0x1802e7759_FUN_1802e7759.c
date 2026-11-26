// 0x1802e7759  FUN_1802e7759
// size=46 thunk=false
// signature: undefined FUN_1802e7759()
// status: ok


void FUN_1802e7759(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


