// 0x1803060d4  FUN_1803060d4
// size=41 thunk=false
// signature: undefined FUN_1803060d4()
// status: ok


void FUN_1803060d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


