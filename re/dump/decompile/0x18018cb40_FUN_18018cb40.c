// 0x18018cb40  FUN_18018cb40
// size=437 thunk=false
// signature: undefined FUN_18018cb40()
// status: ok


ulonglong FUN_18018cb40(float *param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float *in_RAX;
  float *pfVar7;
  float *pfVar8;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [5];
  
  if ((1 < param_2) && (1 < param_3)) {
    fVar1 = *param_1;
    in_RAX = (float *)_fdclass(fVar1);
    if ((short)in_RAX < 1) {
      in_RAX = (float *)_fdclass(param_1[1]);
      if ((short)in_RAX < 1) {
        in_RAX = (float *)_fdclass(param_1[2]);
        if ((short)in_RAX < 1) {
          in_RAX = (float *)_fdclass(param_1[3]);
          if ((short)in_RAX < 1) {
            local_58 = 0.0;
            local_50 = 0.0;
            local_48 = 0.0;
            local_40 = 0.0;
            local_54 = (float)param_2;
            pfVar8 = &local_58;
            if (0.0 <= fVar1) {
              pfVar8 = param_1;
            }
            local_4c = (float)param_3;
            pfVar7 = &local_54;
            if (fVar1 <= local_54) {
              pfVar7 = pfVar8;
            }
            fVar1 = *pfVar7;
            *param_4 = fVar1;
            fVar2 = param_1[1];
            local_44 = local_54;
            pfVar8 = &local_50;
            if (0.0 <= fVar2) {
              pfVar8 = param_1 + 1;
            }
            local_3c[0] = local_4c;
            pfVar7 = &local_4c;
            if (fVar2 <= local_4c) {
              pfVar7 = pfVar8;
            }
            fVar2 = *pfVar7;
            param_4[1] = fVar2;
            fVar3 = param_1[2];
            pfVar8 = &local_48;
            if (0.0 <= fVar3) {
              pfVar8 = param_1 + 2;
            }
            pfVar7 = &local_44;
            if (fVar3 <= local_54) {
              pfVar7 = pfVar8;
            }
            fVar3 = *pfVar7;
            param_4[2] = fVar3;
            fVar6 = DAT_180380ac0;
            fVar4 = param_1[3];
            pfVar8 = &local_40;
            if (0.0 <= fVar4) {
              pfVar8 = param_1 + 3;
            }
            in_RAX = local_3c;
            if (fVar4 <= local_4c) {
              in_RAX = pfVar8;
            }
            bVar5 = DAT_180380ac0 <= fVar3 - fVar1;
            fVar1 = *in_RAX;
            param_4[3] = fVar1;
            if ((bVar5) && (fVar6 <= fVar1 - fVar2)) {
              return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
          }
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


