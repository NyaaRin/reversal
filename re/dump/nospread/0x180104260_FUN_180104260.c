// 180104260  FUN_180104260
// signature: undefined FUN_180104260()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180104260(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  size_t _Size;
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  undefined *local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_c8;
  undefined8 local_c0;
  uint local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  if ((((((DAT_1803f9290 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*DAT_1803f9290 + 0x78))(), cVar4 != '\0')) && (0 < DAT_1803db4e0)) &&
       (((lVar6 = FUN_18001dbf0(param_2), lVar6 == 0 ||
         (plVar7 = (longlong *)FUN_180076750(lVar6), plVar7 == (longlong *)0x0)) ||
        (cVar4 = (**(code **)(*plVar7 + 0xa0))(plVar7), cVar4 != '\0')))) &&
      ((fVar3 = DAT_1803db4d8, fVar19 = DAT_1803db4d4,
       ((uint)DAT_1803db4d4 & 0x7f800000) != 0x7f800000 &&
       (((uint)DAT_1803db4d8 & 0x7f800000) != 0x7f800000)))) &&
     ((DAT_1803db4dc & 0x7f800000) != 0x7f800000)) {
    FUN_18001c430(param_2,&local_f8);
    fVar21 = *(float *)(param_3 + 4) - (float)local_f8;
    fVar22 = *(float *)(param_3 + 8) - local_f8._4_4_;
    local_f0 = *(float *)(param_3 + 0xc) - local_f0;
    if (fVar22 * fVar22 + fVar21 * fVar21 + local_f0 * local_f0 <= DAT_1803812ac) {
      FUN_18001f9d0(param_2,&local_f8);
      uVar2 = _UNK_1803817c4;
      uVar14 = _DAT_1803817c0;
      fVar22 = local_f8._4_4_;
      fVar21 = (float)local_f8;
      fVar16 = (float)fmaxf((uint)(float)local_f8 & _DAT_1803817c0,
                            (uint)local_f8._4_4_ & _DAT_1803817c0);
      if (DAT_180380a88 <= fVar16) {
        local_c0 = 0;
        local_b8 = 0;
        FUN_1802d4540(param_3 + 0x10,&local_c0);
        if (((((uint)(float)local_c0 & 0x7f800000) != 0x7f800000) &&
            (fVar16 = local_c0._4_4_, ((uint)local_c0._4_4_ & 0x7f800000) != 0x7f800000)) &&
           ((local_b8 & 0x7f800000) != 0x7f800000)) {
          uVar17 = FUN_1802d3e00((float)local_c0 - fVar19);
          uVar20 = FUN_1802d3e00(fVar16 - fVar3);
          fVar18 = (float)fmaxf(uVar17 & uVar14,
                                CONCAT44((uint)((ulonglong)uVar20 >> 0x20) & uVar2,
                                         (uint)uVar20 & uVar14));
          fVar16 = local_c0._4_4_;
          uVar17 = FUN_1802d3e00((float)local_c0 - (fVar19 + fVar21));
          uVar20 = FUN_1802d3e00(fVar16 - (fVar3 + fVar22));
          fVar19 = (float)fmaxf(uVar17 & uVar14,
                                CONCAT44((uint)((ulonglong)uVar20 >> 0x20) & uVar2,
                                         (uint)uVar20 & uVar14));
          if ((DAT_180380a1c <= fVar19) || (fVar18 <= fVar19 * DAT_180380e28)) {
            if ((DAT_180380a1c <= fVar18) || (fVar19 <= fVar18 * DAT_180380e28)) {
              DAT_1804009e8 = DAT_1804009e8 + 1;
              if (10 < DAT_1804009e8) {
                return;
              }
              local_110 = (double)fVar22;
              local_118 = (double)fVar21;
              FUN_180014410("[NVR-PUNCH] no verdict #%d: dNo=%.3f dWith=%.3f punch=(%.2f,%.2f)\n",
                            DAT_1804009e8,(double)fVar18,(double)fVar19);
              return;
            }
            iVar13 = -1;
          }
          else {
            iVar13 = 1;
          }
          if ((DAT_18042625c & 1) == 0) {
            DAT_18042625c = DAT_18042625c | 1;
            atexit((_func_5014 *)&LAB_180309cf0);
          }
          lVar6 = DAT_1803eb468;
          puVar15 = &DAT_1803e9f78;
          puVar11 = &DAT_1803e9f78;
          if (DAT_1803eb468 != 0) {
            puVar11 = &DAT_1803eb458;
          }
          _Size = puVar11[2];
          if (_Size != 0) {
            puVar10 = &DAT_1803e71d8;
            if (0xf < DAT_1803e71f0) {
              puVar10 = DAT_1803e71d8;
            }
            uVar1 = puVar11[3];
            puVar8 = puVar11;
            if (0xf < uVar1) {
              puVar8 = (undefined8 *)*puVar11;
            }
            if ((_Size != DAT_1803e71e8) || (iVar5 = memcmp(puVar8,puVar10,_Size), iVar5 != 0)) {
              if ((undefined8 **)puVar11 != &DAT_1803e71d8) {
                puVar10 = puVar11;
                if (0xf < uVar1) {
                  puVar10 = (undefined8 *)*puVar11;
                }
                FUN_180212700(&DAT_1803e71d8,puVar10,_Size);
                lVar6 = DAT_1803eb468;
              }
              DAT_1803fe3a0 = 0;
            }
            if (0 < DAT_1803fe3a0 != 0 < iVar13) {
              DAT_1803fe3a0 = 0;
            }
            DAT_1803fe3a0 = DAT_1803fe3a0 + iVar13;
            iVar5 = -DAT_1803fe3a0;
            if (-DAT_1803fe3a0 < 0) {
              iVar5 = DAT_1803fe3a0;
            }
            if ((1 < iVar5) && (iVar5 = FUN_180076a40(), iVar5 != iVar13)) {
              if (lVar6 != 0) {
                puVar15 = &DAT_1803eb458;
              }
              if (puVar15[2] != 0) {
                local_c8 = DAT_1803fa8a0;
                puVar10 = (undefined8 *)DAT_1803fa8a0[1];
                puVar8 = puVar10;
                puVar9 = DAT_1803fa8a0;
                if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
                  do {
                    puVar10 = puVar8;
                    cVar4 = FUN_180201cf0(puVar10 + 4,puVar15);
                    if (-1 < cVar4) {
                      puVar8 = (undefined8 *)*puVar10;
                      puVar9 = puVar10;
                    }
                    else {
                      puVar8 = (undefined8 *)puVar10[2];
                    }
                    uVar14 = (uint)(-1 < cVar4);
                  } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
                }
                else {
                  uVar14 = 0;
                }
                if ((*(char *)((longlong)puVar9 + 0x19) != '\0') ||
                   (cVar4 = FUN_180201cf0(puVar15,puVar9 + 4), cVar4 < '\0')) {
                  if (DAT_1803fa8a8 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
                    FUN_180013b80();
                  }
                  local_e8 = &DAT_1803fa8a0;
                  local_e0 = (undefined8 *)0x0;
                  puVar8 = (undefined8 *)FUN_1802d8350(0x48);
                  local_f8 = puVar8 + 4;
                  local_e0 = puVar8;
                  FUN_18016d4c0(local_f8,puVar15);
                  *(undefined4 *)(puVar8 + 8) = 0;
                  *puVar8 = local_c8;
                  puVar8[1] = local_c8;
                  puVar8[2] = local_c8;
                  *(undefined2 *)(puVar8 + 3) = 0;
                  local_e0 = (undefined8 *)(ulonglong)uVar14;
                  local_e8 = puVar10;
                  puVar9 = (undefined8 *)FUN_18022bb90(&DAT_1803fa8a0,&local_e8,puVar8);
                }
                *(int *)(puVar9 + 8) = iVar13;
              }
              if (0xf < (ulonglong)puVar11[3]) {
                puVar11 = (undefined8 *)*puVar11;
              }
              local_100 = &DAT_1803449c4;
              if (0 < iVar13) {
                local_100 = &DAT_1803449c0;
              }
              local_108 = (double)fVar22;
              local_110 = (double)fVar21;
              local_118 = (double)fVar19;
              pcVar12 = "NOT in";
              if (0 < iVar13) {
                pcVar12 = "IN";
              }
              FUN_180014410("[NVR-PUNCH] \'%s\': punch is %s the bullet dir (dNo=%.3f dWith=%.3f punch=(%.2f,%.2f)) -> RCS %s\n"
                            ,puVar11,pcVar12,(double)fVar18);
            }
          }
        }
      }
    }
  }
  return;
}


