// 0x18028afe0  FUN_18028afe0
// size=892 thunk=false
// signature: undefined FUN_18028afe0()
// status: ok


int * FUN_18028afe0(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int local_res18;
  int local_78;
  int local_74;
  int *local_68;
  
  iVar15 = param_3 + -1 + param_2[2];
  iVar10 = *param_2;
  iVar15 = iVar15 - iVar15 % param_2[2];
  if ((iVar10 < iVar15) || (iVar2 = param_2[1], iVar2 < param_4)) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    return param_1;
  }
  piVar3 = *(int **)(param_2 + 6);
  iVar12 = 0x40000000;
  piVar1 = param_2 + 6;
  iVar7 = *piVar3;
  local_74 = 0x40000000;
  local_res18 = 0x40000000;
  local_68 = (int *)0x0;
  if (iVar7 + iVar15 <= iVar10) {
    piVar9 = piVar3;
    piVar17 = piVar1;
    iVar4 = iVar7;
    do {
      iVar13 = 0;
      iVar6 = 0;
      iVar11 = 0;
      piVar14 = piVar9;
      iVar16 = iVar12;
      iVar12 = iVar4;
      while (iVar12 < iVar4 + iVar15) {
        iVar16 = piVar14[1];
        if (iVar13 < iVar16) {
          piVar8 = *(int **)(piVar14 + 2);
          iVar5 = (iVar16 - iVar13) * iVar11;
          iVar12 = *piVar8;
          iVar13 = iVar16;
          if (*piVar14 < iVar4) {
            iVar11 = iVar11 + (iVar12 - iVar4);
          }
          else {
            iVar11 = iVar11 + (iVar12 - *piVar14);
          }
        }
        else {
          piVar8 = *(int **)(piVar14 + 2);
          iVar12 = *piVar8;
          iVar5 = iVar15 - iVar11;
          if ((iVar12 - *piVar14) + iVar11 <= iVar15) {
            iVar5 = iVar12 - *piVar14;
          }
          iVar11 = iVar11 + iVar5;
          iVar5 = (iVar13 - iVar16) * iVar5;
        }
        iVar6 = iVar6 + iVar5;
        piVar14 = piVar8;
        iVar16 = local_res18;
      }
      iVar12 = iVar16;
      piVar14 = local_68;
      if (param_2[4] == 0) {
        iVar12 = iVar13;
        local_res18 = iVar13;
        piVar14 = piVar17;
        if (iVar16 <= iVar13) {
          iVar12 = iVar16;
          local_res18 = iVar16;
          piVar14 = local_68;
        }
      }
      else if ((param_4 + iVar13 <= iVar2) &&
              ((iVar13 < iVar16 || ((iVar13 == iVar16 && (iVar6 < local_74)))))) {
        iVar12 = iVar13;
        local_res18 = iVar13;
        local_74 = iVar6;
        piVar14 = piVar17;
      }
      local_68 = piVar14;
      piVar17 = piVar9 + 2;
      piVar9 = *(int **)(piVar9 + 2);
      iVar4 = *piVar9;
    } while (iVar4 + iVar15 <= iVar10);
    if (local_68 != (int *)0x0) {
      local_78 = **(int **)local_68;
      goto LAB_18028b1bf;
    }
  }
  local_78 = 0;
LAB_18028b1bf:
  piVar17 = piVar3;
  if (param_2[4] == 1) {
    while (iVar7 < iVar15) {
      iVar7 = **(int **)(piVar17 + 2);
      piVar17 = *(int **)(piVar17 + 2);
    }
    for (; piVar17 != (int *)0x0; piVar17 = *(int **)(piVar17 + 2)) {
      iVar7 = *piVar17 - iVar15;
      iVar10 = **(int **)(piVar3 + 2);
      while (iVar10 <= iVar7) {
        piVar1 = piVar3 + 2;
        piVar3 = *(int **)(piVar3 + 2);
        iVar10 = **(int **)(piVar3 + 2);
      }
      iVar4 = 0;
      iVar16 = 0;
      iVar12 = 0;
      iVar10 = *piVar3;
      piVar9 = piVar3;
      while (iVar10 < *piVar17) {
        iVar11 = piVar9[1];
        if (iVar4 < iVar11) {
          piVar14 = *(int **)(piVar9 + 2);
          iVar6 = (iVar11 - iVar4) * iVar12;
          iVar10 = *piVar14;
          iVar4 = iVar11;
          if (*piVar9 < iVar7) {
            iVar12 = iVar12 + (iVar10 - iVar7);
          }
          else {
            iVar12 = iVar12 + (iVar10 - *piVar9);
          }
        }
        else {
          piVar14 = *(int **)(piVar9 + 2);
          iVar10 = *piVar14;
          iVar6 = iVar15 - iVar12;
          if (iVar12 + (iVar10 - *piVar9) <= iVar15) {
            iVar6 = iVar10 - *piVar9;
          }
          iVar12 = iVar12 + iVar6;
          iVar6 = (iVar4 - iVar11) * iVar6;
        }
        iVar16 = iVar16 + iVar6;
        piVar9 = piVar14;
      }
      if (((param_4 + iVar4 <= iVar2) && (iVar4 <= local_res18)) &&
         (((iVar4 < local_res18 || (iVar16 < local_74)) ||
          ((iVar16 == local_74 && (iVar7 < local_78)))))) {
        local_res18 = iVar4;
        local_78 = iVar7;
        local_74 = iVar16;
        local_68 = piVar1;
      }
      iVar12 = local_res18;
    }
  }
  *(int **)(param_1 + 2) = local_68;
  *param_1 = local_78;
  param_1[1] = iVar12;
  return param_1;
}


