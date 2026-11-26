// 0x1801a1910  FUN_1801a1910
// size=2145 thunk=false
// signature: undefined FUN_1801a1910()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1801a1910(undefined8 param_1,undefined8 param_2,char *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  float local_138 [2];
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined1 local_118 [8];
  float local_110 [2];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  local_120 = param_1;
  FUN_18019a460(param_1,param_3);
  local_138[0] = 5.60519e-45;
  pfVar18 = local_110;
  local_110[0] = 0.0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar18 = &DAT_1803fb24c;
  }
  pfVar17 = local_138;
  if ((int)DAT_1803fb24c < 5) {
    pfVar17 = pfVar18;
  }
  DAT_1803fb24c = *pfVar17;
  lVar19 = (longlong)(int)DAT_1803fb24c * 200;
  FUN_18027abf0(param_2);
  fVar21 = DAT_180380c50;
  pfVar18 = local_138;
  local_110[0] = 1.5;
  local_138[0] = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar18 = &DAT_1803da6a4;
  }
  pfVar17 = local_110;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar17 = pfVar18;
  }
  fVar23 = *pfVar17;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar1 = *(float *)(lVar9 + 0x11c);
  fVar2 = *(float *)(lVar9 + 0x2c);
  fVar3 = *(float *)(lVar9 + 0x9c);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  local_130 = *(float *)(lVar9 + 0x118);
  fVar26 = *(float *)(lVar9 + 0x11c);
  cVar13 = *(char *)(lVar8 + 0x10);
  if (cVar13 == '\0') {
    __dyn_tls_on_demand_init();
    cVar13 = *(char *)(lVar8 + 0x10);
  }
  fVar22 = fVar23 * DAT_18038103c;
  fVar20 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0xcc8);
  fVar20 = fVar20 + fVar20 + *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1238) + DAT_180380e28;
  if (fVar22 <= fVar20) {
    fVar22 = fVar20;
  }
  if (cVar13 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar20 = *(float *)(*(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520) + 0x28);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_fc = fVar22 + fVar26;
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  local_108 = local_130;
  local_100 = (*(float *)(lVar9 + 0x280) - *(float *)(lVar9 + 0x28)) + fVar20;
  local_104 = fVar26;
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar8 + 0xec0);
  lVar10 = *(longlong *)(lVar9 + 0x1520);
  fVar26 = local_108;
  if (local_108 <= *(float *)(lVar10 + 0x268)) {
    fVar26 = *(float *)(lVar10 + 0x268);
  }
  if (fVar26 - *(float *)(lVar9 + 0xcec) <= *(float *)(lVar9 + 0x100)) {
    fVar26 = local_104;
    if (local_104 <= *(float *)(lVar10 + 0x26c)) {
      fVar26 = *(float *)(lVar10 + 0x26c);
    }
    if (fVar26 - *(float *)(lVar9 + 0xcf0) <= *(float *)(lVar9 + 0x104)) {
      fVar26 = local_100;
      if (*(float *)(lVar10 + 0x270) <= local_100) {
        fVar26 = *(float *)(lVar10 + 0x270);
      }
      if (*(float *)(lVar9 + 0x100) < fVar26 + *(float *)(lVar9 + 0xcec)) {
        fVar26 = local_fc;
        if (*(float *)(lVar10 + 0x274) <= local_fc) {
          fVar26 = *(float *)(lVar10 + 0x274);
        }
        if (*(float *)(lVar9 + 0x104) < fVar26 + *(float *)(lVar9 + 0xcf0)) {
          FUN_1802af4c0();
          local_110[0] = DAT_180380b18;
          goto LAB_1801a1c32;
        }
      }
    }
  }
  FUN_1802af4c0();
  local_110[0] = 0.0;
LAB_1801a1c32:
  pfVar18 = (float *)(&DAT_1803dca18 + lVar19);
  fVar26 = *pfVar18;
  if (*param_3 == '\0') {
    pfVar18 = (float *)(&DAT_1803dca28 + lVar19);
  }
  local_130 = 1.0;
  local_138[0] = 0.0;
  pfVar17 = local_138;
  if (0.0 <= local_110[0]) {
    pfVar17 = local_110;
  }
  pfVar16 = &local_130;
  if (local_110[0] <= DAT_180380bb0) {
    pfVar16 = pfVar17;
  }
  fVar20 = *pfVar16;
  local_130 = fVar20 * (fVar26 - *pfVar18) + *pfVar18;
  fStack_12c = fVar20 * (*(float *)(&DAT_1803dca1c + lVar19) - pfVar18[1]) + pfVar18[1];
  fStack_128 = fVar20 * (*(float *)(&DAT_1803dca20 + lVar19) - pfVar18[2]) + pfVar18[2];
  fStack_124 = fVar20 * (*(float *)(&DAT_1803dca24 + lVar19) - pfVar18[3]) + pfVar18[3];
  FUN_1802aabb0(&local_130,&DAT_1803431ac,param_1);
  bVar12 = false;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar20 = 0.0;
  if (param_5 != 0) {
    pfVar18 = &local_130;
    local_138[0] = 1.5;
    local_130 = 0.75;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar18 = &DAT_1803da6a4;
    }
    pfVar17 = local_138;
    if (DAT_1803da6a4 <= fVar21) {
      pfVar17 = pfVar18;
    }
    FUN_18027f5b0(0,*pfVar17 * DAT_180380fa8);
    cVar13 = FUN_18019dc00("##row_opts",4,0);
    if (cVar13 != '\0') {
      if (*(char *)(lVar8 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
      iVar15 = *(int *)(lVar19 + 0x108);
      if (iVar15 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar19 + 0x108) = iVar15 + -1;
      }
      FUN_180280fd0(param_5);
      FUN_18027abf0(param_2);
    }
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar26 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f0c);
    fVar20 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f10);
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    bVar12 = true;
    fVar24 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f04);
    fVar25 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f08);
  }
  FUN_18027f5b0(0,DAT_180381384);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar23 = fVar23 * _DAT_180381084;
  lVar19 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar21 = *(float *)(lVar19 + 0x280);
  fVar4 = *(float *)(lVar19 + 0x28);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar8 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar19 + 0x1520) + 0xce) = 1;
  lVar19 = *(longlong *)(lVar19 + 0x1520);
  *(undefined1 *)(lVar19 + 0x159) = 1;
  *(float *)(lVar19 + 0x118) =
       (*(float *)(lVar19 + 0x28) - *(float *)(lVar19 + 0x98)) + ((fVar21 - fVar4) - fVar23);
  uVar14 = FUN_1801a0b60("##state",param_3);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar21 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f0c);
  fVar23 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f10);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar4 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f04);
  fVar5 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1f08);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar8 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar19 + 0x1520) + 0xce) = 1;
  plVar11 = *(longlong **)(lVar19 + 0x1520);
  iVar15 = FUN_180268980("##whole_row",0,
                         *(undefined4 *)(plVar11[0x22] + -4 + (longlong)(int)plVar11[0x21] * 4));
  if (*(int *)(*plVar11 + 0x1578) == iVar15) {
    FUN_1802899e0(iVar15,0xb,"##whole_row");
  }
  local_118[0] = 0;
  FUN_18027f160(&local_108,iVar15,0,0);
  local_148 = 0;
  cVar13 = FUN_1802ab600(&local_108,iVar15,0,local_118);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar6 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x100);
  fVar7 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x104);
  if (((((fVar4 <= fVar6) && (fVar5 <= fVar7)) && (fVar6 < fVar21)) && (fVar7 < fVar23)) ||
     (((bVar12 && (fVar24 <= fVar6)) &&
      ((fVar25 <= fVar7 && ((fVar6 < fVar26 && (fVar7 < fVar20)))))))) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if ((cVar13 != '\0') && (!bVar12)) {
    *param_3 = *param_3 == '\0';
    FUN_18026ed00(iVar15);
    uVar14 = 1;
  }
  FUN_1801a1860((fVar1 - fVar2) + fVar3 + fVar22);
  FUN_18019a7a0(local_120,&local_108);
  if (param_4 != 0) {
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(lVar8 + 0xec0);
    lVar9 = *(longlong *)(lVar19 + 0x1520);
    fVar21 = local_108;
    if (local_108 <= *(float *)(lVar9 + 0x268)) {
      fVar21 = *(float *)(lVar9 + 0x268);
    }
    if (fVar21 - *(float *)(lVar19 + 0xcec) <= *(float *)(lVar19 + 0x100)) {
      fVar21 = local_104;
      if (local_104 <= *(float *)(lVar9 + 0x26c)) {
        fVar21 = *(float *)(lVar9 + 0x26c);
      }
      if (fVar21 - *(float *)(lVar19 + 0xcf0) <= *(float *)(lVar19 + 0x104)) {
        fVar21 = local_100;
        if (*(float *)(lVar9 + 0x270) <= local_100) {
          fVar21 = *(float *)(lVar9 + 0x270);
        }
        if (*(float *)(lVar19 + 0x100) < fVar21 + *(float *)(lVar19 + 0xcec)) {
          fVar21 = local_fc;
          if (*(float *)(lVar9 + 0x274) <= local_fc) {
            fVar21 = *(float *)(lVar9 + 0x274);
          }
          if ((*(float *)(lVar19 + 0x104) < fVar21 + *(float *)(lVar19 + 0xcf0)) &&
             (cVar13 = FUN_180279410(0x80), cVar13 != '\0')) {
            FUN_180280d00(&DAT_1803431ac,param_4);
          }
        }
      }
    }
  }
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  iVar15 = *(int *)(lVar19 + 0x108);
  if (iVar15 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar19 + 0x108) = iVar15 + -1;
  }
  return uVar14;
}


