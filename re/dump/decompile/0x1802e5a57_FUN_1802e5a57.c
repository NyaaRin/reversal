// 0x1802e5a57  FUN_1802e5a57
// size=41 thunk=false
// signature: undefined FUN_1802e5a57()
// status: ok


void FUN_1802e5a57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3f0);
  }
  return;
}


