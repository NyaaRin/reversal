// 0x18010d320  Features_Radar_RadarFeature_vfunc04
// size=2798 thunk=false
// signature: undefined Features_Radar_RadarFeature_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Radar_RadarFeature_vfunc04(void)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  longlong *plVar10;
  char *pcVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  int iVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_178 [32];
  float local_158;
  float local_150;
  undefined4 local_148;
  float local_138;
  float local_134;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  float local_f8 [4];
  undefined8 local_e8;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  local_100 = 0x63c2f5206022a3b5;
  local_108 = (undefined8 *)0x93fd561a96ab0c67;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_e8,&local_108);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_f8,&local_100);
  pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
  if (*pcVar11 == '\0') {
    return;
  }
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar16 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar21 = DAT_18038125c;
  lVar2 = *(longlong *)(lVar16 + 0xec0);
  uVar18 = *(undefined8 *)(lVar2 + 0x30);
  if ((float)uVar18 < DAT_1803810d0) {
    return;
  }
  local_d8._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
  if (local_d8._4_4_ < DAT_1803810d0) {
    return;
  }
  local_124 = 600.0;
  local_128 = 120.0;
  local_108 = (undefined8 *)0x93fd561a96ab0c67;
  local_100 = 0x50274704b678695f;
  local_d8 = uVar18;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_e8,&local_108);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_f8,&local_100);
  pfVar12 = (float *)FUN_180202dc0(*plVar10 + 0x28);
  fVar7 = DAT_180380bb0;
  local_11c = 1.0;
  local_120 = 0.0;
  local_108 = (undefined8 *)0x93fd561a96ab0c67;
  pfVar15 = &local_128;
  if (DAT_180381138 <= *pfVar12) {
    pfVar15 = pfVar12;
  }
  pfVar13 = &local_124;
  if (*pfVar12 <= fVar21) {
    pfVar13 = pfVar15;
  }
  fVar19 = *pfVar13;
  local_100 = 0x7ce33bb364b938d2;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_e8,&local_108);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_f8,&local_100);
  pfVar12 = (float *)FUN_180202dc0(*plVar10 + 0x28);
  local_f8[0] = 1.0;
  local_138 = 0.0;
  local_108 = (undefined8 *)0x93fd561a96ab0c67;
  pfVar15 = &local_120;
  if (0.0 <= *pfVar12) {
    pfVar15 = pfVar12;
  }
  pfVar13 = &local_11c;
  if (*pfVar12 <= fVar7) {
    pfVar13 = pfVar15;
  }
  fVar25 = *pfVar13;
  local_100 = 0x7ce33cb364b93a85;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_e8,&local_108);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_118,&local_100);
  pfVar12 = (float *)FUN_180202dc0(*plVar10 + 0x28);
  uVar18 = 0xebffbe96;
  fVar25 = ((float)local_d8 - fVar19) * fVar25;
  pfVar15 = &local_138;
  if (0.0 <= *pfVar12) {
    pfVar15 = pfVar12;
  }
  fVar22 = fVar19 + fVar25;
  local_e8 = CONCAT44(local_e8._4_4_,fVar25);
  pfVar13 = local_f8;
  if (*pfVar12 <= fVar7) {
    pfVar13 = pfVar15;
  }
  local_100 = CONCAT44(local_100._4_4_,fVar22);
  fVar24 = (local_d8._4_4_ - fVar19) * *pfVar13;
  local_e8 = CONCAT44(fVar24,fVar25);
  fVar20 = fVar24 + fVar19;
  local_100 = CONCAT44(fVar20,fVar22);
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar8 == '\0')) {
LAB_18010d6a4:
    if (*(char *)(lVar16 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar16 + 0xec0) + 0x2060),0,
                           "##Background");
    fVar1 = DAT_180380ac0;
    if (lVar14 != 0) {
      local_150 = 0.0;
      local_158 = (float)DAT_180380fe0;
      fVar23 = (fVar22 + fVar25) * DAT_180380ac0;
      fVar21 = (fVar20 + fVar24) * DAT_180380ac0;
      local_f8[1] = fVar21;
      local_f8[0] = fVar23;
      FUN_180295000(lVar14,&local_e8,&local_100,0xcd120c0a);
      local_148 = 0;
      local_150 = fVar7;
      local_138 = fVar25 + fVar7;
      local_108 = (undefined8 *)CONCAT44(fVar20 - fVar7,fVar22 - fVar7);
      local_134 = fVar24 + fVar7;
      local_158 = (float)DAT_180380fdc;
      FUN_180294f00(lVar14,&local_138,&local_108,0x16ffffff);
      local_148 = 0;
      local_150 = (float)DAT_180380c50;
      local_158 = (float)DAT_180380fe0;
      FUN_180294f00(lVar14,&local_e8,&local_100,0xaa000000);
      local_138 = fVar25 + DAT_180380d30;
      local_158 = fVar7;
      local_108 = (undefined8 *)CONCAT44(fVar21,fVar22 - DAT_180380d30);
      local_134 = fVar21;
      FUN_180294c90(lVar14,&local_138,&local_108,0x14ffffff);
      local_134 = fVar24 + DAT_180380d30;
      local_158 = fVar7;
      local_108 = (undefined8 *)CONCAT44(fVar20 - DAT_180380d30,fVar23);
      local_138 = fVar23;
      FUN_180294c90(lVar14,&local_138,&local_108,0x14ffffff);
      if (fVar1 <= fVar19 * DAT_180380a40) {
        local_150 = 6.5861e-44;
        local_158 = (float)DAT_180380f64;
        FUN_1802941e0(lVar14,local_f8,fVar19 * DAT_180380a40 - fVar1,0);
        local_150 = 7.17465e-43;
        local_158 = fVar7;
        FUN_1802929d0(lVar14,*(undefined8 *)(lVar14 + 0x58),*(undefined4 *)(lVar14 + 0x50),
                      0x10ffffff);
        *(undefined4 *)(lVar14 + 0x50) = 0;
      }
      if (fVar1 <= fVar19 * _DAT_180380a98) {
        local_150 = 8.82818e-44;
        local_158 = (float)DAT_180380f68;
        FUN_1802941e0(lVar14,local_f8,fVar19 * _DAT_180380a98 - fVar1,0);
        local_150 = 7.17465e-43;
        local_158 = fVar7;
        FUN_1802929d0(lVar14,*(undefined8 *)(lVar14 + 0x58),*(undefined4 *)(lVar14 + 0x50),0xcffffff
                     );
        *(undefined4 *)(lVar14 + 0x50) = 0;
      }
      local_138 = fVar23 + DAT_180380ec8;
      local_134 = fVar21 + DAT_180380ec8;
      local_108 = (undefined8 *)CONCAT44(fVar21 - DAT_180380f40,fVar23);
      local_f8[1] = local_134;
      local_f8[0] = fVar23 - DAT_180380ec8;
      FUN_18020dc30(lVar14 + 0x50,&local_108);
      FUN_18020dc30(lVar14 + 0x50,local_f8);
      FUN_18020dc30(lVar14 + 0x50,&local_138);
      FUN_1802938c0(lVar14,*(undefined8 *)(lVar14 + 0x58),*(undefined4 *)(lVar14 + 0x50),0xebffbe96)
      ;
      fVar21 = DAT_18038125c;
      *(undefined4 *)(lVar14 + 0x50) = 0;
    }
  }
  else {
    pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar14 = (*pcVar3)(DAT_1803fa360,uVar9);
    if (lVar14 == 0) goto LAB_18010d6a4;
  }
  if (DAT_1803fa545 == '\0') {
    DAT_18040a3a8 = 0;
    DAT_18040a3d0 = 0;
    return;
  }
  fVar19 = *(float *)(lVar2 + 0x100);
  fVar1 = *(float *)(lVar2 + 0x104);
  if ((((fVar19 < fVar25) || (fVar1 < fVar24)) || (fVar22 < fVar19)) || (fVar20 < fVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((fVar19 < fVar22 - DAT_180381004) || (fVar1 < fVar20 - DAT_180381004)) ||
     ((fVar22 < fVar19 || (fVar20 < fVar1)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)(lVar2 + 0x108) == '\0') {
    DAT_18040a3a8 = '\0';
    DAT_18040a3d0 = '\0';
  }
  cVar8 = FUN_180279410(4);
  if (cVar8 == '\0') {
    if (*(char *)(lVar16 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(int *)(*(longlong *)(lVar16 + 0xec0) + 0x157c) != 0) ||
       (*(int *)(*(longlong *)(lVar16 + 0xec0) + 0x1580) != 0)) goto LAB_18010dab1;
    bVar4 = false;
  }
  else {
LAB_18010dab1:
    bVar4 = true;
  }
  if ((*(char *)(lVar2 + 0xb30) == '\0') || (bVar4)) {
LAB_18010db1d:
    local_108 = &local_d8;
    if (DAT_18040a3a8 == '\0') {
      if (DAT_18040a3d0 != '\0') {
        FUN_18010de10(&local_108,CONCAT44(fVar1 - DAT_18040a3a4,fVar19 - DAT_18040a3a0));
      }
      goto LAB_18010dc34;
    }
  }
  else {
    if (!bVar5) {
      if (bVar6) {
        DAT_18040a3a0 = fVar19 - fVar25;
        DAT_18040a3a4 = fVar1 - fVar24;
        DAT_18040a3d0 = '\x01';
      }
      goto LAB_18010db1d;
    }
    DAT_18040a3a8 = '\x01';
    local_108 = &local_d8;
  }
  local_e8 = CONCAT44(local_e8._4_4_,0x44160000);
  local_f8[0] = 120.0;
  local_138 = fVar19 - fVar25;
  if (fVar19 - fVar25 <= fVar1 - fVar24) {
    local_138 = fVar1 - fVar24;
  }
  pfVar15 = local_f8;
  if (DAT_180381138 <= local_138) {
    pfVar15 = &local_138;
  }
  pfVar12 = (float *)&local_e8;
  if (local_138 <= fVar21) {
    pfVar12 = pfVar15;
  }
  fVar22 = *pfVar12;
  local_e8 = 0x93fd561a96ab0c67;
  local_f8[0] = -3.7016214e-06;
  local_f8[1] = 1.1225797e+10;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_118,&local_e8);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_138,local_f8);
  pfVar15 = (float *)FUN_180202dc0(*plVar10 + 0x28);
  local_e8 = CONCAT44(fVar24,fVar25);
  *pfVar15 = fVar22;
  FUN_18010de10(&local_108,CONCAT44(fVar24,fVar25));
  fVar20 = fVar22 + fVar24;
  fVar22 = fVar22 + fVar25;
  local_100 = CONCAT44(fVar20,fVar22);
LAB_18010dc34:
  if (*(char *)(lVar16 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar16 + 0xec0) + 0x2060),1,"##Foreground")
  ;
  if (lVar16 != 0) {
    if (((bVar6) || (DAT_18040a3d0 != '\0')) || (DAT_18040a3a8 != '\0')) {
      bVar6 = true;
      local_150 = DAT_180380d30;
    }
    else {
      bVar6 = false;
      local_150 = fVar7;
    }
    local_148 = 0;
    local_158 = (float)DAT_180380fe0;
    iVar17 = 0x46;
    if (bVar6) {
      iVar17 = 0xaa;
    }
    FUN_180294f00(lVar16,&local_e8,&local_100,iVar17 << 0x18 | 0xffbe96);
    fVar7 = DAT_180380f00;
    fVar21 = DAT_180380e9c;
    uVar9 = DAT_180380c88;
    if ((!bVar5) && (DAT_18040a3a8 == '\0')) {
      uVar18 = 0x82ffbe96;
    }
    iVar17 = 0;
    do {
      local_158 = (float)uVar9;
      fVar19 = (float)iVar17 * fVar21 + fVar7;
      local_108 = (undefined8 *)CONCAT44(fVar20 - fVar19,fVar22 - fVar21);
      local_100 = CONCAT44(fVar20 - fVar21,fVar22 - fVar19);
      FUN_180294c90(lVar16,&local_100,&local_108,uVar18);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 3);
  }
  return;
}


