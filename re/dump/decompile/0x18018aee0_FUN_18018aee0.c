// 0x18018aee0  FUN_18018aee0
// size=2581 thunk=false
// signature: undefined FUN_18018aee0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018aee0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  char param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_a28 [32];
  float local_a08;
  undefined8 local_9f8;
  float local_9f0;
  float local_9ec;
  float local_9e8;
  undefined4 local_9e4;
  float local_9e0;
  undefined4 local_9dc;
  longlong *local_9d8;
  float local_9d0;
  undefined1 local_9c8 [16];
  undefined8 local_9b8;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  float local_988 [3];
  undefined8 uStack_97c;
  float afStack_974 [571];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_a28;
  plVar15 = param_2;
  if (param_3 != (longlong *)0x0) {
    plVar15 = param_3;
  }
  local_998 = 0x93fd561a96ab0c67;
  local_9d8 = plVar15;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_9c8,&local_998);
  lVar21 = *plVar9 + 0x28;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar18 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(*(longlong *)(lVar18 + 0xec0) + 0xc84);
  local_9b8 = 0x625d105d5fd15611;
  plVar9 = (longlong *)FUN_180241a30(lVar21,&local_9a8,&local_9b8);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 == '\0') {
    return;
  }
  local_9b8 = 0xd2729c8da4aa9c38;
  plVar9 = (longlong *)FUN_180241a30(lVar21,&local_9a8,&local_9b8);
  puVar11 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
  uVar6 = *puVar11;
  local_9b8 = 0xd272a18da4aaa4b7;
  plVar9 = (longlong *)FUN_180241a30(lVar21,&local_9a8,&local_9b8);
  puVar11 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
  uVar7 = *puVar11;
  local_9b8 = 0xd272ac8da4aab768;
  plVar9 = (longlong *)FUN_180241a30(lVar21,&local_9a8,&local_9b8);
  puVar11 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
  uStack_9a0 = CONCAT44(fVar1,uVar6);
  local_9a8 = CONCAT44(uVar7,*puVar11);
  uVar6 = FUN_180268ed0(&local_9a8);
  if ((param_2 != (longlong *)0x0) &&
     (plVar9 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2), pcVar4 = DAT_180423a60,
     plVar9 != (longlong *)0x0)) {
    local_9a8 = 0;
    uStack_9a0 = 0;
    if (DAT_180423a60 == (code *)0x0) {
LAB_18018b0d9:
      pcVar4 = DAT_180423a50;
      if (DAT_180423a50 != (code *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
        cVar5 = (*pcVar4)(uVar7,&local_9a8);
        if (cVar5 != '\0') {
          fVar1 = uStack_9a0._4_4_ * fVar1;
          goto LAB_18018b136;
        }
      }
      pcVar4 = DAT_180426168;
      if (DAT_180426168 != (code *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
        cVar5 = (*pcVar4)(uVar7,&local_9a8);
        if (cVar5 != '\0') goto LAB_18018b136;
      }
    }
    else {
      uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
      cVar5 = (*pcVar4)(uVar7,&local_9a8);
      if (cVar5 == '\0') goto LAB_18018b0d9;
LAB_18018b136:
      local_9ec = fVar1;
      local_9f0 = (float)uStack_9a0;
      local_9f8 = local_9a8;
      uVar6 = FUN_180268ed0(&local_9f8);
    }
  }
  fVar1 = DAT_180380ac0;
  local_9e0 = 6.0;
  local_9b8 = 0x54682040994c2754;
  local_9e8 = 0.5;
  plVar9 = (longlong *)FUN_180241a30(lVar21,&local_9a8,&local_9b8);
  pfVar12 = (float *)FUN_180202dc0(*plVar9 + 0x28);
  pfVar14 = &local_9e8;
  if (fVar1 <= *pfVar12) {
    pfVar14 = pfVar12;
  }
  pfVar13 = &local_9e0;
  if (*pfVar12 <= DAT_180380f40) {
    pfVar13 = pfVar14;
  }
  fVar1 = *pfVar13;
  if ((((param_5 != '\0') && (param_4 != (undefined8 *)0x0)) &&
      (*(char *)((longlong)param_4 + 0x934) != '\0')) && ((longlong *)*param_4 == plVar15)) {
    iVar8 = 0x60;
    if (*(int *)(param_4 + 0x126) < 0x60) {
      iVar8 = *(int *)(param_4 + 0x126);
    }
    uVar16 = 0;
    iVar19 = 0;
    if (iVar8 < 4) {
      if (0 < iVar8) {
        fVar22 = *param_6;
        fVar23 = param_6[1];
        fVar24 = param_6[2];
        goto LAB_18018b3fb;
      }
    }
    else {
      fVar22 = *param_6;
      fVar23 = param_6[1];
      fVar24 = param_6[2];
      uVar17 = uVar16;
      do {
        lVar18 = (longlong)(int)uVar17;
        uVar20 = (int)uVar17 + 4;
        uVar17 = (ulonglong)uVar20;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x34);
        local_988[lVar18 * 6] = fVar22 + *(float *)(param_4 + lVar18 * 3 + 6);
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 7);
        local_988[lVar18 * 6 + 1] = fVar23 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x3c);
        local_988[lVar18 * 6 + 2] = fVar24 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 8);
        *(float *)(&uStack_97c + lVar18 * 3) = fVar22 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x44);
        afStack_974[lVar18 * 6 + -1] = fVar23 + fVar3;
        afStack_974[lVar18 * 6] = fVar24 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x4c);
        afStack_974[lVar18 * 6 + 1] = fVar22 + *(float *)(param_4 + lVar18 * 3 + 9);
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 10);
        afStack_974[lVar18 * 6 + 2] = fVar23 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x54);
        afStack_974[lVar18 * 6 + 3] = fVar24 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0xb);
        afStack_974[lVar18 * 6 + 4] = fVar22 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x5c);
        afStack_974[lVar18 * 6 + 5] = fVar23 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0xc);
        afStack_974[lVar18 * 6 + 6] = fVar24 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 100);
        afStack_974[lVar18 * 6 + 7] = fVar22 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0xd);
        afStack_974[lVar18 * 6 + 8] = fVar23 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x6c);
        afStack_974[lVar18 * 6 + 9] = fVar24 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0xe);
        afStack_974[lVar18 * 6 + 10] = fVar22 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x74);
        afStack_974[lVar18 * 6 + 0xb] = fVar23 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0xf);
        afStack_974[lVar18 * 6 + 0xc] = fVar24 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x7c);
        afStack_974[lVar18 * 6 + 0xd] = fVar22 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0x10);
        afStack_974[lVar18 * 6 + 0xe] = fVar23 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x84);
        afStack_974[lVar18 * 6 + 0xf] = fVar24 + fVar3;
        fVar3 = *(float *)(param_4 + lVar18 * 3 + 0x11);
        afStack_974[lVar18 * 6 + 0x10] = fVar22 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x8c);
        afStack_974[lVar18 * 6 + 0x11] = fVar23 + fVar3;
        afStack_974[lVar18 * 6 + 0x12] = fVar24 + fVar2;
      } while ((int)uVar20 < iVar8 + -3);
      while (iVar19 = (int)uVar17, (int)uVar20 < iVar8) {
LAB_18018b3fb:
        lVar18 = (longlong)iVar19;
        uVar20 = iVar19 + 1;
        uVar17 = (ulonglong)uVar20;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x34);
        local_988[lVar18 * 6] = fVar22 + *(float *)(param_4 + lVar18 * 3 + 6);
        local_988[lVar18 * 6 + 1] = fVar23 + fVar2;
        fVar2 = *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x3c);
        local_988[lVar18 * 6 + 2] = fVar24 + *(float *)(param_4 + lVar18 * 3 + 7);
        *(float *)(&uStack_97c + lVar18 * 3) = fVar22 + fVar2;
        fVar2 = *(float *)(param_4 + lVar18 * 3 + 8);
        afStack_974[lVar18 * 6] = fVar24 + *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x44);
        afStack_974[lVar18 * 6 + -1] = fVar23 + fVar2;
      }
    }
    if (param_1 == 0) {
      return;
    }
    if (iVar8 < 1) {
      return;
    }
    do {
      local_9d8 = *(longlong **)(local_988 + uVar16 * 6);
      local_9d0 = local_988[uVar16 * 6 + 2];
      cVar5 = FUN_180021ac0(&local_9d8,&local_9e8);
      if (cVar5 != '\0') {
        local_9f8 = (&uStack_97c)[uVar16 * 3];
        local_9f0 = afStack_974[uVar16 * 6];
        cVar5 = FUN_180021ac0(&local_9f8,&local_9e0);
        if (cVar5 != '\0') {
          local_9b8 = CONCAT44(local_9dc,local_9e0);
          local_998 = CONCAT44(local_9e4,local_9e8);
          local_a08 = fVar1;
          FUN_180294c90(param_1,&local_998,&local_9b8,uVar6);
        }
      }
      uVar20 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar20;
    } while ((int)uVar20 < iVar8);
    return;
  }
  iVar8 = FUN_180189f20(plVar15,local_988);
  if (iVar8 < 1) {
    return;
  }
  uVar17 = 0;
  uVar16 = uVar17;
  if (param_1 != 0) {
    do {
      local_9f8 = *(undefined8 *)(local_988 + uVar16 * 6);
      local_9f0 = local_988[uVar16 * 6 + 2];
      cVar5 = FUN_180021ac0(&local_9f8,&local_9b8);
      if (cVar5 != '\0') {
        local_9a8 = (&uStack_97c)[uVar16 * 3];
        uStack_9a0 = CONCAT44(uStack_9a0._4_4_,afStack_974[uVar16 * 6]);
        cVar5 = FUN_180021ac0(&local_9a8,&local_998);
        if (cVar5 != '\0') {
          local_9e0 = (float)local_998;
          local_9dc = local_998._4_4_;
          local_9e8 = (float)local_9b8;
          local_9e4 = local_9b8._4_4_;
          local_a08 = fVar1;
          FUN_180294c90(param_1,&local_9e8,&local_9e0,uVar6);
        }
      }
      uVar20 = (int)uVar16 + 1;
      plVar15 = local_9d8;
      uVar16 = (ulonglong)uVar20;
    } while ((int)uVar20 < iVar8);
  }
  if (param_4 == (undefined8 *)0x0) {
    return;
  }
  if (param_5 != '\0') {
    return;
  }
  if ((longlong *)*param_4 != plVar15) {
    return;
  }
  if (iVar8 < 4) {
    uVar20 = 0;
  }
  else {
    do {
      lVar18 = (longlong)(int)uVar17;
      uVar20 = (int)uVar17 + 4;
      uVar17 = (ulonglong)uVar20;
      fVar1 = local_988[lVar18 * 6 + 1];
      fVar22 = param_6[1];
      fVar23 = local_988[lVar18 * 6 + 2];
      fVar24 = param_6[2];
      *(float *)(param_4 + lVar18 * 3 + 6) = local_988[lVar18 * 6] - *param_6;
      fVar2 = *(float *)(&uStack_97c + lVar18 * 3);
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x34) = fVar1 - fVar22;
      fVar1 = afStack_974[lVar18 * 6 + -1];
      *(float *)(param_4 + lVar18 * 3 + 7) = fVar23 - fVar24;
      fVar22 = param_6[1];
      fVar23 = afStack_974[lVar18 * 6];
      fVar24 = param_6[2];
      fVar3 = afStack_974[lVar18 * 6 + 8];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x3c) = fVar2 - *param_6;
      *(float *)(param_4 + lVar18 * 3 + 8) = fVar1 - fVar22;
      fVar1 = afStack_974[lVar18 * 6 + 1];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x44) = fVar23 - fVar24;
      fVar22 = afStack_974[lVar18 * 6 + 2];
      fVar23 = param_6[1];
      fVar24 = afStack_974[lVar18 * 6 + 3];
      fVar2 = param_6[2];
      *(float *)(param_4 + lVar18 * 3 + 9) = fVar1 - *param_6;
      fVar1 = afStack_974[lVar18 * 6 + 4];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x4c) = fVar22 - fVar23;
      fVar22 = afStack_974[lVar18 * 6 + 5];
      *(float *)(param_4 + lVar18 * 3 + 10) = fVar24 - fVar2;
      fVar23 = param_6[1];
      fVar24 = afStack_974[lVar18 * 6 + 6];
      fVar2 = param_6[2];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x54) = fVar1 - *param_6;
      fVar1 = afStack_974[lVar18 * 6 + 7];
      *(float *)(param_4 + lVar18 * 3 + 0xb) = fVar22 - fVar23;
      fVar22 = afStack_974[lVar18 * 6 + 0xb];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x5c) = fVar24 - fVar2;
      fVar23 = param_6[1];
      fVar24 = afStack_974[lVar18 * 6 + 9];
      fVar2 = param_6[2];
      *(float *)(param_4 + lVar18 * 3 + 0xc) = fVar1 - *param_6;
      fVar1 = afStack_974[lVar18 * 6 + 10];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 100) = fVar3 - fVar23;
      *(float *)(param_4 + lVar18 * 3 + 0xd) = fVar24 - fVar2;
      fVar23 = param_6[1];
      fVar24 = afStack_974[lVar18 * 6 + 0xc];
      fVar2 = param_6[2];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x6c) = fVar1 - *param_6;
      fVar1 = afStack_974[lVar18 * 6 + 0xd];
      *(float *)(param_4 + lVar18 * 3 + 0xe) = fVar22 - fVar23;
      fVar22 = afStack_974[lVar18 * 6 + 0xe];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x74) = fVar24 - fVar2;
      fVar23 = param_6[1];
      fVar24 = afStack_974[lVar18 * 6 + 0xf];
      fVar2 = param_6[2];
      *(float *)(param_4 + lVar18 * 3 + 0xf) = fVar1 - *param_6;
      fVar1 = afStack_974[lVar18 * 6 + 0x10];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x7c) = fVar22 - fVar23;
      fVar22 = afStack_974[lVar18 * 6 + 0x11];
      *(float *)(param_4 + lVar18 * 3 + 0x10) = fVar24 - fVar2;
      fVar23 = param_6[1];
      fVar24 = afStack_974[lVar18 * 6 + 0x12];
      fVar2 = param_6[2];
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x84) = fVar1 - *param_6;
      *(float *)(param_4 + lVar18 * 3 + 0x11) = fVar22 - fVar23;
      *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x8c) = fVar24 - fVar2;
    } while ((int)uVar20 < iVar8 + -3);
    if (iVar8 <= (int)uVar20) goto LAB_18018b8ad;
  }
  lVar18 = (longlong)(int)uVar20;
  do {
    uVar20 = (int)uVar17 + 1;
    uVar17 = (ulonglong)uVar20;
    fVar1 = local_988[lVar18 * 6 + 2];
    fVar22 = local_988[lVar18 * 6];
    fVar23 = param_6[2];
    fVar24 = *param_6;
    *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x34) = local_988[lVar18 * 6 + 1] - param_6[1];
    fVar2 = afStack_974[lVar18 * 6 + -1];
    *(float *)(param_4 + lVar18 * 3 + 7) = fVar1 - fVar23;
    fVar1 = afStack_974[lVar18 * 6];
    *(float *)(param_4 + lVar18 * 3 + 6) = fVar22 - fVar24;
    fVar22 = *(float *)(&uStack_97c + lVar18 * 3);
    fVar23 = param_6[2];
    fVar24 = *param_6;
    *(float *)(param_4 + lVar18 * 3 + 8) = fVar2 - param_6[1];
    *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x44) = fVar1 - fVar23;
    *(float *)((longlong)param_4 + lVar18 * 0x18 + 0x3c) = fVar22 - fVar24;
    lVar18 = lVar18 + 1;
  } while ((int)uVar20 < iVar8);
LAB_18018b8ad:
  *(int *)(param_4 + 0x126) = iVar8;
  *(undefined1 *)((longlong)param_4 + 0x934) = 1;
  return;
}


