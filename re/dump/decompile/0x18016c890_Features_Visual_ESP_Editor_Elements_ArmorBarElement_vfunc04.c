// 0x18016c890  Features_Visual_ESP_Editor_Elements_ArmorBarElement_vfunc04
// size=71 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_ArmorBarElement_vfunc04()
// status: ok


void Features_Visual_ESP_Editor_Elements_ArmorBarElement_vfunc04(longlong param_1)

{
  FUN_1801a0b60("Combine with HP bar",param_1 + 0xb8);
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_1802aac00("Shares the HP bar\'s track (top half).");
  }
  Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc04(param_1);
  return;
}


