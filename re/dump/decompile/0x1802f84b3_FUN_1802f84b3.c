// 0x1802f84b3  FUN_1802f84b3
// size=41 thunk=false
// signature: undefined FUN_1802f84b3()
// status: ok


void FUN_1802f84b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x40) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


