// 0x1800a1c20  Features_Weapons_Backends_ORPWeaponBackend_vfunc23
// size=1702 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc23()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Weapons_Backends_ORPWeaponBackend_vfunc23(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  float *pfVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined8 *local_168;
  uint local_160;
  float local_15c;
  undefined8 *local_158;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  undefined8 *local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_160 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    return;
  }
  local_120 = param_1;
  local_118 = param_2;
  cVar4 = FUN_1800a0ce0();
  if (cVar4 == '\0') {
    return;
  }
  if (param_2 != *(longlong *)(param_1 + 8)) {
    return;
  }
  if (DAT_180423968 != param_2) {
    return;
  }
  if (DAT_180423988 == '\0') {
    return;
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar9 = (*pcVar1)(DAT_1803fa360,uVar5);
  if (DAT_1803fa678 == 0) {
    local_178 = (undefined8 *)0x0;
    uStack_170 = 0;
    local_168 = (undefined8 *)0x0;
    ppuVar10 = &local_178;
    uVar13 = 2;
    local_160 = 2;
  }
  else {
    ppuVar10 = (undefined8 **)FUN_18001bcd0(extraout_XMM0_Qa,&local_138);
    uVar13 = 1;
    local_160 = 1;
  }
  puVar3 = local_168;
  plVar2 = *ppuVar10;
  local_110 = plVar2;
  puStack_108 = ppuVar10[1];
  puVar11 = ppuVar10[2];
  local_158 = puVar11;
  local_100 = puVar11;
  if (((uVar13 & 2) != 0) &&
     (uVar13 = uVar13 & 0xfffffffd, local_160 = uVar13, local_178 != (undefined8 *)0x0)) {
    (**(code **)*local_178)();
    DAT_1803fa330 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      DAT_1803fa330 = local_158;
    }
    DAT_1803fa338 = puVar3 != (undefined8 *)0x0;
    DAT_1803fa339 = CONCAT13(uStack_16c,uStack_170._1_3_);
    DAT_1803fa33d = uStack_16b;
    DAT_1803fa33f = uStack_169;
  }
  if ((uVar13 & 1) != 0) {
    local_160 = uVar13 & 0xfffffffe;
    if ((undefined8 *)CONCAT44(fStack_134,local_138) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(fStack_134,local_138))();
      DAT_1803fa338 = local_128 != (undefined8 *)0x0;
      DAT_1803fa330 = local_158;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_128;
      }
      DAT_1803fa339 = CONCAT13(uStack_16c,uStack_170._1_3_);
      DAT_1803fa33d = uStack_16b;
      DAT_1803fa33f = uStack_169;
    }
  }
  plVar14 = local_110;
  if ((((lVar9 == 0) || (plVar14 = plVar2, plVar2 == (longlong *)0x0)) || (plVar2[1] == 0)) ||
     ((DAT_1803fb098 == 0 || (DAT_1803faee8 == 0)))) {
    if (plVar14 == (longlong *)0x0) {
      return;
    }
  }
  else {
    cVar4 = FUN_180071d10(&local_148,&local_138);
    if (cVar4 != '\0') {
      puVar11 = (undefined8 *)FUN_18001d350(lVar9);
      local_98 = *puVar11;
      local_90 = *(undefined4 *)(puVar11 + 1);
      pfVar12 = (float *)FUN_18001c430(lVar9,&local_178);
      FUN_1802d3e70(&local_98,&local_f8,&local_c8,&local_e8);
      local_15c = local_148 * local_f0 + pfVar12[2] + local_144 * local_c0 + local_140 * local_e0;
      local_150 = local_148 * local_f4 + pfVar12[1] + local_144 * local_c4 + local_140 * local_e4;
      local_a8 = local_148 * local_f8 + *pfVar12 + local_144 * local_c8 + local_140 * local_e8;
      local_b0 = fStack_134 * local_c0 + local_138 * local_f0 + local_130 * local_e0;
      local_b4 = fStack_134 * local_c4 + local_138 * local_f4 + local_130 * local_e4;
      local_b8 = fStack_134 * local_c8 + local_138 * local_f8 + local_130 * local_e8;
      local_a4 = local_150;
      local_a0 = local_15c;
      if ((((((uint)local_a8 & 0x7f800000) == 0x7f800000) ||
           (((uint)local_150 & 0x7f800000) == 0x7f800000)) ||
          ((((uint)local_15c & 0x7f800000) == 0x7f800000 ||
           (((((uint)local_b8 & 0x7f800000) == 0x7f800000 ||
             (((uint)local_b4 & 0x7f800000) == 0x7f800000)) ||
            (((uint)local_b0 & 0x7f800000) == 0x7f800000)))))) ||
         (local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0 < DAT_180380938)) {
        (**(code **)*plVar2)(plVar2);
        local_100 = local_158;
      }
      else {
        local_d4 = 0;
        local_d8 = 0;
        FUN_1802d4540(&local_b8,&local_d8);
        iVar6 = (**(code **)*plVar2)(plVar2);
        local_15c = (float)iVar6;
        FUN_180023e60(plVar2,0);
        uVar5 = (**(code **)*plVar2)(plVar2);
        FUN_18002db10(plVar2[1],uVar5,"TPIK_CamPos");
        uVar7 = (**(code **)(*plVar2 + 0x118))(plVar2);
        *(undefined4 *)(param_1 + 0x68) = uVar7;
        FUN_18002db10(plVar2[1],uVar5,"TPIK_CamAng");
        uVar7 = (**(code **)(*plVar2 + 0x118))(plVar2);
        *(undefined4 *)(param_1 + 0x6c) = uVar7;
        *(longlong *)(param_1 + 0x60) = plVar2[1];
        *(undefined4 *)(param_1 + 0x70) = 1;
        (**(code **)(*plVar2 + 0x188))(plVar2,&local_a8);
        FUN_18002da40(plVar2[1],uVar5,"TPIK_CamPos");
        (**(code **)(*plVar2 + 0x180))(plVar2,&local_d8);
        FUN_18002da40(plVar2[1],uVar5,"TPIK_CamAng");
        iVar8 = (**(code **)*plVar2)(plVar2);
        if (iVar6 < iVar8) {
          puVar11 = (undefined8 *)*plVar2;
          iVar8 = (*(code *)*puVar11)(plVar2);
          (*(code *)puVar11[2])(plVar2,iVar8 - iVar6);
        }
        (**(code **)*plVar2)(plVar2);
      }
      goto LAB_1800a1e6a;
    }
  }
  (**(code **)*plVar14)(plVar14);
  local_100 = puVar11;
LAB_1800a1e6a:
  if (local_100 != (undefined8 *)0x0) {
    local_158 = local_100;
  }
  DAT_1803fa33f = uStack_169;
  DAT_1803fa33d = uStack_16b;
  DAT_1803fa339 = CONCAT13(uStack_16c,uStack_170._1_3_);
  DAT_1803fa338 = local_100 != (undefined8 *)0x0;
  DAT_1803fa330 = local_158;
  return;
}


