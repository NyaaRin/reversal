// 0x180130b50  Features_WorldTint_WorldTintFeature_vfunc01
// size=1323 thunk=false
// signature: undefined Features_WorldTint_WorldTintFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_WorldTint_WorldTintFeature_vfunc01(void)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if ((DAT_1803fd0c4 != '\0') && (cVar5 == '\0')) {
    if (DAT_1803ea290 != DAT_1803ea298) {
      DAT_1803ea298 = DAT_1803ea290;
    }
    DAT_180401593 = '\0';
    DAT_180401591 = '\0';
    DAT_180401590 = '\0';
  }
  local_a0 = 0x33ebf49592e8d668;
  local_98 = 0x93fd561a96ab0c67;
  DAT_1803fd0c4 = cVar5;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (((*pcVar7 == '\0') || (DAT_1803fa46f != '\0')) || (cVar5 == '\0')) {
    DAT_180401592 = 0;
    if (((DAT_180401593 == '\0') && (DAT_1803ea290 == DAT_1803ea298)) && (DAT_180401591 == '\0')) {
      DAT_180401592 = 0;
      return;
    }
    FUN_180130540(1);
    return;
  }
  local_98 = 0x93fd561a96ab0c67;
  local_a0 = 0xb2eb02e304a12441;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  puVar8 = (undefined1 *)FUN_1801fcfc0(*plVar6 + 0x28);
  uVar3 = *puVar8;
  if (DAT_180401591 == '\0') {
    FUN_1801308e0();
  }
  fVar12 = (float)FUN_180129c50();
  fVar4 = DAT_180380bb0;
  local_d4 = 1.0;
  local_a0 = 0xbbd46f0aa9aa58e5;
  local_d8 = 0.0;
  local_98 = 0x93fd561a96ab0c67;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_cc = 1.0;
  local_d0 = 0.0;
  local_98 = 0x93fd561a96ab0c67;
  local_a0 = 0xbbd47a0aa9aa6b96;
  pfVar11 = &local_d8;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = &local_d4;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  fVar1 = *pfVar10;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_c4 = 1.0;
  local_c8 = 0.0;
  local_98 = 0x93fd561a96ab0c67;
  local_a0 = 0xbbd47f0aa9aa7415;
  pfVar11 = &local_d0;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = &local_cc;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  fVar2 = *pfVar10;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  pfVar11 = &local_c8;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  if (((DAT_180401590 != '\0') && (fVar12 * fVar1 == _DAT_1803e7b50)) &&
     (fVar12 * fVar2 == _DAT_1803e7b54)) {
    pfVar10 = &local_c4;
    if (*pfVar9 <= fVar4) {
      pfVar10 = pfVar11;
    }
    if (fVar12 * *pfVar10 == _DAT_1803e7b58) goto LAB_180130e93;
  }
  FUN_180130920();
LAB_180130e93:
  local_98._0_4_ = 1.0;
  local_a0 = local_a0 & 0xffffffff00000000;
  local_90[0] = 0x93fd561a96ab0c67;
  local_80[0] = 0xbbd46f0aa9aa58e5;
  DAT_180401592 = uVar3;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c0,local_90);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_b0,local_80);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_80[0] = 0x93fd561a96ab0c67;
  local_90[0] = 0xbbd47a0aa9aa6b96;
  pfVar11 = (float *)&local_a0;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = (float *)&local_98;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  _DAT_1803e7b60 = *pfVar10;
  local_a0._0_4_ = 1.0;
  local_98._0_4_ = 0.0;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b0,local_80);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_c0,local_90);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_80[0] = 0x93fd561a96ab0c67;
  local_90[0] = 0xbbd47f0aa9aa7415;
  pfVar11 = (float *)&local_98;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = (float *)&local_a0;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  _DAT_1803e7b64 = *pfVar10;
  local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b0,local_80);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_c0,local_90);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  pfVar11 = (float *)&local_98;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = (float *)&local_a0;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  _DAT_1803e7b68 = *pfVar10;
  return;
}


