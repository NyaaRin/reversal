// 0x180169a60  Features_Visual_ESP_Editor_Elements_CircleElement_vfunc04
// size=447 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_CircleElement_vfunc04()
// status: ok


void Features_Visual_ESP_Editor_Elements_CircleElement_vfunc04(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined4 local_40 [4];
  
  FUN_1802aac00("Color");
  FUN_1802bac60("##circle_color",param_1 + 0x40,0x40020);
  FUN_1802aac00("Radius");
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_48[0] = 0x42c80000;
  local_40[0] = 0x40a00000;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  FUN_1801a6c50("##circle_radius",8,param_1 + 0x58,local_40,local_48,&DAT_180350b28,1);
  FUN_1802aac00("Segments");
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  local_40[0] = 0x40;
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  local_48[0] = 6;
  FUN_1801a6c50("##circle_segments",4,param_1 + 0x5c,local_48,local_40,&DAT_18033f570,1);
  FUN_1801a0b60("Filled##circ",param_1 + 0x54);
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_1802aac00("Thickness");
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    local_40[0] = 10;
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    local_48[0] = 1;
    FUN_1801a6c50("##circle_thickness",4,param_1 + 0x50,local_48,local_40,&DAT_18033f570,1);
  }
  return;
}


