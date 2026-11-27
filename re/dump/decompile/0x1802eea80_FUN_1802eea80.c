// 0x1802eea80  FUN_1802eea80
// size=41 thunk=false
// signature: undefined FUN_1802eea80()
// status: ok


void FUN_1802eea80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


