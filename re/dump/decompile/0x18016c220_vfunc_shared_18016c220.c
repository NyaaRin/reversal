// 0x18016c220  vfunc_shared_18016c220
// size=5 thunk=true
// signature: undefined vfunc_shared_18016c220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vfunc_shared_18016c220(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_238 [32];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  float *pfStack_1b8;
  char *pcStack_1b0;
  longlong *plStack_1a8;
  float *pfStack_1a0;
  longlong *plStack_198;
  float *pfStack_190;
  int *piStack_188;
  float *pfStack_180;
  float afStack_178 [2];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  longlong lStack_160;
  char acStack_158 [4];
  int iStack_154;
  float afStack_150 [2];
  float afStack_148 [3];
  uint auStack_13c [2];
  char acStack_134 [4];
  char acStack_130 [24];
  ulonglong auStack_118 [8];
  ulonglong uStack_d8;
  
  uStack_d8 = DAT_1803da4c0 ^ (ulonglong)auStackY_238;
  plVar16 = (longlong *)0x0;
  uStack_1c0 = param_3;
  lStack_160 = param_2;
  if (param_1[0x16] == 0) {
    cVar4 = (**(code **)(*param_1 + 0x48))();
    plVar12 = plVar16;
    if (((cVar4 != '\0') && (plVar12 = (longlong *)0x0, DAT_1803fcb80 == '\0')) &&
       (iVar5 = (**(code **)(*param_1 + 0x58))(param_1), iVar5 < 1)) {
      return;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x48))();
    if (cVar4 != '\0') {
      return;
    }
    plVar1 = (longlong *)param_1[0x16];
    plVar12 = plVar1;
    if ((DAT_1803fcb80 == '\0') &&
       (iVar5 = (**(code **)(*plVar1 + 0x58))(plVar1), plVar12 = plVar16, 0 < iVar5)) {
      plVar12 = plVar1;
    }
  }
  switch((int)param_1[1]) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    acStack_158[0] = true;
    break;
  default:
    acStack_158[0] = false;
    break;
  case 8:
    acStack_158[0] = (char)param_1[0xe] == '\0';
  }
  pfVar8 = (float *)(**(code **)(*param_1 + 0x10))(param_1,&fStack_1e8);
  fVar3 = DAT_180380bb0;
  fVar18 = DAT_180380ac0;
  fStack_164 = uStack_1c0._4_4_ + pfVar8[1];
  fStack_170 = (float)param_3;
  fStack_168 = fStack_170 + *pfVar8;
  fStack_16c = uStack_1c0._4_4_;
  fVar21 = fStack_164 - DAT_180380bb0;
  fVar22 = fStack_168 - DAT_180380bb0;
  fVar20 = fStack_170 + DAT_180380bb0;
  fVar23 = uStack_1c0._4_4_ + DAT_180380bb0;
  if (acStack_158[0] == '\0') {
    fVar19 = fVar22 - fVar20;
  }
  else {
    fVar19 = fVar21 - fVar23;
  }
  fVar17 = *(float *)((longlong)param_1 + 0x7c);
  if (0.0 <= fVar17) {
    afStack_150[0] = fVar19 * DAT_180380ac0;
    if (fVar17 <= fVar19 * DAT_180380ac0) {
      afStack_150[0] = fVar17;
    }
    if (0.0 < afStack_150[0]) {
      fVar19 = afStack_150[0] + DAT_180380bb0;
      goto LAB_18016b40c;
    }
  }
  else {
    afStack_150[0] = 0.0;
  }
  fVar19 = 0.0;
LAB_18016b40c:
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar17 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
  afStack_178[0] = (float)FUN_1801691d0(param_1);
  afStack_178[0] = afStack_178[0] * fVar17;
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    fStack_1e8 = *(float *)(param_1 + 0xc);
    fStack_1e4 = *(float *)((longlong)param_1 + 100);
    fStack_1e0 = *(float *)(param_1 + 0xd);
    fStack_1dc = afStack_178[0] * *(float *)((longlong)param_1 + 0x6c);
    uVar6 = FUN_180268ed0(&fStack_1e8);
    FUN_180295000(lStack_160,&fStack_170,&fStack_168,uVar6);
  }
  _eh_vector_constructor_iterator_(afStack_148,0x38,2,FUN_18016bb80,FUN_18016c7e0);
  iStack_154 = 0;
  pfStack_1b8 = afStack_178;
  pcStack_1b0 = acStack_158;
  plStack_1a8 = &lStack_160;
  pfStack_1a0 = afStack_150;
  pfStack_190 = &fStack_170;
  piStack_188 = &iStack_154;
  pfStack_180 = afStack_148;
  plStack_198 = param_1;
  if (plVar12 == (longlong *)0x0) {
    fStack_1e8 = fVar20;
    fStack_1e4 = fVar23;
    fStack_1e0 = fVar22;
    fStack_1dc = fVar21;
    FUN_18016bbb0(&pfStack_1b8,param_1,&fStack_1e8);
  }
  else {
    if (acStack_158[0] == '\0') {
      fVar17 = floorf((fVar21 + fVar23) * fVar18);
      uStack_1d8 = CONCAT44(fVar23,fVar20);
      fStack_1d0 = fVar22;
      fStack_1cc = fVar17;
      FUN_18016bbb0(&pfStack_1b8,plVar12,&uStack_1d8);
      uStack_1d8 = CONCAT44(fVar17 + fVar3,fVar20);
      fStack_1d0 = fVar22;
      fStack_1cc = fVar21;
      FUN_18016bbb0(&pfStack_1b8,param_1,&uStack_1d8);
      uStack_1d8 = 0;
      fStack_1d0 = 0.0;
      fStack_1cc = afStack_178[0] * DAT_180380b68;
      fStack_1e8 = fStack_168;
      fStack_1e4 = fVar17 + fVar18;
      fStack_1c8 = fStack_170;
      fStack_1c4 = fStack_1e4;
      uVar6 = FUN_180268ed0(&uStack_1d8);
      pfVar8 = &fStack_1e8;
      pfVar10 = &fStack_1c8;
    }
    else {
      fVar17 = floorf((fVar22 + fVar20) * fVar18);
      fStack_1e8 = fVar20;
      fStack_1e4 = fVar23;
      fStack_1e0 = fVar17;
      fStack_1dc = fVar21;
      FUN_18016bbb0(&pfStack_1b8,param_1,&fStack_1e8);
      fStack_1e8 = fVar17 + fVar3;
      fStack_1e4 = fVar23;
      fStack_1e0 = fVar22;
      fStack_1dc = fVar21;
      FUN_18016bbb0(&pfStack_1b8,plVar12,&fStack_1e8);
      uStack_1d8 = 0;
      fStack_1d0 = 0.0;
      fStack_1cc = afStack_178[0] * DAT_180380b68;
      fStack_1e8 = fVar17 + fVar18;
      fStack_1c4 = fStack_164;
      fStack_1e4 = fStack_16c;
      fStack_1c8 = fStack_1e8;
      uVar6 = FUN_180268ed0(&uStack_1d8);
      pfVar8 = &fStack_1c8;
      pfVar10 = &fStack_1e8;
    }
    FUN_180294c90(lStack_160,pfVar10,pfVar8,uVar6);
  }
  if ((char)param_1[0xf] != '\0') {
    uStack_1d8 = 0;
    fStack_1d0 = 0.0;
    fStack_1cc = afStack_178[0] * _DAT_180380b48;
    uVar7 = FUN_180268ed0(&uStack_1d8);
    lVar9 = lStack_160;
    if ((uVar7 & 0xff000000) != 0) {
      fStack_1e8 = _DAT_180380abc;
      if ((*(byte *)(lStack_160 + 0x30) & 1) != 0) {
        fStack_1e8 = fVar18;
      }
      fStack_1c4 = fStack_16c + fVar18;
      fStack_1c8 = fStack_170 + fVar18;
      fStack_1e4 = fStack_164 - fStack_1e8;
      fStack_1e8 = fStack_168 - fStack_1e8;
      FUN_180294990(lStack_160,&fStack_1c8,&fStack_1e8,fVar19);
      FUN_1802929d0(lVar9,*(undefined8 *)(lVar9 + 0x58),*(undefined4 *)(lVar9 + 0x50),uVar7);
      *(undefined4 *)(lVar9 + 0x50) = 0;
    }
  }
  if (0 < iStack_154) {
    do {
      lVar9 = (longlong)(int)plVar16;
      lVar11 = lVar9 * 0x38;
      if (acStack_134[lVar11] != '\0') {
        if (auStack_118[lVar9 * 7] < 0x10) {
          pcVar13 = acStack_130 + lVar11;
        }
        else {
          pcVar13 = *(char **)(acStack_130 + lVar11);
        }
        uVar7 = auStack_13c[lVar9 * 0xe + 1];
        fStack_1e8 = afStack_148[lVar9 * 0xe] + fVar3;
        fStack_1e4 = afStack_148[lVar9 * 0xe + 1] + fVar3;
        fVar18 = afStack_148[lVar9 * 0xe + 2];
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if ((((uVar7 & 0xff000000) != 0) && (pcVar13 != (char *)0x0)) && (*pcVar13 != '\0')) {
          lVar15 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1228);
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(*(longlong *)(lStack_160 + 0x38) + 0x18);
          }
          if (fVar18 == 0.0) {
            fVar18 = *(float *)(*(longlong *)(lStack_160 + 0x38) + 0x20);
          }
          uStack_1d8 = *(undefined8 *)(lStack_160 + 0x60);
          fStack_1d0 = *(float *)(lStack_160 + 0x68);
          fStack_1cc = *(float *)(lStack_160 + 0x6c);
          FUN_18029e990(lVar15,lStack_160,fVar18,&fStack_1e8);
        }
      }
      pcVar13 = acStack_130 + lVar11;
      if (0xf < auStack_118[lVar9 * 7]) {
        pcVar13 = *(char **)pcVar13;
      }
      uVar7 = auStack_13c[lVar9 * 0xe];
      fVar18 = afStack_148[lVar9 * 0xe + 2];
      cVar4 = *(char *)(lVar2 + 0x10);
      fVar20 = fVar18;
      uVar14 = uVar7;
      if (cVar4 == '\0') {
        __dyn_tls_on_demand_init();
        cVar4 = *(char *)(lVar2 + 0x10);
        fVar20 = afStack_148[lVar9 * 0xe + 2];
        uVar14 = auStack_13c[lVar9 * 0xe];
      }
      if ((((uVar7 & 0xff000000) != 0) && (pcVar13 != (char *)0x0)) && (*pcVar13 != '\0')) {
        lVar15 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1228);
        if (lVar15 == 0) {
          lVar15 = *(longlong *)(*(longlong *)(lStack_160 + 0x38) + 0x18);
        }
        if (fVar18 == 0.0) {
          fVar18 = *(float *)(*(longlong *)(lStack_160 + 0x38) + 0x20);
        }
        uStack_1d8 = *(undefined8 *)(lStack_160 + 0x60);
        fStack_1d0 = *(float *)(lStack_160 + 0x68);
        fStack_1cc = *(float *)(lStack_160 + 0x6c);
        FUN_18029e990(lVar15,lStack_160,fVar18,afStack_148 + lVar9 * 0xe);
        uVar14 = auStack_13c[lVar9 * 0xe];
        fVar20 = afStack_148[lVar9 * 0xe + 2];
        cVar4 = *(char *)(lVar2 + 0x10);
      }
      pcVar13 = acStack_130 + lVar11;
      if (0xf < auStack_118[lVar9 * 7]) {
        pcVar13 = *(char **)(acStack_130 + lVar11);
      }
      if (cVar4 == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((((uVar14 & 0xff000000) != 0) && (pcVar13 != (char *)0x0)) && (*pcVar13 != '\0')) {
        lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1228);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(*(longlong *)(lStack_160 + 0x38) + 0x18);
        }
        if (fVar20 == 0.0) {
          fVar20 = *(float *)(*(longlong *)(lStack_160 + 0x38) + 0x20);
        }
        uStack_1d8 = *(undefined8 *)(lStack_160 + 0x60);
        fStack_1d0 = *(float *)(lStack_160 + 0x68);
        fStack_1cc = *(float *)(lStack_160 + 0x6c);
        FUN_18029e990(lVar11,lStack_160,fVar20,afStack_148 + lVar9 * 0xe);
      }
      uVar7 = (int)plVar16 + 1;
      plVar16 = (longlong *)(ulonglong)uVar7;
    } while ((int)uVar7 < iStack_154);
  }
  _eh_vector_destructor_iterator_(afStack_148,0x38,2,FUN_18016c7e0);
  return;
}


