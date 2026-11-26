// 0x1802f648c  FUN_1802f648c
// size=41 thunk=false
// signature: undefined FUN_1802f648c()
// status: ok


void FUN_1802f648c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 400);
  }
  return;
}


