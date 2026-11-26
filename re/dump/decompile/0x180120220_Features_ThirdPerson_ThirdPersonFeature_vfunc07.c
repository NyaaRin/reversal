// 0x180120220  Features_ThirdPerson_ThirdPersonFeature_vfunc07
// size=1857 thunk=false
// signature: undefined Features_ThirdPerson_ThirdPersonFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_ThirdPerson_ThirdPersonFeature_vfunc07
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  char local_218;
  char local_217;
  float local_210;
  float local_20c;
  float local_208;
  undefined8 local_200;
  float local_1f8;
  int local_1f0 [6];
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined **local_188;
  float local_16c;
  float local_168;
  float local_164;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 local_108 [64];
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar10 = (*pcVar3)(DAT_1803fa360,uVar7);
  if ((((lVar10 != 0) && (DAT_1803f9280 != (longlong *)0x0)) && (DAT_1803fa660 != 0)) &&
     (DAT_1803fa610 != 0)) {
    pcVar3 = *(code **)(*DAT_1803fa668 + 0x60);
    iVar8 = (**(code **)(*DAT_1803f9280 + 0xd8))();
    iVar9 = (*pcVar3)(DAT_1803fa668);
    if (iVar8 == iVar9) {
      local_1c8 = 0x237bcfbdef3b6800;
      local_1d8 = 0x402819404e703058;
      plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1c8);
      plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1d8);
      pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
      if (*pcVar12 == '\0') {
        local_1c8 = 0x402819404e703058;
        local_1d8 = 0x575dfe7fd1bc6251;
        plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
        plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
        pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
        if (DAT_180423610 == '\0') {
          local_1d8 = 0x575dfe7fd1bc6251;
          local_1c8 = 0x549a0576bfe235e1;
          plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
          plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
          puVar13 = (undefined4 *)FUN_1802029c0(*plVar11 + 0x28);
          FUN_180024720(&local_218,*puVar13);
          if ((local_218 == '\0') && (local_217 != '\0')) {
            *pcVar12 = *pcVar12 == '\0';
          }
          FUN_180120100(*pcVar12);
          if (*pcVar12 != '\0') {
            FUN_1802d3e70(param_3 + 0x4c,&local_1b8,&local_1a8,&local_198);
            local_1b8 = local_1b8 * DAT_180381384;
            local_1f0[1] = 0x1e;
            local_1b4 = local_1b4 * DAT_180381384;
            local_1f0[0] = 5;
            local_1b0 = local_1b0 * DAT_180381384;
            local_1d8 = 0x575dfe7fd1bc6251;
            local_1c8 = 0x278f2665d9fce53c;
            plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
            plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
            piVar14 = (int *)FUN_1802029c0(*plVar11 + 0x28);
            fVar18 = DAT_180380fe8;
            local_1f0[3] = 0x1e;
            local_1f0[2] = 0xffffffe2;
            local_1d8 = 0x575dfe7fd1bc6251;
            piVar16 = local_1f0;
            if (4 < *piVar14) {
              piVar16 = piVar14;
            }
            piVar15 = local_1f0 + 1;
            if (*piVar14 < 0x1f) {
              piVar15 = piVar16;
            }
            local_1c8 = 0x8776ac2cca5b5bb8;
            fVar20 = (float)*piVar15 * DAT_180380fe8;
            plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
            plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
            piVar14 = (int *)FUN_1802029c0(*plVar11 + 0x28);
            local_1f0[5] = 0x1e;
            piVar16 = local_1f0 + 2;
            if (-0x1f < *piVar14) {
              piVar16 = piVar14;
            }
            piVar15 = local_1f0 + 3;
            if (*piVar14 < 0x1f) {
              piVar15 = piVar16;
            }
            fVar19 = (float)*piVar15 * fVar18;
            local_1f0[4] = 0xffffffe2;
            local_1c8 = 0x9bf05500c69582b6;
            local_1d8 = 0x575dfe7fd1bc6251;
            plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
            plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
            piVar14 = (int *)FUN_1802029c0(*plVar11 + 0x28);
            uVar1 = *(undefined8 *)(param_3 + 0x40);
            fVar17 = (float)uVar1;
            piVar16 = local_1f0 + 4;
            if (-0x1f < *piVar14) {
              piVar16 = piVar14;
            }
            piVar15 = local_1f0 + 5;
            if (*piVar14 < 0x1f) {
              piVar15 = piVar16;
            }
            fVar2 = *(float *)(param_3 + 0x48);
            fVar18 = (float)*piVar15 * fVar18;
            local_200._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            fVar5 = local_200._4_4_;
            fVar21 = local_1b8 * fVar20 + fVar17 + local_1a8 * fVar19 + local_198 * fVar18;
            local_1d8._0_4_ = fVar21 - fVar17;
            fVar22 = local_1b4 * fVar20 + local_200._4_4_ + local_1a4 * fVar19 + local_194 * fVar18;
            fVar23 = local_1b0 * fVar20 + fVar2 + local_1a0 * fVar19 + local_190 * fVar18;
            local_1d8._4_4_ = fVar22 - local_200._4_4_;
            local_1d0 = fVar23 - fVar2;
            fVar18 = local_1b8;
            fVar20 = local_1b4;
            fVar19 = local_1b0;
            local_210 = fVar21;
            local_20c = fVar22;
            local_208 = fVar23;
            local_200 = uVar1;
            local_1f8 = fVar2;
            if (DAT_180380948 <
                local_1d8._4_4_ * local_1d8._4_4_ + (float)local_1d8 * (float)local_1d8 +
                local_1d0 * local_1d0) {
              (*(code *)PTR_FUN_1803da000)(&local_1d8);
              fVar18 = (float)local_1d8;
              fVar20 = local_1d8._4_4_;
              fVar19 = local_1d0;
            }
            fVar4 = DAT_180380bb0;
            local_188 = vftable_Features_ThirdPerson_ThirdPersonFeature_CTraceFilterWorldOnly;
            local_228 = &local_1d8;
            uStack_144 = 0;
            local_12c = 0;
            uStack_124 = 0;
            local_14c = 0x3f800000;
            local_13c = 0;
            uStack_134 = 0;
            local_c8 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            local_1d8 = 0x40e0000040e00000;
            local_1d0 = 7.0;
            local_1c8 = 0xc0e00000c0e00000;
            local_1c0 = 0xc0e00000;
            local_16c = fVar21;
            local_168 = fVar22;
            local_164 = fVar23;
            FUN_18001fe90(local_108,&local_200,&local_210,&local_1c8);
            cVar6 = FUN_1801201c0(local_108);
            if (((cVar6 == '\0') || ((float)local_14c <= 0.0)) || (fVar4 <= (float)local_14c)) {
              *(ulonglong *)(param_3 + 0x40) = CONCAT44(fVar22,fVar21);
              *(float *)(param_3 + 0x48) = fVar23;
            }
            else {
              fVar17 = (float)(*(code *)PTR_FUN_1803da018)
                                        ((fVar5 - local_168) * (fVar5 - local_168) +
                                         (fVar17 - local_16c) * (fVar17 - local_16c) +
                                         (fVar2 - local_164) * (fVar2 - local_164));
              if (DAT_180381070 <= fVar17) {
                fVar20 = fVar20 * DAT_180380e9c;
                fVar19 = fVar19 * DAT_180380e9c;
                *(float *)(param_3 + 0x40) = local_16c - fVar18 * DAT_180380e9c;
                *(float *)(param_3 + 0x44) = local_168 - fVar20;
                *(float *)(param_3 + 0x48) = local_164 - fVar19;
              }
              else {
                FUN_180120100(0);
              }
            }
          }
        }
      }
    }
  }
  return;
}


