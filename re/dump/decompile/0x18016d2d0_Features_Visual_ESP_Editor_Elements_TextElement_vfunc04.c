// 0x18016d2d0  Features_Visual_ESP_Editor_Elements_TextElement_vfunc04
// size=348 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_TextElement_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Visual_ESP_Editor_Elements_TextElement_vfunc04(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  code *local_48;
  longlong **local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  FUN_1801a0b60("Color by Job",param_1 + 0x81);
  if (*(char *)(param_1 + 0x81) == '\0') {
    FUN_1802aac00("Color");
    FUN_1802bac60("##txt_color",param_1 + 0x40,0x40020);
  }
  FUN_1801a0b60("Shadow##txt",param_1 + 0x80);
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_1802aac00("Shadow color");
    FUN_1802bac60("##txt_shadow",param_1 + 0x50,0x40020);
  }
  FUN_1802aac00(&DAT_180342d00);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_30 = (longlong *)(param_1 + 0x60);
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar2 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
  local_28 = 0;
  local_20 = 0;
  plVar3 = local_30;
  if (0xf < *(ulonglong *)(param_1 + 0x78)) {
    plVar3 = (longlong *)*local_30;
  }
  local_38 = 0;
  local_40 = &local_30;
  local_48 = FUN_1802d2b00;
  local_58 = &local_38;
  local_50 = 0x400000;
  FUN_1802b74e0("##txt_text",0,plVar3,(int)*(ulonglong *)(param_1 + 0x78) + 1);
  return;
}


