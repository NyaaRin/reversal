// 0x1800bda90  FUN_1800bda90
// size=518 thunk=false
// signature: undefined FUN_1800bda90()
// status: ok


void FUN_1800bda90(longlong param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 local_res8 [2];
  int local_res10;
  ushort local_1a;
  
  if ((param_1 == 0) || (param_2 < 1)) {
    DAT_180409ce8 = 0;
    DAT_180409cf0 = (uint)local_1a << 0x10;
    DAT_1803e876c = -1;
    DAT_180409cf9 = 0;
    DAT_180409a1c = 0;
  }
  else if (DAT_1803e876c != param_2) {
    if ((-1 < DAT_1803e876c) && (param_2 != DAT_1803e876c + 1)) {
      DAT_180409ce8 = 0;
      DAT_180409cf0 = (uint)local_1a << 0x10;
      DAT_180409cf9 = 0;
      DAT_180409a1c = 0;
    }
    DAT_1803e876c = param_2;
    local_res10 = param_2;
    lVar4 = FUN_1800b2110(param_2 + -1);
    if (lVar4 != 0) {
      local_res8[0] = 0;
      cVar2 = FUN_1800b2190(lVar4,local_res8);
      uVar1 = local_res8[0];
      if ((cVar2 != '\0') && (sVar3 = _fdclass(local_res8[0]), sVar3 < 1)) {
        pfVar5 = (float *)FUN_18001d530(param_1);
        fVar6 = pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5 + pfVar5[2] * pfVar5[2];
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
        FUN_1800b1de0(&DAT_180409ce8,uVar1,fVar6,fVar7,fVar6);
        DAT_180409cf9 = 1;
        DAT_180409cf4 = DAT_180409cf4 + 1;
        if ((DAT_1803fa620 == 0) ||
           ((*(uint *)(DAT_1803fa620 + 0x20b88) < 0x80 && (*(uint *)(DAT_1803fa620 + 0x20b88) == 0))
           )) {
          DAT_180409cd0 = DAT_180409ce8;
          DAT_180409cd8 = DAT_180409cf0;
          DAT_180409cf8 = 1;
          DAT_1803e8768 = param_2;
        }
        DAT_180409a24 = DAT_180409ce8._4_4_;
        DAT_180409a1c = 1;
        return;
      }
    }
    DAT_180409cc8 = DAT_180409cc8 + 1;
    return;
  }
  return;
}


