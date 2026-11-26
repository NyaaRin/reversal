// 0x180281aa0  FUN_180281aa0
// size=796 thunk=false
// signature: undefined FUN_180281aa0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180281aa0(float *param_1,float *param_2,float *param_3,uint *param_4,float *param_5,
                     float *param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_88 [6] [16];
  
  fVar9 = param_2[1];
  fVar7 = param_5[2];
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_5[1];
  fVar10 = fVar3;
  if ((fVar3 <= fVar9) && (fVar10 = param_5[3] - fVar1, fVar9 <= param_5[3] - fVar1)) {
    fVar10 = fVar9;
  }
  fVar9 = *param_5;
  fVar12 = *param_2;
  fVar14 = fVar9;
  if ((fVar9 <= fVar12) && (fVar14 = fVar7 - fVar2, fVar12 <= fVar7 - fVar2)) {
    fVar14 = fVar12;
  }
  if (param_7 == 1) {
    uVar4 = *param_4;
    local_88[0] = _DAT_180381500;
    iVar6 = -(uint)(uVar4 != 0xffffffff);
    do {
      uVar5 = uVar4;
      if ((iVar6 == -1) ||
         (uVar5 = *(uint *)(local_88[0] + (longlong)iVar6 * 4),
         *(uint *)(local_88[0] + (longlong)iVar6 * 4) != uVar4)) {
        if (uVar5 == 3) {
          fVar10 = *param_6;
          fVar12 = param_6[3];
        }
        else if (uVar5 == 1) {
          fVar10 = *param_6;
          fVar12 = param_6[1] - fVar1;
        }
        else if (uVar5 == 0) {
          fVar12 = param_6[3];
          fVar10 = param_6[2] - fVar2;
        }
        else if (uVar5 == 2) {
          fVar10 = param_6[2] - fVar2;
          fVar12 = param_6[1] - fVar1;
        }
        else {
          fVar10 = 0.0;
          fVar12 = 0.0;
        }
        if ((((fVar9 <= fVar10) && (fVar3 <= fVar12)) && (fVar2 + fVar10 <= fVar7)) &&
           (fVar1 + fVar12 <= param_5[3])) {
          *param_1 = fVar10;
          param_1[1] = fVar12;
          *param_4 = uVar5;
          return param_1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    *param_4 = 0xffffffff;
    fVar9 = *param_2;
  }
  else {
    if ((param_7 & 0xfffffffd) == 0) {
      uVar4 = *param_4;
      local_88[0]._4_4_ = _UNK_180381494;
      local_88[0]._0_4_ = _DAT_180381490;
      local_88[0]._8_4_ = _UNK_180381498;
      local_88[0]._12_4_ = _UNK_18038149c;
      iVar6 = -(uint)(uVar4 != 0xffffffff);
      do {
        uVar5 = uVar4;
        if ((iVar6 == -1) ||
           (uVar5 = *(uint *)(local_88[0] + (longlong)iVar6 * 4),
           *(uint *)(local_88[0] + (longlong)iVar6 * 4) != uVar4)) {
          fVar12 = fVar3;
          if (uVar5 == 0) {
            fVar11 = *param_6;
LAB_180281cd6:
            fVar13 = fVar9;
            if (uVar5 == 2) {
              fVar8 = param_6[1];
            }
            else {
              fVar8 = param_5[3];
              if (uVar5 == 3) {
                fVar12 = param_6[3];
              }
            }
          }
          else {
            fVar11 = fVar7;
            if (uVar5 != 1) goto LAB_180281cd6;
            fVar13 = param_6[2];
            fVar8 = param_5[3];
          }
          if (((fVar2 <= fVar11 - fVar13) || (1 < uVar5)) &&
             ((fVar1 <= fVar8 - fVar12 || (1 < uVar5 - 2)))) {
            if (uVar5 == 0) {
              fVar14 = *param_6 - fVar2;
            }
            else if (uVar5 == 1) {
              fVar14 = param_6[2];
            }
            else if (uVar5 == 2) {
              fVar10 = param_6[1] - fVar1;
            }
            else if (uVar5 == 3) {
              fVar10 = param_6[3];
            }
            if (fVar14 <= fVar9) {
              fVar14 = fVar9;
            }
            *param_4 = uVar5;
            if (fVar10 <= fVar3) {
              fVar10 = fVar3;
            }
            *param_1 = fVar14;
            param_1[1] = fVar10;
            return param_1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    *param_4 = 0xffffffff;
    fVar9 = *param_2;
    if (param_7 == 2) {
      fVar7 = param_2[1] + DAT_180380d30;
      *param_1 = fVar9 + DAT_180380d30;
      goto LAB_180281c50;
    }
  }
  fVar1 = param_3[1];
  fVar9 = *param_3 + fVar9;
  if (param_5[2] <= fVar9) {
    fVar9 = param_5[2];
  }
  fVar9 = fVar9 - *param_3;
  fVar7 = fVar1 + param_2[1];
  if (fVar9 <= *param_5) {
    fVar9 = *param_5;
  }
  if (param_5[3] <= fVar7) {
    fVar7 = param_5[3];
  }
  *param_1 = fVar9;
  fVar7 = fVar7 - fVar1;
  if (fVar7 <= param_5[1]) {
    fVar7 = param_5[1];
  }
LAB_180281c50:
  param_1[1] = fVar7;
  return param_1;
}


