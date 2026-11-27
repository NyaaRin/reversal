// 0x1800c6c50  FUN_1800c6c50
// size=1973 thunk=false
// signature: undefined FUN_1800c6c50()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800c6c50(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined8 in_stack_fffffffffffffe28;
  undefined4 uVar24;
  char cVar25;
  undefined8 uVar26;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
  if (((param_1 != 0) && (DAT_1803fa608 != 0)) && ((char)param_2[0x30a] != '\0')) {
    iVar12 = *(int *)((longlong)param_2 + 0x1854);
    if (0 < iVar12) {
      pfVar1 = (float *)(param_1 + 4);
      fVar2 = *pfVar1;
      iVar5 = FUN_1800c64b0();
      fVar11 = (float)(iVar5 + iVar12);
      if (0 < (int)fVar11) {
        iVar12 = (int)fVar2 - (int)fVar11;
        if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = -2 - (int)(DAT_1803813b0 / *(double *)(DAT_1803fa608 + 0x28));
          if (iVar5 < 1) {
            iVar5 = 1;
          }
        }
        if (iVar5 < iVar12) {
          uVar6 = DAT_1803fe3f0 & 0x8000001f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
          }
          DAT_1803fe3f0 = DAT_1803fe3f0 + 1;
          if (uVar6 == 0) {
            if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
              iVar5 = 1;
            }
            else {
              iVar5 = -2 - (int)(DAT_1803813b0 / *(double *)(DAT_1803fa608 + 0x28));
              if (iVar5 < 1) {
                iVar5 = 1;
              }
            }
            puVar9 = &DAT_18033e9cc;
            if (param_3 != (undefined1 *)0x0) {
              puVar9 = param_3;
            }
            FUN_180014410("[BT] REFUSED %s tick: delta=%d > validator cap %d (the command would be voided and its angles replaced)\n"
                          ,puVar9,iVar12,iVar5);
          }
        }
        else {
          uVar7 = FUN_1800c6790();
          cVar4 = FUN_1800c6930(fVar2,fVar11,uVar7);
          if (cVar4 != '\0') {
            *pfVar1 = fVar11;
            fVar13 = (float)FUN_1800c5790();
            fVar11 = DAT_180380bb0;
            dVar3 = (double)fVar13;
            if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
               (fVar13 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
              fVar13 = 0.0;
            }
            fVar14 = fVar2;
            dVar17 = (double)FUN_1800c5b20((double)fVar13);
            dVar18 = (double)FUN_1800c5c90();
            dVar23 = (double)iVar12 * *(double *)(DAT_1803fa608 + 0x28);
            if ((dVar23 < dVar17 - dVar18) || (dVar18 + dVar17 < dVar23)) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x01';
            }
            dVar22 = ((double)(int)*pfVar1 * *(double *)(DAT_1803fa608 + 0x28) - dVar3) -
                     ((double)param_2[0x309] - dVar3);
            uVar26 = 0;
            cVar25 = cVar4;
            fVar13 = 0.0;
            if (*param_2 != 0) {
              puVar8 = (undefined8 *)FUN_18001daf0();
              uVar26 = *puVar8;
              fVar20 = (float)uVar26;
              fVar16 = *(float *)(puVar8 + 1);
              fVar15 = (float)((ulonglong)uVar26 >> 0x20);
              fVar13 = fVar16;
              if ((((((*(uint *)(param_2 + 5) & 0x7f800000) != 0x7f800000) &&
                    ((*(uint *)((longlong)param_2 + 0x2c) & 0x7f800000) != 0x7f800000)) &&
                   ((*(uint *)(param_2 + 6) & 0x7f800000) != 0x7f800000)) &&
                  ((((uint)*(float *)(param_2 + 0x30b) & 0x7f800000) != 0x7f800000 &&
                   ((*(uint *)((longlong)param_2 + 0x185c) & 0x7f800000) != 0x7f800000)))) &&
                 ((*(uint *)(param_2 + 0x30c) & 0x7f800000) != 0x7f800000)) {
                fVar21 = *(float *)(param_2 + 0x30b) - fVar20;
                fVar14 = *(float *)((longlong)param_2 + 0x185c) - fVar15;
                fVar14 = (float)(*(code *)PTR_FUN_1803da018)
                                          (fVar14 * fVar14 + fVar21 * fVar21 +
                                           (*(float *)(param_2 + 0x30c) - fVar16) *
                                           (*(float *)(param_2 + 0x30c) - fVar16));
                fVar21 = *(float *)((longlong)param_2 + 0x2c) -
                         *(float *)((longlong)param_2 + 0x185c);
                fVar21 = (float)(*(code *)PTR_FUN_1803da018)
                                          (fVar21 * fVar21 +
                                           (*(float *)(param_2 + 5) - *(float *)(param_2 + 0x30b)) *
                                           (*(float *)(param_2 + 5) - *(float *)(param_2 + 0x30b)) +
                                           (*(float *)(param_2 + 6) - *(float *)(param_2 + 0x30c)) *
                                           (*(float *)(param_2 + 6) - *(float *)(param_2 + 0x30c)));
                fVar20 = *(float *)(param_2 + 5) - fVar20;
                fVar15 = *(float *)((longlong)param_2 + 0x2c) - fVar15;
                fVar16 = (float)(*(code *)PTR_FUN_1803da018)
                                          (fVar15 * fVar15 + fVar20 * fVar20 +
                                           (*(float *)(param_2 + 6) - fVar16) *
                                           (*(float *)(param_2 + 6) - fVar16));
                DAT_1803ffd7c = DAT_1803ffd7c + 1;
                if (fVar16 < fVar21) {
                  DAT_180425f98 = DAT_180425f98 + 1;
                }
                if ((DAT_180380fe8 < fVar14) &&
                   (((fVar16 < fVar21 || (DAT_1803ffd7c < 7)) ||
                    (DAT_1803ffd7c == (DAT_1803ffd7c / 100) * 100)))) {
                  dVar19 = (double)fVar14;
                  FUN_180014410("[AIM-POSE] %s: point is %.0fu from the RECORD and %.0fu from the LIVE body, which stand %.0fu apart (wrong-body %d/%d)\n"
                                ,fVar21,(double)fVar21,(double)fVar16,dVar19,DAT_180425f98,
                                DAT_1803ffd7c);
                  uVar24 = (undefined4)((ulonglong)dVar19 >> 0x20);
                }
              }
            }
            DAT_1803ff0d8 = DAT_1803ff0d8 + 1;
            if (cVar4 == '\0') {
              DAT_1804260b4 = DAT_1804260b4 + 1;
            }
            DAT_1803ffd00 = DAT_1803ffd00 + dVar22;
            dVar19 = (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_1803817d4,
                                      SUB84(dVar22,0) & _DAT_1803817d0);
            if (DAT_180423a30 < dVar19) {
              DAT_180423a30 = dVar19;
            }
            if (((cVar4 == '\0') || (DAT_1803ff0d8 == (DAT_1803ff0d8 / 10) * 10)) ||
               (DAT_1803ff0d8 < 7)) {
              if ((DAT_1803fa608 == 0) ||
                 (dVar19 = *(double *)(DAT_1803fa608 + 0x28), dVar19 <= 0.0)) {
                iVar5 = 0;
              }
              else {
                fVar16 = (float)FUN_1800c5790();
                iVar5 = (int)((double)fVar16 / dVar19 + DAT_180380cb0);
                if (iVar5 < 0) {
                  iVar5 = 0;
                }
              }
              dVar19 = (double)param_2[0x309];
              if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
                 (fVar16 = DAT_1803fb248, fVar11 <= DAT_1803fb248)) {
                fVar16 = 0.0;
              }
              puVar9 = &DAT_18033e9cc;
              if (param_3 != (undefined1 *)0x0) {
                puVar9 = param_3;
              }
              puVar10 = &DAT_18034c9dc;
              if (cVar4 != '\0') {
                puVar10 = &DAT_18034c9d8;
              }
              FUN_180014410("[BT-HIT] %s %s orig=%d new=%d srv=%d delta=%d ticks (%.0fms) band=[%.0f..%.0f]ms fp=+%.0fms sim=%.2f lerp=%.0fms age=%.0fms rec=%d align=%+.0fms (avg %+.0f max %.0f) (out %d/%d)\n"
                            ,puVar10,puVar9,fVar2,CONCAT44(uVar24,*pfVar1),(int)*pfVar1 - iVar5,
                            iVar12,dVar23 * DAT_180380ec0,(dVar17 - dVar18) * DAT_180380ec0,
                            (dVar18 + dVar17) * DAT_180380ec0,(double)(fVar16 * DAT_180381278),
                            dVar19,dVar3 * DAT_180380ec0,
                            (*(double *)(DAT_1803fa608 + 0x10) - dVar19) * DAT_180380ec0,
                            *(int *)((longlong)param_2 + 0x1854),dVar22 * DAT_180380ec0,
                            (DAT_1803ffd00 / (double)DAT_1803ff0d8) * DAT_180380ec0,
                            DAT_180423a30 * DAT_180380ec0,DAT_1804260b4,DAT_1803ff0d8,cVar25,fVar14,
                            uVar26,fVar13);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


