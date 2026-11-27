// 0x180169760  Features_Visual_ESP_Editor_Elements_BoxElement_vfunc04
// size=355 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_BoxElement_vfunc04()
// status: ok


void Features_Visual_ESP_Editor_Elements_BoxElement_vfunc04(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  
  FUN_1802aac00("Color");
  FUN_1802bac60("##box_color",param_1 + 0x48,0x40020);
  FUN_1802aac00("Rounding");
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_28[0] = 0x41f00000;
  local_20[0] = 0;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  FUN_1801a6c50("##box_rounding",8,param_1 + 0x58,local_20,local_28,&DAT_180360afc,1);
  FUN_1801a0b60("Filled",param_1 + 0x60);
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_1802aac00("Thickness");
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    local_20[0] = 10;
    local_28[0] = 1;
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    FUN_1801a6c50("##box_thickness",4,param_1 + 0x5c,local_28,local_20,&DAT_18033f570,1);
  }
  return;
}


