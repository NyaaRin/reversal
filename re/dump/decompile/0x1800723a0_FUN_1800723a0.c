// 0x1800723a0  FUN_1800723a0
// size=1140 thunk=false
// signature: undefined FUN_1800723a0()
// status: ok


uint FUN_1800723a0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  float local_100;
  float local_f8;
  float local_f0;
  float local_e8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  local_108 = param_1;
  uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar8 = (*pcVar4)(DAT_1803fa360,uVar6);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_18001c430(lVar8,&local_140);
    local_130 = local_140;
    uVar7 = (uint)local_140 & 0x7f800000;
    if (uVar7 != 0x7f800000) {
      local_100 = local_13c;
      uVar7 = (uint)local_13c & 0x7f800000;
      if (uVar7 != 0x7f800000) {
        local_f8 = local_138;
        uVar7 = (uint)local_138 & 0x7f800000;
        if (uVar7 != 0x7f800000) {
          *param_1 = local_140;
          pfVar1 = param_1 + 1;
          *pfVar1 = local_13c;
          pfVar2 = param_1 + 2;
          *pfVar2 = local_138;
          DAT_180423990 = 0;
          if (DAT_1803de067 == '\0') {
            if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
              uVar7 = 1;
            }
            else {
              local_118 = pfVar2;
              local_110 = pfVar1;
              puVar9 = (undefined8 *)FUN_18001d530(lVar8);
              uVar3 = *puVar9;
              fVar15 = (float)uVar3;
              fVar14 = *(float *)(puVar9 + 1);
              if (((uint)fVar15 & 0x7f800000) != 0x7f800000) {
                local_128._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                fVar13 = local_128._4_4_;
                local_e8 = local_128._4_4_;
                if ((((uint)local_128._4_4_ & 0x7f800000) != 0x7f800000) &&
                   (((uint)fVar14 & 0x7f800000) != 0x7f800000)) {
                  fVar10 = local_128._4_4_ * local_128._4_4_;
                  local_128 = uVar3;
                  local_120 = fVar14;
                  local_f0 = fVar15;
                  local_e0 = fVar14;
                  (*(code *)PTR_FUN_1803da018)(fVar10 + fVar15 * fVar15 + fVar14 * fVar14);
                  fVar10 = DAT_180380bb0;
                  if (DAT_180380bb0 < extraout_XMM0_Da) {
                    local_130 = extraout_XMM0_Da;
                    if ((DAT_1803fcf70 == 0) && (DAT_1803fa340 != 0)) {
                      DAT_1803fcf70 = FUN_180016fb0("sv_maxspeed");
                    }
                    if ((DAT_1803f8fc0 == 0) && (DAT_1803fa340 != 0)) {
                      DAT_1803f8fc0 = FUN_180016fb0("sv_noclipspeed");
                    }
                    fVar12 = DAT_18038128c;
                    fVar11 = DAT_1803811fc;
                    if ((DAT_1803fcf70 == 0) ||
                       (fVar16 = DAT_18038128c, fVar11 = (float)FUN_180019700(DAT_1803fcf70),
                       fVar10 < fVar11)) {
                      cVar5 = FUN_18001e0a0(lVar8);
                      fVar12 = fVar10;
                      if ((cVar5 == '\b') && (DAT_1803f8fc0 != 0)) {
                        fVar12 = (float)FUN_180019700();
                      }
                      if (fVar12 <= fVar10) {
                        fVar12 = fVar10;
                      }
                      fVar12 = fVar12 * fVar11 * DAT_180380e9c;
                      fVar16 = fVar12;
                    }
                    fVar10 = DAT_180381120;
                    if ((fVar12 < DAT_180381120) || (fVar10 = DAT_1803812a0, DAT_1803812a0 < fVar12)
                       ) {
                      fVar12 = fVar10;
                      fVar16 = fVar10;
                    }
                    if (fVar12 < extraout_XMM0_Da) {
                      fVar12 = fVar12 / extraout_XMM0_Da;
                      fVar15 = fVar15 * fVar12;
                      fVar13 = fVar13 * fVar12;
                      local_128 = CONCAT44(fVar13,fVar15);
                      fVar14 = fVar14 * fVar12;
                      local_120 = fVar14;
                    }
                    fVar10 = (float)*(double *)(DAT_1803fa608 + 0x28);
                    fVar15 = fVar10 * fVar15;
                    fVar13 = fVar10 * fVar13;
                    fVar10 = fVar10 * fVar14;
                    local_d8 = fVar15 + local_140;
                    local_d4 = fVar13 + local_13c;
                    local_d0 = fVar10 + local_138;
                    local_118 = (float *)CONCAT44(local_118._4_4_,local_d8);
                    if (((uint)local_d8 & 0x7f800000) != 0x7f800000) {
                      local_110 = (float *)CONCAT44(local_110._4_4_,local_d4);
                      if (((uint)local_d4 & 0x7f800000) != 0x7f800000) {
                        local_108 = (float *)CONCAT44(local_108._4_4_,local_d0);
                        if (((uint)local_d0 & 0x7f800000) != 0x7f800000) {
                          *param_1 = local_d8;
                          *pfVar1 = local_d4;
                          *pfVar2 = local_d0;
                          local_140 = fVar15;
                          local_13c = fVar13;
                          local_138 = fVar10;
                          (*(code *)PTR_FUN_1803da018)
                                    (fVar13 * fVar13 + fVar15 * fVar15 + fVar10 * fVar10,
                                     fVar10 * fVar10,fVar15 * fVar15,local_d4,fVar16);
                          DAT_180423990 = extraout_XMM0_Da_00;
                        }
                      }
                    }
                    return 1;
                  }
                  return 1;
                }
              }
              uVar7 = 1;
            }
          }
          else {
            uVar7 = 1;
          }
        }
      }
    }
  }
  return uVar7;
}


