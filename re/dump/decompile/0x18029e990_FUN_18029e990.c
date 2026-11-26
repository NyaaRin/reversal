// 0x18029e990  FUN_18029e990
// size=1992 thunk=false
// signature: undefined FUN_18029e990()
// status: ok


void FUN_18029e990(undefined8 param_1,int *param_2,float param_3,float *param_4,float param_5,
                  float *param_6,char *param_7,char *param_8,float param_9,uint param_10)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  char *pcVar10;
  char *_Buf;
  void *pvVar11;
  char *pcVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  float *pfVar16;
  char *pcVar17;
  short *psVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  
  fVar31 = (float)(int)param_4[1];
  if (fVar31 < param_6[3] || fVar31 == param_6[3]) {
    fVar32 = *param_4;
    bVar5 = param_9 <= 0.0;
    do {
      fVar32 = (float)(int)fVar32;
      pcVar12 = param_8;
      if (param_8 == (char *)0x0) {
        sVar8 = strlen(param_7);
        pcVar12 = param_7 + sVar8;
      }
      lVar9 = FUN_18029db30(param_1,param_3,DAT_180381384);
      fVar29 = *(float *)(lVar9 + 0x14);
      _Buf = param_7;
      if (fVar31 + param_3 < param_6[1]) {
        do {
          if (pcVar12 <= _Buf) break;
          pcVar10 = memchr(_Buf,10,(longlong)pcVar12 - (longlong)_Buf);
          if (bVar5) {
            _Buf = pcVar10 + 1;
            if (pcVar10 == (char *)0x0) {
              _Buf = pcVar12;
            }
          }
          else {
            pcVar17 = pcVar12;
            if (pcVar10 != (char *)0x0) {
              pcVar17 = pcVar10;
            }
            _Buf = (char *)FUN_18029e130(param_1,param_3,_Buf,pcVar17,param_9,param_10);
            if ((param_10 & 2) == 0) {
              for (; _Buf < pcVar12; _Buf = _Buf + 1) {
                if ((*_Buf != ' ') && (*_Buf != '\t')) goto LAB_18029eb2c;
              }
            }
            else {
LAB_18029eb2c:
              if ((_Buf < pcVar12) && (*_Buf == '\n')) {
                _Buf = _Buf + 1;
              }
            }
          }
          fVar31 = fVar31 + param_3;
        } while (fVar31 + param_3 < param_6[1]);
      }
      param_8 = pcVar12;
      if ((10000 < (longlong)pcVar12 - (longlong)_Buf) && (bVar5)) {
        fVar33 = param_6[3];
        param_8 = _Buf;
        fVar26 = fVar31;
        while ((fVar26 < fVar33 && (param_8 < pcVar12))) {
          pvVar11 = memchr(param_8,10,(longlong)pcVar12 - (longlong)param_8);
          param_8 = pcVar12;
          if (pvVar11 != (void *)0x0) {
            param_8 = (char *)((longlong)pvVar11 + 1);
          }
          fVar26 = fVar26 + param_3;
        }
      }
      if (_Buf == param_8) {
        return;
      }
      local_100 = (int)param_8 - (int)_Buf;
      fVar29 = param_3 / fVar29;
      local_fc = local_100 * 4;
      local_100 = local_100 * 6;
      local_f8 = param_2[4] + local_100;
      local_10c = fVar29;
      local_108 = fVar32;
      FUN_1802927a0(param_2,local_100,local_fc);
      local_104 = *param_2;
      pfVar16 = *(float **)(param_2 + 0x10);
      psVar18 = *(short **)(param_2 + 0x12);
      iVar19 = param_2[0xd];
      pcVar12 = (char *)0x0;
      local_110 = (float)((uint)param_5 | 0xffffff);
      fVar33 = fVar32;
      if (_Buf < param_8) {
        do {
          if (bVar5) {
LAB_18029ed08:
            local_114 = (uint)*_Buf;
            if (local_114 < 0x80) {
              _Buf = _Buf + 1;
            }
            else {
              iVar7 = FUN_180268c20(&local_114,_Buf,param_8);
              _Buf = _Buf + iVar7;
            }
            if (local_114 < 0x20) {
              if (local_114 == 10) {
                fVar31 = fVar31 + param_3;
                if (param_6[3] <= fVar31 && fVar31 != param_6[3]) break;
              }
              else {
                fVar32 = fVar33;
                if (local_114 != 0xd) goto LAB_18029ed62;
              }
            }
            else {
LAB_18029ed62:
              uVar13 = (ulonglong)local_114 & 0xffff;
              if (uVar13 < (ulonglong)(longlong)*(int *)(lVar9 + 0x20)) {
                uVar3 = *(ushort *)(*(longlong *)(lVar9 + 0x28) + uVar13 * 2);
                uVar13 = (ulonglong)uVar3;
                if (uVar3 == 0xfffe) goto LAB_18029eda0;
                if (uVar3 == 0xffff) goto LAB_18029ed90;
LAB_18029eda8:
                puVar14 = (uint *)(uVar13 * 0x2c + *(longlong *)(lVar9 + 0x38));
              }
              else {
LAB_18029ed90:
                puVar14 = (uint *)FUN_18029c810(lVar9,(ulonglong)local_114,0);
                if (puVar14 == (uint *)0x0) {
LAB_18029eda0:
                  uVar13 = (ulonglong)*(int *)(lVar9 + 0x40);
                  goto LAB_18029eda8;
                }
              }
              uVar4 = *puVar14;
              fVar32 = (float)puVar14[1];
              if ((uVar4 & 2) != 0) {
                fVar26 = param_6[2];
                fVar24 = fVar29 * (float)puVar14[2] + fVar33;
                if (fVar24 <= fVar26) {
                  fVar2 = *param_6;
                  fVar23 = fVar29 * (float)puVar14[4] + fVar33;
                  if (fVar2 <= fVar23) {
                    fVar21 = (float)puVar14[6];
                    fVar27 = fVar29 * (float)puVar14[3] + fVar31;
                    fVar22 = (float)puVar14[7];
                    fVar30 = (float)puVar14[8];
                    fVar25 = fVar29 * (float)puVar14[5] + fVar31;
                    fVar28 = (float)puVar14[9];
                    if ((param_10 & 1) != 0) {
                      if (fVar24 < fVar2) {
                        fVar21 = (DAT_180380bb0 - (fVar23 - fVar2) / (fVar23 - fVar24)) *
                                 (fVar30 - fVar21) + fVar21;
                        fVar24 = fVar2;
                      }
                      fVar2 = param_6[1];
                      if (fVar27 < fVar2) {
                        fVar22 = (DAT_180380bb0 - (fVar25 - fVar2) / (fVar25 - fVar27)) *
                                 (fVar28 - fVar22) + fVar22;
                        fVar27 = fVar2;
                      }
                      if (fVar26 < fVar23) {
                        fVar30 = ((fVar26 - fVar24) / (fVar23 - fVar24)) * (fVar30 - fVar21) +
                                 fVar21;
                        fVar23 = fVar26;
                      }
                      fVar26 = param_6[3];
                      if (fVar26 < fVar25) {
                        fVar28 = ((fVar26 - fVar27) / (fVar25 - fVar27)) * (fVar28 - fVar22) +
                                 fVar22;
                        fVar25 = fVar26;
                      }
                      if (fVar25 <= fVar27) goto LAB_18029efd3;
                    }
                    *pfVar16 = fVar24;
                    fVar26 = param_5;
                    if ((uVar4 & 1) != 0) {
                      fVar26 = local_110;
                    }
                    pfVar16[4] = fVar26;
                    pfVar16[9] = fVar26;
                    pfVar16[0xe] = fVar26;
                    pfVar16[0x13] = fVar26;
                    sVar6 = (short)iVar19;
                    pfVar16[1] = fVar27;
                    pfVar16[2] = fVar21;
                    pfVar16[3] = fVar22;
                    pfVar16[5] = fVar23;
                    pfVar16[6] = fVar27;
                    pfVar16[7] = fVar30;
                    pfVar16[8] = fVar22;
                    pfVar16[10] = fVar23;
                    pfVar16[0xb] = fVar25;
                    pfVar16[0xc] = fVar30;
                    pfVar16[0xd] = fVar28;
                    pfVar16[0xf] = fVar24;
                    pfVar16[0x10] = fVar25;
                    pfVar16[0x11] = fVar21;
                    pfVar16[0x12] = fVar28;
                    pfVar16 = pfVar16 + 0x14;
                    psVar18[1] = sVar6 + 1;
                    psVar18[2] = sVar6 + 2;
                    psVar18[4] = sVar6 + 2;
                    *psVar18 = sVar6;
                    psVar18[3] = sVar6;
                    iVar19 = iVar19 + 4;
                    psVar18[5] = sVar6 + 3;
                    psVar18 = psVar18 + 6;
                  }
                }
              }
LAB_18029efd3:
              fVar32 = fVar33 + fVar29 * fVar32;
            }
LAB_18029efe9:
            bVar20 = _Buf < param_8;
            fVar33 = fVar32;
          }
          else {
            if (pcVar12 == (char *)0x0) {
              pcVar12 = (char *)FUN_18029e130(param_1,param_3,_Buf,param_8,
                                              param_9 - (fVar33 - fVar32),param_10);
            }
            if (_Buf < pcVar12) goto LAB_18029ed08;
            fVar31 = fVar31 + param_3;
            if (param_6[3] <= fVar31 && fVar31 != param_6[3]) break;
            pcVar12 = (char *)0x0;
            fVar33 = fVar32;
            if ((param_10 & 2) != 0) {
LAB_18029ecee:
              bVar20 = _Buf < param_8;
              if (!bVar20) goto LAB_18029efec;
              if (*_Buf == '\n') {
                _Buf = _Buf + 1;
              }
              goto LAB_18029efe9;
            }
            bVar20 = false;
            if (_Buf < param_8) {
              do {
                if ((*_Buf != ' ') && (*_Buf != '\t')) goto LAB_18029ecee;
                _Buf = _Buf + 1;
              } while (_Buf < param_8);
              goto LAB_18029efe9;
            }
          }
LAB_18029efec:
          fVar32 = local_108;
          fVar29 = local_10c;
        } while (bVar20);
      }
      iVar7 = *param_2;
      if (local_104 == iVar7) {
        iVar15 = (int)((longlong)psVar18 - *(longlong *)(param_2 + 6) >> 1);
        param_2[4] = iVar15;
        param_2[8] = (int)((longlong)pfVar16 - *(longlong *)(param_2 + 10) >> 2) * -0x33333333;
        piVar1 = (int *)(*(longlong *)(param_2 + 2) + -0x20 + (longlong)iVar7 * 0x48);
        *piVar1 = *piVar1 + (iVar15 - local_f8);
        *(float **)(param_2 + 0x10) = pfVar16;
        *(short **)(param_2 + 0x12) = psVar18;
        param_2[0xd] = iVar19;
        return;
      }
      *param_2 = iVar7 + -1;
      piVar1 = (int *)(*(longlong *)(param_2 + 2) + -0x68 + (longlong)iVar7 * 0x48);
      *piVar1 = *piVar1 - local_100;
      param_2[8] = param_2[8] - local_fc;
      param_2[4] = param_2[4] - local_100;
      FUN_1802922a0(param_2);
      fVar32 = *param_4;
      fVar31 = (float)(int)param_4[1];
    } while (fVar31 < param_6[3] || fVar31 == param_6[3]);
  }
  return;
}


