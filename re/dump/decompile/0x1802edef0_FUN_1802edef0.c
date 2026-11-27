// 0x1802edef0  FUN_1802edef0
// size=47 thunk=false
// signature: undefined FUN_1802edef0()
// status: ok


void FUN_1802edef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 200));
  }
  return;
}


