// 0x1802db98c  FUN_1802db98c
// size=46 thunk=false
// signature: undefined FUN_1802db98c()
// status: ok


void FUN_1802db98c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);
  }
  return;
}


