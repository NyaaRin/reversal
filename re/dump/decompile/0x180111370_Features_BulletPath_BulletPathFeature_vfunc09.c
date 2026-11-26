// 0x180111370  Features_BulletPath_BulletPathFeature_vfunc09
// size=1129 thunk=false
// signature: undefined Features_BulletPath_BulletPathFeature_vfunc09()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_BulletPath_BulletPathFeature_vfunc09(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  longlong lVar14;
  longlong *plVar15;
  float *pfVar16;
  float *pfVar17;
  char *pcVar18;
  float *pfVar19;
  longlong lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  float local_138;
  float local_130;
  longlong local_128;
  int local_120;
  float local_118;
  float local_114;
  float local_110 [6];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  cVar13 = FUN_180110cc0();
  if ((cVar13 != '\0') && (DAT_1803fa608 != 0)) {
    if (*(int *)(param_1 + 0x2d4) != *(int *)(DAT_1803fa608 + 4)) {
      *(int *)(param_1 + 0x2d4) = *(int *)(DAT_1803fa608 + 4);
      FUN_180110d10(param_1);
    }
    if ((*(char *)(param_1 + 0x2d0) != '\0') &&
       (lVar14 = FUN_180020280("cable/cable"), fVar9 = DAT_180380a3c, lVar14 != 0)) {
      local_114 = 6.0;
      local_118 = 0.2;
      local_d0 = 0x93fd561a96ab0c67;
      local_d8 = 0xdeee6b0ba2852235;
      plVar15 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,&local_d0);
      plVar15 = (longlong *)FUN_180241a30(*plVar15 + 0x28,local_e8,&local_d8);
      pfVar16 = (float *)FUN_180202dc0(*plVar15 + 0x28);
      local_d0 = 0x93fd561a96ab0c67;
      pfVar19 = &local_118;
      if (fVar9 <= *pfVar16) {
        pfVar19 = pfVar16;
      }
      pfVar17 = &local_114;
      if (*pfVar16 <= DAT_180380f40) {
        pfVar17 = pfVar19;
      }
      fVar1 = *pfVar17;
      local_d8 = 0x458f5bdd872c1a5a;
      plVar15 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_e8,&local_d0);
      plVar15 = (longlong *)FUN_180241a30(*plVar15 + 0x28,local_f8,&local_d8);
      pcVar18 = (char *)FUN_1801fcfc0(*plVar15 + 0x28);
      local_d0 = 0x93fd561a96ab0c67;
      cVar13 = *pcVar18;
      local_d8 = 0x3444988f08a45235;
      plVar15 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_e8,&local_d0);
      plVar15 = (longlong *)FUN_180241a30(*plVar15 + 0x28,local_f8,&local_d8);
      pcVar18 = (char *)FUN_1801fcfc0(*plVar15 + 0x28);
      fVar12 = DAT_180381118;
      fVar11 = DAT_180380b74;
      fVar10 = DAT_180380ad4;
      fVar8 = DAT_180380a14;
      fVar7 = DAT_1803809e4;
      iVar21 = 0;
      cVar4 = *pcVar18;
      if (0 < *(int *)(param_1 + 0x2a8)) {
        do {
          lVar20 = (longlong)iVar21 * 0x30 + param_1;
          iVar5 = *(int *)(lVar20 + 0x20);
          cVar6 = cVar13;
          if (((iVar5 == 2) || (cVar6 = cVar4, iVar5 == 1)) && (cVar6 == '\0')) {
            return;
          }
          FUN_1801111a0(iVar5,&local_d0,&local_d8,local_110 + 4);
          fVar24 = *(float *)(lVar20 + 0x14) - *(float *)(lVar20 + 8);
          local_110[2] = 0.95;
          local_110[0] = 0.2;
          local_110[3] = 0.95;
          local_114 = 0.08;
          local_110[1] = fVar11 - (float)iVar21 * fVar8;
          pfVar19 = local_110;
          if (fVar9 <= local_110[1]) {
            pfVar19 = local_110 + 1;
          }
          fVar23 = *(float *)(lVar20 + 0x1c) - *(float *)(lVar20 + 0x10);
          pfVar16 = local_110 + 2;
          if (local_110[1] <= fVar11) {
            pfVar16 = pfVar19;
          }
          fVar2 = *pfVar16;
          local_118 = fVar2 * fVar10;
          pfVar19 = &local_114;
          if (fVar7 <= local_118) {
            pfVar19 = &local_118;
          }
          fVar22 = *(float *)(lVar20 + 0x18) - *(float *)(lVar20 + 0xc);
          pfVar16 = local_110 + 3;
          if (local_118 <= fVar11) {
            pfVar16 = pfVar19;
          }
          fVar3 = *pfVar16;
          fVar24 = (float)(*(code *)PTR_FUN_1803da018)
                                    (fVar22 * fVar22 + fVar24 * fVar24 + fVar23 * fVar23);
          local_120 = (int)(fVar24 / fVar12);
          if (local_120 < 4) {
            local_120 = 4;
          }
          else if (0x18 < local_120) {
            local_120 = 0x18;
          }
          local_140 = local_110[4];
          local_148 = (undefined4)local_d8;
          local_138 = fVar2;
          local_130 = fVar3;
          local_128 = lVar14;
          FUN_1800203f0(lVar20 + 8,lVar20 + 0x14,fVar1,(undefined4)local_d0);
          iVar21 = iVar21 + 1;
        } while (iVar21 < *(int *)(param_1 + 0x2a8));
      }
    }
  }
  return;
}


