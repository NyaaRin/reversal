// 0x180280400  FUN_180280400
// size=1246 thunk=false
// signature: undefined FUN_180280400()
// status: ok


float * FUN_180280400(float *param_1,longlong param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float local_resc;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = DAT_180380ac0;
  fVar19 = *(float *)(param_2 + 0x230) + DAT_180380bb0;
  fVar16 = *(float *)(param_2 + 0x80);
  fVar20 = *(float *)(param_2 + 0x234) + DAT_180380bb0;
  fVar1 = *(float *)(param_2 + 0x84);
  fVar17 = (*(float *)(param_2 + 0x228) - DAT_180380bb0) + fVar16;
  fVar18 = (*(float *)(param_2 + 0x22c) - DAT_180380bb0) + fVar1;
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  if (fVar19 <= fVar17) {
    fVar17 = fVar19;
  }
  if (fVar20 <= fVar18) {
    fVar18 = fVar20;
  }
  uVar15 = param_4;
  if (((param_4 & 0x15) == 0) && (uVar15 = param_4 | 1, *(char *)(param_2 + 200) == '\0')) {
    uVar15 = param_4;
  }
  if ((uVar15 & 0x2a) == 0) {
    uVar11 = 2;
    if (*(char *)(param_2 + 0xd3) != '\0') {
      uVar11 = 0x20;
    }
    uVar15 = uVar15 | uVar11;
  }
  fVar2 = *param_3;
  pfVar13 = param_3 + 2;
  if ((fVar2 < fVar17) || (fVar19 < *pfVar13)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((param_3[1] < fVar18) || (fVar20 < param_3[3])) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  pfVar14 = param_3 + 3;
  fVar3 = *(float *)(lVar6 + 0xcd4);
  fVar4 = *pfVar13;
  if ((((fVar4 - fVar2) + fVar3 + fVar3 <= fVar19 - fVar17) || ('\0' < *(char *)(param_2 + 0xe8)))
     || ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((((*pfVar14 - param_3[1]) + *(float *)(lVar6 + 0xcd8) + *(float *)(lVar6 + 0xcd8) <=
        fVar20 - fVar18) || ('\0' < *(char *)(param_2 + 0xe9))) ||
     ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (((uVar15 & 1) == 0) || (bVar7)) {
    if ((((uVar15 & 4) != 0) && (!bVar7)) || ((uVar15 & 0x10) != 0)) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
      if (bVar8) {
        *(undefined4 *)(param_2 + 0xb0) = 0x3f000000;
        iVar12 = (int)(((((float)(int)((fVar4 + fVar2) * fVar5) - *(float *)(param_2 + 0x28)) -
                        *(float *)(param_2 + 0x70)) - fVar16) + *(float *)(param_2 + 0x98));
        goto LAB_1802806ba;
      }
      fVar16 = (((fVar2 - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70)) - fVar16) +
               *(float *)(param_2 + 0x98);
      goto LAB_1802806af;
    }
  }
  else {
    if ((fVar2 < fVar17) || (!bVar8)) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
      fVar16 = ((((fVar2 - fVar3) - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70)) -
               fVar16) + *(float *)(param_2 + 0x98);
LAB_1802806af:
      *(undefined4 *)(param_2 + 0xb0) = 0;
      iVar12 = (int)fVar16;
    }
    else {
      if (fVar4 < fVar19) goto LAB_1802806c9;
      *(undefined4 *)(param_2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xb8) = 0;
      iVar12 = (int)(((((fVar3 + fVar4) - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70))
                     - fVar16) + *(float *)(param_2 + 0x98));
    }
LAB_1802806ba:
    *(float *)(param_2 + 0xa8) = (float)iVar12;
  }
LAB_1802806c9:
  if (((uVar15 & 2) == 0) || (bVar9)) {
    if ((((uVar15 & 8) == 0) || (bVar9)) && ((uVar15 & 0x20) == 0)) goto LAB_1802807c5;
    if (!bVar10) {
      fVar16 = param_3[1];
      goto LAB_18028078d;
    }
    fVar16 = *pfVar14;
    fVar17 = param_3[1];
    *(undefined4 *)(param_2 + 0xb4) = 0x3f000000;
    iVar12 = (int)(((((float)(int)((fVar16 + fVar17) * fVar5) - *(float *)(param_2 + 0x2c)) -
                    *(float *)(param_2 + 0x74)) - fVar1) + *(float *)(param_2 + 0x9c));
  }
  else if ((param_3[1] < fVar18) || (!bVar10)) {
    fVar16 = param_3[1] - *(float *)(lVar6 + 0xcd8);
LAB_18028078d:
    *(undefined4 *)(param_2 + 0xb4) = 0;
    iVar12 = (int)((((fVar16 - *(float *)(param_2 + 0x2c)) - *(float *)(param_2 + 0x74)) - fVar1) +
                  *(float *)(param_2 + 0x9c));
  }
  else {
    fVar16 = *pfVar14;
    if (fVar16 < fVar20) goto LAB_1802807c5;
    fVar5 = *(float *)(lVar6 + 0xcd8);
    *(undefined4 *)(param_2 + 0xb4) = 0x3f800000;
    iVar12 = (int)(((((fVar16 + fVar5) - *(float *)(param_2 + 0x2c)) - *(float *)(param_2 + 0x74)) -
                   fVar1) + *(float *)(param_2 + 0x9c));
  }
  *(undefined4 *)(param_2 + 0xbc) = 0;
  *(float *)(param_2 + 0xac) = (float)iVar12;
LAB_1802807c5:
  FUN_1802801e0(&local_res8,param_2);
  local_res8 = local_res8 - *(float *)(param_2 + 0x98);
  local_resc = local_resc - *(float *)(param_2 + 0x9c);
  *param_1 = local_res8;
  param_1[1] = local_resc;
  if (((uVar15 & 0x40) == 0) && ((*(uint *)(param_2 + 0x14) & 0x1000000) != 0)) {
    local_a8 = *param_3 - local_res8;
    local_a4 = param_3[1] - local_resc;
    local_a0 = *pfVar13 - local_res8;
    local_9c = pfVar13[1] - local_resc;
    pfVar13 = (float *)FUN_180280400(&local_res8,*(undefined8 *)(param_2 + 0x3b0),&local_a8);
    fVar16 = *pfVar13;
    param_1[1] = pfVar13[1] + param_1[1];
    *param_1 = *param_1 + fVar16;
  }
  return param_1;
}


