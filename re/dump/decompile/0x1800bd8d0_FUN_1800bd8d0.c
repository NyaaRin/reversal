// 0x1800bd8d0  FUN_1800bd8d0
// size=441 thunk=false
// signature: undefined FUN_1800bd8d0()
// status: ok


undefined8 FUN_1800bd8d0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint local_res18 [4];
  float fVar8;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((((DAT_180409cf8 != '\0') && (param_1 != 0)) && (DAT_1803fa660 != 0)) &&
     ((DAT_1803fa620 != 0 && (uVar1 = *(uint *)(DAT_1803fa620 + 0x20b88), uVar1 < 0x80)))) {
    iVar5 = *(int *)(DAT_1803fa620 + 0x20b84);
    if (iVar5 < 0) {
      iVar5 = -1;
    }
    if (((-1 < iVar5) && (0 < (int)(uVar1 + 1))) &&
       ((-1 < iVar5 + 1 && (iVar5 + 1 == DAT_1803e8768)))) {
      pfVar3 = (float *)FUN_18001d530(param_1);
      fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3 + pfVar3[2] * pfVar3[2];
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      fVar7 = DAT_180380988;
      if ((DAT_1803fa608 != 0) && (0.0 < *(double *)(DAT_1803fa608 + 0x28))) {
        fVar7 = (float)*(double *)(DAT_1803fa608 + 0x28);
      }
      local_40 = DAT_180409cd0;
      local_38 = DAT_180409cd8;
      iVar5 = 0;
      fVar8 = fVar6;
      if (0 < (int)uVar1) {
        do {
          lVar4 = FUN_1800b2040(iVar5);
          if (lVar4 == 0) {
            return 0;
          }
          local_res18[0] = 0;
          cVar2 = FUN_1800b2190(lVar4,local_res18);
          if (cVar2 == '\0') {
            return 0;
          }
          if ((local_res18[0] & 0x7f800000) == 0x7f800000) {
            return 0;
          }
          FUN_1800b1de0(&local_40,local_res18[0],fVar6,fVar7,fVar8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar1);
      }
      *param_2 = local_40._4_4_;
      return 1;
    }
  }
  return 0;
}


