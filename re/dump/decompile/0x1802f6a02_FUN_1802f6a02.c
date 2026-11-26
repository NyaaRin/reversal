// 0x1802f6a02  FUN_1802f6a02
// size=41 thunk=false
// signature: undefined FUN_1802f6a02()
// status: ok


void FUN_1802f6a02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5b0);
  }
  return;
}


