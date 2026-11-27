// 0x1800a3d30  FUN_1800a3d30
// size=1388 thunk=false
// signature: undefined FUN_1800a3d30()
// status: ok


float * FUN_1800a3d30(float *param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char local_168;
  undefined1 local_167;
  float local_160 [6];
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  int local_118;
  float local_114;
  int local_110;
  float local_108;
  float local_104;
  float local_100;
  float *local_f8;
  undefined4 *local_f0;
  float *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  
  iVar11 = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((((((uint)*param_3 & 0x7f800000) != 0x7f800000) &&
       (pfVar1 = param_3 + 1, ((uint)*pfVar1 & 0x7f800000) != 0x7f800000)) &&
      (pfVar2 = param_3 + 2, ((uint)*pfVar2 & 0x7f800000) != 0x7f800000)) &&
     ((local_f8 = param_1, local_f0 = param_4, local_d0 = param_1, cVar5 = FUN_1800a2ad0(),
      cVar5 != '\0' &&
      (local_e8 = pfVar1, local_e0 = pfVar2, local_d8 = param_3, cVar5 = FUN_1800a2b30(param_2),
      cVar5 == '\0')))) {
    local_128 = 0;
    local_120 = 0.0;
    local_138 = 0;
    local_130 = 0.0;
    local_168 = FUN_1800a3bc0(param_2,&local_128);
    local_167 = 0;
    lVar6 = FUN_1800a3520(param_2,0);
    if (lVar6 != 0) {
      if (DAT_1803de065 == '\0') {
        if (DAT_1803fa608 == 0) {
          uVar12 = 0;
          uVar15 = 0;
        }
        else {
          uVar12 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
          uVar15 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
        }
      }
      else {
        uVar12 = (undefined4)DAT_1803ddea0;
        uVar15 = (undefined4)((ulonglong)DAT_1803ddea0 >> 0x20);
      }
      fVar16 = 0.0;
      local_108 = 0.0;
      fVar17 = 0.0;
      local_104 = 0.0;
      fVar18 = 0.0;
      local_100 = 0.0;
      local_118 = 0;
      local_114 = DAT_180381290;
      local_110 = 0;
      fVar13 = DAT_180381290;
      while (local_110 < *(int *)(lVar6 + 0x14)) {
        lVar7 = (longlong)local_110;
        if (((param_2 != *(longlong *)(lVar6 + 0x50 + lVar7 * 0x30)) ||
            (*(char *)(lVar6 + 0x78 + lVar7 * 0x30) == '\0')) ||
           ((dVar4 = *(double *)(lVar6 + 0x58 + lVar7 * 0x30),
            (double)CONCAT44(uVar15,uVar12) < dVar4 ||
            ((((DAT_180380c48 < (double)CONCAT44(uVar15,uVar12) - dVar4 ||
               (local_160[4] = *(float *)(lVar6 + 0x6c + lVar7 * 0x30),
               ((uint)local_160[4] & 0x7f800000) == 0x7f800000)) ||
              (local_160[2] = *(float *)(lVar6 + 0x70 + lVar7 * 0x30),
              ((uint)local_160[2] & 0x7f800000) == 0x7f800000)) ||
             (fVar3 = *(float *)(lVar6 + 0x74 + lVar7 * 0x30),
             ((uint)fVar3 & 0x7f800000) == 0x7f800000)))))) {
          local_110 = local_110 + 1;
        }
        else {
          fVar16 = local_160[4] + fVar16;
          fVar17 = local_160[2] + fVar17;
          fVar18 = fVar3 + fVar18;
          iVar11 = iVar11 + 1;
          local_bc = *(float *)(lVar6 + 0x60 + lVar7 * 0x30) - *local_d8;
          local_b8 = *(float *)(lVar6 + 100 + lVar7 * 0x30) - *pfVar1;
          local_b4 = *(float *)(lVar6 + 0x68 + lVar7 * 0x30) - *pfVar2;
          fVar14 = local_b8 * local_b8 + local_bc * local_bc + local_b4 * local_b4;
          if (fVar14 < fVar13) {
            local_138 = CONCAT44(local_160[2],local_160[4]);
            local_167 = 1;
            fVar13 = fVar14;
            local_130 = fVar3;
            local_114 = fVar14;
          }
          local_110 = local_110 + 1;
          local_118 = iVar11;
          local_108 = fVar16;
          local_104 = fVar17;
          local_100 = fVar18;
          local_c8 = fVar16;
          local_c4 = fVar17;
          local_c0 = fVar18;
        }
      }
      if (2 < iVar11) {
        fVar13 = DAT_180380bb0 / (float)iVar11;
        local_140 = fVar13 * fVar18;
        local_148 = CONCAT44(fVar13 * fVar17,fVar13 * fVar16);
        local_168 = '\x01';
        local_128 = local_148;
        local_120 = local_140;
      }
    }
    if (local_168 != '\0') {
      local_160[0] = 96.0;
      uVar8 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      uVar8 = FUN_180241610(uVar8,0x4d3af9f5fe2c9c98);
      pfVar9 = (float *)FUN_180202dc0(uVar8);
      fVar13 = *pfVar9;
      local_160[4] = 512.0;
      local_160[2] = 0.0;
      local_160[0] = fVar13;
      uVar12 = FUN_1800a3ad0();
      pfVar9 = local_160 + 2;
      if (0.0 <= fVar13) {
        pfVar9 = local_160;
      }
      pfVar10 = local_160 + 4;
      if (fVar13 <= DAT_18038124c) {
        pfVar10 = pfVar9;
      }
      FUN_1800a2800(&local_148,&local_128,&local_138,local_167,uVar12,*pfVar10);
      fVar13 = (float)local_148 + *local_d8;
      if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
        fVar16 = local_148._4_4_ + *pfVar1;
        if ((((uint)fVar16 & 0x7f800000) != 0x7f800000) &&
           (fVar18 = local_140 + *pfVar2, ((uint)fVar18 & 0x7f800000) != 0x7f800000)) {
          if (param_4 != (undefined4 *)0x0) {
            uVar12 = (*(code *)PTR_FUN_1803da018)
                               (local_148._4_4_ * local_148._4_4_ +
                                (float)local_148 * (float)local_148 + local_140 * local_140);
            *param_4 = uVar12;
          }
          *local_d0 = fVar13;
          param_1[1] = fVar16;
          param_1[2] = fVar18;
          return param_1;
        }
      }
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  param_1[2] = param_3[2];
  return param_1;
}


