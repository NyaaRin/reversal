// 0x180170610  Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc04
// size=2049 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Visual_ESP_Editor_Elements_DynamicTextElement_vfunc04(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined *local_a0;
  code *local_98;
  longlong **local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  FUN_1801a0b60("Color by Job",param_1 + 0x81);
  if (*(char *)(param_1 + 0x81) == '\0') {
    FUN_1802aac00("Color");
    FUN_1802bac60("##dyn_color",param_1 + 0x40,0x40020);
  }
  FUN_1801a0b60("Shadow##dyn",param_1 + 0x80);
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_1802aac00("Shadow color");
    FUN_1802bac60("##dyn_shadow",param_1 + 0x50,0x40020);
  }
  FUN_1802aac00(&DAT_180361720);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar3 + 0xec0);
  puVar1 = (uint *)(lVar5 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
  puVar8 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 200) * 0x20 + DAT_1803fa808);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  cVar4 = FUN_1802b0590("##dyn_type",puVar8,0);
  iVar9 = 0;
  if (cVar4 != '\0') {
    if (DAT_1803fa810 - DAT_1803fa808 >> 5 != 0) {
      do {
        iVar2 = *(int *)(param_1 + 200);
        local_80 = 0;
        puVar8 = (undefined8 *)((longlong)iVar9 * 0x20 + DAT_1803fa808);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        cVar4 = FUN_1802c1850(puVar8,iVar2 == iVar9,0,&local_80);
        if (cVar4 != '\0') {
          *(int *)(param_1 + 200) = iVar9;
        }
        if (iVar2 == iVar9) {
          FUN_180279ea0();
        }
        iVar9 = iVar9 + 1;
      } while ((ulonglong)(longlong)iVar9 < (ulonglong)(DAT_1803fa810 - DAT_1803fa808 >> 5));
    }
    FUN_1802b1130();
  }
  if (*(int *)(param_1 + 200) == 0xe) {
    FUN_1802aac00("Script slot");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_98 = (code *)CONCAT71(local_98._1_7_,1);
    local_a0 = &DAT_18033f570;
    local_88[0] = 4;
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    local_58[0] = *(int *)(param_1 + 0xe0);
    local_a8 = (undefined8 *)local_88;
    local_80 = CONCAT44(local_80._4_4_,1);
    cVar4 = FUN_1801a6c50("##dyn_script_slot",4,local_58,&local_80);
    if (cVar4 != '\0') {
      local_80 = CONCAT44(local_80._4_4_,1);
      piVar6 = (int *)&local_80;
      if (0 < local_58[0]) {
        piVar6 = local_58;
      }
      if (4 < local_58[0]) {
        piVar6 = &DAT_18033e410;
      }
      *(int *)(param_1 + 0xe0) = *piVar6;
    }
    cVar4 = FUN_18026ee60(0);
    if (cVar4 != '\0') {
      FUN_180280d00(
                   "Which row a script fills:\nmayrr.esp.SetPlayerText(index, slot, text).\nEmpty slot draws nothing."
                   );
    }
  }
  if (*(int *)(param_1 + 200) == 0xb) {
    FUN_1802aac00("Netvar template");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_70 = (longlong *)(param_1 + 0x180);
    local_68 = 0;
    local_60 = 0;
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    plVar10 = local_70;
    if (0xf < *(ulonglong *)(param_1 + 0x198)) {
      plVar10 = (longlong *)*local_70;
    }
    local_90 = &local_70;
    local_80 = 0;
    local_98 = FUN_1802d2b00;
    local_a8 = &local_80;
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x400000);
    FUN_1802b74e0("##dyn_netvar",0,plVar10,(int)*(ulonglong *)(param_1 + 0x198) + 1);
    lVar5 = FUN_18016d630(param_1);
    if (*(longlong *)(param_1 + 400) == 0) {
      pcVar7 = "e.g. {job}  or  {UserGroup@ba.ranks.Stored.Name}";
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') {
        plVar10 = (longlong *)(lVar5 + 0x20);
        if (0xf < *(ulonglong *)(lVar5 + 0x38)) {
          plVar10 = (longlong *)*plVar10;
        }
        local_80 = _DAT_1803816d0;
        uStack_78 = _UNK_1803816d8;
        FUN_1802aabb0(&local_80,&DAT_1803431ac,plVar10);
        goto LAB_180170986;
      }
      pcVar7 = "Reads the sources in Network > Netvars.";
    }
    FUN_1802aac00(pcVar7);
  }
LAB_180170986:
  if (*(int *)(param_1 + 200) == 0xd) {
    FUN_1802aac00("Max lines");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_98 = (code *)CONCAT71(local_98._1_7_,1);
    local_a0 = &DAT_18033f570;
    local_80 = CONCAT44(local_80._4_4_,0x18);
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    local_58[0] = *(int *)(param_1 + 0x100);
    local_a8 = &local_80;
    local_88[0] = 1;
    cVar4 = FUN_1801a6c50("##dyn_inv_max",4,local_58,local_88);
    if (cVar4 != '\0') {
      *(int *)(param_1 + 0x100) = local_58[0];
    }
    cVar4 = FUN_18026ee60(0);
    if (cVar4 != '\0') {
      FUN_180280d00(
                   "Hard ceiling on printed rows.\nWith more weapons than fit, the last row becomes \"+N\"."
                   );
    }
    FUN_1802aac00("Align");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,4);
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    local_88[0] = *(undefined4 *)(param_1 + 0x108);
    cVar4 = FUN_1802b1200("##dyn_inv_align",local_88);
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x108) = local_88[0];
    }
    cVar4 = FUN_18026ee60(0);
    if (cVar4 != '\0') {
      FUN_180280d00(&DAT_1803618d0);
    }
    FUN_1802aac00("Weapon name");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,2);
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    local_88[0] = *(undefined4 *)(param_1 + 0x104);
    cVar4 = FUN_1802b1200("##dyn_inv_name",local_88);
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x104) = local_88[0];
    }
    FUN_1801a0b60("Show ammo##dyn_inv",param_1 + 0x10c);
    FUN_1801a0b60("Mark held weapon##dyn_inv",param_1 + 0x10e);
    FUN_1801a0b60("Hide held weapon##dyn_inv",param_1 + 0x10d);
    cVar4 = FUN_18026ee60(0);
    if (cVar4 != '\0') {
      FUN_180280d00(&DAT_180361a10);
    }
    FUN_1802aac00("Ignore");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_70 = (longlong *)(param_1 + 0x110);
    local_68 = 0;
    local_60 = 0;
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    plVar10 = local_70;
    if (0xf < *(ulonglong *)(param_1 + 0x128)) {
      plVar10 = (longlong *)*local_70;
    }
    local_90 = &local_70;
    local_80 = 0;
    local_98 = FUN_1802d2b00;
    local_a8 = &local_80;
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x400000);
    FUN_1802b74e0("##dyn_inv_ignore",0,plVar10,(int)*(ulonglong *)(param_1 + 0x128) + 1);
    pcVar7 = "e.g. physgun, camera, keys";
    if (*(longlong *)(param_1 + 0x120) != 0) {
      pcVar7 = "Name or class, anywhere. * ? = mask.";
    }
    FUN_1802aac00(pcVar7);
    FUN_1802aac00("Highlight");
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    local_70 = (longlong *)(param_1 + 0x130);
    local_68 = 0;
    local_60 = 0;
    puVar1 = (uint *)(lVar5 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
    plVar10 = local_70;
    if (0xf < *(ulonglong *)(param_1 + 0x148)) {
      plVar10 = (longlong *)*local_70;
    }
    local_90 = &local_70;
    local_80 = 0;
    local_98 = FUN_1802d2b00;
    local_a8 = &local_80;
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x400000);
    FUN_1802b74e0("##dyn_inv_watch",0,plVar10,(int)*(ulonglong *)(param_1 + 0x148) + 1);
    pcVar7 = "e.g. knife, ttt_, c4, awp";
    if (*(longlong *)(param_1 + 0x140) != 0) {
      pcVar7 = "Name or class, anywhere. * ? = mask.";
    }
    FUN_1802aac00(pcVar7);
    FUN_1801a0b60("Only these##dyn_inv",param_1 + 0x150);
    cVar4 = FUN_18026ee60(0);
    if (cVar4 != '\0') {
      FUN_180280d00(&DAT_180361b40);
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_1802aac00("Highlight color");
      FUN_1802bac60("##dyn_inv_watch_col",param_1 + 0x154,0x40020);
    }
  }
  FUN_1802aac00("Prefix");
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar3 + 0xec0);
  local_70 = (longlong *)(param_1 + 0x88);
  local_68 = 0;
  local_60 = 0;
  puVar1 = (uint *)(lVar5 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar5 + 0x1ed8) = 0xbf800000;
  plVar10 = local_70;
  if (0xf < *(ulonglong *)(param_1 + 0xa0)) {
    plVar10 = (longlong *)*local_70;
  }
  local_90 = &local_70;
  local_80 = 0;
  local_98 = FUN_1802d2b00;
  local_a8 = &local_80;
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x400000);
  FUN_1802b74e0("##dyn_prefix",0,plVar10,(int)*(ulonglong *)(param_1 + 0xa0) + 1);
  FUN_1802aac00("Suffix");
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  local_70 = (longlong *)(param_1 + 0xa8);
  local_68 = 0;
  local_60 = 0;
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  plVar10 = local_70;
  if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
    plVar10 = (longlong *)*local_70;
  }
  local_90 = &local_70;
  local_80 = 0;
  local_98 = FUN_1802d2b00;
  local_a8 = &local_80;
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x400000);
  FUN_1802b74e0("##dyn_suffix",0,plVar10,(int)*(ulonglong *)(param_1 + 0xc0) + 1);
  if (*(int *)(param_1 + 200) == 0xd) {
    FUN_1802aac00("Both go on EVERY row of the list.");
  }
  return;
}


