// 0x1802650e0  FUN_1802650e0
// size=1390 thunk=false
// signature: undefined FUN_1802650e0()
// status: ok


void FUN_1802650e0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  bool bVar15;
  bool bVar16;
  
  puVar14 = param_3 + 6;
  if (param_2 < param_3) {
    while( true ) {
      uVar1 = param_3[-6];
      puVar11 = param_3 + -6;
      uVar2 = param_3[-4];
      bVar15 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar15 = param_3[-5] < param_3[-3];
      }
      uVar12 = param_3[2];
      uVar3 = *param_3;
      uVar13 = param_3[((ulonglong)bVar15 + 2) * -2];
      bVar16 = uVar3 < uVar12;
      if (uVar3 == uVar12) {
        bVar16 = param_3[1] < param_3[3];
      }
      puVar8 = param_3;
      uVar7 = uVar3;
      if (!bVar16) {
        puVar8 = param_3 + 2;
        uVar7 = uVar12;
      }
      bVar16 = uVar13 < uVar7;
      if (uVar13 == uVar7) {
        bVar16 = (param_3 + ((ulonglong)bVar15 + 2) * -2)[1] < puVar8[1];
      }
      if (bVar16) break;
      bVar15 = uVar3 < uVar12;
      if (uVar3 == uVar12) {
        bVar15 = param_3[1] < param_3[3];
      }
      puVar8 = param_3;
      if (!bVar15) {
        puVar8 = param_3 + 2;
      }
      bVar15 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar15 = param_3[-5] < param_3[-3];
      }
      lVar10 = ((ulonglong)bVar15 ^ 1) - 3;
      bVar15 = *puVar8 < param_3[lVar10 * 2];
      if (*puVar8 == param_3[lVar10 * 2]) {
        bVar15 = puVar8[1] < param_3[lVar10 * 2 + 1];
      }
      if ((bVar15) || (param_3 = puVar11, puVar11 <= param_2)) break;
    }
  }
  puVar8 = puVar14;
  puVar11 = param_3;
  if (puVar14 < param_4) {
    uVar1 = *param_3;
    uVar2 = param_3[2];
    while( true ) {
      uVar12 = puVar14[2];
      uVar3 = *puVar14;
      bVar15 = uVar3 < uVar12;
      if (uVar3 == uVar12) {
        bVar15 = puVar14[1] < puVar14[3];
      }
      puVar8 = puVar14 + 2;
      uVar13 = uVar12;
      if (bVar15) {
        puVar8 = puVar14;
        uVar13 = uVar3;
      }
      bVar15 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar15 = param_3[1] < param_3[3];
      }
      puVar5 = param_3 + 2;
      if (bVar15) {
        puVar5 = param_3;
      }
      bVar15 = uVar13 < *puVar5;
      if (uVar13 == *puVar5) {
        bVar15 = puVar8[1] < puVar5[1];
      }
      puVar8 = puVar14;
      if (bVar15) break;
      bVar15 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar15 = param_3[1] < param_3[3];
      }
      puVar5 = param_3 + 2;
      if (bVar15) {
        puVar5 = param_3;
      }
      bVar15 = uVar3 < uVar12;
      if (uVar3 == uVar12) {
        bVar15 = puVar14[1] < puVar14[3];
      }
      puVar9 = puVar14 + 2;
      if (bVar15) {
        puVar9 = puVar14;
      }
      bVar15 = *puVar5 < *puVar9;
      if (*puVar5 == *puVar9) {
        bVar15 = puVar5[1] < puVar9[1];
      }
      if ((bVar15) || (puVar14 = puVar14 + 6, puVar8 = puVar14, param_4 <= puVar14)) break;
    }
  }
joined_r0x0001802652ba:
  do {
    puVar5 = param_3;
    if (param_4 <= puVar14) {
joined_r0x0001802653c5:
      while (param_3 = puVar5, puVar9 = puVar11, param_2 < puVar9) {
        uVar1 = puVar9[-4];
        puVar11 = puVar9 + -6;
        uVar2 = *puVar11;
        bVar15 = uVar2 < uVar1;
        if (uVar2 == uVar1) {
          bVar15 = puVar9[-5] < puVar9[-3];
        }
        puVar5 = puVar9 + -4;
        uVar12 = uVar1;
        if (bVar15) {
          puVar5 = puVar11;
          uVar12 = uVar2;
        }
        uVar3 = param_3[2];
        uVar13 = *param_3;
        bVar15 = uVar13 < uVar3;
        if (uVar13 == uVar3) {
          bVar15 = param_3[1] < param_3[3];
        }
        uVar7 = uVar3;
        puVar6 = param_3 + 2;
        if (bVar15) {
          uVar7 = uVar13;
          puVar6 = param_3;
        }
        bVar15 = uVar12 < uVar7;
        if (uVar12 == uVar7) {
          bVar15 = puVar5[1] < puVar6[1];
        }
        puVar5 = param_3;
        if (!bVar15) {
          bVar15 = uVar13 < uVar3;
          if (uVar13 == uVar3) {
            bVar15 = param_3[1] < param_3[3];
          }
          puVar5 = param_3 + 2;
          if (bVar15) {
            puVar5 = param_3;
          }
          bVar15 = uVar2 < uVar1;
          if (uVar2 == uVar1) {
            bVar15 = puVar9[-5] < puVar9[-3];
          }
          puVar6 = puVar9 + -4;
          if (bVar15) {
            puVar6 = puVar11;
          }
          bVar15 = *puVar5 < *puVar6;
          if (*puVar5 == *puVar6) {
            bVar15 = puVar5[1] < puVar6[1];
          }
          if (bVar15) break;
          puVar5 = param_3 + -6;
          if (puVar5 != puVar11) {
            uVar1 = puVar9[-5];
            uVar2 = *puVar5;
            uVar12 = param_3[-5];
            uVar3 = param_3[-4];
            uVar13 = param_3[-3];
            uVar7 = param_3[-2];
            uVar4 = param_3[-1];
            *puVar5 = *puVar11;
            param_3[-5] = uVar1;
            uVar1 = puVar9[-3];
            param_3[-4] = puVar9[-4];
            param_3[-3] = uVar1;
            uVar1 = puVar9[-1];
            param_3[-2] = puVar9[-2];
            param_3[-1] = uVar1;
            *puVar11 = uVar2;
            puVar9[-5] = uVar12;
            puVar9[-4] = uVar3;
            puVar9[-3] = uVar13;
            puVar9[-2] = uVar7;
            puVar9[-1] = uVar4;
          }
        }
      }
      if (puVar9 == param_2) {
        if (puVar14 == param_4) {
          *param_1 = (ulonglong)param_3;
          param_1[1] = (ulonglong)puVar8;
          return;
        }
        if (puVar8 != puVar14) {
          uVar1 = puVar8[1];
          uVar2 = *param_3;
          uVar12 = param_3[1];
          uVar3 = param_3[2];
          uVar13 = param_3[3];
          uVar7 = param_3[4];
          uVar4 = param_3[5];
          *param_3 = *puVar8;
          param_3[1] = uVar1;
          uVar1 = puVar8[3];
          param_3[2] = puVar8[2];
          param_3[3] = uVar1;
          uVar1 = puVar8[5];
          param_3[4] = puVar8[4];
          param_3[5] = uVar1;
          *puVar8 = uVar2;
          puVar8[1] = uVar12;
          puVar8[2] = uVar3;
          puVar8[3] = uVar13;
          puVar8[4] = uVar7;
          puVar8[5] = uVar4;
        }
        uVar1 = puVar14[1];
        uVar2 = *param_3;
        uVar12 = param_3[1];
        uVar3 = param_3[2];
        uVar13 = param_3[3];
        uVar7 = param_3[4];
        uVar4 = param_3[5];
        *param_3 = *puVar14;
        param_3[1] = uVar1;
        uVar1 = puVar14[3];
        param_3[2] = puVar14[2];
        param_3[3] = uVar1;
        uVar1 = puVar14[5];
        param_3[4] = puVar14[4];
        param_3[5] = uVar1;
        *puVar14 = uVar2;
        puVar14[1] = uVar12;
        puVar14[2] = uVar3;
        puVar14[3] = uVar13;
        puVar14[4] = uVar7;
        puVar14[5] = uVar4;
        puVar14 = puVar14 + 6;
        puVar8 = puVar8 + 6;
        param_3 = param_3 + 6;
        puVar11 = puVar9;
      }
      else {
        puVar11 = puVar9 + -6;
        if (puVar14 == param_4) {
          puVar5 = param_3 + -6;
          if (puVar11 != puVar5) {
            uVar1 = param_3[-5];
            uVar2 = *puVar11;
            uVar12 = puVar9[-5];
            uVar3 = puVar9[-4];
            uVar13 = puVar9[-3];
            uVar7 = puVar9[-2];
            uVar4 = puVar9[-1];
            *puVar11 = *puVar5;
            puVar9[-5] = uVar1;
            uVar1 = param_3[-3];
            puVar9[-4] = param_3[-4];
            puVar9[-3] = uVar1;
            uVar1 = param_3[-1];
            puVar9[-2] = param_3[-2];
            puVar9[-1] = uVar1;
            *puVar5 = uVar2;
            param_3[-5] = uVar12;
            param_3[-4] = uVar3;
            param_3[-3] = uVar13;
            param_3[-2] = uVar7;
            param_3[-1] = uVar4;
          }
          uVar1 = puVar8[-5];
          uVar2 = *puVar5;
          uVar12 = param_3[-5];
          uVar3 = param_3[-4];
          uVar13 = param_3[-3];
          uVar7 = param_3[-2];
          uVar4 = param_3[-1];
          *puVar5 = puVar8[-6];
          param_3[-5] = uVar1;
          uVar1 = puVar8[-3];
          param_3[-4] = puVar8[-4];
          param_3[-3] = uVar1;
          uVar1 = puVar8[-1];
          param_3[-2] = puVar8[-2];
          param_3[-1] = uVar1;
          puVar8[-6] = uVar2;
          puVar8[-5] = uVar12;
          puVar8[-4] = uVar3;
          puVar8[-3] = uVar13;
          puVar8[-2] = uVar7;
          puVar8[-1] = uVar4;
          puVar8 = puVar8 + -6;
          param_3 = puVar5;
        }
        else {
          uVar1 = puVar9[-5];
          uVar2 = *puVar14;
          uVar12 = puVar14[1];
          uVar3 = puVar14[2];
          uVar13 = puVar14[3];
          uVar7 = puVar14[4];
          uVar4 = puVar14[5];
          *puVar14 = *puVar11;
          puVar14[1] = uVar1;
          uVar1 = puVar9[-3];
          puVar14[2] = puVar9[-4];
          puVar14[3] = uVar1;
          uVar1 = puVar9[-1];
          puVar14[4] = puVar9[-2];
          puVar14[5] = uVar1;
          puVar14 = puVar14 + 6;
          *puVar11 = uVar2;
          puVar9[-5] = uVar12;
          puVar9[-4] = uVar3;
          puVar9[-3] = uVar13;
          puVar9[-2] = uVar7;
          puVar9[-1] = uVar4;
        }
      }
      goto joined_r0x0001802652ba;
    }
    uVar1 = param_3[2];
    uVar2 = *param_3;
    bVar15 = uVar2 < uVar1;
    if (uVar2 == uVar1) {
      bVar15 = param_3[1] < param_3[3];
    }
    uVar12 = uVar2;
    puVar9 = param_3;
    if (!bVar15) {
      uVar12 = uVar1;
      puVar9 = param_3 + 2;
    }
    uVar3 = puVar14[2];
    uVar13 = *puVar14;
    bVar15 = uVar13 < uVar3;
    if (uVar13 == uVar3) {
      bVar15 = puVar14[1] < puVar14[3];
    }
    uVar7 = uVar3;
    puVar6 = puVar14 + 2;
    if (bVar15) {
      uVar7 = uVar13;
      puVar6 = puVar14;
    }
    bVar15 = uVar12 < uVar7;
    if (uVar12 == uVar7) {
      bVar15 = puVar9[1] < puVar6[1];
    }
    if (!bVar15) {
      bVar15 = uVar13 < uVar3;
      if (uVar13 == uVar3) {
        bVar15 = puVar14[1] < puVar14[3];
      }
      puVar9 = puVar14 + 2;
      if (bVar15) {
        puVar9 = puVar14;
      }
      bVar15 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar15 = param_3[1] < param_3[3];
      }
      puVar6 = param_3 + 2;
      if (bVar15) {
        puVar6 = param_3;
      }
      bVar15 = *puVar9 < *puVar6;
      if (*puVar9 == *puVar6) {
        bVar15 = puVar9[1] < puVar6[1];
      }
      if (bVar15) goto joined_r0x0001802653c5;
      if (puVar8 != puVar14) {
        uVar1 = puVar14[1];
        uVar2 = *puVar8;
        uVar12 = puVar8[1];
        uVar3 = puVar8[2];
        uVar13 = puVar8[3];
        uVar7 = puVar8[4];
        uVar4 = puVar8[5];
        *puVar8 = *puVar14;
        puVar8[1] = uVar1;
        uVar1 = puVar14[3];
        puVar8[2] = puVar14[2];
        puVar8[3] = uVar1;
        uVar1 = puVar14[5];
        puVar8[4] = puVar14[4];
        puVar8[5] = uVar1;
        *puVar14 = uVar2;
        puVar14[1] = uVar12;
        puVar14[2] = uVar3;
        puVar14[3] = uVar13;
        puVar14[4] = uVar7;
        puVar14[5] = uVar4;
      }
      puVar8 = puVar8 + 6;
    }
    puVar14 = puVar14 + 6;
  } while( true );
}


