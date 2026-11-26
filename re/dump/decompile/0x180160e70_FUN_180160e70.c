// 0x180160e70  FUN_180160e70
// size=1269 thunk=false
// signature: undefined FUN_180160e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180160e70(longlong *param_1,char param_2)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if ((DAT_180427660 & 1) == 0) {
    DAT_180427660 = DAT_180427660 | 1;
    atexit(FUN_18030aa80);
  }
  iVar7 = (int)(DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x1642c859;
  lVar10 = DAT_1804253b0 - DAT_1804253a8 >> 4;
  uVar11 = lVar10 * -0x5555555555555555;
  uVar3 = (ulonglong)iVar7;
  if (uVar3 < uVar11) {
    DAT_1804253b0 = uVar3 * 0x30 + DAT_1804253a8;
  }
  else if (uVar11 < uVar3) {
    if ((ulonglong)((DAT_1804253b8 - DAT_1804253a8 >> 4) * -0x5555555555555555) < uVar3) {
      FUN_180222e70(&DAT_1804253a8,uVar3);
    }
    else {
      for (lVar10 = uVar3 + lVar10 * 0x5555555555555555; lVar10 != 0; lVar10 = lVar10 + -1) {
        DAT_1804253b0 = DAT_1804253b0 + 0x30;
      }
    }
  }
  uVar3 = 0;
  if (0 < iVar7) {
    do {
      FUN_1802d4110(*param_1 + uVar3 * 0x30,DAT_1803e9a50 + 0x48 + uVar3 * 0xb8,
                    DAT_1804253a8 + uVar3 * 0x30);
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar7);
  }
  pvVar9 = DAT_1803eb368;
  lVar10 = DAT_1803eb810 - DAT_1803eb808 >> 2;
  uVar11 = lVar10 * -0x1111111111111111;
  uVar3 = (longlong)DAT_1803eb368 - DAT_1803eb360 >> 5;
  if (uVar11 < uVar3) {
    DAT_1803eb368 = (void *)(lVar10 * -0x2222222222222220 + DAT_1803eb360);
  }
  else if (uVar11 - uVar3 != 0) {
    uVar2 = DAT_1803eb370 - DAT_1803eb360 >> 5;
    if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
      lVar10 = uVar11 - uVar3;
      if (lVar10 != 0) {
        memset(DAT_1803eb368,(int)(int7)((longlong)DAT_1803eb368 - DAT_1803eb360 >> 0xd) << 8,
               lVar10 * 0x20);
        do {
          pvVar9 = (void *)((longlong)pvVar9 + 0x20);
          lVar10 = lVar10 + -1;
          DAT_1803eb368 = pvVar9;
        } while (lVar10 != 0);
      }
    }
    else {
      FUN_180223850(DAT_1803eb808,uVar11);
    }
  }
  if (param_2 != '\0') {
    DAT_1805c3930 = 0x7f7fffff;
    DAT_1805c3934 = 0x7f7fffff;
    DAT_1805c3938 = 0x7f7fffff;
    DAT_1805c5a00 = 0xff7fffff;
    DAT_1805c5a04 = 0xff7fffff;
    DAT_1805c5a08 = 0xff7fffff;
  }
  uVar3 = 0;
  if ((DAT_1803eb810 - DAT_1803eb808 >> 2) * -0x1111111111111111 != 0) {
    do {
      pfVar6 = (float *)(uVar3 * 0x3c + DAT_1803eb808);
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      iVar8 = 0;
      if ((int)pfVar6[0xc] < 1) {
LAB_1801611e6:
        fVar12 = *pfVar6;
        fVar13 = pfVar6[1];
        fVar14 = pfVar6[2];
        fVar15 = pfVar6[3];
        fVar16 = pfVar6[4];
        fVar17 = pfVar6[5];
      }
      else {
        do {
          fVar1 = pfVar6[(longlong)iVar8 + 9];
          if (((-1 < (int)fVar1) && ((int)fVar1 < iVar7)) && (0.0 < pfVar6[(longlong)iVar8 + 6])) {
            FUN_1802d46f0(pfVar6,(longlong)(int)fVar1 * 0x30 + DAT_1804253a8,&local_d8);
            FUN_1802d4670(pfVar6 + 3,
                          (longlong)(int)pfVar6[(longlong)iVar8 + 9] * 0x30 + DAT_1804253a8,
                          &local_c8);
            fVar1 = pfVar6[(longlong)iVar8 + 6];
            fVar12 = fVar12 + local_d8 * fVar1;
            fVar13 = fVar13 + local_d4 * fVar1;
            fVar14 = fVar14 + local_d0 * fVar1;
            fVar15 = fVar15 + local_c8 * fVar1;
            fVar16 = fVar16 + local_c4 * fVar1;
            fVar17 = fVar17 + local_c0 * fVar1;
            fVar18 = fVar18 + fVar1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)pfVar6[0xc]);
        if (fVar18 <= 0.0) goto LAB_1801611e6;
      }
      lVar10 = DAT_1803eb360;
      lVar4 = uVar3 * 0x20;
      *(float *)(lVar4 + DAT_1803eb360) = fVar12;
      *(float *)(lVar4 + 4 + lVar10) = fVar13;
      *(float *)(lVar4 + 8 + lVar10) = fVar14;
      *(float *)(lVar4 + 0xc + lVar10) = fVar15;
      *(float *)(lVar4 + 0x10 + lVar10) = fVar16;
      *(float *)(lVar4 + 0x14 + lVar10) = fVar17;
      *(float *)(lVar4 + 0x18 + lVar10) = pfVar6[0xd];
      *(float *)(lVar4 + 0x1c + lVar10) = pfVar6[0xe];
      if (param_2 != '\0') {
        DAT_1805c3930 = fminf(DAT_1805c3930,fVar12);
        DAT_1805c3934 = fminf(DAT_1805c3934,fVar13);
        DAT_1805c3938 = fminf(DAT_1805c3938,fVar14);
        DAT_1805c5a00 = fmaxf(DAT_1805c5a00,fVar12);
        DAT_1805c5a04 = fmaxf(DAT_1805c5a04,fVar13);
        DAT_1805c5a08 = fmaxf(DAT_1805c5a08,fVar14);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)((DAT_1803eb810 - DAT_1803eb808 >> 2) * -0x1111111111111111));
  }
  return;
}


