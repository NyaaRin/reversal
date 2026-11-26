// 0x18010b290  FUN_18010b290
// size=3504 thunk=false
// signature: undefined FUN_18010b290()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010b290(longlong *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  uint *puVar12;
  ulonglong *puVar13;
  int *piVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  ulonglong *puVar21;
  char cVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  char cVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  uint local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  float local_1a8;
  float local_1a0;
  uint local_198;
  uint local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  char local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int local_144 [2];
  undefined8 local_13c;
  uint local_134;
  int local_130 [4];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  char local_100;
  char local_ff [3];
  uint local_fc;
  uint local_f8 [2];
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0 [2];
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  local_e8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_110,&local_e8);
  local_154 = 0x41a00000;
  local_150 = 0x3f000000;
  lVar23 = *plVar8 + 0x28;
  local_f0 = 0x928aca364203258f;
  plVar8 = (longlong *)FUN_180241a30(lVar23,local_e0,&local_f0);
  FUN_180202dc0(*plVar8 + 0x28);
  local_130[1] = 4;
  local_130[0] = 1;
  local_f0 = 0x2c86430344857507;
  plVar8 = (longlong *)FUN_180241a30(lVar23,local_e0,&local_f0);
  piVar9 = (int *)FUN_1802029c0(*plVar8 + 0x28);
  local_130[3] = 4;
  local_130[2] = 1;
  piVar14 = local_130;
  if (0 < *piVar9) {
    piVar14 = piVar9;
  }
  piVar10 = local_130 + 1;
  if (*piVar9 < 5) {
    piVar10 = piVar14;
  }
  local_154 = *piVar10;
  local_f0 = 0x5d20275a62ec75ff;
  plVar8 = (longlong *)FUN_180241a30(lVar23,local_e0,&local_f0);
  piVar9 = (int *)FUN_1802029c0(*plVar8 + 0x28);
  piVar14 = local_130 + 2;
  if (0 < *piVar9) {
    piVar14 = piVar9;
  }
  piVar10 = local_130 + 3;
  if (*piVar9 < 5) {
    piVar10 = piVar14;
  }
  local_f0 = CONCAT44(local_f0._4_4_,*piVar10);
  local_f8[0] = 0;
  local_fc = 0;
  if (((DAT_1803fa668 != (longlong *)0x0) &&
      ((**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,local_f8,&local_fc), 0 < (int)local_f8[0])
      ) && (0 < (int)local_fc)) {
    local_e0[0] = 0x5cded73623217c2a;
    plVar8 = (longlong *)FUN_180241a30(lVar23,local_120,local_e0);
    pcVar11 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
    DAT_180409690 = DAT_180409688;
    if (*pcVar11 != '\0') {
      DAT_180409690 = DAT_180409668;
    }
    if (DAT_180409690 != (longlong *)0x0) {
      uVar6 = (**(code **)(*DAT_180409658 + 0x18))();
      uVar7 = (**(code **)(*DAT_180409658 + 0x20))();
      local_164 = uVar7;
      local_13c._4_4_ = (**(code **)(*DAT_180409690 + 0x18))();
      local_134 = (**(code **)(*DAT_180409690 + 0x20))();
      iVar28 = DAT_180409640;
      puVar4 = PTR_DAT_1803e7b90;
      iVar19 = 0;
      iVar26 = 0;
      local_158 = 0;
      if (0 < DAT_180409640) {
        do {
          lVar24 = (longlong)iVar26 * 0x160;
          *(undefined4 *)(puVar4 + lVar24 + 0x15c) = 0xffffffff;
          if (0 < iVar26) {
            uVar25 = 0;
            do {
              lVar20 = (ulonglong)uVar25 * 0x160;
              iVar19 = local_158;
              if ((((*(float *)(puVar4 + lVar20 + 0x13c) == *(float *)(puVar4 + lVar24 + 0x13c)) &&
                   (*(float *)(puVar4 + lVar20 + 0x140) == *(float *)(puVar4 + lVar24 + 0x140))) &&
                  ((*(float *)(puVar4 + lVar20 + 0x144) == *(float *)(puVar4 + lVar24 + 0x144) &&
                   ((*(float *)(puVar4 + lVar20 + 0x148) == *(float *)(puVar4 + lVar24 + 0x148) &&
                    (*(float *)(puVar4 + lVar20 + 0x14c) == *(float *)(puVar4 + lVar24 + 0x14c))))))
                  ) && ((*(float *)(puVar4 + lVar20 + 0x150) == *(float *)(puVar4 + lVar24 + 0x150)
                        && ((puVar4[lVar20 + 0x154] == puVar4[lVar24 + 0x154] &&
                            ((puVar4[lVar24 + 0x154] == '\0' ||
                             (*(int *)(puVar4 + lVar20 + 0x158) == *(int *)(puVar4 + lVar24 + 0x158)
                             )))))))) {
                *(undefined4 *)(puVar4 + lVar24 + 0x15c) = *(undefined4 *)(puVar4 + lVar20 + 0x15c);
                break;
              }
              uVar25 = uVar25 + 1;
            } while ((int)uVar25 < iVar26);
          }
          if (*(int *)(puVar4 + lVar24 + 0x15c) < 0) {
            local_158 = iVar19 + 1;
            *(int *)(puVar4 + lVar24 + 0x15c) = iVar19;
            iVar19 = local_158;
          }
          iVar26 = iVar26 + 1;
        } while (iVar26 < iVar28);
        if (0 < iVar19) {
          local_e0[0] = 0x5bca754c19d73cdf;
          FUN_180241a30(lVar23,local_120,local_e0);
          pcVar11 = (char *)FUN_1801fcfc0();
          fVar3 = DAT_1803811c8;
          fVar2 = DAT_180380bb0;
          local_150 = 0;
          cVar27 = *pcVar11;
          local_168 = cVar27;
          do {
            iVar28 = local_150;
            cVar22 = '\0';
            iVar19 = 0;
            uVar25 = 2;
            fVar31 = fVar2;
            fVar33 = fVar2;
            fVar34 = fVar2;
            fVar35 = fVar2;
            fVar30 = fVar2;
            fVar29 = fVar2;
            if (0 < DAT_180409640) {
              do {
                lVar23 = (longlong)iVar19 * 0x160;
                if (*(int *)(PTR_DAT_1803e7b90 + lVar23 + 0x15c) == local_150) {
                  cVar22 = PTR_DAT_1803e7b90[lVar23 + 0x154];
                  uVar25 = *(uint *)(PTR_DAT_1803e7b90 + lVar23 + 0x158);
                  local_15c = 10;
                  puVar15 = &local_160;
                  if (0 < (int)uVar25) {
                    puVar15 = (uint *)(PTR_DAT_1803e7b90 + lVar23 + 0x158);
                  }
                  local_160 = 1;
                  puVar12 = &local_15c;
                  if ((int)uVar25 < 0xb) {
                    puVar12 = puVar15;
                  }
                  uVar25 = *puVar12;
                  fVar31 = *(float *)(PTR_DAT_1803e7b90 + lVar23 + 0x144);
                  fVar33 = *(float *)(PTR_DAT_1803e7b90 + lVar23 + 0x148);
                  fVar34 = *(float *)(PTR_DAT_1803e7b90 + lVar23 + 0x14c);
                  fVar35 = *(float *)(PTR_DAT_1803e7b90 + lVar23 + 0x150);
                  fVar30 = *(float *)(PTR_DAT_1803e7b90 + lVar23 + 0x140);
                  fVar29 = *(float *)(PTR_DAT_1803e7b90 + lVar23 + 0x13c);
                  break;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < DAT_180409640);
            }
            FUN_18010a5b0(param_1);
            local_1c8 = local_1c8 & 0xffffff00;
            (**(code **)(*param_1 + 0x238))(param_1,0,0,0);
            (**(code **)(*param_1 + 0x50))(param_1,1,0,DAT_18040964d);
            FUN_18010ab90(param_1,iVar28);
            if (DAT_18040964d != '\0') {
              (**(code **)(*param_1 + 0x3d0))(param_1,0xffffffff);
              (**(code **)(*param_1 + 0x3c8))(param_1,0xffffffff);
              (**(code **)(*param_1 + 0x3b0))(param_1,1);
              (**(code **)(*param_1 + 0x3a0))(param_1,1);
              (**(code **)(*param_1 + 0x3a8))(param_1,1);
              (**(code **)(*param_1 + 0x398))(param_1,1);
              fVar32 = DAT_180380ac0;
              if (cVar27 != '\0') {
                (**(code **)(*param_1 + 0x3b8))(param_1,2);
                (**(code **)(*param_1 + 0x3c0))(param_1,0);
                fVar32 = DAT_180380ac0;
                local_15c = 0;
                local_148 = 0;
                local_13c._0_4_ = 0;
                local_14c = 0xff;
                local_144[1] = 0xff;
                local_160 = (uint)(fVar31 * fVar3 + DAT_180380ac0);
                local_e8 = CONCAT44(local_e8._4_4_,0xff);
                local_1c8 = CONCAT31(local_1c8._1_3_,0xff);
                puVar15 = &local_15c;
                if (-1 < (int)local_160) {
                  puVar15 = &local_160;
                }
                puVar12 = &local_14c;
                if ((int)local_160 < 0x100) {
                  puVar12 = puVar15;
                }
                local_144[0] = (int)(fVar30 * fVar3 + DAT_180380ac0);
                iVar19 = (int)(fVar29 * fVar3 + DAT_180380ac0);
                piVar14 = &local_148;
                if (-1 < local_144[0]) {
                  piVar14 = local_144;
                }
                piVar9 = local_144 + 1;
                if (local_144[0] < 0x100) {
                  piVar9 = piVar14;
                }
                local_e0[0] = CONCAT44(local_e0[0]._4_4_,iVar19);
                puVar13 = &local_13c;
                if (-1 < iVar19) {
                  puVar13 = local_e0;
                }
                puVar21 = &local_e8;
                if (iVar19 < 0x100) {
                  puVar21 = puVar13;
                }
                (**(code **)(*param_1 + 0x238))(param_1,(char)*puVar21,(char)*piVar9,(char)*puVar12)
                ;
                (**(code **)(*param_1 + 0x438))(param_1,1,0);
              }
              (**(code **)(*param_1 + 0x3b8))(param_1,3);
              (**(code **)(*param_1 + 0x3c0))(param_1,999);
              local_e8 = local_e8 & 0xffffffff00000000;
              local_144[1] = 0;
              local_14c = 0;
              local_13c._0_4_ = 0xff;
              local_148 = 0xff;
              local_160 = 0xff;
              iVar19 = (int)(fVar35 * fVar3 + fVar32);
              local_1c8 = CONCAT31(local_1c8._1_3_,0xff);
              local_e0[0] = CONCAT44(local_e0[0]._4_4_,iVar19);
              local_144[0] = (int)(fVar34 * fVar3 + fVar32);
              puVar13 = &local_e8;
              if (-1 < iVar19) {
                puVar13 = local_e0;
              }
              puVar21 = &local_13c;
              if (iVar19 < 0x100) {
                puVar21 = puVar13;
              }
              local_15c = (uint)(fVar33 * fVar3 + fVar32);
              piVar14 = local_144 + 1;
              if (-1 < local_144[0]) {
                piVar14 = local_144;
              }
              piVar9 = &local_148;
              if (local_144[0] < 0x100) {
                piVar9 = piVar14;
              }
              puVar15 = &local_14c;
              if (-1 < (int)local_15c) {
                puVar15 = &local_15c;
              }
              puVar12 = &local_160;
              if ((int)local_15c < 0x100) {
                puVar12 = puVar15;
              }
              (**(code **)(*param_1 + 0x238))(param_1,(char)*puVar12,(char)*piVar9,(char)*puVar21);
              (**(code **)(*param_1 + 0x438))(param_1,1,0);
              (**(code **)(*param_1 + 0x398))(param_1,0);
              (**(code **)(*param_1 + 0x3c8))(param_1,0);
              (**(code **)(*param_1 + 0x3d0))(param_1,0);
              (**(code **)(*param_1 + 0x3c0))(param_1,0);
            }
            (**(code **)(*param_1 + 0x358))(param_1);
            if (cVar22 == '\0') {
              local_100 = '\0';
              local_ff[0] = '\0';
              plVar8 = (longlong *)
                       (**(code **)(*DAT_180401628 + 0x58))
                                 (DAT_180401628,"$basetexture",&local_100,0);
              plVar16 = (longlong *)(**(code **)(*DAT_180401628 + 0x58))(DAT_180401628,"$size",0,0);
              plVar17 = (longlong *)
                        (**(code **)(*DAT_1804096a0 + 0x58))
                                  (DAT_1804096a0,"$basetexture",local_ff,0);
              plVar18 = (longlong *)(**(code **)(*DAT_1804096a0 + 0x58))(DAT_1804096a0,"$size",0,0);
              cVar27 = local_168;
              uVar7 = local_164;
              if ((((plVar8 != (longlong *)0x0) && (local_100 != '\0')) &&
                  (plVar17 != (longlong *)0x0)) && (local_ff[0] != '\0')) {
                (**(code **)(*plVar8 + 0x70))(plVar8,DAT_180409658);
                (**(code **)(*plVar17 + 0x70))(plVar17,DAT_180409690);
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0x18))(plVar16);
                }
                if (plVar18 != (longlong *)0x0) {
                  (**(code **)(*plVar18 + 0x18))(plVar18);
                }
                uVar5 = local_13c._4_4_;
                uVar7 = local_164;
                uVar25 = local_f8[0];
                if ((int)local_13c._4_4_ < (int)local_f8[0]) {
                  uVar25 = local_13c._4_4_;
                }
                uVar1 = local_fc;
                if ((int)local_134 < (int)local_fc) {
                  uVar1 = local_134;
                }
                iVar19 = 0;
                cVar27 = local_168;
                if (0 < local_154) {
                  do {
                    local_1c8 = uVar25;
                    local_1c0 = uVar1;
                    (**(code **)(*param_1 + 0x340))(param_1,DAT_180409690,0,0);
                    local_1c8 = local_1c8 & 0xffffff00;
                    (**(code **)(*param_1 + 0x238))(param_1,0);
                    (**(code **)(*param_1 + 0x50))(param_1,1);
                    local_170 = 0;
                    local_178 = 1;
                    local_180 = 1;
                    local_188 = 0;
                    local_190 = uVar7;
                    local_1a0 = (float)(int)(local_fc - 1);
                    local_1a8 = (float)(int)(local_f8[0] - 1);
                    local_1b0 = 0;
                    local_1b8 = 0;
                    local_1c8 = uVar25;
                    local_1c0 = uVar1;
                    local_198 = uVar6;
                    (**(code **)(*param_1 + 0x328))(param_1,DAT_180401628);
                    (**(code **)(*param_1 + 0x358))(param_1);
                    FUN_18010a5b0(param_1);
                    local_1c8 = local_1c8 & 0xffffff00;
                    (**(code **)(*param_1 + 0x238))(param_1,0);
                    (**(code **)(*param_1 + 0x50))(param_1,1);
                    local_170 = 0;
                    local_178 = 1;
                    local_180 = 1;
                    local_188 = 0;
                    local_190 = local_134;
                    local_198 = uVar5;
                    local_1b0 = 0;
                    local_1b8 = 0;
                    local_1c0 = local_fc;
                    local_1c8 = local_f8[0];
                    local_1a8 = (float)(int)(uVar25 - 1);
                    local_1a0 = (float)(int)(uVar1 - 1);
                    (**(code **)(*param_1 + 0x328))(param_1,DAT_1804096a0);
                    (**(code **)(*param_1 + 0x358))(param_1);
                    iVar19 = iVar19 + 1;
                    cVar27 = local_168;
                    iVar28 = local_150;
                  } while (iVar19 < local_154);
                }
              }
            }
            else {
              local_1c8 = uVar7;
              local_1c0 = uVar25;
              FUN_18010af30(param_1,local_f8[0],local_fc,uVar6);
            }
            if (DAT_18040964d != '\0') {
              FUN_18010a5b0(param_1);
              (**(code **)(*param_1 + 0x3d0))(param_1,0xffffffff);
              (**(code **)(*param_1 + 0x3c8))(param_1,0xffffffff);
              (**(code **)(*param_1 + 0x3b0))(param_1,1);
              (**(code **)(*param_1 + 0x3a0))(param_1,1);
              (**(code **)(*param_1 + 0x3a8))(param_1,1);
              (**(code **)(*param_1 + 0x3b8))(param_1,2);
              (**(code **)(*param_1 + 0x3c0))(param_1,0);
              (**(code **)(*param_1 + 0x398))(param_1,1);
              local_1c8 = local_1c8 & 0xffffff00;
              (**(code **)(*param_1 + 0x238))(param_1,0,0,0);
              (**(code **)(*param_1 + 0x438))(param_1,1);
              (**(code **)(*param_1 + 0x398))(param_1,0);
              (**(code **)(*param_1 + 0x358))(param_1);
            }
            plVar8 = (longlong *)
                     (**(code **)(*DAT_180409680 + 0x58))(DAT_180409680,"$basetexture",0,0);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x70))(plVar8);
              iVar19 = (int)local_f0;
              iVar26 = 0;
              if (0 < (int)local_f0) {
                do {
                  local_170 = 0;
                  local_178 = 1;
                  local_180 = 1;
                  local_188 = 0;
                  local_1a0 = (float)(int)(local_fc - 1);
                  local_1a8 = (float)(int)(local_f8[0] - 1);
                  local_1b0 = 0;
                  local_1b8 = 0;
                  local_1c0 = local_fc;
                  local_1c8 = local_f8[0];
                  local_198 = uVar6;
                  local_190 = uVar7;
                  (**(code **)(*param_1 + 0x328))(param_1,DAT_180409680,0,0);
                  iVar26 = iVar26 + 1;
                } while (iVar26 < iVar19);
              }
            }
            (**(code **)(*param_1 + 0x398))(param_1);
            (**(code **)(*param_1 + 0x3c8))(param_1);
            (**(code **)(*param_1 + 0x3d0))(param_1);
            (**(code **)(*param_1 + 0x3c0))();
            local_150 = iVar28 + 1;
          } while (iVar28 + 1 < local_158);
        }
      }
    }
  }
  return;
}


