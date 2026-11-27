// 0x18028c650  FUN_18028c650
// size=3513 thunk=false
// signature: undefined FUN_18028c650()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18028c650(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  short sVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  void *_Dst;
  ushort uVar13;
  byte bVar14;
  byte bVar15;
  short sVar16;
  int *piVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  void *pvVar24;
  byte *pbVar25;
  byte bVar26;
  int iVar27;
  byte bVar28;
  int iVar29;
  int iVar30;
  undefined2 uVar31;
  longlong lVar32;
  undefined2 uVar33;
  longlong lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_188 [32];
  int local_168;
  int local_160;
  int local_158;
  int local_150;
  int local_148;
  int local_140;
  byte local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  void *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  lVar23 = *(longlong *)(param_1 + 8);
  local_110 = lVar23;
  local_108 = param_3;
  local_124 = FUN_18028c490();
  *param_3 = 0;
  uVar9 = _UNK_180381648;
  uVar8 = _DAT_180381640;
  fVar7 = DAT_180380944;
  if (-1 < local_124) {
    lVar32 = (longlong)local_124;
    sVar16 = (ushort)*(byte *)(lVar32 + lVar23) * 0x100 + (ushort)*(byte *)(lVar32 + 1 + lVar23);
    if (sVar16 < 1) {
      if (sVar16 < 0) {
        iVar29 = 0;
        pbVar25 = (byte *)(lVar23 + 10 + lVar32);
        pvVar24 = (void *)0x0;
        do {
          bVar15 = pbVar25[1];
          fVar43 = 0.0;
          bVar28 = pbVar25[3];
          fVar44 = 0.0;
          bVar14 = pbVar25[2];
          pbVar19 = pbVar25 + 4;
          local_e8 = (void *)0x0;
          local_100 = uVar8;
          uStack_f8 = uVar9;
          if ((bVar15 & 2) != 0) {
            if ((bVar15 & 1) == 0) {
              iVar27 = (int)(char)*pbVar19;
              pbVar20 = pbVar25 + 6;
              iVar18 = (int)(char)pbVar25[5];
            }
            else {
              pbVar20 = pbVar25 + 8;
              iVar27 = (int)(short)((ushort)*pbVar19 * 0x100 + (ushort)pbVar25[5]);
              iVar18 = (int)(short)((ushort)pbVar25[7] + (ushort)pbVar25[6] * 0x100);
            }
            fVar44 = (float)iVar18;
            fVar43 = (float)iVar27;
            pbVar19 = pbVar20;
          }
          pbVar25 = pbVar19;
          if ((bVar15 & 8) == 0) {
            if ((bVar15 & 0x40) == 0) {
              if ((char)bVar15 < '\0') {
                pbVar19 = pbVar25 + 1;
                bVar26 = *pbVar25;
                pbVar20 = pbVar25 + 2;
                pbVar1 = pbVar25 + 3;
                pbVar2 = pbVar25 + 4;
                pbVar3 = pbVar25 + 5;
                pbVar4 = pbVar25 + 6;
                pbVar5 = pbVar25 + 7;
                pbVar25 = pbVar25 + 8;
                fVar39 = (float)(int)(short)((ushort)*pbVar19 + (ushort)bVar26 * 0x100) * fVar7;
                fVar40 = (float)(int)(short)((ushort)*pbVar5 + (ushort)*pbVar4 * 0x100) * fVar7;
                fVar42 = (float)(int)(short)((ushort)*pbVar3 + (ushort)*pbVar2 * 0x100) * fVar7;
                fVar41 = (float)(int)(short)((ushort)*pbVar1 + (ushort)*pbVar20 * 0x100) * fVar7;
              }
              else {
                uStack_f8._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
                uStack_f8._0_4_ = (float)uVar9;
                local_100._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
                local_100._0_4_ = (float)uVar8;
                fVar39 = (float)local_100;
                fVar40 = uStack_f8._4_4_;
                fVar42 = (float)uStack_f8;
                fVar41 = local_100._4_4_;
              }
            }
            else {
              pbVar19 = pbVar25 + 1;
              bVar26 = *pbVar25;
              pbVar20 = pbVar25 + 2;
              pbVar1 = pbVar25 + 3;
              pbVar25 = pbVar25 + 4;
              fVar39 = (float)(int)(short)((ushort)*pbVar19 + (ushort)bVar26 * 0x100) * fVar7;
              fVar40 = (float)(int)(short)((ushort)*pbVar1 + (ushort)*pbVar20 * 0x100) * fVar7;
              fVar42 = 0.0;
              fVar41 = 0.0;
            }
          }
          else {
            pbVar19 = pbVar25 + 1;
            bVar26 = *pbVar25;
            pbVar25 = pbVar25 + 2;
            fVar39 = (float)(int)(short)((ushort)*pbVar19 + (ushort)bVar26 * 0x100) * fVar7;
            fVar40 = fVar39;
            fVar42 = 0.0;
            fVar41 = 0.0;
          }
          fVar36 = fVar41 * fVar41 + fVar39 * fVar39;
          local_100 = uVar8;
          uStack_f8 = uVar9;
          if (fVar36 < 0.0) {
            fVar36 = sqrtf(fVar36);
          }
          else {
            fVar36 = SQRT(fVar36);
          }
          fVar35 = fVar40 * fVar40 + fVar42 * fVar42;
          if (fVar35 < 0.0) {
            fVar35 = sqrtf(fVar35);
          }
          else {
            fVar35 = SQRT(fVar35);
          }
          iVar18 = FUN_18028e930(param_1,(uint)bVar14 * 0x100 + (uint)bVar28,&local_e8);
          _Dst = pvVar24;
          if (0 < iVar18) {
            iVar27 = 0;
            if (iVar18 < 4) goto LAB_18028d0d5;
            do {
              lVar32 = (longlong)iVar27;
              lVar23 = lVar32 * 0xe;
              fVar38 = (float)(int)*(short *)(lVar23 + 2 + (longlong)local_e8);
              sVar16 = *(short *)(lVar23 + (longlong)local_e8);
              *(short *)(lVar23 + (longlong)local_e8) =
                   (short)(int)((fVar39 * (float)(int)sVar16 + fVar42 * fVar38 + fVar43) * fVar36);
              *(short *)(lVar23 + 2 + (longlong)local_e8) =
                   (short)(int)((fVar41 * (float)(int)sVar16 + fVar40 * fVar38 + fVar44) * fVar35);
              fVar38 = (float)(int)*(short *)(lVar23 + 6 + (longlong)local_e8);
              fVar37 = (float)(int)*(short *)(lVar23 + 4 + (longlong)local_e8);
              *(short *)(lVar23 + 4 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar39 + fVar38 * fVar42 + fVar43) * fVar36);
              *(short *)(lVar23 + 6 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar41 + fVar38 * fVar40 + fVar44) * fVar35);
              lVar23 = (lVar32 + 1) * 0xe;
              fVar38 = (float)(int)*(short *)(lVar23 + 2 + (longlong)local_e8);
              sVar16 = *(short *)(lVar23 + (longlong)local_e8);
              *(short *)(lVar23 + (longlong)local_e8) =
                   (short)(int)((fVar39 * (float)(int)sVar16 + fVar42 * fVar38 + fVar43) * fVar36);
              *(short *)(lVar23 + 2 + (longlong)local_e8) =
                   (short)(int)((fVar41 * (float)(int)sVar16 + fVar40 * fVar38 + fVar44) * fVar35);
              fVar38 = (float)(int)*(short *)(lVar23 + 6 + (longlong)local_e8);
              fVar37 = (float)(int)*(short *)(lVar23 + 4 + (longlong)local_e8);
              *(short *)(lVar23 + 4 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar39 + fVar38 * fVar42 + fVar43) * fVar36);
              *(short *)(lVar23 + 6 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar41 + fVar38 * fVar40 + fVar44) * fVar35);
              lVar23 = (lVar32 + 2) * 0xe;
              fVar38 = (float)(int)*(short *)(lVar23 + 2 + (longlong)local_e8);
              sVar16 = *(short *)(lVar23 + (longlong)local_e8);
              *(short *)(lVar23 + (longlong)local_e8) =
                   (short)(int)((fVar39 * (float)(int)sVar16 + fVar42 * fVar38 + fVar43) * fVar36);
              *(short *)(lVar23 + 2 + (longlong)local_e8) =
                   (short)(int)((fVar41 * (float)(int)sVar16 + fVar40 * fVar38 + fVar44) * fVar35);
              fVar38 = (float)(int)*(short *)(lVar23 + 6 + (longlong)local_e8);
              fVar37 = (float)(int)*(short *)(lVar23 + 4 + (longlong)local_e8);
              *(short *)(lVar23 + 4 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar39 + fVar38 * fVar42 + fVar43) * fVar36);
              *(short *)(lVar23 + 6 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar41 + fVar38 * fVar40 + fVar44) * fVar35);
              lVar23 = (lVar32 + 3) * 0xe;
              fVar38 = (float)(int)*(short *)(lVar23 + 2 + (longlong)local_e8);
              sVar16 = *(short *)(lVar23 + (longlong)local_e8);
              iVar27 = iVar27 + 4;
              *(short *)(lVar23 + (longlong)local_e8) =
                   (short)(int)((fVar39 * (float)(int)sVar16 + fVar42 * fVar38 + fVar43) * fVar36);
              *(short *)(lVar23 + 2 + (longlong)local_e8) =
                   (short)(int)((fVar41 * (float)(int)sVar16 + fVar40 * fVar38 + fVar44) * fVar35);
              fVar38 = (float)(int)*(short *)(lVar23 + 6 + (longlong)local_e8);
              fVar37 = (float)(int)*(short *)(lVar23 + 4 + (longlong)local_e8);
              *(short *)(lVar23 + 4 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar39 + fVar38 * fVar42 + fVar43) * fVar36);
              *(short *)(lVar23 + 6 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar41 + fVar38 * fVar40 + fVar44) * fVar35);
            } while (iVar27 < iVar18 + -3);
            for (; iVar27 < iVar18; iVar27 = iVar27 + 1) {
LAB_18028d0d5:
              lVar23 = (longlong)iVar27 * 0xe;
              sVar16 = *(short *)(lVar23 + (longlong)local_e8);
              fVar38 = (float)(int)*(short *)(lVar23 + 2 + (longlong)local_e8);
              *(short *)(lVar23 + (longlong)local_e8) =
                   (short)(int)((fVar39 * (float)(int)sVar16 + fVar42 * fVar38 + fVar43) * fVar36);
              *(short *)(lVar23 + 2 + (longlong)local_e8) =
                   (short)(int)((fVar41 * (float)(int)sVar16 + fVar40 * fVar38 + fVar44) * fVar35);
              fVar38 = (float)(int)*(short *)(lVar23 + 6 + (longlong)local_e8);
              fVar37 = (float)(int)*(short *)(lVar23 + 4 + (longlong)local_e8);
              *(short *)(lVar23 + 4 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar39 + fVar38 * fVar42 + fVar43) * fVar36);
              *(short *)(lVar23 + 6 + (longlong)local_e8) =
                   (short)(int)((fVar37 * fVar41 + fVar38 * fVar40 + fVar44) * fVar35);
            }
            _Dst = (void *)FUN_18026f580((longlong)(iVar18 + iVar29) * 0xe);
            if (_Dst == (void *)0x0) {
              if (pvVar24 != (void *)0x0) {
                FUN_18026f680(pvVar24);
              }
              pvVar24 = local_e8;
              if (local_e8 == (void *)0x0) {
                return 0;
              }
              lVar23 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar23 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar23 = *(longlong *)(lVar23 + 0xec0);
              if (lVar23 != 0) {
                piVar17 = (int *)(lVar23 + 0x29b0 + (longlong)*(short *)(lVar23 + 0x29ac) * 8);
                if (*piVar17 != *(int *)(lVar23 + 4)) {
                  iVar29 = *(short *)(lVar23 + 0x29ac) + 1;
                  sVar16 = (short)iVar29 +
                           ((short)(iVar29 / 6) + (short)(iVar29 >> 0x1f) +
                           (short)(((longlong)iVar29 / 6 + ((longlong)iVar29 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -6;
                  *(short *)(lVar23 + 0x29ac) = sVar16;
                  piVar17 = (int *)(lVar23 + ((longlong)sVar16 + 0x536) * 8);
                  *piVar17 = *(int *)(lVar23 + 4);
                  piVar17[1] = 0;
                }
                *(short *)((longlong)piVar17 + 6) = *(short *)((longlong)piVar17 + 6) + 1;
                *(int *)(lVar23 + 0x29a8) = *(int *)(lVar23 + 0x29a8) + 1;
              }
              free(pvVar24);
              return 0;
            }
            if ((0 < iVar29) && (pvVar24 != (void *)0x0)) {
              memcpy(_Dst,pvVar24,(longlong)iVar29 * 0xe);
            }
            memcpy((void *)((longlong)iVar29 * 0xe + (longlong)_Dst),local_e8,(longlong)iVar18 * 0xe
                  );
            if (pvVar24 != (void *)0x0) {
              FUN_18026f680(pvVar24);
            }
            pvVar24 = local_e8;
            if (local_e8 != (void *)0x0) {
              lVar23 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar23 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar23 = *(longlong *)(lVar23 + 0xec0);
              if (lVar23 != 0) {
                piVar17 = (int *)(lVar23 + 0x29b0 + (longlong)*(short *)(lVar23 + 0x29ac) * 8);
                if (*piVar17 != *(int *)(lVar23 + 4)) {
                  iVar27 = *(short *)(lVar23 + 0x29ac) + 1;
                  sVar16 = (short)iVar27 +
                           ((short)(iVar27 / 6) + (short)(iVar27 >> 0x1f) +
                           (short)(((longlong)iVar27 / 6 + ((longlong)iVar27 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -6;
                  *(short *)(lVar23 + 0x29ac) = sVar16;
                  piVar17 = (int *)(lVar23 + 0x29b0 + (longlong)sVar16 * 8);
                  *piVar17 = *(int *)(lVar23 + 4);
                  *(undefined4 *)(lVar23 + 0x29b4 + (longlong)sVar16 * 8) = 0;
                }
                *(short *)((longlong)piVar17 + 6) = *(short *)((longlong)piVar17 + 6) + 1;
                *(int *)(lVar23 + 0x29a8) = *(int *)(lVar23 + 0x29a8) + 1;
              }
            }
            free(pvVar24);
            iVar29 = iVar18 + iVar29;
          }
          pvVar24 = _Dst;
        } while ((bVar15 & 0x20) != 0);
      }
      else {
        _Dst = (void *)0x0;
        iVar29 = 0;
      }
      *local_108 = (longlong)_Dst;
      return iVar29;
    }
    iVar29 = sVar16 * 2;
    lVar34 = (longlong)iVar29;
    local_e8 = (void *)CONCAT44(local_e8._4_4_,iVar29);
    bVar15 = *(byte *)(lVar32 + lVar23 + 10 + lVar34);
    local_138 = *(byte *)(lVar32 + lVar23 + 0xb + lVar34);
    iVar18 = (uint)*(byte *)(lVar34 + 9 + lVar32 + lVar23) +
             (uint)*(byte *)(lVar34 + 8 + lVar32 + lVar23) * 0x100 + 1;
    local_120 = iVar18;
    lVar12 = FUN_18026f580((longlong)(iVar29 + iVar18) * 0xe);
    if (lVar12 != 0) {
      iVar21 = 0;
      local_128 = 0;
      local_12c = 0;
      bVar28 = 0;
      bVar26 = 0;
      bVar14 = 0;
      iVar27 = 0;
      pbVar25 = (byte *)((ulonglong)local_138 + 0xc + (ulonglong)bVar15 * 0x100 + lVar32 + lVar23 +
                        lVar34);
      if (iVar18 == 0) {
        local_150 = 0;
        local_158 = 0;
        iVar11 = 0;
        iVar18 = 0;
        local_160 = 0;
        local_168 = 0;
      }
      else {
        do {
          if (bVar14 == 0) {
            bVar28 = *pbVar25;
            if ((bVar28 & 8) != 0) {
              bVar14 = pbVar25[1];
            }
            pbVar25 = pbVar25 + (ulonglong)((bVar28 & 8) != 0) + 1;
          }
          else {
            bVar14 = bVar14 - 1;
          }
          iVar11 = iVar27 + iVar29;
          iVar27 = iVar27 + 1;
          *(byte *)((longlong)iVar11 * 0xe + 0xc + lVar12) = bVar28;
        } while (iVar27 < iVar18);
        sVar16 = 0;
        iVar27 = 0;
        do {
          lVar23 = (longlong)(iVar27 + iVar29) * 0xe;
          bVar15 = *(byte *)(lVar23 + 0xc + lVar12) & 0x10;
          if ((*(byte *)(lVar23 + 0xc + lVar12) & 2) == 0) {
            if (bVar15 == 0) {
              sVar16 = sVar16 + (ushort)pbVar25[1] + (ushort)*pbVar25 * 0x100;
              pbVar25 = pbVar25 + 2;
            }
          }
          else {
            bVar28 = *pbVar25;
            pbVar25 = pbVar25 + 1;
            uVar13 = (ushort)bVar28;
            if (bVar15 == 0) {
              uVar13 = -(ushort)bVar28;
            }
            sVar16 = sVar16 + uVar13;
          }
          iVar27 = iVar27 + 1;
          *(short *)(lVar23 + lVar12) = sVar16;
        } while (iVar27 < iVar18);
        sVar16 = 0;
        iVar27 = 0;
        do {
          lVar23 = (longlong)(iVar27 + iVar29) * 0xe;
          bVar15 = *(byte *)(lVar23 + 0xc + lVar12) & 0x20;
          if ((*(byte *)(lVar23 + 0xc + lVar12) & 4) == 0) {
            if (bVar15 == 0) {
              sVar16 = sVar16 + (ushort)pbVar25[1] + (ushort)*pbVar25 * 0x100;
              pbVar25 = pbVar25 + 2;
            }
          }
          else {
            bVar28 = *pbVar25;
            pbVar25 = pbVar25 + 1;
            uVar13 = (ushort)bVar28;
            if (bVar15 == 0) {
              uVar13 = -(ushort)bVar28;
            }
            sVar16 = sVar16 + uVar13;
          }
          iVar27 = iVar27 + 1;
          *(short *)(lVar23 + 2 + lVar12) = sVar16;
        } while (iVar27 < iVar18);
        local_150 = 0;
        local_158 = 0;
        iVar27 = 0;
        local_134 = 0;
        iVar11 = 0;
        local_130 = 0;
        iVar18 = 0;
        local_160 = 0;
        local_168 = 0;
        iVar22 = 0;
        do {
          local_118 = (longlong)(iVar22 + iVar29);
          lVar23 = local_118 * 0xe;
          local_138 = *(byte *)(lVar12 + 0xc + lVar23);
          sVar16 = *(short *)(lVar23 + lVar12);
          iVar29 = (int)sVar16;
          sVar6 = *(short *)(lVar12 + 2 + lVar23);
          iVar30 = (int)sVar6;
          if (local_12c == iVar22) {
            if (iVar22 != 0) {
              local_148 = iVar18;
              local_140 = iVar11;
              iVar27 = FUN_18028c560(lVar12,iVar27,iVar21,bVar26);
            }
            bVar26 = ~local_138 & 1;
            local_160 = iVar30;
            local_168 = iVar29;
            if (bVar26 != 0) {
              lVar23 = (local_118 + 1) * 0xe;
              local_160 = (int)*(short *)(lVar23 + 2 + lVar12);
              local_134 = iVar30;
              local_130 = iVar29;
              if ((*(byte *)(lVar23 + 0xc + lVar12) & 1) == 0) {
                local_160 = local_160 + iVar30 >> 1;
                local_168 = *(short *)(lVar23 + lVar12) + iVar29 >> 1;
              }
              else {
                iVar22 = iVar22 + 1;
                local_168 = (int)*(short *)(lVar23 + lVar12);
              }
            }
            lVar23 = (longlong)iVar27 * 0xe;
            *(undefined4 *)(lVar23 + 4 + lVar12) = 0;
            *(undefined1 *)(lVar23 + 0xc + lVar12) = 1;
            *(short *)(lVar23 + lVar12) = (short)local_168;
            *(short *)(lVar23 + 2 + lVar12) = (short)local_160;
            local_12c = (uint)*(byte *)((longlong)(local_128 * 2) + 10 + local_124 + local_110) *
                        0x100 + *(byte *)((longlong)(local_128 * 2) + 0xb + local_124 + local_110) +
                                1;
            local_128 = local_128 + 1;
LAB_18028ca7a:
            iVar27 = iVar27 + 1;
            iVar21 = 0;
            local_150 = local_134;
            local_158 = local_130;
          }
          else {
            uVar33 = (undefined2)iVar18;
            uVar31 = (undefined2)iVar11;
            if ((local_138 & 1) != 0) {
              lVar23 = (longlong)iVar27 * 0xe;
              if (iVar21 == 0) {
                uVar31 = 0;
                uVar10 = 2;
                uVar33 = 0;
              }
              else {
                uVar10 = 3;
              }
              *(undefined1 *)(lVar23 + 0xc + lVar12) = uVar10;
              *(short *)(lVar23 + lVar12) = sVar16;
              *(short *)(lVar23 + 2 + lVar12) = sVar6;
              *(undefined2 *)(lVar23 + 4 + lVar12) = uVar33;
              *(undefined2 *)(lVar23 + 6 + lVar12) = uVar31;
              goto LAB_18028ca7a;
            }
            if (iVar21 != 0) {
              lVar23 = (longlong)iVar27;
              iVar27 = iVar27 + 1;
              lVar23 = lVar23 * 0xe;
              *(short *)(lVar23 + lVar12) = (short)(iVar18 + iVar29 >> 1);
              *(short *)(lVar23 + 2 + lVar12) = (short)(iVar11 + iVar30 >> 1);
              *(undefined1 *)(lVar23 + 0xc + lVar12) = 3;
              *(undefined2 *)(lVar23 + 4 + lVar12) = uVar33;
              *(undefined2 *)(lVar23 + 6 + lVar12) = uVar31;
            }
            iVar21 = 1;
            iVar18 = iVar29;
            iVar11 = iVar30;
          }
          iVar22 = iVar22 + 1;
          iVar29 = (int)local_e8;
        } while (iVar22 < local_120);
      }
      local_148 = iVar18;
      local_140 = iVar11;
      iVar29 = FUN_18028c560(lVar12,iVar27,iVar21,bVar26);
      *local_108 = lVar12;
      return iVar29;
    }
  }
  return 0;
}


