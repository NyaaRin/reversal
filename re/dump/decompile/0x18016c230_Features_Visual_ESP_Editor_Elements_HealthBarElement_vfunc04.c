// 0x18016c230  Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc04
// size=1248 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc04(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  char *local_d0;
  undefined1 local_c8;
  undefined4 local_b8 [2];
  undefined4 local_b0 [2];
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined *local_68;
  char *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 8) {
    FUN_1801a0b60("Vertical",param_1 + 0xe);
  }
  else {
    switch((int)param_1[1]) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
      bVar4 = true;
      break;
    default:
      bVar4 = false;
    }
    pcVar7 = "vertical";
    if (bVar4) {
      pcVar7 = "horizontal";
    }
    FUN_1802aac00("Direction: %s",pcVar7);
  }
  FUN_1802aac00("Thickness");
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_c8 = 1;
  local_b8[0] = 0x41400000;
  local_b0[0] = 0x3f800000;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  local_d0 = "%.0f";
  local_d8 = local_b8;
  FUN_1801a6c50("##hbar_thickness",8,(longlong)param_1 + 0x74,local_b0);
  FUN_1801a0b60("Outline##hbar_outline",param_1 + 0xf);
  FUN_1802aac00("Rounding");
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  local_c8 = 1;
  local_d0 = "%.1f px";
  local_b0[0] = 0x40c00000;
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  local_d8 = local_b0;
  local_b8[0] = 0;
  FUN_1801a6c50("##hbar_rounding",8,(longlong)param_1 + 0x7c,local_b8);
  cVar5 = FUN_18026ee60(0);
  if (cVar5 != '\0') {
    FUN_180280d00(
                 "Corner radius of the track. 0 = square ends, which is what lines\nup with a square ESP box - rounded tips read as \"not flush\" no\nmatter how exact the length is.\n\nThis used to be forced to ~2.5px with no way out; the old look is\n2.5 on this slider."
                 );
  }
  FUN_1802aac00("Length trim");
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  local_c8 = 1;
  local_d0 = "%.1f px";
  local_b0[0] = 0x41000000;
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
  local_d8 = local_b0;
  local_b8[0] = 0xc0800000;
  FUN_1801a6c50("##hbar_lentrim",8,param_1 + 0x10,local_b8);
  cVar5 = FUN_18026ee60(0);
  if (cVar5 != '\0') {
    FUN_180280d00(
                 "Shaves this many pixels off EACH end of the bar.\n\nThe box\'s stroke reach and its rounded corners are already\naccounted for; this is for the last pixel that depends on how\na given box style reads. Negative makes the bar overhang."
                 );
  }
  FUN_1801a0b60("Background##hbar_bg",(longlong)param_1 + 0x79);
  cVar5 = FUN_18026ee60(0);
  if (cVar5 != '\0') {
    FUN_180280d00(
                 "The dark plate under the fill - the bar\'s version of a text\nshadow. Off leaves only the fill (and the outline, if it is on),\nwhich is what you want over a dark model or right against the box."
                 );
  }
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    FUN_1802aac00("Background color");
    FUN_1802bac60("##hbar_bgcol",param_1 + 0xc,0x40020);
  }
  cVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  pcVar7 = "Health number";
  if (cVar5 != '\0') {
    pcVar7 = "Armor number";
  }
  FUN_1801a0b60(pcVar7,(longlong)param_1 + 0x71);
  if (*(char *)((longlong)param_1 + 0x71) != '\0') {
    FUN_1801a0b60("Only when damaged",(longlong)param_1 + 0x72);
    local_68 = &DAT_180360a40;
    local_80 = "Default";
    local_60 = "Right";
    local_78 = "On bar";
    local_90 = "Above";
    local_70 = "Auto (outer side)";
    local_88 = "Below";
    local_a8 = "Default";
    local_a0 = "On bar";
    local_98 = "Auto (outer side)";
    switch((int)param_1[1]) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
      break;
    default:
      break;
    case 8:
    }
    FUN_1802aac00("Number position");
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,5);
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    FUN_1802b1200("##hbar_textside",(longlong)param_1 + 0x84);
    iVar6 = *(int *)((longlong)param_1 + 0x84);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (4 < iVar6) {
      iVar6 = 4;
    }
    *(int *)((longlong)param_1 + 0x84) = iVar6;
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00(
                   "Default keeps the old behaviour: on the track when the bar is\nvertical, outside it when horizontal.\n\nAuto puts it outside on the side the bar is anchored to, so it\nnever ends up squeezed between the bar and the ESP box."
                   );
    }
    FUN_1802aac00("Number color");
    FUN_1802bac60("##hbar_textcolor",param_1 + 0x11,0x40020);
    FUN_1801a0b60("Number shadow##hbar_textshadow",param_1 + 0x13);
    if ((char)param_1[0x13] != '\0') {
      FUN_1802aac00("Shadow color");
      FUN_1802bac60("##hbar_textshadowcol",(longlong)param_1 + 0x9c,0x40020);
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  pcVar7 = "Full HP color";
  if (cVar5 != '\0') {
    pcVar7 = "Full armor color";
  }
  FUN_1802aac00(pcVar7);
  FUN_1802bac60("##hbar_full",param_1 + 8,0x40020);
  cVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  pcVar7 = "Low HP color";
  if (cVar5 != '\0') {
    pcVar7 = "Low armor color";
  }
  FUN_1802aac00(pcVar7);
  FUN_1802bac60("##hbar_low",param_1 + 10,0x40020);
  FUN_1802aac00("Background");
  FUN_1802bac60("##hbar_bg",param_1 + 0xc,0x40020);
  return;
}


