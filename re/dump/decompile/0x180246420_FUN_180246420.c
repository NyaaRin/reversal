// 0x180246420  FUN_180246420
// size=1098 thunk=false
// signature: undefined FUN_180246420()
// status: ok


void FUN_180246420(ulonglong *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar7 = DAT_180380bf0;
  if (param_1[0x6c] != param_1[0x6b]) {
    uVar15 = param_1[0xa2];
    fVar1 = *(float *)(param_1 + 0x97);
    fVar2 = *(float *)(param_1 + 0x9e);
    fVar17 = (float)uVar15 * *(float *)((longlong)param_1 + 0x4dc) +
             *(float *)((longlong)param_1 + 0x4bc);
    if (uVar15 <= param_1[0xa3]) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1[0x3b] + uVar15 * 0x18) * 0x60 + param_1[10]);
        if (((char)param_1[2] == '\0') ||
           (plVar4 = (longlong *)plVar14[8], plVar4 == (longlong *)0x0)) {
          uVar13 = plVar14[7];
          lVar8 = 0;
          uVar12 = 0;
        }
        else {
          lVar9 = *plVar4;
          uVar12 = *(ulonglong *)(param_1[0x3b] + 8 + uVar15 * 0x18);
          if ((ulonglong)(plVar4[1] - lVar9 >> 5) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_180262180();
          }
          lVar10 = uVar12 * 0x20;
          lVar8 = *(longlong *)(lVar10 + lVar9);
          uVar12 = *(ulonglong *)(lVar10 + 0x18 + lVar9);
          uVar13 = *(ulonglong *)(lVar10 + 0x10 + lVar9);
        }
        bVar6 = false;
        lVar9 = 0;
        fVar19 = *(float *)((longlong)param_1 + 0x4d4) * fVar7;
        fVar18 = 0.0;
        if (uVar12 < uVar13) {
          do {
            if (param_1[0xa5] < uVar12) break;
            sVar3 = *(short *)(*plVar14 + lVar8 * 0x10);
            lVar10 = *(longlong *)(*plVar14 + 8 + lVar8 * 0x10);
            fVar16 = (float)uVar12 * *(float *)(param_1 + 0x9b) + fVar1 + fVar2;
            if (lVar10 == 0) {
              if (bVar6) {
                uVar5 = param_1[0x6b];
                lVar10 = lVar9 * 0x30;
                puVar11 = (undefined8 *)(uVar5 + 0x10 + lVar10);
                if (0xf < *(ulonglong *)(lVar10 + 0x28 + uVar5)) {
                  puVar11 = (undefined8 *)*puVar11;
                }
                FUN_180246090(fVar18,fVar16,fVar17,fVar17 + *(float *)((longlong)param_1 + 0x4dc),
                              fVar19,*(undefined4 *)(lVar10 + 8 + uVar5),puVar11);
                bVar6 = false;
              }
            }
            else {
              lVar10 = lVar10 + -1;
              if (bVar6) {
                if (lVar9 != lVar10) {
                  uVar5 = param_1[0x6b];
                  lVar9 = lVar9 * 0x30;
                  puVar11 = (undefined8 *)(uVar5 + 0x10 + lVar9);
                  if (0xf < *(ulonglong *)(lVar9 + 0x28 + uVar5)) {
                    puVar11 = (undefined8 *)*puVar11;
                  }
                  FUN_180246090(fVar18,fVar16,fVar17,fVar17 + *(float *)((longlong)param_1 + 0x4dc),
                                fVar19,*(undefined4 *)(lVar9 + 8 + uVar5),puVar11);
                  lVar9 = lVar10;
                  fVar18 = fVar16;
                }
              }
              else {
                bVar6 = true;
                lVar9 = lVar10;
                fVar18 = fVar16;
              }
            }
            if (sVar3 == 9) {
              lVar10 = *param_1 - uVar12 % *param_1;
            }
            else {
              lVar10 = 1;
            }
            uVar12 = uVar12 + lVar10;
            lVar8 = lVar8 + 1;
          } while (uVar12 < uVar13);
          if (bVar6) {
            uVar12 = param_1[0x6b];
            lVar9 = lVar9 * 0x30;
            puVar11 = (undefined8 *)(uVar12 + 0x10 + lVar9);
            if (0xf < *(ulonglong *)(lVar9 + 0x28 + uVar12)) {
              puVar11 = (undefined8 *)*puVar11;
            }
            FUN_180246090(fVar18,(float)*(ulonglong *)(param_1[0x3b] + 0x10 + uVar15 * 0x18) *
                                 *(float *)(param_1 + 0x9b) + *(float *)(param_1 + 0x9e) +
                                 *(float *)(param_1 + 0x97),uVar12,
                          (float)uVar15 * *(float *)((longlong)param_1 + 0x4dc) +
                          *(float *)((longlong)param_1 + 0x4bc) +
                          *(float *)((longlong)param_1 + 0x4dc),fVar19,
                          *(undefined4 *)(lVar9 + 8 + uVar12),puVar11);
          }
        }
        fVar17 = fVar17 + *(float *)((longlong)param_1 + 0x4dc);
        uVar15 = uVar15 + 1;
      } while (uVar15 <= param_1[0xa3]);
    }
  }
  return;
}


