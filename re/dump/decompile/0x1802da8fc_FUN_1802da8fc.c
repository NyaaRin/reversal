// 0x1802da8fc  FUN_1802da8fc
// size=43 thunk=false
// signature: undefined FUN_1802da8fc()
// status: ok


void FUN_1802da8fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


