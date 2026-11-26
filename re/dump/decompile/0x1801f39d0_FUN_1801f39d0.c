// 0x1801f39d0  FUN_1801f39d0
// size=1129 thunk=false
// signature: undefined FUN_1801f39d0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001801f3dd8) */

void FUN_1801f39d0(longlong param_1,int param_2,longlong param_3,float param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  float *pfVar6;
  char cVar7;
  int *piVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float local_2b4;
  float local_2b0 [2];
  longlong local_2a8;
  float local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  uint auStack_284 [15];
  uint auStack_248 [136];
  
  iVar11 = *(int *)(param_3 + 0x9c);
  if (param_2 < *(int *)(param_3 + 0x9c)) {
    iVar11 = param_2;
  }
  local_2a8 = param_1;
  if (iVar11 < 0x81) {
    if (iVar11 < 1) {
      return;
    }
  }
  else {
    iVar11 = 0x80;
  }
  uVar20 = 0;
  bVar1 = false;
  iVar19 = 0;
  iVar16 = *(int *)(param_3 + 0xa0);
LAB_1801f3a45:
  lVar9 = (longlong)(int)uVar20;
  auStack_248[lVar9] = 0xffffffff;
  piVar8 = (int *)(lVar9 * 0xd8 + iVar16 + param_3);
  if (piVar8 != (int *)0x0) {
    uVar5 = piVar8[1];
    uVar13 = 0xffffffff;
    if ((-1 < (int)uVar5) && (uVar13 = 0xffffffff, (int)uVar5 < (int)uVar20)) {
      uVar13 = uVar5;
    }
    auStack_248[lVar9] = uVar13;
    if (((!bVar1) && (iVar19 < 0xc)) &&
       (pcVar10 = (char *)((longlong)*piVar8 + (longlong)piVar8), pcVar10 != (char *)0x0)) {
      cVar7 = *pcVar10;
      pcVar17 = pcVar10;
      while (cVar7 != '\0') {
        pcVar14 = "head";
        pcVar15 = pcVar17;
        do {
          cVar7 = *pcVar14;
          if (cVar7 == '\0') goto LAB_1801f3b61;
          cVar4 = *pcVar15;
          cVar12 = cVar4;
          if (('@' < cVar4) && (cVar12 = cVar4 + ' ', 'Z' < cVar4)) {
            cVar12 = cVar4;
          }
          cVar4 = cVar7;
          if ((byte)(cVar7 + 0xbfU) < 0x1a) {
            cVar7 = cVar7 + ' ';
            cVar4 = *pcVar14;
          }
          if (cVar12 != cVar7) goto LAB_1801f3b11;
          pcVar15 = pcVar15 + 1;
          pcVar14 = pcVar14 + 1;
        } while (*pcVar15 != '\0');
        cVar4 = *pcVar14;
LAB_1801f3b11:
        if (cVar4 == '\0') {
LAB_1801f3b61:
          bVar2 = true;
          goto LAB_1801f3b63;
        }
        pcVar17 = pcVar17 + 1;
        cVar7 = *pcVar17;
      }
      if (*pcVar10 != '\0') {
        bVar2 = false;
        pcVar17 = pcVar10;
        do {
          pcVar14 = "spine";
          pcVar15 = pcVar17;
          do {
            cVar7 = *pcVar14;
            if (cVar7 == '\0') goto LAB_1801f3b63;
            cVar4 = *pcVar15;
            cVar12 = cVar4;
            if (('@' < cVar4) && (cVar12 = cVar4 + ' ', 'Z' < cVar4)) {
              cVar12 = cVar4;
            }
            cVar4 = cVar7;
            if ((byte)(cVar7 + 0xbfU) < 0x1a) {
              cVar7 = cVar7 + ' ';
              cVar4 = *pcVar14;
            }
            if (cVar12 != cVar7) goto LAB_1801f3bca;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          } while (*pcVar15 != '\0');
          cVar4 = *pcVar14;
LAB_1801f3bca:
          if (cVar4 == '\0') goto LAB_1801f3b63;
          pcVar17 = pcVar17 + 1;
        } while (*pcVar17 != '\0');
        do {
          pcVar15 = "neck";
          pcVar17 = pcVar10;
          do {
            cVar7 = *pcVar15;
            if (cVar7 == '\0') goto LAB_1801f3b63;
            cVar4 = *pcVar17;
            cVar12 = cVar4;
            if (('@' < cVar4) && (cVar12 = cVar4 + ' ', 'Z' < cVar4)) {
              cVar12 = cVar4;
            }
            if ((byte)(cVar7 + 0xbfU) < 0x1a) {
              cVar7 = cVar7 + ' ';
            }
            if (cVar12 != cVar7) break;
            pcVar17 = pcVar17 + 1;
            pcVar15 = pcVar15 + 1;
          } while (*pcVar17 != '\0');
          if (*pcVar15 == '\0') goto LAB_1801f3b63;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
      }
    }
  }
  goto LAB_1801f3c5a;
LAB_1801f3b63:
  if (iVar19 < 1) {
LAB_1801f3c48:
    lVar9 = (longlong)iVar19;
    iVar19 = iVar19 + 1;
    auStack_284[lVar9 + 1] = uVar20;
    if (bVar2) {
      bVar1 = true;
    }
  }
  else {
    for (; -1 < (int)uVar13; uVar13 = auStack_248[uVar13]) {
      if (uVar13 == auStack_284[iVar19]) goto LAB_1801f3c48;
    }
  }
LAB_1801f3c5a:
  uVar20 = uVar20 + 1;
  if (iVar11 <= (int)uVar20) {
    if (0 < iVar19) {
      param_4 = param_4 * DAT_180380994;
      local_2a0 = sinf(param_4);
      fVar21 = cosf(param_4);
      local_2b4 = -22.0;
      local_29c = (uint)fVar21 ^ DAT_1803817f0;
      local_298 = 0;
      local_2b0[0] = ((float)(param_5 ^ DAT_1803817f0) * DAT_180380ad4) / (float)iVar19;
      pfVar6 = &local_2b4;
      if (DAT_180381400 <= local_2b0[0]) {
        pfVar6 = local_2b0;
      }
      if (DAT_18038102c < local_2b0[0]) {
        pfVar6 = (float *)&DAT_180330f08;
      }
      fVar22 = *pfVar6 * DAT_180380994;
      fVar21 = cosf(fVar22);
      fVar22 = sinf(fVar22);
      uVar18 = 0;
      do {
        lVar3 = local_2a8;
        iVar16 = (int)uVar18;
        uVar20 = auStack_284[(longlong)iVar16 + 1];
        lVar9 = (longlong)(int)uVar20;
        local_290 = *(undefined4 *)(local_2a8 + 0xc + lVar9 * 0x30);
        local_288 = *(undefined4 *)(local_2a8 + 0x2c + lVar9 * 0x30);
        local_28c = *(undefined4 *)(local_2a8 + 0x1c + lVar9 * 0x30);
        for (; (int)uVar20 < iVar11; uVar20 = uVar20 + 1) {
          uVar13 = (uint)lVar9;
          uVar5 = auStack_248[(int)uVar20];
          if (uVar20 != uVar13) {
            for (; -1 < (int)uVar5; uVar5 = auStack_248[(int)uVar5]) {
              if (uVar5 == uVar13) goto LAB_1801f3dde;
            }
          }
          if (uVar20 == uVar13) {
LAB_1801f3dde:
            FUN_1801f3590((longlong)(int)uVar20 * 0x30 + lVar3,&local_290,&local_2a0,fVar21,fVar22);
          }
          iVar16 = (int)uVar18;
        }
        uVar18 = (ulonglong)(iVar16 + 1U);
      } while ((int)(iVar16 + 1U) < iVar19);
    }
    return;
  }
  goto LAB_1801f3a45;
}


