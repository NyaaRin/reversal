// 0x1802e76fd  FUN_1802e76fd
// size=46 thunk=false
// signature: undefined FUN_1802e76fd()
// status: ok


void FUN_1802e76fd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x800) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


