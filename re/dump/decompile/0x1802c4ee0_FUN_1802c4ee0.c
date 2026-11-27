// 0x1802c4ee0  FUN_1802c4ee0
// size=4197 thunk=false
// signature: undefined FUN_1802c4ee0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c4ee0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  int *piVar17;
  void *_Dst;
  float *pfVar18;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *_Src;
  undefined *puVar26;
  longlong lVar27;
  undefined8 *puVar28;
  int *piVar29;
  int iVar30;
  undefined8 *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_138 [32];
  char local_118;
  uint local_114;
  undefined8 local_110;
  int local_108 [8];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  float afStack_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong uVar19;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_110 = lVar3;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar39 = *(float *)(param_1 + 0x48);
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar15 = *(int *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x83) = 0;
  fVar37 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x48) = fVar37;
  local_118 = fVar37 < fVar39;
  iVar30 = 0;
  iVar34 = 0;
  bVar11 = false;
  local_c0 = 0;
  afStack_b8[0] = 0.0;
  afStack_b8[1] = 0.0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  iVar32 = iVar30;
  if (0 < iVar15) {
    do {
      lVar24 = *(longlong *)(param_1 + 0x10);
      lVar22 = (longlong)iVar30 * 0x2c;
      if ((*(int *)(lVar22 + 8 + lVar24) < *(int *)(param_1 + 0x34)) ||
         (*(char *)(lVar22 + 0x28 + lVar24) != '\0')) {
        if (*(int *)(param_1 + 0x2c) == *(int *)(lVar22 + lVar24)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        if (*(int *)(param_1 + 0x20) == *(int *)(lVar22 + lVar24)) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        iVar34 = iVar32;
        if (*(int *)(param_1 + 0x24) == *(int *)(lVar22 + lVar24)) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        if (iVar32 != iVar30) {
          puVar31 = (undefined8 *)(lVar22 + 0x10 + lVar24);
          local_e8 = *puVar31;
          puVar28 = (undefined8 *)(lVar22 + 0x1c + lVar24);
          uVar7 = *puVar28;
          uStack_d4 = puVar28[1];
          puVar1 = (undefined4 *)(lVar22 + lVar24);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          lVar22 = (longlong)iVar32 * 0x2c;
          uStack_e0 = (undefined4)puVar31[1];
          uStack_dc = (undefined4)uVar7;
          uStack_d8 = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = (undefined4 *)(lVar22 + lVar24);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          puVar31 = (undefined8 *)(lVar22 + 0x10 + lVar24);
          *puVar31 = local_e8;
          puVar31[1] = CONCAT44(uStack_dc,uStack_e0);
          puVar31 = (undefined8 *)(lVar22 + 0x1c + lVar24);
          *puVar31 = uVar7;
          puVar31[1] = uStack_d4;
        }
        lVar24 = (longlong)iVar32 * 0x2c;
        uVar21 = *(uint *)(lVar24 + 4 + *(longlong *)(param_1 + 0x10));
        *(short *)(lVar24 + 0x26 + *(longlong *)(param_1 + 0x10)) = (short)iVar32;
        uVar14 = 0;
        if ((uVar21 & 0x40) == 0) {
          uVar14 = ((uVar21 & 0x80) != 0) + 1;
        }
        if (0 < iVar32) {
          uVar21 = *(uint *)(*(longlong *)(param_1 + 0x10) + -0x28 + lVar24);
          cVar12 = '\0';
          if ((uVar21 & 0x40) == 0) {
            cVar12 = ((uVar21 & 0x80) != 0) + '\x01';
          }
          if (uVar14 == 0) {
            if (cVar12 == '\0') goto LAB_1802c506c;
            bVar11 = true;
          }
          if ((cVar12 == '\x02') && (uVar14 != 2)) {
            bVar11 = true;
          }
        }
LAB_1802c506c:
        *(int *)(&local_c0 + (ulonglong)uVar14 * 2) =
             *(int *)(&local_c0 + (ulonglong)uVar14 * 2) + 1;
        iVar34 = iVar32 + 1;
      }
      iVar15 = *(int *)(param_1 + 8);
      iVar30 = iVar30 + 1;
      iVar32 = iVar34;
    } while (iVar30 < iVar15);
  }
  iVar32 = 8;
  if (iVar15 != iVar34) {
    iVar15 = *(int *)(param_1 + 0xc);
    if (iVar15 < iVar34) {
      if (iVar15 == 0) {
        iVar30 = 8;
      }
      else {
        iVar30 = iVar15 / 2 + iVar15;
      }
      iVar33 = iVar34;
      if (iVar34 < iVar30) {
        iVar33 = iVar30;
      }
      if (iVar15 < iVar33) {
        pvVar16 = (void *)FUN_18026f580((longlong)iVar33 * 0x2c);
        if (*(void **)(param_1 + 0x10) != (void *)0x0) {
          memcpy(pvVar16,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) * 0x2c);
          FUN_18026f680(*(undefined8 *)(param_1 + 0x10));
        }
        *(void **)(param_1 + 0x10) = pvVar16;
        *(int *)(param_1 + 0xc) = iVar33;
      }
    }
    *(int *)(param_1 + 8) = iVar34;
    iVar15 = iVar34;
  }
  if ((bVar11) && (1 < (ulonglong)(longlong)iVar15)) {
    qsort(*(void **)(param_1 + 0x10),(longlong)iVar15,0x2c,(_PtFuncCompare *)&LAB_1802c4980);
  }
  fVar39 = *(float *)(lVar3 + 0xcdc);
  if (((int)local_c0 < 1) || (fVar37 = fVar39, (int)local_a0 + (int)local_b0 < 1)) {
    fVar37 = 0.0;
  }
  afStack_b8[1] = fVar37;
  if (((int)local_b0 < 1) || (fVar37 = fVar39, (int)local_a0 < 1)) {
    fVar37 = 0.0;
  }
  iVar15 = *(int *)(param_1 + 0x28);
  uStack_a8 = CONCAT44(fVar37,(float)uStack_a8);
  iVar34 = 0;
  if (iVar15 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar34 = iVar15;
  }
  iVar15 = *(int *)(param_1 + 0x24);
  if (iVar15 != 0) {
    *(int *)(param_1 + 0x20) = iVar15;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar34 = iVar15;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar15 = *(int *)(param_1 + 8);
    if (0 < iVar15) {
      lVar24 = *(longlong *)(param_1 + 0x10);
      uVar19 = 0;
      do {
        uVar25 = uVar19 * 0x2c;
        puVar31 = (undefined8 *)(lVar24 + uVar25);
        if (*(int *)(lVar24 + uVar25) == *(int *)(param_1 + 0x7c)) {
          if ((*(uint *)((longlong)puVar31 + 4) & 0x20) == 0) {
            iVar33 = (int)*(short *)(param_1 + 0x80);
            iVar30 = (int)(uVar25 / 0x2c) + iVar33;
            if ((-1 < iVar30) && (iVar30 < iVar15)) {
              puVar28 = (undefined8 *)((longlong)iVar30 * 0x2c + lVar24);
              if (((*(uint *)((longlong)puVar28 + 4) & 0x20) == 0) &&
                 (((*(uint *)((longlong)puVar28 + 4) ^ *(uint *)((longlong)puVar31 + 4)) & 0xc0) ==
                  0)) {
                local_e8 = puVar31[2];
                uVar7 = *(undefined8 *)((longlong)puVar31 + 0x1c);
                uVar8 = *(undefined8 *)((longlong)puVar31 + 0x24);
                uVar9 = *puVar31;
                uVar10 = puVar31[1];
                uStack_e0 = (undefined4)puVar31[3];
                uStack_dc = (undefined4)uVar7;
                uStack_d8 = (undefined4)((ulonglong)uVar7 >> 0x20);
                if (*(short *)(param_1 + 0x80) < 1) {
                  iVar33 = -iVar33;
                  puVar31 = (undefined8 *)((longlong)puVar28 + 0x2c);
                  _Src = puVar28;
                }
                else {
                  _Src = (undefined8 *)((longlong)puVar31 + 0x2c);
                }
                uStack_d4 = uVar8;
                memmove(puVar31,_Src,(longlong)iVar33 * 0x2c);
                lVar24 = local_110;
                *puVar28 = uVar9;
                puVar28[1] = uVar10;
                puVar28[2] = local_e8;
                puVar28[3] = CONCAT44(uStack_dc,uStack_e0);
                *(undefined8 *)((longlong)puVar28 + 0x1c) = uVar7;
                *(undefined8 *)((longlong)puVar28 + 0x24) = uVar8;
                if ((*(uint *)(param_1 + 0x18) & 0x400000) != 0) {
                  if (*(char *)(local_110 + 0x10) == '\0') {
                    __dyn_tls_on_demand_init();
                  }
                  lVar24 = *(longlong *)(lVar24 + 0xec0);
                  if (*(float *)(lVar24 + 0x27a4) <= 0.0) {
                    *(undefined4 *)(lVar24 + 0x27a4) = *(undefined4 *)(lVar24 + 0x44);
                  }
                }
                if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x20)) {
                  iVar34 = *(int *)(param_1 + 0x7c);
                }
              }
            }
          }
          break;
        }
        uVar21 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar21;
      } while ((int)uVar21 < iVar15);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (((*(byte *)(param_1 + 0x18) & 4) != 0) &&
     (piVar17 = (int *)FUN_1802c6540(param_1), piVar17 != (int *)0x0)) {
    iVar34 = *piVar17;
    *(int *)(param_1 + 0x20) = iVar34;
  }
  pvVar16 = (void *)(local_c0 & 0xffffffff);
  iVar15 = *(int *)(param_1 + 8);
  local_108[1] = (int)local_a0 + (int)local_c0;
  iVar30 = *(int *)(lVar3 + 0x2414);
  local_108[0] = 0;
  local_108[2] = (int)local_c0;
  if (iVar30 < iVar15) {
    if (iVar30 != 0) {
      pvVar16 = (void *)(ulonglong)(uint)(iVar30 >> 0x1f);
      iVar32 = iVar30 + iVar30 / 2;
    }
    iVar33 = iVar15;
    if (iVar15 < iVar32) {
      iVar33 = iVar32;
    }
    if (iVar30 < iVar33) {
      _Dst = (void *)FUN_18026f580();
      pvVar16 = *(void **)(lVar3 + 0x2418);
      if (pvVar16 != (void *)0x0) {
        memcpy(_Dst,pvVar16,(longlong)*(int *)(lVar3 + 0x2410) * 0xc);
        FUN_18026f680();
      }
      *(void **)(lVar3 + 0x2418) = _Dst;
      *(int *)(lVar3 + 0x2414) = iVar33;
    }
  }
  fVar37 = DAT_180380bb0;
  piVar17 = (int *)0x0;
  *(int *)(lVar3 + 0x2410) = iVar15;
  fVar36 = fVar37;
  if ((*(byte *)(param_1 + 0x18) & 0x80) != 0) {
    fVar36 = *(float *)(lVar3 + 0xd28);
  }
  iVar15 = *(int *)(param_1 + 8);
  uVar19 = (ulonglong)pvVar16 & 0xffffffffffffff00;
  iVar32 = 0;
  local_114 = (uint)uVar19;
  uVar21 = 0xffffffff;
  if (0 < iVar15) {
    do {
      piVar29 = (int *)((longlong)iVar32 * 0x2c + *(longlong *)(param_1 + 0x10));
      if (((piVar17 == (int *)0x0) || (piVar17[3] < piVar29[3])) && ((piVar29[1] & 0x200000U) == 0))
      {
        piVar17 = piVar29;
      }
      iVar15 = *piVar29;
      local_114 = (uint)uVar19 & 0xff;
      if (iVar15 == *(int *)(param_1 + 0x20)) {
        local_114 = 1;
      }
      if ((iVar34 == 0) && (*(int *)(lVar3 + 0x223c) == iVar15)) {
        iVar34 = iVar15;
      }
      if (piVar29[8] == -1) {
        puVar26 = &DAT_18037f5f8;
      }
      else {
        puVar26 = (undefined *)((longlong)piVar29[8] + *(longlong *)(param_1 + 0xa8));
      }
      fVar35 = (float)piVar29[7];
      if (fVar35 < 0.0) {
        pfVar18 = (float *)FUN_1802c73c0(local_c8,puVar26,(piVar29[1] & 0x100001U) != 0x100000);
        fVar35 = *pfVar18;
      }
      uVar14 = piVar29[1];
      piVar29[6] = (int)fVar35;
      if ((uVar14 >> 0x15 & 1) == 0) {
        if (fVar35 <= *(float *)(lVar3 + 0xd24)) {
          fVar35 = *(float *)(lVar3 + 0xd24);
        }
        piVar29[6] = (int)fVar35;
      }
      if ((uVar14 & 0x40) == 0) {
        uVar14 = ((uVar14 & 0x80) != 0) + 1;
      }
      else {
        uVar14 = 0;
      }
      uVar19 = (ulonglong)uVar14;
      if (uVar14 == uVar21) {
        fVar35 = fVar35 + fVar39;
        fVar38 = fVar39;
      }
      else {
        fVar35 = fVar35 + 0.0;
        fVar38 = 0.0;
      }
      *(float *)((longlong)&local_c0 + uVar19 * 0x10 + 4) =
           fVar35 + *(float *)((longlong)&local_c0 + uVar19 * 0x10 + 4);
      fVar35 = (float)piVar29[6];
      if (fVar36 <= (float)piVar29[6]) {
        fVar35 = fVar36;
      }
      afStack_b8[uVar19 * 4] = fVar35 + fVar38 + afStack_b8[uVar19 * 4];
      lVar22 = (longlong)local_108[uVar19];
      local_108[uVar19] = local_108[uVar19] + 1;
      lVar24 = *(longlong *)(lVar3 + 0x2418);
      uVar19 = (ulonglong)local_114;
      *(int *)(lVar24 + lVar22 * 0xc) = iVar32;
      iVar32 = iVar32 + 1;
      iVar15 = piVar29[6];
      *(int *)(lVar24 + 8 + lVar22 * 0xc) = iVar15;
      *(int *)(lVar24 + 4 + lVar22 * 0xc) = iVar15;
      fVar35 = (float)piVar29[6];
      if ((float)piVar29[6] <= fVar37) {
        fVar35 = fVar37;
      }
      piVar29[5] = (int)fVar35;
      iVar15 = *(int *)(param_1 + 8);
      uVar21 = uVar14;
    } while (iVar32 < iVar15);
  }
  uVar21 = *(uint *)(param_1 + 0x18);
  *(float *)(param_1 + 0x58) =
       afStack_b8[1] + local_c0._4_4_ + 0.0 + uStack_a8._4_4_ + local_b0._4_4_ +
       uStack_98._4_4_ + local_a0._4_4_;
  if (((uVar21 & 0x200) == 0) && (-1 < (char)uVar21)) {
    bVar11 = false;
LAB_1802c5592:
    fVar39 = uStack_98._4_4_ + (float)uStack_98 +
             afStack_b8[1] + afStack_b8[0] + 0.0 + uStack_a8._4_4_ + (float)uStack_a8;
  }
  else {
    bVar11 = true;
    if ((uVar21 & 0x200) == 0) goto LAB_1802c5592;
    fVar39 = *(float *)(param_1 + 0x54);
  }
  if ((((fVar39 <= *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) || (iVar15 < 2)) ||
      ((uVar21 & 0x10) != 0)) || (!bVar11)) {
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x86) = 1;
    piVar29 = (int *)FUN_1802c61c0(param_1);
    if ((piVar29 != (int *)0x0) && (iVar34 = *piVar29, (piVar29[1] & 0x200000U) == 0)) {
      *(int *)(param_1 + 0x20) = iVar34;
    }
  }
  if ((iVar34 == 0) && (local_118 != '\0')) {
    iVar34 = *(int *)(param_1 + 0x20);
  }
  fVar39 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  fVar35 = local_a0._4_4_ + uStack_98._4_4_ + local_c0._4_4_ + afStack_b8[1];
  if (fVar39 <= fVar35) {
    fVar38 = fVar35 - fVar39;
  }
  else {
    fVar38 = (local_b0._4_4_ + uStack_a8._4_4_) -
             ((fVar39 - (local_c0._4_4_ + afStack_b8[1])) - (local_a0._4_4_ + uStack_98._4_4_));
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
  }
  if (fVar38 < fVar37) goto LAB_1802c5939;
  if ((*(uint *)(param_1 + 0x18) & 0x180) == 0) {
    if (fVar35 < fVar39) goto LAB_1802c5939;
LAB_1802c567d:
    iVar15 = (int)local_a0 + (int)local_c0;
    if (fVar39 <= fVar35) {
      iVar32 = 0;
    }
    else {
      iVar32 = (int)local_a0 + (int)local_c0;
    }
  }
  else {
    if (fVar39 <= fVar35) goto LAB_1802c567d;
    iVar32 = (int)local_a0 + (int)local_c0;
    iVar15 = (int)local_b0;
  }
  FUN_1802b00a0(*(longlong *)(lVar3 + 0x2418) + (longlong)iVar32 * 0xc,iVar15,fVar38,fVar36);
  iVar30 = iVar32 + iVar15;
  if (iVar32 < iVar30) {
    if (3 < iVar15) {
      do {
        lVar24 = (longlong)iVar32;
        fVar39 = (float)(int)*(float *)(*(longlong *)(lVar3 + 0x2418) + 4 + lVar24 * 0xc);
        if (0.0 <= fVar39) {
          lVar22 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar37;
          if (fVar37 <= fVar39) {
            fVar36 = fVar39;
          }
          lVar27 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x2418) + lVar24 * 0xc) * 0x2c;
          uVar21 = *(uint *)(lVar27 + 4 + lVar22);
          if ((uVar21 & 0x40) == 0) {
            lVar20 = (ulonglong)((uVar21 & 0x80) != 0) + 1;
          }
          else {
            lVar20 = 0;
          }
          *(float *)((longlong)&local_c0 + lVar20 * 0x10 + 4) =
               *(float *)((longlong)&local_c0 + lVar20 * 0x10 + 4) -
               (*(float *)(lVar27 + 0x14 + lVar22) - fVar36);
          *(float *)(lVar27 + 0x14 + lVar22) = fVar36;
        }
        fVar39 = (float)(int)*(float *)(*(longlong *)(lVar3 + 0x2418) + 0x10 + lVar24 * 0xc);
        if (0.0 <= fVar39) {
          lVar22 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar37;
          if (fVar37 <= fVar39) {
            fVar36 = fVar39;
          }
          lVar27 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x2418) + 0xc + lVar24 * 0xc) * 0x2c;
          uVar21 = *(uint *)(lVar27 + 4 + lVar22);
          if ((uVar21 & 0x40) == 0) {
            lVar20 = (ulonglong)((uVar21 & 0x80) != 0) + 1;
          }
          else {
            lVar20 = 0;
          }
          *(float *)((longlong)&local_c0 + lVar20 * 0x10 + 4) =
               *(float *)((longlong)&local_c0 + lVar20 * 0x10 + 4) -
               (*(float *)(lVar27 + 0x14 + lVar22) - fVar36);
          *(float *)(lVar27 + 0x14 + lVar22) = fVar36;
        }
        fVar39 = (float)(int)*(float *)(*(longlong *)(lVar3 + 0x2418) + 0x1c + lVar24 * 0xc);
        if (0.0 <= fVar39) {
          lVar22 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar37;
          if (fVar37 <= fVar39) {
            fVar36 = fVar39;
          }
          lVar27 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x2418) + 0x18 + lVar24 * 0xc) * 0x2c;
          uVar21 = *(uint *)(lVar27 + 4 + lVar22);
          if ((uVar21 & 0x40) == 0) {
            lVar20 = (ulonglong)((uVar21 & 0x80) != 0) + 1;
          }
          else {
            lVar20 = 0;
          }
          *(float *)((longlong)&local_c0 + lVar20 * 0x10 + 4) =
               *(float *)((longlong)&local_c0 + lVar20 * 0x10 + 4) -
               (*(float *)(lVar27 + 0x14 + lVar22) - fVar36);
          *(float *)(lVar27 + 0x14 + lVar22) = fVar36;
        }
        fVar39 = (float)(int)*(float *)(*(longlong *)(lVar3 + 0x2418) + 0x28 + lVar24 * 0xc);
        if (0.0 <= fVar39) {
          lVar22 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar37;
          if (fVar37 <= fVar39) {
            fVar36 = fVar39;
          }
          lVar24 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x2418) + 0x24 + lVar24 * 0xc) * 0x2c;
          uVar21 = *(uint *)(lVar24 + 4 + lVar22);
          if ((uVar21 & 0x40) == 0) {
            lVar27 = (ulonglong)((uVar21 & 0x80) != 0) + 1;
          }
          else {
            lVar27 = 0;
          }
          *(float *)((longlong)&local_c0 + lVar27 * 0x10 + 4) =
               *(float *)((longlong)&local_c0 + lVar27 * 0x10 + 4) -
               (*(float *)(lVar24 + 0x14 + lVar22) - fVar36);
          *(float *)(lVar24 + 0x14 + lVar22) = fVar36;
        }
        iVar32 = iVar32 + 4;
      } while (iVar32 < iVar30 + -3);
      if (iVar30 <= iVar32) goto LAB_1802c592e;
    }
    do {
      fVar39 = (float)(int)*(float *)(*(longlong *)(lVar3 + 0x2418) + 4 + (longlong)iVar32 * 0xc);
      if (0.0 <= fVar39) {
        lVar24 = *(longlong *)(param_1 + 0x10);
        fVar36 = fVar37;
        if (fVar37 <= fVar39) {
          fVar36 = fVar39;
        }
        lVar22 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x2418) + (longlong)iVar32 * 0xc) * 0x2c;
        uVar21 = *(uint *)(lVar22 + 4 + lVar24);
        if ((uVar21 & 0x40) == 0) {
          lVar27 = (ulonglong)((uVar21 & 0x80) != 0) + 1;
        }
        else {
          lVar27 = 0;
        }
        *(float *)((longlong)&local_c0 + lVar27 * 0x10 + 4) =
             *(float *)((longlong)&local_c0 + lVar27 * 0x10 + 4) -
             (*(float *)(lVar22 + 0x14 + lVar24) - fVar36);
        *(float *)(lVar22 + 0x14 + lVar24) = fVar36;
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 < iVar30);
  }
LAB_1802c592e:
LAB_1802c5939:
  pfVar18 = (float *)(param_1 + 0x38);
  iVar32 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  fVar39 = 0.0;
  iVar15 = (int)local_c0;
  if (0 < (int)local_c0) {
    do {
      lVar24 = *(longlong *)(param_1 + 0x10);
      lVar22 = (longlong)iVar32 * 0x2c;
      *(float *)(lVar22 + 0x10 + lVar24) = fVar39;
      *(undefined4 *)(lVar22 + 0x20 + lVar24) = 0xffffffff;
      if (iVar32 < (int)local_c0 + -1) {
        fVar36 = *(float *)(lVar3 + 0xcdc);
      }
      else {
        fVar36 = 0.0;
      }
      iVar32 = iVar32 + 1;
      fVar39 = fVar39 + fVar36 + *(float *)(lVar22 + 0x14 + lVar24);
      iVar15 = (int)local_c0;
    } while (iVar32 < (int)local_c0);
  }
  iVar32 = 0;
  fVar39 = fVar39 + afStack_b8[1];
  fVar36 = afStack_b8[1] + local_c0._4_4_;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar36 + *(float *)(param_1 + 0x54);
  if (0 < (int)local_b0) {
    do {
      lVar22 = (longlong)(iVar32 + iVar15) * 0x2c;
      lVar24 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar22 + 0x10 + lVar24) = fVar39;
      *(undefined4 *)(lVar22 + 0x20 + lVar24) = 0xffffffff;
      if (iVar32 < (int)local_b0 + -1) {
        fVar36 = *(float *)(lVar3 + 0xcdc);
      }
      else {
        fVar36 = 0.0;
      }
      iVar32 = iVar32 + 1;
      fVar39 = fVar39 + fVar36 + *(float *)(lVar22 + 0x14 + lVar24);
    } while (iVar32 < (int)local_b0);
  }
  fVar36 = uStack_a8._4_4_ + local_b0._4_4_;
  iVar32 = 0;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar36 + *(float *)(param_1 + 0x54);
  fVar35 = (*(float *)(param_1 + 0x40) - *pfVar18) - local_a0._4_4_;
  fVar36 = 0.0;
  if (0.0 <= fVar35) {
    fVar36 = fVar35;
  }
  if (uStack_a8._4_4_ + fVar39 <= fVar36) {
    fVar36 = uStack_a8._4_4_ + fVar39;
  }
  if (0 < (int)local_a0) {
    do {
      lVar22 = (longlong)(iVar32 + iVar15 + (int)local_b0) * 0x2c;
      lVar24 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar22 + 0x10 + lVar24) = fVar36;
      *(undefined4 *)(lVar22 + 0x20 + lVar24) = 0xffffffff;
      if (iVar32 < (int)local_a0 + -1) {
        fVar39 = *(float *)(lVar3 + 0xcdc);
      }
      else {
        fVar39 = 0.0;
      }
      iVar32 = iVar32 + 1;
      fVar36 = fVar36 + fVar39 + *(float *)(lVar22 + 0x14 + lVar24);
    } while (iVar32 < (int)local_a0);
  }
  fVar39 = local_a0._4_4_ + uStack_98._4_4_;
  if (fVar39 <= 0.0) {
    fVar39 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar39 + *(float *)(param_1 + 0x54);
  FUN_18028a8d0(param_1 + 0xa0);
  lVar24 = local_110;
  if (((char)local_114 == '\0') && (*(int *)(lVar3 + 4) <= *(int *)(param_1 + 0x34) + 1)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar15 = *(int *)(param_1 + 0x20);
  if (iVar15 == 0) {
    if ((*(int *)(param_1 + 0x24) == 0) && (piVar17 != (int *)0x0)) {
      iVar15 = *piVar17;
      *(int *)(param_1 + 0x20) = iVar15;
      iVar34 = iVar15;
    }
    else {
      iVar15 = 0;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar15;
  *(undefined1 *)(param_1 + 0x84) = 0;
  if (iVar34 == 0) {
    if ((*(char *)(param_1 + 0x86) != '\0') &&
       (cVar12 = FUN_18027bdd0(pfVar18,param_1 + 0x40,1), lVar24 = local_110, cVar12 != '\0')) {
      lVar22 = *(longlong *)(lVar3 + 0x1520);
      if (*(char *)(local_110 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0xec0) + 0x2070);
      if (((((lVar24 == 0) || (lVar24 = *(longlong *)(lVar24 + 0x3c0), lVar24 == 0)) ||
           (*(char *)(lVar24 + 0xcd) == '\0')) ||
          ((lVar22 = *(longlong *)(lVar22 + 0x3c0), lVar24 == lVar22 ||
           (((*(uint *)(lVar24 + 0x14) >> 0x1b & 1) == 0 &&
            ((*(uint *)(lVar24 + 0x14) >> 0x1a & 1) == 0)))))) ||
         (*(longlong *)(lVar22 + 0x3c0) == lVar24)) {
LAB_1802c5cf8:
        cVar12 = *(char *)(lVar3 + 0xb8a);
        pfVar23 = (float *)(lVar3 + 0x110);
        if (cVar12 == '\0') {
          pfVar23 = (float *)(lVar3 + 0x114);
        }
        fVar39 = *pfVar23;
        cVar13 = FUN_18027deb0((cVar12 != '\0') + 0x295,*(undefined4 *)(param_1 + 0x1c));
        if ((cVar13 != '\0') && (fVar39 != 0.0)) {
          *(undefined4 *)(param_1 + 100) = 0;
          fVar39 = *(float *)(param_1 + 0x60) -
                   (((((*(float *)(param_1 + 0x40) - *pfVar18) - local_c0._4_4_) - local_a0._4_4_) -
                    uStack_a8._4_4_) * fVar39) / DAT_180380e28;
          fVar37 = *(float *)(param_1 + 0x54) - (*(float *)(param_1 + 0x40) - *pfVar18);
          if (fVar37 <= fVar39) {
            fVar39 = fVar37;
          }
          if (fVar39 <= 0.0) {
            fVar39 = 0.0;
          }
          *(float *)(param_1 + 0x60) = fVar39;
        }
        FUN_18027dff0((cVar12 != '\0') + 0x295,*(undefined4 *)(param_1 + 0x1c));
      }
      else {
        do {
          if (lVar22 == lVar24) goto LAB_1802c5cf8;
          lVar22 = *(longlong *)(lVar22 + 0x3b8);
        } while (lVar22 != 0);
      }
    }
  }
  else if (0 < *(int *)(param_1 + 8)) {
    uVar19 = 0;
    do {
      piVar17 = (int *)(uVar19 * 0x2c + *(longlong *)(param_1 + 0x10));
      if (*piVar17 == iVar34) {
        if ((*(byte *)(piVar17 + 1) & 0xc0) != 0) break;
        if (*(char *)(local_110 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar39 = *(float *)(*(longlong *)(lVar24 + 0xec0) + 0x1238);
        iVar15 = (int)(((longlong)piVar17 - *(longlong *)(param_1 + 0x10)) / 0x2c);
        if ((int)local_c0 + -1 < iVar15) {
          fVar36 = (float)((uint)fVar39 ^ DAT_1803817f0);
        }
        else {
          fVar36 = 0.0;
        }
        fVar35 = (float)piVar17[4];
        fVar36 = fVar36 + (fVar35 - local_c0._4_4_);
        if (*(int *)(param_1 + 8) - (int)local_a0 <= iVar15 + 1) {
          fVar39 = fVar37;
        }
        fVar37 = (float)piVar17[5];
        *(undefined4 *)(param_1 + 100) = 0;
        fVar39 = (fVar35 - local_c0._4_4_) + fVar37 + fVar39;
        if (*(float *)(param_1 + 0x60) <= fVar36) {
          fVar37 = (((*(float *)(param_1 + 0x40) - *pfVar18) - local_c0._4_4_) - local_a0._4_4_) -
                   uStack_a8._4_4_;
          if (fVar39 - fVar36 < fVar37) {
            if (*(float *)(param_1 + 0x60) < fVar39 - fVar37) {
              *(float *)(param_1 + 0x60) = fVar39 - fVar37;
              fVar39 = (fVar36 - fVar37) - *(float *)(param_1 + 0x5c);
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
              *(float *)(param_1 + 100) = fVar39;
            }
            break;
          }
        }
        fVar39 = *(float *)(param_1 + 0x5c) - fVar39;
        *(float *)(param_1 + 0x60) = fVar36;
        if (fVar39 <= 0.0) {
          fVar39 = 0.0;
        }
        *(float *)(param_1 + 100) = fVar39;
        break;
      }
      uVar21 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar21;
    } while ((int)uVar21 < *(int *)(param_1 + 8));
  }
  fVar39 = *pfVar18;
  fVar36 = *(float *)(param_1 + 0x54) - (*(float *)(param_1 + 0x40) - fVar39);
  fVar37 = *(float *)(param_1 + 0x5c);
  if (fVar36 <= *(float *)(param_1 + 0x5c)) {
    fVar37 = fVar36;
  }
  if (fVar37 <= 0.0) {
    fVar37 = 0.0;
  }
  *(float *)(param_1 + 0x5c) = fVar37;
  fVar35 = *(float *)(param_1 + 0x54) - (*(float *)(param_1 + 0x40) - fVar39);
  fVar36 = *(float *)(param_1 + 0x60);
  if (fVar35 <= *(float *)(param_1 + 0x60)) {
    fVar36 = fVar35;
  }
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  *(float *)(param_1 + 0x60) = fVar36;
  if (fVar37 == fVar36) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    fVar38 = *(float *)(lVar3 + 0x1238) * _DAT_1803810dc;
    fVar35 = *(float *)(param_1 + 0x68);
    if (*(float *)(param_1 + 0x68) <= fVar38) {
      fVar35 = fVar38;
    }
    fVar38 = (float)((uint)(fVar36 - fVar37) & _DAT_1803817c0) / DAT_180380a6c;
    if (fVar35 <= fVar38) {
      fVar35 = fVar38;
    }
    *(float *)(param_1 + 0x68) = fVar35;
    fVar38 = fVar36;
    if ((*(int *)(lVar3 + 4) <= *(int *)(param_1 + 0x34) + 1) &&
       (*(float *)(param_1 + 100) <= *(float *)(lVar3 + 0x1238) * DAT_180380fcc)) {
      fVar35 = fVar35 * *(float *)(lVar3 + 0x40);
      if (fVar36 <= fVar37) {
        fVar38 = fVar37;
        if ((fVar36 < fVar37) && (fVar38 = fVar37 - fVar35, fVar38 <= fVar36)) {
          fVar38 = fVar36;
        }
      }
      else {
        fVar38 = fVar35 + fVar37;
        if (fVar36 <= fVar38) {
          fVar38 = fVar36;
        }
      }
    }
    *(float *)(param_1 + 0x5c) = fVar38;
  }
  *(float *)(param_1 + 0x6c) = fVar39 + local_c0._4_4_ + afStack_b8[1];
  *(float *)(param_1 + 0x70) = (*(float *)(param_1 + 0x40) - local_a0._4_4_) - uStack_a8._4_4_;
  lVar3 = *(longlong *)(lVar3 + 0x1520);
  *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)pfVar18;
  local_110 = CONCAT44(*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x54));
  FUN_18027f400(&local_110,*(undefined4 *)(param_1 + 0x94));
  fVar37 = *(float *)(param_1 + 0x58) + *pfVar18;
  fVar39 = *(float *)(lVar3 + 0x138);
  if (*(float *)(lVar3 + 0x138) <= fVar37) {
    fVar39 = fVar37;
  }
  *(float *)(lVar3 + 0x138) = fVar39;
  return;
}


