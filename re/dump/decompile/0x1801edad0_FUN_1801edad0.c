// 0x1801edad0  FUN_1801edad0
// size=1986 thunk=false
// signature: undefined FUN_1801edad0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801edad0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  float fVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong in_RCX;
  undefined1 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 extraout_XMM0_Qa;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1e8 [32];
  char *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined *local_168;
  char *local_160;
  int local_158;
  int local_150;
  int local_148;
  float local_138;
  longlong local_130;
  longlong local_128;
  undefined1 *local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  ulonglong local_104;
  float local_f8;
  ulonglong local_f4;
  float local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  local_130 = param_2;
  local_128 = in_RCX;
  if (DAT_1803ff270 != '\0') {
    DAT_1803fe668 = DAT_1803fe668 + 1;
    pcVar14 = (char *)(param_2 + 0x58);
    if (*pcVar14 == '\0') {
      DAT_1803fd084 = DAT_1803fd084 + 1;
    }
    local_118 = pcVar14;
    fVar9 = (float)GetTickCount();
    local_138 = fVar9;
    if ((2000 < (uint)((int)fVar9 - (int)_DAT_1803fed74)) || (DAT_1803fe668 < 6)) {
      local_120 = &DAT_18033e9cc;
      lVar11 = FUN_18001dbf0(in_RCX);
      puVar12 = &DAT_18033e9cc;
      if ((lVar11 != 0) &&
         (puVar10 = (undefined1 *)FUN_18001e4e0(lVar11), local_120 = &DAT_18033e9cc,
         (undefined1 *)0x10000 < puVar10)) {
        puVar12 = puVar10;
        local_120 = puVar10;
      }
      local_1b0 = (double)*(float *)(param_2 + 0x24);
      local_1b8 = (double)*(float *)(param_2 + 0x20);
      local_1c0 = (double)*(float *)(param_2 + 0x1c);
      local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(uint)(*pcVar14 != '\0'));
      FUN_180014410("[FB-HOOK] #%d (skip=%d) \'%s\' primary=%d spread=(%.4f,%.4f,%.4f)\n",
                    DAT_1803fe668,DAT_1803fd084,puVar12);
      _DAT_1803fed74 = fVar9;
    }
    bVar5 = false;
    fVar9 = *(float *)(param_2 + 0x10);
    fVar16 = *(float *)(param_2 + 0x14);
    fVar17 = *(float *)(param_2 + 0x18);
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    if (DAT_1803fa46f == '\0') {
      FUN_1801ed8c0(in_RCX,param_2);
    }
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar11 = (*pcVar1)(DAT_1803fa360);
    if (((DAT_1803db490 != '\0') && (lVar11 != 0)) && (in_RCX == lVar11)) {
      local_118 = (char *)CONCAT44(DAT_1803db488 - *(float *)(param_2 + 8),
                                   DAT_1803db484 - *(float *)(param_2 + 4));
      local_110 = DAT_1803db48c - *(float *)(param_2 + 0xc);
      local_e8 = fVar9;
      local_e4 = uVar6;
      fVar16 = (float)(*(code *)PTR_FUN_1803da018)
                                (fVar16 * fVar16 + fVar9 * fVar9 + fVar17 * fVar17);
      fVar17 = (float)(*(code *)PTR_FUN_1803da018)
                                (local_118._4_4_ * local_118._4_4_ +
                                 (float)local_118 * (float)local_118 + local_110 * local_110);
      fVar9 = DAT_180380bb0;
      local_138 = fVar17;
      if ((DAT_180380964 < fVar16) && (DAT_180380bb0 < fVar17)) {
        fVar16 = DAT_180380bb0 / fVar16;
        fVar22 = fVar16 * (float)local_e4 * local_118._4_4_ + fVar16 * local_e8 * (float)local_118 +
                 fVar16 * local_e4._4_4_ * local_110;
        fVar21 = (float)local_118 - fVar22 * fVar16 * local_e8;
        fVar20 = local_118._4_4_ - fVar22 * fVar16 * (float)local_e4;
        fVar16 = local_110 - fVar22 * fVar16 * local_e4._4_4_;
        fVar20 = (float)(*(code *)PTR_FUN_1803da018)
                                  (fVar21 * fVar21 + fVar20 * fVar20 + fVar16 * fVar16);
        local_130 = CONCAT44(local_130._4_4_,fVar20);
        fVar16 = fVar9;
        if (fVar9 <= fVar22) {
          fVar16 = fVar22;
        }
        fVar20 = atan2f(fVar20,fVar16);
        fVar16 = DAT_1803810bc;
        local_128 = CONCAT44(local_128._4_4_,fVar20 * DAT_1803810bc);
        if ((DAT_180380ac0 < fVar20 * DAT_1803810bc) || (fVar22 <= 0.0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((DAT_1803feb10 == 0) || (DAT_1803feb10 == DAT_1803db498)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        DAT_1803feb10 = DAT_1803db498;
        DAT_1803ff094 = DAT_1803ff094 + 1;
        if (bVar3) {
          if (bVar4) {
            DAT_1803fe394 = DAT_1803fe394 + 1;
          }
          if ((-1 < DAT_1803e8770) && (DAT_1803e8770 == DAT_1803db494)) {
            bVar5 = true;
          }
          fVar19 = *(float *)(param_2 + 4) - _DAT_1803db46c;
          fVar20 = *(float *)(param_2 + 8) - _DAT_1803db470;
          fVar21 = *(float *)(param_2 + 0xc) - _DAT_1803db474;
          fVar20 = (float)(*(code *)PTR_FUN_1803da018)
                                    (fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21);
          local_104 = 0;
          local_108 = 0.0;
          local_f4 = 0;
          local_f8 = 0.0;
          FUN_1802d4540(&local_118,&local_108);
          FUN_1802d4540(&local_e8,&local_f8);
          local_108 = (float)FUN_1802d3e00(local_108);
          uVar18 = FUN_1802d3e00(local_104 & 0xffffffff);
          local_104 = CONCAT44(local_104._4_4_,uVar18);
          local_f8 = (float)FUN_1802d3e00(local_f8);
          fVar21 = (float)FUN_1802d3e00(local_f4 & 0xffffffff);
          local_f4 = CONCAT44(local_f4._4_4_,fVar21);
          iVar15 = DAT_1803ff2f0 + 1;
          DAT_1803ff2f0 = iVar15;
          if (iVar15 % 10 == 1) {
            pcVar14 = "same as the last shot";
            if (bVar4) {
              pcVar14 = "CHANGED since the last shot";
            }
            puVar13 = &DAT_180356e94;
            if (bVar5) {
              puVar13 = &DAT_180379fd0;
            }
            dVar2 = (double)DAT_1803db4a0;
            if (fVar9 <= fVar17) {
              fVar9 = fVar17;
            }
            fVar9 = atan2f(fVar20,fVar9);
            local_178 = (double)(fVar9 * fVar16);
            local_180 = (double)fVar20;
            local_188 = (double)fVar21;
            local_190 = (double)local_f8;
            local_198 = (double)DAT_1803db4d8;
            local_1a0 = (double)DAT_1803db4d4;
            local_1a8 = (double)DAT_1803db47c;
            local_1b0 = (double)DAT_1803db478;
            local_1b8 = (double)(float)local_104;
            local_1c0 = (double)local_108;
            local_1c8 = "";
            if (fVar22 <= 0.0) {
              local_1c8 = " (BEHIND the shooter)";
            }
            local_148 = DAT_1803fe394;
            local_150 = DAT_1803ff094;
            local_170 = dVar2;
            local_168 = puVar13;
            local_160 = pcVar14;
            local_158 = iVar15;
            FUN_180014410("[SHOT-OFF] pre-feature aim is %.2f deg (%.1fu) off at %.0fu%s | wanted (%.2f,%.2f) aimbot wrote (%.2f,%.2f) cmd shipped (%.2f,%.2f) engine shot (%.2f,%.2f) | apex moved %.1fu since the solve (%.2f deg of this) | target moving at %.0f u/s | anti-aim owned: %s | target %s (%d bad of %d aimed, %d right after a switch)\n"
                          ,(double)(float)local_128,(double)(float)local_130,(double)local_138);
          }
        }
      }
    }
    cVar7 = FUN_18003a090(&DAT_18037a130);
    param_1 = extraout_XMM0_Qa;
    if (cVar7 != '\0') {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar18 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar11 = (*pcVar1)(DAT_1803fa360,uVar18);
      if ((lVar11 == 0) || (in_RCX != lVar11)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      local_e8 = (float)CONCAT31(local_e8._1_3_,uVar8);
      local_e4 = *(undefined8 *)(param_2 + 0x10);
      local_dc = *(undefined4 *)(param_2 + 0x18);
      param_1 = FUN_180208f20();
    }
  }
  if (0x10000 < DAT_1803fa448) {
    FUN_1801ed880(param_1,in_RCX,param_2);
  }
  return;
}


