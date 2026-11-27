// 0x1802adc80  FUN_1802adc80
// size=1651 thunk=false
// signature: undefined FUN_1802adc80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802adc80(char *param_1,char param_2)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  char cVar14;
  undefined *puVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_178 [32];
  float local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  undefined8 local_138;
  undefined4 local_128;
  char local_118;
  byte local_117;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  char local_100;
  char local_ff [7];
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_118 = param_2;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  uVar13 = *(ulonglong *)(lVar5 + 0x1520);
  *(undefined1 *)(uVar13 + 0xce) = 1;
  plVar6 = *(longlong **)(lVar5 + 0x1520);
  if (*(char *)((longlong)plVar6 + 0xd1) == '\0') {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar4 + 0xec0);
    iVar8 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
    if (*(int *)(*plVar6 + 0x1578) == iVar8) {
      FUN_1802899e0(iVar8,0xb,param_1);
    }
    pcVar16 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar16 != '\0') {
        pcVar1 = pcVar16 + 1;
        if (((*pcVar16 == '#') && (*pcVar1 == '#')) ||
           (pcVar16 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar19 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
    if (param_1 == pcVar16) {
      fVar21 = 0.0;
      local_10c = fVar19;
    }
    else {
      local_128 = 0;
      local_138 = 0;
      local_158 = (float)DAT_180381384;
      local_150 = param_1;
      local_148 = pcVar16;
      local_140 = pcVar16;
      FUN_18029e350(&local_110,*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1228),fVar19,
                    DAT_180381308);
      fVar21 = (float)(int)(local_110 + DAT_180380ba8);
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar19 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xcc8);
    fVar2 = *(float *)(plVar6 + 0x23);
    fVar3 = *(float *)((longlong)plVar6 + 0x11c);
    fVar19 = fVar19 + fVar19 + *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
    if (fVar21 <= 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = fVar21 + *(float *)(lVar5 + 0xcdc);
    }
    local_e4 = *(float *)(lVar5 + 0xcc8) + *(float *)(lVar5 + 0xcc8) + local_10c + fVar3;
    local_10c = local_e4 - fVar3;
    local_e8 = fVar19 + fVar18 + fVar2;
    local_110 = local_e8 - fVar2;
    local_f0 = fVar2;
    local_ec = fVar3;
    FUN_18027f400(&local_110,*(undefined4 *)(lVar5 + 0xcc8));
    uVar13 = FUN_18027f160(&local_f0,iVar8,0,0);
    fVar7 = DAT_180380bb0;
    fVar18 = DAT_180380ac0;
    if ((char)uVar13 != '\0') {
      local_158 = 0.0;
      fVar22 = (float)(int)((fVar2 + fVar2 + fVar19) * DAT_180380ac0 + DAT_180380ac0);
      fVar23 = (float)(int)((fVar3 + fVar19 + fVar3) * DAT_180380ac0 + DAT_180380ac0);
      fVar20 = (fVar19 - DAT_180380bb0) * DAT_180380ac0;
      local_110 = fVar22;
      local_10c = fVar23;
      local_117 = FUN_1802ab600(&local_f0,iVar8,&local_100,local_ff);
      if (local_117 != 0) {
        FUN_18026ed00(iVar8);
      }
      FUN_18026c370(&local_f0,iVar8,0);
      lVar4 = plVar6[0x59];
      fVar9 = (float)FUN_1802924c0(lVar4,fVar20);
      if ((local_ff[0] == '\0') || (local_100 == '\0')) {
        cVar14 = (local_100 != '\0') + '\a';
      }
      else {
        cVar14 = '\t';
      }
      uVar10 = FUN_18026a6a0(cVar14,fVar7);
      if (((uVar10 & 0xff000000) != 0) && (fVar18 <= fVar20)) {
        if ((int)fVar9 < 1) {
          local_158 = 6.72623e-44;
          FUN_180293e00(lVar4,&local_110,fVar20,0);
          *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
        }
        else {
          if ((int)fVar9 < 3) {
            fVar17 = 4.2039e-45;
          }
          else {
            fVar17 = fVar9;
            if (0x200 < (int)fVar9) {
              fVar17 = 7.17465e-43;
            }
          }
          local_150 = (char *)CONCAT44(local_150._4_4_,(int)fVar17 + -1);
          local_158 = (((float)(int)fVar17 - fVar7) * DAT_180380f70) / (float)(int)fVar17;
          FUN_1802941e0(lVar4,&local_110,fVar20,0);
        }
        FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar10);
        *(undefined4 *)(lVar4 + 0x50) = 0;
      }
      if (local_118 != '\0') {
        lVar4 = plVar6[0x59];
        uVar10 = FUN_18026a6a0(0x12,fVar7);
        fVar17 = fVar7;
        if (fVar7 <= (float)(int)(fVar19 / DAT_180380f40)) {
          fVar17 = (float)(int)(fVar19 / DAT_180380f40);
        }
        if (((uVar10 & 0xff000000) != 0) && (fVar18 <= fVar20 - fVar17)) {
          local_158 = 6.72623e-44;
          FUN_180293e00(lVar4,&local_110,fVar20 - fVar17,0);
          *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
          FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar10);
          *(undefined4 *)(lVar4 + 0x50) = 0;
        }
      }
      cVar14 = local_118;
      fVar18 = *(float *)(lVar5 + 0xcd0);
      if (0.0 < fVar18) {
        lVar4 = plVar6[0x59];
        uVar11 = FUN_18026a6a0(6,fVar7);
        local_108 = fVar22 + fVar7;
        local_104 = fVar23 + fVar7;
        local_158 = fVar9;
        local_150._0_4_ = fVar18;
        FUN_180295460(lVar4,&local_108,fVar20,uVar11);
        lVar4 = plVar6[0x59];
        uVar11 = *(undefined4 *)(lVar5 + 0xcd0);
        uVar12 = FUN_18026a6a0(5,fVar7);
        local_150 = (char *)CONCAT44(local_150._4_4_,uVar11);
        local_158 = fVar9;
        FUN_180295460(lVar4,&local_110,fVar20,uVar12);
      }
      fStack_f4 = fVar3 + *(float *)(lVar5 + 0xcc8);
      local_f8 = fVar2 + fVar19 + *(float *)(lVar5 + 0xcdc);
      if (*(char *)(lVar5 + 0x2858) != '\0') {
        puVar15 = &DAT_18037ffe4;
        if (cVar14 != '\0') {
          puVar15 = &DAT_18037ffe8;
        }
        FUN_180287c20(&local_f8,puVar15,0);
      }
      if (0.0 < fVar21) {
        FUN_18026b160(CONCAT44(fStack_f4,local_f8),param_1,pcVar16,0);
      }
      return (ulonglong)local_117;
    }
  }
  return uVar13 & 0xffffffffffffff00;
}


