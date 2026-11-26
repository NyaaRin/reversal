// 0x1802dbcca  FUN_1802dbcca
// size=43 thunk=false
// signature: undefined FUN_1802dbcca()
// status: ok


void FUN_1802dbcca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


