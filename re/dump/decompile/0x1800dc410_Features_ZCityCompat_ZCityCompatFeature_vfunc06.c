// 0x1800dc410  Features_ZCityCompat_ZCityCompatFeature_vfunc06
// size=961 thunk=false
// signature: undefined Features_ZCityCompat_ZCityCompatFeature_vfunc06()
// status: ok


void Features_ZCityCompat_ZCityCompatFeature_vfunc06(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  uint in_stack_ffffffffffffff68;
  uint3 uVar14;
  uint in_stack_ffffffffffffff70;
  uint3 uVar15;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  longlong local_58;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  undefined8 *local_48 [2];
  longlong local_38;
  
  if (DAT_1803fa678 == 0) {
    return;
  }
  plVar10 = (longlong *)FUN_18001bcd0(param_1,local_48);
  lVar2 = *plVar10;
  uVar13 = extraout_XMM0_Qa;
  if (local_48[0] != (undefined8 *)0x0) {
    uVar13 = (**(code **)*local_48[0])();
    if (local_38 == 0) {
      DAT_1803fa330 = local_58;
      DAT_1803fa339 = local_4f;
      DAT_1803fa33d = local_4b;
      local_59 = local_49;
    }
    else {
      DAT_1803fa330 = local_38;
      DAT_1803fa339 = local_5f;
      DAT_1803fa33d = local_5b;
    }
    DAT_1803fa338 = local_38 != 0;
    DAT_1803fa33f = local_59;
  }
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 8) == 0) {
    return;
  }
  FUN_1800db480(uVar13,lVar2);
  FUN_1800d9e00(lVar2);
  uVar13 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar13 = FUN_180241610(uVar13,0xb180266dc2efa3d2);
  pcVar11 = (char *)FUN_1801fcfc0(uVar13);
  if (*pcVar11 != '\0') {
    FUN_180076b50();
  }
  iVar9 = -1;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar12 = (*pcVar3)(DAT_1803fa360,uVar8);
  if ((((lVar12 != 0) && (cVar4 = FUN_18001c330(lVar12), cVar4 != '\0')) &&
      (plVar10 = (longlong *)FUN_18001dbf0(lVar12), plVar10 != (longlong *)0x0)) &&
     (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10), plVar10 != (longlong *)0x0)) {
    iVar9 = (**(code **)(*plVar10 + 0x48))(plVar10);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((0 < iVar1) && (iVar1 != iVar9)) {
    in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffff00;
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffff00;
    FUN_1800da980(param_1,lVar2,iVar1,0,in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
    DAT_180423975 = 0;
  }
  if (iVar9 < 1) {
    return;
  }
  cVar4 = FUN_1800da0a0();
  if (((cVar4 == '\0') || (cVar5 = FUN_1800da0f0(), cVar5 == '\0')) ||
     (cVar5 = FUN_1800da190(), cVar5 == '\0')) {
    cVar5 = '\0';
    if (cVar4 != '\0') goto LAB_1800dc670;
LAB_1800dc687:
    cVar6 = '\0';
    if (cVar4 != '\0') goto LAB_1800dc68e;
  }
  else {
    cVar5 = '\x01';
LAB_1800dc670:
    cVar6 = FUN_1800da140();
    if ((cVar6 == '\0') || (cVar6 = FUN_1800da1e0(), cVar6 == '\0')) goto LAB_1800dc687;
    cVar6 = '\x01';
LAB_1800dc68e:
    cVar4 = FUN_1800da0f0();
    if ((cVar4 != '\0') && (cVar4 = FUN_1800da230(), cVar4 != '\0')) {
      cVar4 = '\x01';
      goto LAB_1800dc6a8;
    }
  }
  cVar4 = '\0';
LAB_1800dc6a8:
  uVar15 = (uint3)(in_stack_ffffffffffffff70 >> 8);
  uVar14 = (uint3)(in_stack_ffffffffffffff68 >> 8);
  if (((cVar5 == '\0') && (cVar6 == '\0')) && (cVar4 == '\0')) {
    if (*(int *)(param_1 + 0x20) < 1) {
      DAT_180423975 = 0;
      return;
    }
    FUN_1800da980(param_1,lVar2,iVar9,0,(uint)uVar14 << 8,(uint)uVar15 << 8);
  }
  else {
    cVar7 = FUN_1800da980(param_1,lVar2,iVar9,cVar5,CONCAT31(uVar14,cVar6),CONCAT31(uVar15,cVar4));
    if (cVar7 != '\0') {
      if (((*(int *)(param_1 + 0x20) != iVar9) || (*(char *)(param_1 + 0x24) != cVar5)) ||
         ((*(char *)(param_1 + 0x25) != cVar6 ||
          ((*(char *)(param_1 + 0x26) != cVar4 ||
           (*(char *)(param_1 + 0x28) != *(char *)(param_1 + 0x27))))))) {
        if ((cVar5 == '\0') || (cVar6 == '\0')) {
          pcVar11 = "RecoilMul=0";
          if (cVar5 != '\0') {
            pcVar11 = "spray fields + scoped eye recoil";
          }
        }
        else if (*(char *)(param_1 + 0x27) == '\0') {
          pcVar11 = "fields (shared animation preserved)";
        }
        else {
          pcVar11 = "norecoil=1 (pack gate)";
        }
        uVar8 = FUN_1800da280();
        FUN_180014410("[ZCITY-KILL] idx=%d spread=%d recoil=%d cone=%d gate=%d -> %s\n",iVar9,cVar5,
                      cVar6,cVar4,uVar8,pcVar11);
      }
      *(int *)(param_1 + 0x20) = iVar9;
      *(char *)(param_1 + 0x24) = cVar5;
      *(char *)(param_1 + 0x25) = cVar6;
      *(char *)(param_1 + 0x26) = cVar4;
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x27);
      if (DAT_1803fa608 == 0) {
        DAT_1803e9220 = 0;
        DAT_180423975 = cVar5;
        return;
      }
      DAT_1803e9220 = *(undefined8 *)(DAT_1803fa608 + 0x10);
      DAT_180423975 = cVar5;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  DAT_180423975 = 0;
  return;
}


