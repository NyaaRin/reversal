// 0x1802f621c  FUN_1802f621c
// size=46 thunk=false
// signature: undefined FUN_1802f621c()
// status: ok


void FUN_1802f621c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


