// 0x1801f4070  FUN_1801f4070
// size=1426 thunk=false
// signature: undefined FUN_1801f4070()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801f4070(longlong *param_1,float *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  short sVar7;
  longlong *plVar8;
  char *pcVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined *puVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c8 [2];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  local_98 = 0x3506af0b5263e534;
  local_a0 = 0xf4f1688ffe5269e4;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c0,&local_a0);
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_b0,&local_98);
  pcVar9 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
  fVar22 = DAT_1803813fc;
  if (*pcVar9 != '\0') {
    local_d4 = 20.0;
    local_a0 = 0xe268578e777a09e5;
    local_d8 = -20.0;
    local_98 = 0xf4f1688ffe5269e4;
    plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b0,&local_98);
    plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_c0,&local_a0);
    pfVar10 = (float *)FUN_180202dc0(*plVar8 + 0x28);
    local_cc = 20.0;
    local_d0 = -20.0;
    local_98 = 0xf4f1688ffe5269e4;
    pfVar13 = &local_d8;
    if (fVar22 <= *pfVar10) {
      pfVar13 = pfVar10;
    }
    pfVar11 = &local_d4;
    if (*pfVar10 <= DAT_180381024) {
      pfVar11 = pfVar13;
    }
    fVar3 = *pfVar11;
    local_a0 = 0x2c59d7d0279662e0;
    plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b0,&local_98);
    plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_c0,&local_a0);
    pfVar10 = (float *)FUN_180202dc0(*plVar8 + 0x28);
    pfVar13 = &local_d0;
    if (fVar22 <= *pfVar10) {
      pfVar13 = pfVar10;
    }
    pfVar11 = &local_cc;
    if (*pfVar10 <= DAT_180381024) {
      pfVar11 = pfVar13;
    }
    fVar22 = *pfVar11;
    if ((((((DAT_180380964 <= (float)((uint)fVar3 & (uint)_DAT_1803817c0)) ||
           (DAT_180380964 <= (float)((uint)fVar22 & (uint)_DAT_1803817c0))) &&
          (DAT_180425f80 != '\0')) &&
         ((cVar6 = FUN_1801f4040(), cVar6 != '\0' && (DAT_1804236a5 == '\0')))) &&
        ((DAT_180423650 == 0 && ((DAT_1804236a0 == 0 && (DAT_1803fa46f == '\0')))))) &&
       (cVar6 = FUN_180121200(param_2), cVar6 != '\0')) {
      uVar18 = (ulonglong)_tls_index;
      if (DAT_1803fedc4 < 4) {
        DAT_1803fedc4 = DAT_1803fedc4 + 1;
        puVar20 = &DAT_18037acb0;
        if (param_3 != 0) {
          puVar20 = &DAT_18034a240;
        }
        FUN_180014410("[VMOFF] viewmodel draw ent=%d bones=%s inPass=%d\n",param_2[0x11],puVar20,
                      *(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) +
                               0xf6f) != '\0');
      }
      if (param_3 == 0) {
        param_3 = 0;
      }
      else {
        FUN_1802d3e70(&DAT_1803db530,local_70,&local_80,&local_90);
        fVar24 = fVar22 * local_90 + fVar3 * local_80;
        sVar7 = _fdclass(fVar24);
        if (sVar7 < 1) {
          fVar23 = fVar22 * local_8c + fVar3 * local_7c;
          sVar7 = _fdclass(fVar23);
          if (sVar7 < 1) {
            fVar22 = fVar22 * local_88 + fVar3 * local_78;
            sVar7 = _fdclass(fVar22);
            if (sVar7 < 1) {
              iVar21 = 0x80;
              if (*param_1 != 0) {
                piVar16 = (int *)(*param_1 + 0x9c);
                iVar19 = *piVar16;
                if (0 < iVar19) {
                  local_c8[0] = 0x80;
                  local_a0 = CONCAT44(local_a0._4_4_,1);
                  piVar12 = local_c8;
                  if (iVar19 < 0x81) {
                    piVar12 = piVar16;
                  }
                  iVar21 = *piVar12;
                }
              }
              iVar19 = 0;
              lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
              lVar17 = lVar4 + 0x2130;
              if (3 < iVar21) {
                do {
                  lVar14 = (longlong)iVar19;
                  iVar19 = iVar19 + 4;
                  puVar1 = (undefined8 *)(param_3 + lVar14 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar17 + lVar14 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x10 + lVar14 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2140 + lVar14 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x20 + lVar14 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2150 + lVar14 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  *(float *)(lVar4 + 0x213c + lVar14 * 0x30) =
                       fVar24 + *(float *)(lVar4 + 0x213c + lVar14 * 0x30);
                  *(float *)(lVar4 + 0x214c + lVar14 * 0x30) =
                       fVar23 + *(float *)(lVar4 + 0x214c + lVar14 * 0x30);
                  *(float *)(lVar4 + 0x215c + lVar14 * 0x30) =
                       fVar22 + *(float *)(lVar4 + 0x215c + lVar14 * 0x30);
                  lVar15 = lVar14 + 1;
                  puVar1 = (undefined8 *)(param_3 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar17 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x10 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2140 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x20 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2150 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  *(float *)(lVar4 + 0x213c + lVar15 * 0x30) =
                       fVar24 + *(float *)(lVar4 + 0x213c + lVar15 * 0x30);
                  *(float *)(lVar4 + 0x214c + lVar15 * 0x30) =
                       fVar23 + *(float *)(lVar4 + 0x214c + lVar15 * 0x30);
                  *(float *)(lVar4 + 0x215c + lVar15 * 0x30) =
                       fVar22 + *(float *)(lVar4 + 0x215c + lVar15 * 0x30);
                  lVar15 = lVar14 + 2;
                  puVar1 = (undefined8 *)(param_3 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar17 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x10 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2140 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x20 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2150 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  *(float *)(lVar4 + 0x213c + lVar15 * 0x30) =
                       fVar24 + *(float *)(lVar4 + 0x213c + lVar15 * 0x30);
                  *(float *)(lVar4 + 0x214c + lVar15 * 0x30) =
                       fVar23 + *(float *)(lVar4 + 0x214c + lVar15 * 0x30);
                  *(float *)(lVar4 + 0x215c + lVar15 * 0x30) =
                       fVar22 + *(float *)(lVar4 + 0x215c + lVar15 * 0x30);
                  lVar14 = lVar14 + 3;
                  puVar1 = (undefined8 *)(param_3 + lVar14 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar17 + lVar14 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x10 + lVar14 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2140 + lVar14 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x20 + lVar14 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2150 + lVar14 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  *(float *)(lVar4 + 0x213c + lVar14 * 0x30) =
                       fVar24 + *(float *)(lVar4 + 0x213c + lVar14 * 0x30);
                  *(float *)(lVar4 + 0x214c + lVar14 * 0x30) =
                       fVar23 + *(float *)(lVar4 + 0x214c + lVar14 * 0x30);
                  *(float *)(lVar4 + 0x215c + lVar14 * 0x30) =
                       fVar22 + *(float *)(lVar4 + 0x215c + lVar14 * 0x30);
                } while (iVar19 < iVar21 + -3);
              }
              if (iVar19 < iVar21) {
                lVar15 = (longlong)iVar19;
                do {
                  iVar19 = iVar19 + 1;
                  puVar1 = (undefined8 *)(param_3 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar17 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x10 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2140 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)(param_3 + 0x20 + lVar15 * 0x30);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x2150 + lVar15 * 0x30);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  *(float *)(lVar4 + 0x213c + lVar15 * 0x30) =
                       fVar24 + *(float *)(lVar4 + 0x213c + lVar15 * 0x30);
                  *(float *)(lVar4 + 0x214c + lVar15 * 0x30) =
                       fVar23 + *(float *)(lVar4 + 0x214c + lVar15 * 0x30);
                  *(float *)(lVar4 + 0x215c + lVar15 * 0x30) =
                       fVar22 + *(float *)(lVar4 + 0x215c + lVar15 * 0x30);
                  lVar15 = lVar15 + 1;
                } while (iVar19 < iVar21);
              }
              *param_2 = fVar24 + *param_2;
              param_2[1] = fVar23 + param_2[1];
              param_2[2] = fVar22 + param_2[2];
              param_3 = lVar17;
            }
          }
        }
      }
    }
  }
  return param_3;
}


