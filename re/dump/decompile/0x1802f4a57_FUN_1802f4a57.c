// 0x1802f4a57  FUN_1802f4a57
// size=43 thunk=false
// signature: undefined FUN_1802f4a57()
// status: ok


void FUN_1802f4a57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


