// 0x1802ad620  FUN_1802ad620
// size=1623 thunk=false
// signature: undefined FUN_1802ad620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802ad620(char *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  char cVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  undefined8 local_128;
  undefined4 local_118;
  char local_108;
  byte local_107;
  char local_106;
  float local_100;
  float local_fc;
  char *local_f8;
  float local_f0;
  float local_ec;
  longlong *local_e8;
  char local_e0;
  char local_df [7];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_f8 = param_2;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  uVar11 = *(ulonglong *)(lVar4 + 0x1520);
  *(undefined1 *)(uVar11 + 0xce) = 1;
  plVar5 = *(longlong **)(lVar4 + 0x1520);
  if (*(char *)((longlong)plVar5 + 0xd1) != '\0') {
LAB_1802adc14:
    return uVar11 & 0xffffffffffffff00;
  }
  local_e8 = plVar5;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  iVar8 = FUN_180268980(param_1,0,
                        *(undefined4 *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4));
  if (*(int *)(*plVar5 + 0x1578) == iVar8) {
    FUN_1802899e0(iVar8,0xb,param_1);
  }
  pcVar16 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar16 != '\0') {
      pcVar15 = pcVar16 + 1;
      if (((*pcVar16 == '#') && (*pcVar15 == '#')) ||
         (pcVar16 = pcVar15, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar19 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  if (param_1 == pcVar16) {
    fVar21 = 0.0;
    local_fc = fVar19;
  }
  else {
    local_118 = 0;
    local_128 = 0;
    local_148 = DAT_180381384;
    local_140 = param_1;
    local_138 = pcVar16;
    local_130 = pcVar16;
    FUN_18029e350(&local_100,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),fVar19,
                  DAT_180381308);
    fVar21 = (float)(int)(local_100 + DAT_180380ba8);
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar19 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xcc8);
  fVar1 = *(float *)(plVar5 + 0x23);
  fVar2 = *(float *)((longlong)plVar5 + 0x11c);
  uVar6 = plVar5[0x23];
  fVar19 = fVar19 + fVar19 + *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  if (fVar21 <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar21 + *(float *)(lVar4 + 0xcdc);
  }
  local_cc = *(float *)(lVar4 + 0xcc8) + *(float *)(lVar4 + 0xcc8) + local_fc + fVar2;
  local_fc = local_cc - fVar2;
  local_d0 = fVar19 + fVar18 + fVar1;
  local_100 = local_d0 - fVar1;
  local_d8 = fVar1;
  local_d4 = fVar2;
  FUN_18027f400(&local_100,*(undefined4 *)(lVar4 + 0xcc8));
  uVar11 = FUN_18027f160(&local_d8,iVar8,0,0);
  uVar13 = *(uint *)(lVar4 + 0x1efc) & 0x400000;
  local_106 = (char)uVar11;
  if (local_106 == '\0') {
    if ((((uVar13 == 0) || (*(char *)(lVar4 + 0x2450) == '\0')) ||
        ((*(float *)(lVar4 + 0x2460) <= local_d4 ||
         ((local_cc < *(float *)(lVar4 + 0x2458) || local_cc == *(float *)(lVar4 + 0x2458) ||
          (*(float *)(lVar4 + 0x245c) <= local_d8)))))) ||
       (local_d0 < *(float *)(lVar4 + 0x2454) || local_d0 == *(float *)(lVar4 + 0x2454)))
    goto LAB_1802adc14;
    local_108 = *param_2;
  }
  else {
    cVar17 = *param_2;
    local_108 = cVar17;
    if (uVar13 == 0) {
      local_148 = 0;
      bVar7 = FUN_1802ab600(&local_d8,iVar8,&local_e0,local_df);
      if (bVar7 != 0) {
        cVar17 = cVar17 == '\0';
      }
      goto LAB_1802ad9b9;
    }
  }
  FUN_1802c2df0(iVar8,&local_108,0);
  local_148 = 0;
  local_107 = FUN_1802ab600(&local_d8,iVar8,&local_e0,local_df);
  FUN_1802c2f30(iVar8,&local_108,&local_107);
  cVar17 = local_108;
  bVar7 = local_107;
LAB_1802ad9b9:
  if (*param_2 != cVar17) {
    *param_2 = cVar17;
    bVar7 = 1;
    FUN_18026ed00(iVar8);
  }
  uVar13 = *(uint *)(lVar4 + 0x1efc) & 0x1000;
  fVar18 = fVar1 + fVar19;
  pcVar15 = local_f8;
  if (local_106 != '\0') {
    FUN_18026c370(&local_d8,iVar8,0);
    fVar20 = DAT_180380bb0;
    if (local_e0 == '\0') {
      if ((uVar13 != 0) || (cVar12 = '\a', cVar17 != '\0')) {
        cVar12 = '\x13';
      }
    }
    else {
      cVar12 = (local_df[0] != '\0') + '\b';
    }
    uVar9 = FUN_18026a6a0(cVar12,DAT_180380bb0);
    uVar10 = FUN_18026a6a0(0x12,fVar20);
    local_148 = *(undefined4 *)(lVar4 + 0xccc);
    FUN_18026c020(uVar6,CONCAT44(fVar2 + fVar19,fVar18),uVar9,1);
    pcVar15 = local_f8;
    if (uVar13 == 0) {
      if (*local_f8 != '\0') {
        if (fVar20 <= (float)(int)(fVar19 / DAT_180380f40)) {
          fVar20 = (float)(int)(fVar19 / DAT_180380f40);
        }
        FUN_18029f350(local_e8[0x59],CONCAT44(fVar2 + fVar20,fVar1 + fVar20),uVar10,
                      fVar19 - (fVar20 + fVar20));
      }
    }
    else {
      local_140 = (char *)((ulonglong)local_140 & 0xffffffff00000000);
      if (fVar20 <= (float)(int)(fVar19 / _DAT_180380e78)) {
        fVar20 = (float)(int)(fVar19 / _DAT_180380e78);
      }
      local_ec = fVar2 + fVar20;
      local_100 = fVar18 - fVar20;
      local_fc = (fVar2 + fVar19) - fVar20;
      local_f0 = fVar1 + fVar20;
      local_148 = *(undefined4 *)(lVar4 + 0xccc);
      FUN_180295000(local_e8[0x59],&local_f0,&local_100,uVar10);
      pcVar15 = local_f8;
    }
  }
  fStack_c4 = fVar2 + *(float *)(lVar4 + 0xcc8);
  local_c8 = fVar18 + *(float *)(lVar4 + 0xcdc);
  if (*(char *)(lVar4 + 0x2858) != '\0') {
    if (uVar13 == 0) {
      puVar14 = &DAT_18037ffdc;
      if (*pcVar15 != '\0') {
        puVar14 = &DAT_18037ffe0;
      }
    }
    else {
      puVar14 = &DAT_18037ffc8;
    }
    FUN_180287c20(&local_c8,puVar14,0);
  }
  if ((local_106 != '\0') && (0.0 < fVar21)) {
    FUN_18026b160(CONCAT44(fStack_c4,local_c8),param_1,pcVar16,0);
  }
  return (ulonglong)bVar7;
}


