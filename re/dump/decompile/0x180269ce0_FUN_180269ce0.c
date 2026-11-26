// 0x180269ce0  FUN_180269ce0
// size=2249 thunk=false
// signature: undefined FUN_180269ce0()
// status: ok


undefined8 FUN_180269ce0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined4 local_58;
  int local_50;
  
  lVar18 = *(longlong *)(param_1 + 10);
  lVar7 = *(longlong *)(param_1 + 0xc);
  lVar15 = *(longlong *)(lVar18 + 0x2368);
  lVar8 = *(longlong *)(lVar18 + 0x1520);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0x23a) != '\0')) {
    FUN_1802a4b70(lVar15);
  }
  if (param_1[3] == 0) {
    return 0;
  }
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar16 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = *(longlong *)(lVar16 + 0xec0);
  lVar9 = *(longlong *)(lVar16 + 0x2368);
  if (lVar9 == 0) {
    cVar6 = *(char *)(*(longlong *)(lVar16 + 0x1520) + 0xd1);
  }
  else {
    cVar6 = *(char *)(lVar9 + 0x24c);
  }
  if (cVar6 != '\0') {
    return 0;
  }
  if (((*(int *)(lVar7 + 0xc) == 0) && (lVar15 != 0)) && (*(char *)(lVar15 + 0x245) == '\0')) {
    iVar19 = *(int *)(lVar7 + 0x10);
    *param_1 = iVar19;
    iVar12 = *(int *)(lVar7 + 0x10) + 1;
    iVar17 = param_1[3];
    if (iVar12 < param_1[3]) {
      iVar17 = iVar12;
    }
    param_1[1] = iVar17;
    if (iVar17 <= iVar19) {
      return 1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    return 1;
  }
  bVar11 = false;
  local_60 = (float *)(lVar8 + 0x11c);
  if (*(int *)(lVar7 + 0xc) == 0) {
    *(double *)(param_1 + 6) = (double)*local_60;
    if ((float)param_1[4] <= 0.0) {
      iVar19 = *(int *)(lVar7 + 0x18);
      local_60 = (float *)CONCAT44(*(int *)(lVar7 + 0x10) + 1,*(int *)(lVar7 + 0x10));
      local_58 = local_58 & 0xff000000;
      if (iVar19 == 0) {
        FUN_18028a160(lVar7 + 0x18,&local_60);
      }
      else {
        iVar17 = *(int *)(lVar7 + 0x1c);
        if (iVar19 == iVar17) {
          if (iVar17 == 0) {
            iVar17 = 8;
          }
          else {
            iVar17 = iVar17 + iVar17 / 2;
          }
          iVar12 = iVar19 + 1;
          if (iVar19 + 1 < iVar17) {
            iVar12 = iVar17;
          }
          FUN_18028ac40(lVar7 + 0x18,iVar12);
        }
        if (0 < (longlong)*(int *)(lVar7 + 0x18)) {
          memmove((void *)((longlong)*(void **)(lVar7 + 0x20) + 0xc),*(void **)(lVar7 + 0x20),
                  (longlong)*(int *)(lVar7 + 0x18) * 0xc);
        }
        puVar10 = *(undefined8 **)(lVar7 + 0x20);
        *puVar10 = local_60;
        *(uint *)(puVar10 + 1) = local_58;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      }
      iVar19 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) <= **(int **)(lVar7 + 0x20)) {
        iVar19 = **(int **)(lVar7 + 0x20);
      }
      *param_1 = iVar19;
      iVar19 = param_1[3];
      if (*(int *)(*(longlong *)(lVar7 + 0x20) + 4) < param_1[3]) {
        iVar19 = *(int *)(*(longlong *)(lVar7 + 0x20) + 4);
      }
      param_1[1] = iVar19;
      *(undefined4 *)(lVar7 + 0xc) = 1;
      return 1;
    }
    bVar11 = true;
  }
  fVar23 = (float)param_1[4];
  if (fVar23 <= 0.0) {
    dVar5 = *(double *)(param_1 + 6);
    if ((((float)dVar5 <= DAT_180381448) || (DAT_1803812f4 <= (float)dVar5)) ||
       ((fVar23 = *local_60, fVar23 <= DAT_180381448 || (DAT_1803812f4 <= fVar23)))) {
      fVar23 = *(float *)(lVar18 + 0xcd8) + *(float *)(lVar8 + 0x14c);
      param_1[4] = (int)fVar23;
      *local_60 = (float)((double)fVar23 + dVar5);
    }
    else {
      param_1[4] = (int)((float)((double)fVar23 - dVar5) / (float)(param_1[1] - *param_1));
    }
    fVar23 = (float)param_1[4];
    if ((fVar23 == 0.0) && (param_1[3] == 0x7fffffff)) {
      return 0;
    }
    if (fVar23 <= 0.0) {
      FUN_18027e9c0(
                   "ImGuiListClipper: Failed to calculate item height! First item hasn\'t been submitted by user code, or has not moved the cursor vertically!"
                   );
      return 0;
    }
    iVar19 = param_1[1];
  }
  else {
    iVar19 = param_1[1];
    if (!bVar11) goto LAB_18026a520;
  }
  *(double *)(param_1 + 8) =
       (double)*(float *)(lVar7 + 8) - (double)*(int *)(lVar7 + 0x10) * (double)fVar23;
  if (*(char *)(lVar18 + 0x2858) == '\0') {
    iVar17 = 8;
    if (((*(char *)(lVar18 + 0x2111) == '\0') || (*(longlong *)(lVar18 + 0x2070) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar18 + 0x2070) + 0x3d8) != *(longlong *)(lVar8 + 0x3d8))) {
      bVar11 = false;
      local_68 = 0;
LAB_18026a08d:
      local_67 = 0;
      if (bVar11) goto LAB_18026a09a;
    }
    else {
      if (*(int *)(lVar18 + 0x2128) == 2) {
        bVar11 = true;
        local_68 = 0xff;
        goto LAB_18026a08d;
      }
      local_68 = 0;
      if (*(int *)(lVar18 + 0x2128) != 3) {
        bVar11 = true;
        goto LAB_18026a08d;
      }
      local_67 = 1;
LAB_18026a09a:
      local_50 = (int)*(float *)(lVar18 + 0x2138);
      iVar12 = *(int *)(lVar7 + 0x1c);
      fVar23 = *(float *)(lVar18 + 0x2130);
      if (*(int *)(lVar7 + 0x18) == iVar12) {
        iVar21 = *(int *)(lVar7 + 0x18) + 1;
        iVar13 = iVar17;
        if (iVar12 != 0) {
          iVar13 = iVar12 / 2 + iVar12;
        }
        if (iVar21 < iVar13) {
          iVar21 = iVar13;
        }
        FUN_18028ac40(lVar7 + 0x18,iVar21);
      }
      lVar16 = (longlong)*(int *)(lVar7 + 0x18);
      lVar15 = *(longlong *)(lVar7 + 0x20);
      *(int *)(lVar15 + lVar16 * 0xc) = (int)fVar23;
      *(int *)(lVar15 + 4 + lVar16 * 0xc) = local_50;
      *(undefined1 *)(lVar15 + 8 + lVar16 * 0xc) = 1;
      *(undefined1 *)(lVar15 + 9 + lVar16 * 0xc) = local_68;
      *(undefined1 *)(lVar15 + 10 + lVar16 * 0xc) = local_67;
      *(undefined1 *)(lVar15 + 0xb + lVar16 * 0xc) = local_58._3_1_;
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      iVar12 = *(int *)(lVar7 + 0x18);
      if ((*(float *)(lVar18 + 0x213c) < *(float *)(lVar18 + 0x2144) ||
           *(float *)(lVar18 + 0x213c) == *(float *)(lVar18 + 0x2144)) &&
         (fVar23 = *(float *)(lVar18 + 0x2140),
         fVar23 < *(float *)(lVar18 + 0x2148) || fVar23 == *(float *)(lVar18 + 0x2148))) {
        local_50 = (int)*(float *)(lVar18 + 0x2148);
        iVar21 = *(int *)(lVar7 + 0x1c);
        if (iVar12 == iVar21) {
          iVar13 = iVar17;
          if (iVar21 != 0) {
            iVar13 = iVar21 / 2 + iVar21;
          }
          iVar21 = iVar12 + 1;
          if (iVar12 + 1 < iVar13) {
            iVar21 = iVar13;
          }
          FUN_18028ac40(lVar7 + 0x18,iVar21);
        }
        lVar16 = (longlong)*(int *)(lVar7 + 0x18);
        lVar15 = *(longlong *)(lVar7 + 0x20);
        *(int *)(lVar15 + lVar16 * 0xc) = (int)fVar23;
        *(int *)(lVar15 + 4 + lVar16 * 0xc) = local_50;
        *(undefined1 *)(lVar15 + 8 + lVar16 * 0xc) = 1;
        *(undefined1 *)(lVar15 + 9 + lVar16 * 0xc) = local_68;
        *(undefined1 *)(lVar15 + 10 + lVar16 * 0xc) = local_67;
        *(undefined1 *)(lVar15 + 0xb + lVar16 * 0xc) = local_58._3_1_;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        iVar12 = *(int *)(lVar7 + 0x18);
      }
      if (((*(uint *)(lVar18 + 0x2114) & 0x400) != 0) && (*(int *)(lVar18 + 0x2150) == -1)) {
        iVar21 = *(int *)(lVar7 + 0x1c);
        iVar13 = param_1[3];
        if (iVar12 == iVar21) {
          iVar14 = iVar17;
          if (iVar21 != 0) {
            iVar14 = iVar21 / 2 + iVar21;
          }
          iVar21 = iVar12 + 1;
          if (iVar12 + 1 < iVar14) {
            iVar21 = iVar14;
          }
          FUN_18028ac40(lVar7 + 0x18,iVar21);
        }
        lVar16 = (longlong)*(int *)(lVar7 + 0x18);
        lVar15 = *(longlong *)(lVar7 + 0x20);
        *(int *)(lVar15 + lVar16 * 0xc) = iVar13 + -1;
        *(int *)(lVar15 + 4 + lVar16 * 0xc) = iVar13;
        *(undefined2 *)(lVar15 + 8 + lVar16 * 0xc) = 0;
        *(undefined1 *)(lVar15 + 10 + lVar16 * 0xc) = 0;
        *(undefined1 *)(lVar15 + 0xb + lVar16 * 0xc) = local_58._3_1_;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      }
    }
    if ((*(int *)(lVar18 + 0x206c) != 0) && (*(int *)(lVar8 + 0x3f0) == *(int *)(lVar18 + 0x206c)))
    {
      fVar23 = *(float *)(lVar8 + 300);
      iVar12 = *(int *)(lVar7 + 0x1c);
      fVar22 = *(float *)(lVar8 + 0x3fc);
      local_50 = (int)(fVar23 + *(float *)(lVar8 + 0x404));
      if (*(int *)(lVar7 + 0x18) == iVar12) {
        iVar21 = *(int *)(lVar7 + 0x18) + 1;
        iVar13 = iVar17;
        if (iVar12 != 0) {
          iVar13 = iVar12 / 2 + iVar12;
        }
        if (iVar21 < iVar13) {
          iVar21 = iVar13;
        }
        FUN_18028ac40(lVar7 + 0x18,iVar21);
      }
      lVar16 = (longlong)*(int *)(lVar7 + 0x18);
      lVar15 = *(longlong *)(lVar7 + 0x20);
      *(int *)(lVar15 + lVar16 * 0xc) = (int)(fVar23 + fVar22);
      *(int *)(lVar15 + 4 + lVar16 * 0xc) = local_50;
      *(undefined2 *)(lVar15 + 8 + lVar16 * 0xc) = 1;
      *(undefined1 *)(lVar15 + 10 + lVar16 * 0xc) = 0;
      *(undefined1 *)(lVar15 + 0xb + lVar16 * 0xc) = local_58._3_1_;
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
    }
    fVar23 = *(float *)(lVar8 + 0x26c);
    fVar22 = *(float *)(lVar8 + 0x274);
    if ((*(char *)(lVar18 + 0x2424) != '\0') && (*(longlong *)(lVar18 + 0x2448) == lVar8)) {
      fVar4 = *(float *)(lVar18 + 0xcd8);
      fVar23 = fVar23 - fVar4;
      fVar22 = fVar4 + fVar22;
      if (*(char *)(lVar18 + 0x2450) != '\0') {
        fVar2 = *(float *)(lVar18 + 0x2458);
        iVar12 = *(int *)(lVar7 + 0x1c);
        fVar3 = *(float *)(lVar18 + 0x2460);
        if (*(int *)(lVar7 + 0x18) == iVar12) {
          iVar21 = *(int *)(lVar7 + 0x18) + 1;
          iVar13 = iVar17;
          if (iVar12 != 0) {
            iVar13 = iVar12 / 2 + iVar12;
          }
          if (iVar21 < iVar13) {
            iVar21 = iVar13;
          }
          FUN_18028ac40(lVar7 + 0x18,iVar21);
        }
        lVar15 = (longlong)*(int *)(lVar7 + 0x18);
        lVar18 = *(longlong *)(lVar7 + 0x20);
        *(int *)(lVar18 + lVar15 * 0xc) = (int)(fVar2 - fVar4);
        *(int *)(lVar18 + 4 + lVar15 * 0xc) = (int)(fVar4 + fVar3);
        *(undefined2 *)(lVar18 + 8 + lVar15 * 0xc) = 1;
        *(undefined1 *)(lVar18 + 10 + lVar15 * 0xc) = 0;
        *(undefined1 *)(lVar18 + 0xb + lVar15 * 0xc) = local_58._3_1_;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      }
    }
    iVar12 = *(int *)(lVar7 + 0x1c);
    if (*(int *)(lVar7 + 0x18) == iVar12) {
      iVar21 = *(int *)(lVar7 + 0x18) + 1;
      if (iVar12 != 0) {
        iVar17 = iVar12 + iVar12 / 2;
      }
      if (iVar21 < iVar17) {
        iVar21 = iVar17;
      }
      FUN_18028ac40(lVar7 + 0x18,iVar21);
    }
    lVar15 = (longlong)*(int *)(lVar7 + 0x18);
    lVar18 = *(longlong *)(lVar7 + 0x20);
    *(int *)(lVar18 + lVar15 * 0xc) = (int)fVar23;
    *(int *)(lVar18 + 4 + lVar15 * 0xc) = (int)fVar22;
    *(undefined1 *)(lVar18 + 8 + lVar15 * 0xc) = 1;
    *(undefined1 *)(lVar18 + 9 + lVar15 * 0xc) = local_68;
    *(undefined1 *)(lVar18 + 10 + lVar15 * 0xc) = local_67;
  }
  else {
    iVar17 = *(int *)(lVar7 + 0x1c);
    iVar12 = param_1[3];
    if (*(int *)(lVar7 + 0x18) == iVar17) {
      iVar21 = *(int *)(lVar7 + 0x18) + 1;
      if (iVar17 == 0) {
        iVar17 = 8;
      }
      else {
        iVar17 = iVar17 + iVar17 / 2;
      }
      if (iVar21 < iVar17) {
        iVar21 = iVar17;
      }
      FUN_18028ac40(lVar7 + 0x18,iVar21);
    }
    lVar15 = (longlong)*(int *)(lVar7 + 0x18);
    lVar18 = *(longlong *)(lVar7 + 0x20);
    *(undefined4 *)(lVar18 + lVar15 * 0xc) = 0;
    *(int *)(lVar18 + 4 + lVar15 * 0xc) = iVar12;
    *(undefined2 *)(lVar18 + 8 + lVar15 * 0xc) = 0;
    *(undefined1 *)(lVar18 + 10 + lVar15 * 0xc) = 0;
  }
  *(undefined1 *)(lVar18 + 0xb + lVar15 * 0xc) = local_58._3_1_;
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  dVar5 = DAT_180380cf8;
  piVar20 = *(int **)(lVar7 + 0x20);
  piVar1 = piVar20 + (longlong)*(int *)(lVar7 + 0x18) * 3;
  for (; piVar20 != piVar1; piVar20 = piVar20 + 3) {
    if ((char)piVar20[2] != '\0') {
      fVar23 = *local_60;
      fVar22 = *(float *)(lVar7 + 8);
      fVar4 = (float)param_1[4];
      iVar12 = (int)*(char *)((longlong)piVar20 + 9) +
               (int)((((double)*piVar20 - (double)fVar23) - (double)fVar22) / (double)fVar4) +
               iVar19;
      iVar17 = iVar19;
      if ((iVar19 <= iVar12) && (iVar17 = iVar12, param_1[3] + -1 < iVar12)) {
        iVar17 = param_1[3] + -1;
      }
      *piVar20 = iVar17;
      iVar21 = (int)*(char *)((longlong)piVar20 + 10) +
               (int)((((double)piVar20[1] - (double)fVar23) - (double)fVar22) / (double)fVar4 +
                    dVar5) + iVar19;
      iVar12 = iVar17 + 1;
      if ((iVar17 + 1 <= iVar21) && (iVar12 = iVar21, param_1[3] < iVar21)) {
        iVar12 = param_1[3];
      }
      piVar20[1] = iVar12;
      *(undefined1 *)(piVar20 + 2) = 0;
    }
  }
  FUN_180269700(lVar7 + 0x18,*(undefined4 *)(lVar7 + 0xc));
LAB_18026a520:
  do {
    if (*(int *)(lVar7 + 0x18) <= *(int *)(lVar7 + 0xc)) {
      if (0x7ffffffe < param_1[3]) {
        return 0;
      }
      FUN_180269b90(param_1);
      return 0;
    }
    iVar17 = *(int *)(*(longlong *)(lVar7 + 0x20) + (longlong)*(int *)(lVar7 + 0xc) * 0xc);
    iVar12 = iVar19;
    if (iVar19 <= iVar17) {
      iVar12 = iVar17;
    }
    *param_1 = iVar12;
    iVar17 = param_1[3];
    if (*(int *)(*(longlong *)(lVar7 + 0x20) + 4 + (longlong)*(int *)(lVar7 + 0xc) * 0xc) <
        param_1[3]) {
      iVar17 = *(int *)(*(longlong *)(lVar7 + 0x20) + 4 + (longlong)*(int *)(lVar7 + 0xc) * 0xc);
    }
    param_1[1] = iVar17;
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
  } while (param_1[1] <= *param_1);
  if (iVar19 < *param_1) {
    FUN_180269b90(param_1);
  }
  return 1;
}


