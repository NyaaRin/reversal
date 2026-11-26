// 0x18028fa20  FUN_18028fa20
// size=414 thunk=false
// signature: undefined FUN_18028fa20()
// status: ok


void FUN_18028fa20(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  
  if (0xc < (int)param_2) {
    uVar13 = (ulonglong)param_2;
    do {
      uVar9 = uVar13 >> 1;
      fVar3 = *(float *)((longlong)param_1 + uVar9 * 0x14 + 4);
      fVar4 = *(float *)((longlong)param_1 + uVar13 * 0x14 + -0x10);
      uVar14 = (int)uVar13 - 1;
      if (*(float *)((longlong)param_1 + 4) < fVar3 != fVar3 < fVar4) {
        puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
        uVar6 = puVar1[1];
        uVar12 = 0;
        if (*(float *)((longlong)param_1 + 4) < fVar4 != fVar3 < fVar4) {
          uVar12 = uVar14;
        }
        lVar10 = (longlong)(int)uVar12;
        puVar11 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        uVar7 = *puVar11;
        uVar8 = puVar11[1];
        uVar5 = *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10);
        puVar11 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        *puVar11 = *puVar1;
        puVar11[1] = uVar6;
        *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10) =
             *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10) = uVar5;
      }
      puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
      uVar6 = puVar1[1];
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar7 = *param_1;
      uVar8 = param_1[1];
      *param_1 = *puVar1;
      param_1[1] = uVar6;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10);
      puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10) = uVar5;
      iVar15 = 1;
      while( true ) {
        fVar3 = *(float *)((longlong)param_1 + 4);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar15 * 0x14 + 4);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          do {
            iVar15 = iVar15 + 1;
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar15 * 0x14 + 4);
          } while (*pfVar2 <= fVar3 && fVar3 != *pfVar2);
        }
        fVar4 = *(float *)((longlong)param_1 + (longlong)(int)uVar14 * 0x14 + 4);
        while (fVar3 < fVar4) {
          uVar14 = uVar14 - 1;
          fVar4 = *(float *)((longlong)param_1 + (longlong)(int)uVar14 * 0x14 + 4);
        }
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar15 * 0x14);
        if ((int)uVar14 <= iVar15) break;
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar5 = *(undefined4 *)(puVar1 + 2);
        iVar15 = iVar15 + 1;
        lVar10 = (longlong)(int)uVar14;
        uVar14 = uVar14 - 1;
        puVar11 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        uVar8 = puVar11[1];
        *puVar1 = *puVar11;
        puVar1[1] = uVar8;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10) = uVar5;
      }
      uVar12 = (int)uVar13 - iVar15;
      uVar9 = (ulonglong)uVar12;
      puVar11 = puVar1;
      uVar13 = (ulonglong)uVar14;
      if ((int)uVar14 < (int)uVar12) {
        puVar11 = param_1;
        param_1 = puVar1;
        uVar13 = uVar9;
        uVar9 = (ulonglong)uVar14;
      }
      FUN_18028fa20(puVar11,uVar9);
    } while (0xc < (int)uVar13);
  }
  return;
}


