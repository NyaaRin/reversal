// 0x18016aa90  Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc04
// size=664 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Visual_ESP_Editor_Elements_BBoxElement_vfunc04(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined *local_90;
  undefined1 local_88;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  FUN_18016a940("##bbox_size_mode");
  local_68 = "Full box";
  local_60 = "Corner box";
  local_58 = "Top + bottom";
  local_50 = "Side rails";
  FUN_1802aac00("Style");
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_98 = (undefined4 *)CONCAT44(local_98._4_4_,4);
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  FUN_1802b1200("##bbox_style",param_1 + 0x7c);
  FUN_1801a0b60("Color by Job",param_1 + 0x80);
  if (*(char *)(param_1 + 0x80) == '\0') {
    FUN_1802aac00("Color");
    FUN_1802bac60("##bbox_color",param_1 + 0x40,0x40020);
  }
  FUN_1801a0b60("Show Protected",param_1 + 0x7a);
  if (*(char *)(param_1 + 0x7a) != '\0') {
    FUN_1802aac00("Protected color");
    FUN_1802bac60("##bbox_protected",param_1 + 0x60,0x40020);
  }
  FUN_1801a0b60("Outline",param_1 + 0x79);
  if (*(char *)(param_1 + 0x79) != '\0') {
    FUN_1802aac00("Outline color");
    FUN_1802bac60("##bbox_outline",param_1 + 0x50,0x40020);
  }
  FUN_1802aac00("Rounding");
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  local_88 = 1;
  local_78[0] = 0x41700000;
  local_70[0] = 0;
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  local_90 = &DAT_180360afc;
  local_98 = local_78;
  FUN_1801a6c50("##bbox_rounding",8,param_1 + 0x70,local_70);
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_1801a0b60("Filled##bbox",param_1 + 0x78);
  }
  if ((*(char *)(param_1 + 0x78) == '\0') || (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_1802aac00("Thickness");
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    local_88 = 1;
    local_70[0] = 5;
    local_78[0] = 1;
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    local_90 = &DAT_18033f570;
    local_98 = local_70;
    FUN_1801a6c50("##bbox_thickness",4,param_1 + 0x74,local_78);
  }
  return;
}


