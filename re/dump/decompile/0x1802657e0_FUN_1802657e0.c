// 0x1802657e0  FUN_1802657e0
// size=933 thunk=false
// signature: undefined FUN_1802657e0()
// status: ok


undefined8 *
FUN_1802657e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  
  puVar15 = param_3 + 8;
  if (param_2 < param_3) {
    while( true ) {
      uVar1 = param_3[1];
      uVar2 = param_3[-7];
      bVar17 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar17 = (ulonglong)param_3[-6] < (ulonglong)param_3[2];
      }
      if (bVar17) break;
      bVar17 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar17 = (ulonglong)param_3[2] < (ulonglong)param_3[-6];
      }
      if ((bVar17) || (param_3 = param_3 + -8, param_3 <= param_2)) break;
    }
  }
  puVar16 = puVar15;
  puVar13 = param_3;
  if (puVar15 < param_4) {
    uVar1 = param_3[1];
    while( true ) {
      uVar2 = puVar15[1];
      bVar17 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar17 = (ulonglong)puVar15[2] < (ulonglong)param_3[2];
      }
      puVar16 = puVar15;
      if (bVar17) break;
      bVar17 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar17 = (ulonglong)param_3[2] < (ulonglong)puVar15[2];
      }
      if ((bVar17) || (puVar15 = puVar15 + 8, puVar16 = puVar15, param_4 <= puVar15)) break;
    }
  }
joined_r0x000180265883:
  do {
    puVar14 = param_3;
    if (param_4 <= puVar15) {
joined_r0x00018026591d:
      while (puVar12 = puVar13, param_3 = puVar14, param_2 < puVar12) {
        uVar1 = puVar12[-7];
        puVar13 = puVar12 + -8;
        uVar2 = param_3[1];
        bVar17 = uVar1 < uVar2;
        if (uVar1 == uVar2) {
          bVar17 = (ulonglong)puVar12[-6] < (ulonglong)param_3[2];
        }
        puVar14 = param_3;
        if (!bVar17) {
          bVar17 = uVar2 < uVar1;
          if (uVar2 == uVar1) {
            bVar17 = (ulonglong)param_3[2] < (ulonglong)puVar12[-6];
          }
          if (bVar17) break;
          puVar14 = param_3 + -8;
          if (puVar14 != puVar13) {
            uVar3 = puVar12[-7];
            uVar4 = *puVar14;
            uVar5 = param_3[-7];
            uVar6 = param_3[-6];
            uVar7 = param_3[-5];
            uVar8 = param_3[-4];
            uVar9 = param_3[-3];
            uVar10 = param_3[-2];
            uVar11 = param_3[-1];
            *puVar14 = *puVar13;
            param_3[-7] = uVar3;
            uVar3 = puVar12[-5];
            param_3[-6] = puVar12[-6];
            param_3[-5] = uVar3;
            uVar3 = puVar12[-3];
            param_3[-4] = puVar12[-4];
            param_3[-3] = uVar3;
            uVar3 = puVar12[-1];
            param_3[-2] = puVar12[-2];
            param_3[-1] = uVar3;
            *puVar13 = uVar4;
            puVar12[-7] = uVar5;
            puVar12[-6] = uVar6;
            puVar12[-5] = uVar7;
            puVar12[-4] = uVar8;
            puVar12[-3] = uVar9;
            puVar12[-2] = uVar10;
            puVar12[-1] = uVar11;
          }
        }
      }
      if (puVar12 == param_2) {
        if (puVar15 == param_4) {
          *param_1 = param_3;
          param_1[1] = puVar16;
          return param_1;
        }
        if (puVar16 != puVar15) {
          uVar3 = puVar16[1];
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[2];
          uVar7 = param_3[3];
          uVar8 = param_3[4];
          uVar9 = param_3[5];
          uVar10 = param_3[6];
          uVar11 = param_3[7];
          *param_3 = *puVar16;
          param_3[1] = uVar3;
          uVar3 = puVar16[3];
          param_3[2] = puVar16[2];
          param_3[3] = uVar3;
          uVar3 = puVar16[5];
          param_3[4] = puVar16[4];
          param_3[5] = uVar3;
          uVar3 = puVar16[7];
          param_3[6] = puVar16[6];
          param_3[7] = uVar3;
          *puVar16 = uVar4;
          puVar16[1] = uVar5;
          puVar16[2] = uVar6;
          puVar16[3] = uVar7;
          puVar16[4] = uVar8;
          puVar16[5] = uVar9;
          puVar16[6] = uVar10;
          puVar16[7] = uVar11;
        }
        uVar3 = puVar15[1];
        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        uVar8 = param_3[4];
        uVar9 = param_3[5];
        uVar10 = param_3[6];
        uVar11 = param_3[7];
        *param_3 = *puVar15;
        param_3[1] = uVar3;
        uVar3 = puVar15[3];
        param_3[2] = puVar15[2];
        param_3[3] = uVar3;
        uVar3 = puVar15[5];
        param_3[4] = puVar15[4];
        param_3[5] = uVar3;
        uVar3 = puVar15[7];
        param_3[6] = puVar15[6];
        param_3[7] = uVar3;
        *puVar15 = uVar4;
        puVar15[1] = uVar5;
        puVar15[2] = uVar6;
        puVar15[3] = uVar7;
        puVar15[4] = uVar8;
        puVar15[5] = uVar9;
        puVar15[6] = uVar10;
        puVar15[7] = uVar11;
        puVar15 = puVar15 + 8;
        puVar16 = puVar16 + 8;
        param_3 = param_3 + 8;
        puVar13 = puVar12;
      }
      else {
        puVar13 = puVar12 + -8;
        if (puVar15 == param_4) {
          puVar14 = param_3 + -8;
          if (puVar13 != puVar14) {
            uVar3 = param_3[-7];
            uVar4 = *puVar13;
            uVar5 = puVar12[-7];
            uVar6 = puVar12[-6];
            uVar7 = puVar12[-5];
            uVar8 = puVar12[-4];
            uVar9 = puVar12[-3];
            uVar10 = puVar12[-2];
            uVar11 = puVar12[-1];
            *puVar13 = *puVar14;
            puVar12[-7] = uVar3;
            uVar3 = param_3[-5];
            puVar12[-6] = param_3[-6];
            puVar12[-5] = uVar3;
            uVar3 = param_3[-3];
            puVar12[-4] = param_3[-4];
            puVar12[-3] = uVar3;
            uVar3 = param_3[-1];
            puVar12[-2] = param_3[-2];
            puVar12[-1] = uVar3;
            *puVar14 = uVar4;
            param_3[-7] = uVar5;
            param_3[-6] = uVar6;
            param_3[-5] = uVar7;
            param_3[-4] = uVar8;
            param_3[-3] = uVar9;
            param_3[-2] = uVar10;
            param_3[-1] = uVar11;
          }
          uVar3 = puVar16[-7];
          uVar4 = *puVar14;
          uVar5 = param_3[-7];
          uVar6 = param_3[-6];
          uVar7 = param_3[-5];
          uVar8 = param_3[-4];
          uVar9 = param_3[-3];
          uVar10 = param_3[-2];
          uVar11 = param_3[-1];
          *puVar14 = puVar16[-8];
          param_3[-7] = uVar3;
          uVar3 = puVar16[-5];
          param_3[-6] = puVar16[-6];
          param_3[-5] = uVar3;
          uVar3 = puVar16[-3];
          param_3[-4] = puVar16[-4];
          param_3[-3] = uVar3;
          uVar3 = puVar16[-1];
          param_3[-2] = puVar16[-2];
          param_3[-1] = uVar3;
          puVar16[-8] = uVar4;
          puVar16[-7] = uVar5;
          puVar16[-6] = uVar6;
          puVar16[-5] = uVar7;
          puVar16[-4] = uVar8;
          puVar16[-3] = uVar9;
          puVar16[-2] = uVar10;
          puVar16[-1] = uVar11;
          puVar16 = puVar16 + -8;
          param_3 = puVar14;
        }
        else {
          uVar3 = puVar12[-7];
          uVar4 = *puVar15;
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          uVar8 = puVar15[4];
          uVar9 = puVar15[5];
          uVar10 = puVar15[6];
          uVar11 = puVar15[7];
          *puVar15 = *puVar13;
          puVar15[1] = uVar3;
          uVar3 = puVar12[-5];
          puVar15[2] = puVar12[-6];
          puVar15[3] = uVar3;
          uVar3 = puVar12[-3];
          puVar15[4] = puVar12[-4];
          puVar15[5] = uVar3;
          uVar3 = puVar12[-1];
          puVar15[6] = puVar12[-2];
          puVar15[7] = uVar3;
          puVar15 = puVar15 + 8;
          *puVar13 = uVar4;
          puVar12[-7] = uVar5;
          puVar12[-6] = uVar6;
          puVar12[-5] = uVar7;
          puVar12[-4] = uVar8;
          puVar12[-3] = uVar9;
          puVar12[-2] = uVar10;
          puVar12[-1] = uVar11;
        }
      }
      goto joined_r0x000180265883;
    }
    uVar1 = puVar15[1];
    uVar2 = param_3[1];
    bVar17 = uVar2 < uVar1;
    if (uVar2 == uVar1) {
      bVar17 = (ulonglong)param_3[2] < (ulonglong)puVar15[2];
    }
    if (!bVar17) {
      bVar17 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar17 = (ulonglong)puVar15[2] < (ulonglong)param_3[2];
      }
      if (bVar17) goto joined_r0x00018026591d;
      if (puVar16 != puVar15) {
        uVar3 = puVar15[1];
        uVar4 = *puVar16;
        uVar5 = puVar16[1];
        uVar6 = puVar16[2];
        uVar7 = puVar16[3];
        uVar8 = puVar16[4];
        uVar9 = puVar16[5];
        uVar10 = puVar16[6];
        uVar11 = puVar16[7];
        *puVar16 = *puVar15;
        puVar16[1] = uVar3;
        uVar3 = puVar15[3];
        puVar16[2] = puVar15[2];
        puVar16[3] = uVar3;
        uVar3 = puVar15[5];
        puVar16[4] = puVar15[4];
        puVar16[5] = uVar3;
        uVar3 = puVar15[7];
        puVar16[6] = puVar15[6];
        puVar16[7] = uVar3;
        *puVar15 = uVar4;
        puVar15[1] = uVar5;
        puVar15[2] = uVar6;
        puVar15[3] = uVar7;
        puVar15[4] = uVar8;
        puVar15[5] = uVar9;
        puVar15[6] = uVar10;
        puVar15[7] = uVar11;
      }
      puVar16 = puVar16 + 8;
    }
    puVar15 = puVar15 + 8;
  } while( true );
}


