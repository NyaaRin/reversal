// 0x1802dc1df  FUN_1802dc1df
// size=41 thunk=false
// signature: undefined FUN_1802dc1df()
// status: ok


void FUN_1802dc1df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x340);
  }
  return;
}


