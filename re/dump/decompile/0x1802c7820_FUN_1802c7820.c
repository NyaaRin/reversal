// 0x1802c7820  FUN_1802c7820
// size=1329 thunk=false
// signature: undefined FUN_1802c7820()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c7820(longlong param_1,float *param_2,uint param_3,undefined8 param_4,char *param_5,
                  int param_6,int param_7,byte param_8,undefined1 *param_9,undefined1 *param_10)

{
  char *pcVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 uVar20;
  char cVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char *pcVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_158 [32];
  char *local_138;
  char *local_130;
  float *local_128;
  char *local_120;
  undefined8 local_118;
  undefined4 local_108;
  float local_f8;
  float local_f4;
  longlong local_f0;
  uint local_e8;
  float local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_d0 = param_5;
  local_c8 = param_9;
  local_f0 = param_1;
  local_e8 = param_3;
  local_d8 = param_4;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  pcVar24 = param_5;
  if (param_5 != (char *)0xffffffffffffffff) {
    while (*pcVar24 != '\0') {
      pcVar1 = pcVar24 + 1;
      if (((*pcVar24 == '#') && (*pcVar1 == '#')) ||
         (pcVar24 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_dc = *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1238);
  if (param_5 == pcVar24) {
    local_e0 = 0.0;
  }
  else {
    local_108 = 0;
    local_118 = 0;
    local_130 = param_5;
    local_138 = (char *)CONCAT44(local_138._4_4_,DAT_180381384);
    local_128 = (float *)pcVar24;
    local_120 = pcVar24;
    FUN_18029e350(&local_f8,*(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x1228));
    local_dc = local_f4;
    local_e0 = (float)(int)(local_f8 + DAT_180380ba8);
  }
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = 0;
  }
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 0;
  }
  fVar4 = DAT_180380bb0;
  if (param_2[2] - *param_2 <= DAT_180380bb0) {
    return;
  }
  fVar28 = (float)param_4;
  local_c0 = *param_2 + fVar28;
  local_b8 = param_2[2] - fVar28;
  local_bc = local_d8._4_4_ + param_2[1];
  local_b4 = param_2[3];
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = local_b8 < local_c0 + local_e0;
  }
  fVar29 = param_2[2];
  uVar20 = 0;
  fVar3 = *param_2;
  fVar30 = local_d8._4_4_ + param_2[1];
  fVar31 = *(float *)(lVar6 + 0x1238);
  bVar18 = false;
  fVar26 = (fVar29 - fVar28) - fVar31;
  fVar28 = fVar3;
  if (fVar3 <= fVar26) {
    fVar28 = fVar26;
  }
  if (((*(int *)(lVar6 + 0x157c) == param_6) || (*(int *)(lVar6 + 0x157c) == param_7)) ||
     ((*(int *)(lVar6 + 0x1594) == param_6 || (*(int *)(lVar6 + 0x1594) == param_7)))) {
    bVar17 = true;
  }
  else {
    bVar17 = false;
  }
  if (param_7 != 0) {
    if (param_8 == 0) {
      fVar26 = *(float *)(lVar6 + 0xd30);
    }
    else {
      fVar26 = *(float *)(lVar6 + 0xd2c);
    }
    if (fVar26 < 0.0) {
LAB_1802c7ac1:
      bVar18 = true;
    }
    else if (bVar17) {
      fVar27 = fVar31;
      if (fVar31 <= fVar26) {
        fVar27 = fVar26;
      }
      if (fVar27 <= fVar29 - fVar3) goto LAB_1802c7ac1;
    }
  }
  local_f8 = fVar28;
  local_f4 = fVar30;
  if ((((local_e8 & 1) == 0) || (fVar29 < fVar31 + fVar28)) || ((bVar18 && (bVar17)))) {
    bVar19 = false;
    lVar25 = local_f0;
    if (!bVar18) goto LAB_1802c7c40;
    uVar7 = *(undefined8 *)(lVar6 + 0x1ef8);
    uVar8 = *(undefined8 *)(lVar6 + 0x1f00);
    uVar9 = *(undefined8 *)(lVar6 + 0x1f08);
    uVar10 = *(undefined8 *)(lVar6 + 0x1f10);
    uVar11 = *(undefined8 *)(lVar6 + 0x1f18);
    uVar12 = *(undefined8 *)(lVar6 + 0x1f20);
    uVar13 = *(undefined8 *)(lVar6 + 0x1f28);
    uVar14 = *(undefined8 *)(lVar6 + 0x1f30);
    uVar15 = *(undefined8 *)(lVar6 + 0x1f38);
    uVar16 = *(undefined8 *)(lVar6 + 8000);
    uVar20 = FUN_1802ac830(param_7,&local_f8);
    *(undefined8 *)(lVar6 + 0x1ef8) = uVar7;
    *(undefined8 *)(lVar6 + 0x1f00) = uVar8;
    *(undefined8 *)(lVar6 + 0x1f08) = uVar9;
    *(undefined8 *)(lVar6 + 0x1f10) = uVar10;
    *(undefined8 *)(lVar6 + 0x1f18) = uVar11;
    *(undefined8 *)(lVar6 + 0x1f20) = uVar12;
    *(undefined8 *)(lVar6 + 0x1f28) = uVar13;
    *(undefined8 *)(lVar6 + 0x1f30) = uVar14;
    *(undefined8 *)(lVar6 + 0x1f38) = uVar15;
    *(undefined8 *)(lVar6 + 8000) = uVar16;
    lVar25 = local_f0;
    if (((!bVar17) || ((local_e8 & 4) != 0)) ||
       (cVar21 = FUN_18027bce0(2,0,0), lVar25 = local_f0, cVar21 == '\0')) goto LAB_1802c7c40;
    uVar20 = 1;
LAB_1802c7d2f:
    pfVar2 = (float *)(lVar6 + 0xd2c + ((ulonglong)param_8 ^ 1) * 4);
    if (*pfVar2 <= 0.0 && *pfVar2 != 0.0) goto LAB_1802c7c53;
  }
  else {
    fVar29 = fVar31 * DAT_180380ac0;
    bVar19 = true;
    uVar22 = FUN_18026a6a0(0x38,fVar4);
    lVar25 = local_f0;
    local_f8 = fVar29 + fVar28;
    local_f4 = fVar29 + fVar30;
    fVar4 = *(float *)(*(longlong *)(local_f0 + 0x38) + 0x20);
    if (DAT_18038102c <= fVar4) {
      uVar23 = 0;
      if (fVar4 < DAT_180381088) {
        uVar23 = 0xc;
      }
    }
    else {
      uVar23 = 8;
    }
    local_138 = (char *)CONCAT44(local_138._4_4_,uVar23);
    FUN_180295540(local_f0,&local_f8,fVar4 * DAT_180380a3c,uVar22);
LAB_1802c7c40:
    if (bVar18) {
      if (!bVar19) goto LAB_1802c7d2f;
    }
    else if (!bVar19) goto LAB_1802c7c6e;
LAB_1802c7c53:
    fVar31 = fVar31 * DAT_180380b68;
  }
  local_b8 = local_b8 - fVar31;
LAB_1802c7c6e:
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar5 + 0xec0);
  *(undefined **)(lVar5 + 0x2880) = &DAT_18034f6d4;
  *(undefined1 **)(lVar5 + 0x2888) = &DAT_18033f5a0;
  local_128 = &local_e0;
  local_138 = local_d0;
  local_130 = pcVar24;
  FUN_18026bd00(lVar25,&local_c0,&local_b8);
  if (local_c8 != (undefined1 *)0x0) {
    *local_c8 = uVar20;
  }
  return;
}


