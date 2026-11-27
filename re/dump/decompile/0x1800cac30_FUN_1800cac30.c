// 0x1800cac30  FUN_1800cac30
// size=903 thunk=false
// signature: undefined FUN_1800cac30()
// status: ok


float * FUN_1800cac30(float *param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_118 [2];
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0 [2];
  float *local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float *local_d0;
  undefined4 *local_c8;
  float *local_c0;
  float *local_b8;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (((((uint)*param_3 & 0x7f800000) != 0x7f800000) &&
      (pfVar1 = param_3 + 1, ((uint)*pfVar1 & 0x7f800000) != 0x7f800000)) &&
     (pfVar2 = param_3 + 2, ((uint)*pfVar2 & 0x7f800000) != 0x7f800000)) {
    local_110 = param_2;
    local_e8 = param_1;
    local_d0 = param_1;
    local_c8 = param_4;
    local_c0 = pfVar1;
    local_b8 = pfVar2;
    uVar6 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar6 = FUN_180241610(uVar6,0x841e60f2a28125db);
    pcVar7 = (char *)FUN_1801fcfc0(uVar6);
    if (*pcVar7 == '\0') {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = param_3[2];
      return param_1;
    }
    cVar5 = FUN_1800ca850(local_110);
    if (((cVar5 == '\0') && (cVar5 = FUN_1800ca8a0(local_110,&local_e0), cVar5 != '\0')) &&
       ((fVar10 = (float)FUN_1800ca770(), 0.0 < fVar10 &&
        ((fVar13 = local_e0 * fVar10, ((uint)fVar13 & 0x7f800000) != 0x7f800000 &&
         (fVar14 = local_dc * fVar10, ((uint)fVar14 & 0x7f800000) != 0x7f800000)))))) {
      fVar10 = local_d8 * fVar10;
      local_110 = CONCAT44(local_110._4_4_,fVar10);
      if (((uint)fVar10 & 0x7f800000) != 0x7f800000) {
        local_118[0] = 96.0;
        local_108 = fVar10;
        local_104 = fVar14;
        local_100 = fVar13;
        local_fc = fVar13;
        local_f8 = fVar14;
        uVar6 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
        uVar6 = FUN_180241610(uVar6,0x4d3af9f5fe2c9c98);
        pfVar8 = (float *)FUN_180202dc0(uVar6);
        local_118[0] = *pfVar8;
        local_f0[0] = 512.0;
        local_f4 = 0.0;
        pfVar8 = &local_f4;
        if (0.0 <= local_118[0]) {
          pfVar8 = local_118;
        }
        pfVar9 = local_f0;
        if (local_118[0] <= DAT_18038124c) {
          pfVar9 = pfVar8;
        }
        fVar11 = (float)(*(code *)PTR_FUN_1803da018)
                                  (fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10);
        if (0.0 < fVar11) {
          if (*pfVar9 < fVar11) {
            fVar11 = *pfVar9 / fVar11;
            fVar13 = fVar11 * fVar13;
            fVar14 = fVar11 * fVar14;
            fVar10 = fVar11 * fVar10;
          }
          fVar11 = *param_3;
          if (((((uint)(fVar13 + fVar11) & 0x7f800000) != 0x7f800000) &&
              (fVar3 = *pfVar1, ((uint)(fVar14 + fVar3) & 0x7f800000) != 0x7f800000)) &&
             (fVar4 = *pfVar2, ((uint)(fVar10 + fVar4) & 0x7f800000) != 0x7f800000)) {
            if (param_4 != (undefined4 *)0x0) {
              uVar12 = (*(code *)PTR_FUN_1803da018)
                                 (fVar13 * fVar13 + fVar14 * fVar14 + fVar10 * fVar10);
              *param_4 = uVar12;
            }
            *param_1 = fVar13 + fVar11;
            param_1[1] = fVar14 + fVar3;
            param_1[2] = fVar10 + fVar4;
            return param_1;
          }
        }
      }
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  param_1[2] = param_3[2];
  return param_1;
}


