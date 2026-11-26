// 0x180266900  FUN_180266900
// size=428 thunk=false
// signature: undefined FUN_180266900()
// status: ok


void FUN_180266900(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  bool bVar14;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 2;
  uVar12 = *puVar13;
  bVar14 = uVar2 < uVar12;
  if (uVar2 == uVar12) {
    bVar14 = param_2[1] < param_2[3];
  }
  uVar3 = param_1[2];
  puVar1 = param_1 + 2;
  puVar11 = param_2;
  if (!bVar14) {
    puVar11 = puVar13;
    uVar2 = uVar12;
  }
  uVar12 = *param_1;
  bVar14 = uVar12 < uVar3;
  if (uVar12 == uVar3) {
    bVar14 = param_1[1] < param_1[3];
  }
  puVar10 = param_1;
  if (!bVar14) {
    puVar10 = puVar1;
    uVar12 = uVar3;
  }
  bVar14 = uVar2 < uVar12;
  if (uVar2 == uVar12) {
    bVar14 = puVar11[1] < puVar10[1];
  }
  if (bVar14) {
    uVar2 = param_1[1];
    uVar12 = *param_2;
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    uVar2 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar2;
    uVar2 = param_1[5];
    param_2[4] = param_1[4];
    param_2[5] = uVar2;
    *param_1 = uVar12;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
  }
  uVar2 = param_3[2];
  uVar12 = *param_3;
  bVar14 = uVar12 < uVar2;
  if (uVar12 == uVar2) {
    bVar14 = param_3[1] < param_3[3];
  }
  puVar11 = param_3;
  if (!bVar14) {
    uVar12 = uVar2;
    puVar11 = param_3 + 2;
  }
  uVar2 = *puVar13;
  uVar3 = *param_2;
  bVar14 = uVar3 < uVar2;
  if (uVar3 == uVar2) {
    bVar14 = param_2[1] < param_2[3];
  }
  puVar10 = param_2;
  if (!bVar14) {
    puVar10 = puVar13;
    uVar3 = uVar2;
  }
  bVar14 = uVar12 < uVar3;
  if (uVar12 == uVar3) {
    bVar14 = puVar11[1] < puVar10[1];
  }
  if (bVar14) {
    uVar2 = param_2[1];
    uVar3 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    *param_3 = *param_2;
    param_3[1] = uVar2;
    uVar2 = param_2[3];
    param_3[2] = param_2[2];
    param_3[3] = uVar2;
    uVar2 = param_2[5];
    param_3[4] = param_2[4];
    param_3[5] = uVar2;
    *param_2 = uVar3;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_2[4] = uVar8;
    param_2[5] = uVar9;
    uVar2 = *puVar13;
    uVar12 = *param_2;
    bVar14 = uVar12 < uVar2;
    if (uVar12 == uVar2) {
      bVar14 = param_2[1] < param_2[3];
    }
    uVar4 = *puVar1;
    puVar11 = param_2;
    if (!bVar14) {
      puVar11 = puVar13;
      uVar12 = uVar2;
    }
    uVar2 = *param_1;
    bVar14 = uVar2 < uVar4;
    if (uVar2 == uVar4) {
      bVar14 = param_1[1] < param_1[3];
    }
    puVar13 = param_1;
    if (!bVar14) {
      puVar13 = puVar1;
      uVar2 = uVar4;
    }
    bVar14 = uVar12 < uVar2;
    if (uVar12 == uVar2) {
      bVar14 = puVar11[1] < puVar13[1];
    }
    if (bVar14) {
      uVar2 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      uVar2 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar2;
      uVar2 = param_1[5];
      param_2[4] = param_1[4];
      param_2[5] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
    }
  }
  return;
}


