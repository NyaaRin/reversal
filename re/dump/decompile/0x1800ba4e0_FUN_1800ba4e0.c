// 0x1800ba4e0  FUN_1800ba4e0
// size=1463 thunk=false
// signature: undefined FUN_1800ba4e0()
// status: ok


undefined8 * FUN_1800ba4e0(undefined8 *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  code *pcVar13;
  longlong lVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 *local_res18;
  undefined8 *local_res20;
  float fStack_15c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 *local_118;
  undefined8 *local_110;
  float *local_108;
  int *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *param_1 = 0;
  puVar12 = param_1 + 2;
  *(undefined4 *)puVar12 = 0;
  pfVar1 = (float *)((longlong)param_1 + 0xc);
  *pfVar1 = 0.0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(int *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  cVar5 = FUN_1800b81b0();
  if (cVar5 == '\0') {
    return param_1;
  }
  if (param_2 == (longlong *)0x0) {
    return param_1;
  }
  if (DAT_1803fa608 == 0) {
    return param_1;
  }
  local_110 = puVar12;
  local_108 = pfVar1;
  local_100 = (int *)(param_1 + 3);
  local_f8 = (undefined4 *)((longlong)param_1 + 0x14);
  local_f0 = (undefined4 *)((longlong)param_1 + 0x1c);
  cVar5 = FUN_1800b86f0();
  if (cVar5 != '\0') {
    return param_1;
  }
  plVar8 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
  if (plVar8 == (longlong *)0x0) {
    return param_1;
  }
  iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
  local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,iVar6);
  if (iVar6 < 1) {
    return param_1;
  }
  if (*(int *)(DAT_1803fa608 + 0x1c) < iVar6) {
    return param_1;
  }
  if (0x80 < iVar6) {
    return param_1;
  }
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (iVar7 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar6 == iVar7)) {
    return param_1;
  }
  puVar9 = (undefined4 *)FUN_18001d620(param_2);
  pfVar2 = (float *)(puVar9 + 1);
  local_118 = puVar9;
  fVar16 = (float)FUN_1800b9e90(iVar6,*pfVar2);
  local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,fVar16);
  uVar10 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar10 = FUN_180241610(uVar10,0x3d5b6f9e4e0af044);
  pcVar11 = (char *)FUN_1801fcfc0(uVar10);
  if ((*pcVar11 == '\0') || (*(char *)(&DAT_180561188 + (longlong)iVar6 * 0xb4) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((fVar16 == 0.0) && (!bVar3)) {
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = *puVar9;
  *pfVar1 = *pfVar2;
  *(undefined4 *)puVar12 = puVar9[2];
  fVar17 = (float)FUN_1802d3e00(fVar16 + *pfVar2);
  *pfVar2 = fVar17;
  if (bVar3) {
    *puVar9 = 0;
  }
  if ((fVar16 != 0.0) && (cVar5 = FUN_1800ba490(), cVar5 != '\0')) {
    local_138 = 0;
    local_130 = 0xffffffff;
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    local_120 = 0;
    iVar6 = FUN_1800ba250();
    local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,iVar6);
    if (0 < iVar6) {
      plVar8 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
      uVar10 = (**(code **)(*plVar8 + 0x48))(plVar8);
      cVar5 = FUN_1800ba0f0(uVar10,&local_138);
      if (cVar5 != '\0') {
        local_res18 = (undefined8 *)((ulonglong)local_res18 & 0xffffffff00000000);
        puVar12 = (undefined8 *)FUN_18001d350(param_2);
        uVar4 = local_130;
        uVar10 = *puVar12;
        cVar5 = FUN_1800ba390(param_2,iVar6,local_130,&local_res18);
        if (cVar5 != '\0') {
          fStack_15c = (float)((ulonglong)uVar10 >> 0x20);
          uVar18 = FUN_1802d3e00(fStack_15c - *pfVar2);
          uVar18 = FUN_1800ba3d0(uVar18,&local_138);
          cVar5 = FUN_1800ba3b0(param_2,iVar6,uVar4,uVar18);
          if (cVar5 != '\0') {
            *local_100 = iVar6;
            *local_f8 = uVar4;
            *local_f0 = local_res18._0_4_;
          }
        }
      }
    }
  }
  *param_1 = param_2;
  if (DAT_1803ff11c == '\0') {
    DAT_1803ff11c = '\x01';
    local_res18 = &local_e0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_18001d080(&local_e0,
                  "8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
                  ,0x53);
    local_res20 = &local_c0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_18001d080(&local_c0,"client.dll",10);
    pcVar13 = (code *)FUN_180015f40(&local_c0,&local_e0);
    if (pcVar13 == (code *)0x0) {
      local_res18 = &local_a0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_e8 = pcVar13;
      FUN_18001d080(&local_a0,
                    "FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3",0x45);
      local_res20 = &local_80;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_18001d080(&local_80,"client.dll",10);
      lVar14 = FUN_180015f40(&local_80,&local_a0);
      if ((lVar14 == 0) ||
         (pcVar13 = (code *)(lVar14 + -6), local_e8 = pcVar13, pcVar13 == (code *)0x0)) {
        FUN_180014410(&DAT_18033fcf0);
        goto LAB_1800baa38;
      }
    }
    iVar6 = *(int *)(pcVar13 + 10);
    iVar7 = *(int *)(pcVar13 + 0x1b);
    if (((iVar6 - 0x101U < 0x3eff) && (iVar7 - 0x101U < 0x3eff)) && (iVar7 != iVar6)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((iVar6 == 0x1718) && (iVar7 == 0x1a88)) {
      pcVar11 = " [matches the documented layout]";
    }
    else {
      pcVar11 = "";
    }
    pcVar15 = "REJECTED (offsets outside the bone block)";
    if (bVar3) {
      pcVar15 = "accepted";
    }
    local_e8 = pcVar13;
    FUN_180014410(&DAT_18033fde0,pcVar13,iVar6,iVar7,pcVar15,pcVar11);
    if (bVar3) {
      DAT_1803fead8 = pcVar13;
    }
  }
LAB_1800baa38:
  if (DAT_1803fead8 != (code *)0x0) {
    (*DAT_1803fead8)(param_2);
  }
  return param_1;
}


