// 0x1802f965b  FUN_1802f965b
// size=41 thunk=false
// signature: undefined FUN_1802f965b()
// status: ok


void FUN_1802f965b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


