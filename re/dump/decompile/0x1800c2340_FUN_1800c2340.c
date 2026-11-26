// 0x1800c2340  FUN_1800c2340
// size=688 thunk=false
// signature: undefined FUN_1800c2340()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800c2340(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar11 = DAT_1803817f0;
  fVar1 = param_1[1];
  fVar2 = param_1[6];
  fVar18 = param_1[9];
  fVar19 = param_1[10];
  fVar21 = param_1[5];
  fVar3 = param_1[8];
  fVar16 = fVar19 * fVar21 - fVar18 * fVar2;
  fVar4 = param_1[4];
  fVar17 = fVar18 * fVar4 - fVar3 * fVar21;
  fVar15 = (float)((uint)(fVar19 * fVar4 - fVar3 * fVar2) ^ DAT_1803817f0);
  fVar13 = fVar15 * fVar1 + fVar16 * *param_1 + fVar17 * param_1[2];
  bVar10 = DAT_180380928 <= (float)((uint)fVar13 & _DAT_1803817c0);
  if (bVar10) {
    fVar13 = DAT_180380bb0 / fVar13;
    fVar16 = fVar13 * fVar16;
    fVar5 = param_1[2];
    fVar15 = fVar13 * fVar15;
    fVar6 = *param_1;
    fVar12 = (float)((uint)(fVar19 * fVar1 - fVar18 * fVar5) ^ DAT_1803817f0) * fVar13;
    fVar7 = param_1[1];
    fVar14 = (fVar2 * fVar1 - fVar21 * fVar5) * fVar13;
    param_2[2] = fVar14;
    fVar1 = param_1[3];
    fVar8 = param_1[1];
    fVar9 = param_1[0xb];
    fVar20 = (fVar19 * fVar6 - fVar3 * fVar5) * fVar13;
    fVar19 = (float)((uint)(fVar18 * fVar6 - fVar3 * fVar7) ^ uVar11) * fVar13;
    param_2[1] = fVar12;
    fVar21 = (fVar21 * fVar6 - fVar4 * fVar8) * fVar13;
    fVar18 = (float)((uint)(fVar2 * fVar6 - fVar4 * fVar5) ^ uVar11) * fVar13;
    fVar13 = fVar13 * fVar17;
    fVar2 = param_1[7];
    *param_2 = fVar16;
    param_2[4] = fVar15;
    param_2[5] = fVar20;
    param_2[6] = fVar18;
    param_2[8] = fVar13;
    param_2[9] = fVar19;
    param_2[10] = fVar21;
    param_2[3] = (float)((uint)(fVar2 * fVar12 + fVar1 * fVar16 + fVar9 * fVar14) ^ uVar11);
    param_2[7] = (float)((uint)(fVar2 * fVar20 + fVar1 * fVar15 + fVar9 * fVar18) ^ uVar11);
    param_2[0xb] = (float)((uint)(fVar2 * fVar19 + fVar1 * fVar13 + fVar9 * fVar21) ^ uVar11);
  }
  return bVar10;
}


