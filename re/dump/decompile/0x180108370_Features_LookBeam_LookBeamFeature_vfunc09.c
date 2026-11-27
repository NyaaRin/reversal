// 0x180108370  Features_LookBeam_LookBeamFeature_vfunc09
// size=1232 thunk=false
// signature: undefined Features_LookBeam_LookBeamFeature_vfunc09()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_LookBeam_LookBeamFeature_vfunc09(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char *pcVar9;
  short *psVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_128 [32];
  float local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  float local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98 [2];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  local_b8[0] = 5.2241925e+23;
  local_b8[1] = 4.271557e+33;
  local_b0 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_98,&local_b0);
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_a8,local_b8);
  pcVar9 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
  if (*pcVar9 != '\0') {
    local_b0 = 0x93fd561a96ab0c67;
    local_b8[0] = -4.3751104e+34;
    local_b8[1] = 2.0983742e-16;
    plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_98,&local_b0);
    plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_a8,local_b8);
    psVar10 = (short *)FUN_1802028c0(*plVar8 + 0x28);
    plVar8 = (longlong *)(psVar10 + 8);
    if (0xf < *(ulonglong *)(psVar10 + 0xc)) {
      psVar10 = *(short **)psVar10;
    }
    if ((((*plVar8 != 2) || (*psVar10 != 0x6432)) && (DAT_1803fa608 != 0)) &&
       (DAT_1803fa360 != (longlong *)0x0)) {
      pcVar5 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar11 = (*pcVar5)(DAT_1803fa360,uVar7);
      fVar1 = DAT_180380ac0;
      if (lVar11 != 0) {
        local_b0._0_4_ = 12.0;
        local_b8[0] = 0.5;
        local_a8[0] = 0x93fd561a96ab0c67;
        local_98[0] = 0x2191660276572982;
        plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,local_a8);
        plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_c8,local_98);
        pfVar12 = (float *)FUN_180202dc0(*plVar8 + 0x28);
        fVar4 = DAT_180380bb0;
        local_98[0] = 0x93fd561a96ab0c67;
        pfVar16 = local_b8;
        if (fVar1 <= *pfVar12) {
          pfVar16 = pfVar12;
        }
        pfVar13 = (float *)&local_b0;
        if (*pfVar12 <= DAT_180380fd8) {
          pfVar13 = pfVar16;
        }
        fVar1 = *pfVar13;
        local_a8[0] = 0x7a0421ca2acf25a6;
        local_b8[0] = 1.0;
        local_b0._0_4_ = 0.0;
        plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_98);
        plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_d8,local_a8);
        pfVar12 = (float *)FUN_180202dc0(*plVar8 + 0x28);
        local_98[0] = 0x93fd561a96ab0c67;
        pfVar16 = (float *)&local_b0;
        if (0.0 <= *pfVar12) {
          pfVar16 = pfVar12;
        }
        pfVar13 = local_b8;
        if (*pfVar12 <= fVar4) {
          pfVar13 = pfVar16;
        }
        fVar2 = *pfVar13;
        local_a8[0] = 0x7a0436ca2acf4955;
        local_b8[0] = 1.0;
        local_b0._0_4_ = 0.0;
        plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_98);
        plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_d8,local_a8);
        pfVar12 = (float *)FUN_180202dc0(*plVar8 + 0x28);
        pfVar16 = (float *)&local_b0;
        if (0.0 <= *pfVar12) {
          pfVar16 = pfVar12;
        }
        local_98[0] = 0x93fd561a96ab0c67;
        pfVar13 = local_b8;
        if (*pfVar12 <= fVar4) {
          pfVar13 = pfVar16;
        }
        fVar3 = *pfVar13;
        local_a8[0] = 0x7a0431ca2acf40d6;
        local_b8[0] = 1.0;
        local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
        plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_98);
        plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_d8,local_a8);
        pfVar12 = (float *)FUN_180202dc0(*plVar8 + 0x28);
        local_98[0] = 0x93fd561a96ab0c67;
        local_a8[0] = 0x2571ed13f906d189;
        pfVar16 = (float *)&local_b0;
        if (0.0 <= *pfVar12) {
          pfVar16 = pfVar12;
        }
        pfVar13 = local_b8;
        if (*pfVar12 <= fVar4) {
          pfVar13 = pfVar16;
        }
        fVar4 = *pfVar13;
        plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_98);
        plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_d8,local_a8);
        puVar14 = (undefined8 *)FUN_1802028c0(*plVar8 + 0x28);
        if (0xf < (ulonglong)puVar14[3]) {
          puVar14 = (undefined8 *)*puVar14;
        }
        lVar15 = FUN_180020280(puVar14);
        if (lVar15 != 0) {
          if (*(int *)(param_1 + 0x1a70) != *(int *)(DAT_1803fa608 + 4)) {
            *(int *)(param_1 + 0x1a70) = *(int *)(DAT_1803fa608 + 4);
            FUN_180108920(param_1,lVar11);
          }
          uVar6 = DAT_180380b74;
          uVar7 = DAT_1803809ec;
          iVar18 = 1;
          lVar11 = DAT_1803fa608;
          if (0 < *(int *)(DAT_1803fa608 + 0x1c)) {
            do {
              if (0x81 < iVar18) {
                return;
              }
              lVar17 = (longlong)iVar18 * 0x1c + 0xc38 + param_1;
              if (*(char *)(lVar17 + 0x18) != '\0') {
                local_e0 = 0x10;
                local_f0 = uVar7;
                local_f8 = uVar6;
                local_108 = fVar3;
                local_100 = fVar4;
                local_e8 = lVar15;
                FUN_1800203f0(lVar17,lVar17 + 0xc,fVar1,fVar2);
                lVar11 = DAT_1803fa608;
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 <= *(int *)(lVar11 + 0x1c));
          }
        }
      }
    }
  }
  return;
}


