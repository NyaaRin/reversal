// 0x1802b0590  FUN_1802b0590
// size=1814 thunk=false
// signature: undefined FUN_1802b0590()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802b0590(char *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 uStack_104;
  longlong *local_100;
  undefined8 local_f8;
  float local_e8;
  float local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  longlong local_d0;
  uint local_c8;
  uint local_c4;
  char *local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  char local_a0;
  undefined1 local_9f [7];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_d0 = param_2;
  local_c8 = param_3;
  local_c0 = param_1;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  plVar4 = *(longlong **)(lVar3 + 0x1520);
  local_c4 = *(uint *)(lVar2 + 0x1f48);
  uVar11 = (ulonglong)local_c4;
  *(undefined4 *)(lVar2 + 0x1f48) = 0;
  if (*(char *)((longlong)plVar4 + 0xd1) == '\0') {
    uVar7 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4));
    local_e0 = uVar7;
    if (*(uint *)(*plVar4 + 0x1578) == uVar7) {
      FUN_1802899e0(uVar7,0xb,param_1);
    }
    local_dc = (float)(param_3 & 0x20);
    if ((param_3 & 0x20) == 0) {
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar18 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xcc8);
      fVar18 = fVar18 + fVar18 + *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238);
    }
    else {
      fVar18 = 0.0;
    }
    uVar8 = DAT_180381384;
    pcVar14 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar14 != '\0') {
        pcVar13 = pcVar14 + 1;
        if (((*pcVar14 == '#') && (*pcVar13 == '#')) ||
           (pcVar14 = pcVar13, pcVar13 == (char *)0xffffffffffffffff)) break;
      }
    }
    local_108 = DAT_180381384;
    FUN_180272ad0(&local_a8,param_1,pcVar14,0);
    if (((param_3 & 0x80) == 0) || (local_d0 == 0)) {
      fVar16 = 0.0;
    }
    else {
      local_108 = uVar8;
      pfVar10 = (float *)FUN_180272ad0(&local_98,local_d0,0,0);
      fVar16 = *pfVar10;
    }
    local_d4 = param_3 & 0x40;
    fVar17 = fVar18;
    if ((param_3 & 0x40) == 0) {
      if ((param_3 & 0x80) == 0) {
        fVar17 = (float)FUN_18027f9c0();
      }
      else {
        fVar17 = *(float *)(lVar2 + 0xcc4) + *(float *)(lVar2 + 0xcc4) + fVar16 + fVar18;
      }
    }
    local_b8 = *(float *)(plVar4 + 0x23);
    local_b0 = local_b8 + fVar17;
    fStack_ac = *(float *)(lVar2 + 0xcc8) + *(float *)(lVar2 + 0xcc8) + local_a4 +
                *(float *)((longlong)plVar4 + 0x11c);
    fStack_b4 = *(float *)((longlong)plVar4 + 0x11c);
    if (local_a8 <= 0.0) {
      local_90 = 0.0;
    }
    else {
      local_90 = local_a8 + *(float *)(lVar2 + 0xcdc);
    }
    local_8c = fStack_ac + 0.0;
    local_90 = local_b0 + local_90;
    local_e4 = local_8c - fStack_b4;
    local_e8 = local_90 - local_b8;
    local_98 = local_b8;
    local_94 = fStack_b4;
    FUN_18027f400(&local_e8,*(undefined4 *)(lVar2 + 0xcc8));
    uVar11 = FUN_18027f160(&local_98,uVar7,&local_b8,0);
    if ((char)uVar11 != '\0') {
      local_108 = 0;
      cVar5 = FUN_1802ab600(&local_b8,uVar7,&local_a0,local_9f);
      pcVar13 = "##ComboPopup";
      uVar11 = 0x23;
      uVar15 = ~uVar7;
      do {
        pcVar13 = pcVar13 + 1;
        if ((((char)uVar11 == '#') && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
          pcVar13 = pcVar13 + 2;
          uVar15 = ~uVar7;
        }
        else {
          uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_180331380 + ((ulonglong)uVar15 & 0xff ^ uVar11) * 4)
          ;
        }
        uVar11 = (ulonglong)(byte)*pcVar13;
      } while (*pcVar13 != 0);
      uVar15 = ~uVar15;
      cVar6 = FUN_180280db0(uVar15,0);
      if ((cVar5 != '\0') && (cVar6 == '\0')) {
        FUN_180281080(uVar15,0);
        cVar6 = '\x01';
      }
      uVar8 = FUN_18026a6a0((local_a0 != '\0') + '\a',DAT_180380bb0);
      fVar16 = local_b8;
      if (local_b8 <= local_b0 - fVar18) {
        fVar16 = local_b0 - fVar18;
      }
      FUN_18026c370(&local_b8,local_e0,0);
      if (local_d4 == 0) {
        local_e4 = fStack_ac;
        local_108 = *(uint *)(lVar2 + 0xccc);
        uVar9 = 0x50;
        if (local_dc != 0.0) {
          uVar9 = 0xf0;
        }
        local_100 = (longlong *)CONCAT44(local_100._4_4_,uVar9);
        local_e8 = fVar16;
        FUN_180295000(plVar4[0x59],&local_b8,&local_e8,uVar8);
      }
      if (local_dc == 0.0) {
        if ((cVar6 != '\0') || (uVar12 = 0x16, local_a0 != '\0')) {
          uVar12 = 0x17;
        }
        uVar9 = FUN_18026a6a0(uVar12,DAT_180380bb0);
        local_e0 = FUN_18026a6a0(0,DAT_180380bb0);
        local_e4 = fStack_b4;
        local_108 = *(uint *)(lVar2 + 0xccc);
        uVar8 = 0xa0;
        if (fVar17 <= fVar18) {
          uVar8 = 0xf0;
        }
        local_100 = (longlong *)CONCAT44(local_100._4_4_,uVar8);
        local_e8 = fVar16;
        FUN_180295000(plVar4[0x59],&local_e8,&local_b0,uVar9);
        if ((fVar16 + fVar18) - *(float *)(lVar2 + 0xcc4) <= local_b0) {
          fVar18 = *(float *)(*(longlong *)(plVar4[0x59] + 0x38) + 0x20);
          local_98 = fVar18 * DAT_180380ac0;
          local_108 = local_e0;
          fVar18 = fVar18 * DAT_180380a94;
          local_94 = *(float *)(lVar2 + 0xcc8) + fStack_b4 + local_98;
          local_98 = *(float *)(lVar2 + 0xcc8) + fVar16 + local_98;
          local_e8 = fVar18 * _DAT_180380b54 + local_98;
          local_e4 = local_94 - fVar18 * DAT_180380b20;
          local_dc = local_98 - fVar18 * _DAT_180380b54;
          local_94 = fVar18 * DAT_180380b20 + local_94;
          local_98 = fVar18 * 0.0 + local_98;
          local_d8 = local_e4;
          FUN_1802953e0(plVar4[0x59],&local_98,&local_dc,&local_e8);
        }
      }
      uVar11 = FUN_18026c1f0(CONCAT44(fStack_b4,local_b8),CONCAT44(fStack_ac,local_b0),
                             *(undefined4 *)(lVar2 + 0xccc));
      uVar7 = local_c8;
      lVar3 = local_d0;
      if ((local_c8 >> 0x14 & 1) == 0) {
        if ((local_d0 != 0) && (local_d4 == 0)) {
          if (*(char *)(lVar2 + 0x2858) != '\0') {
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar1 = *(longlong *)(lVar1 + 0xec0);
            *(undefined **)(lVar1 + 0x2880) = &DAT_18038002c;
            *(undefined **)(lVar1 + 0x2888) = &DAT_180380030;
          }
          local_100 = &local_d0;
          local_e8 = local_b8 + *(float *)(lVar2 + 0xcc4);
          local_94 = fStack_ac;
          local_e4 = fStack_b4 + *(float *)(lVar2 + 0xcc8);
          local_f8 = 0;
          local_108 = 0;
          uStack_104 = 0;
          local_d0 = 0;
          local_98 = fVar16;
          uVar11 = FUN_18026ba40(&local_e8,&local_98,lVar3,0);
        }
      }
      else {
        *(float *)(lVar2 + 0x2674) = local_b8;
        *(float *)(lVar2 + 0x2678) = fStack_b4;
        *(float *)(lVar2 + 0x267c) = fVar16;
        *(float *)(lVar2 + 0x2680) = fStack_ac;
      }
      if (0.0 < local_a8) {
        uVar11 = FUN_18026b160(CONCAT44(fStack_b4 + *(float *)(lVar2 + 0xcc8),
                                        local_b0 + *(float *)(lVar2 + 0xcdc)),local_c0,pcVar14,0);
      }
      if (cVar6 != '\0') {
        *(uint *)(lVar2 + 0x1f48) = local_c4;
        uVar11 = FUN_1802b0cb0(uVar15,&local_b8,uVar7);
        return uVar11;
      }
    }
  }
  return uVar11 & 0xffffffffffffff00;
}


