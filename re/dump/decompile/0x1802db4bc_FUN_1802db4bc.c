// 0x1802db4bc  FUN_1802db4bc
// size=41 thunk=false
// signature: undefined FUN_1802db4bc()
// status: ok


void FUN_1802db4bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


