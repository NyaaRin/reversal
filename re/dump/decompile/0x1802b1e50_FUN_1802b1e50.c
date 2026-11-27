// 0x1802b1e50  FUN_1802b1e50
// size=2403 thunk=false
// signature: undefined FUN_1802b1e50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802b1e50(char *param_1,int param_2,void *param_3,undefined4 param_4,longlong param_5,
                       longlong param_6,undefined *param_7,uint param_8)

{
  char *pcVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined *puVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  int iVar16;
  char *pcVar17;
  undefined8 uVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  undefined *local_188;
  float *local_180;
  char *local_178;
  char *local_170;
  undefined8 local_168;
  undefined4 local_158;
  byte local_148;
  char local_147;
  int local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  undefined *local_128;
  void *local_120;
  longlong local_118;
  char *local_110;
  longlong *local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 local_d8 [64];
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  local_118 = param_5;
  local_128 = param_7;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_144 = param_2;
  local_120 = param_3;
  local_110 = param_1;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  uVar15 = *(ulonglong *)(lVar5 + 0x1520);
  *(undefined1 *)(uVar15 + 0xce) = 1;
  plVar6 = *(longlong **)(lVar5 + 0x1520);
  if (*(char *)((longlong)plVar6 + 0xd1) != '\0') {
LAB_1802b2761:
    return uVar15 & 0xffffffffffffff00;
  }
  local_108 = plVar6;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  iVar12 = FUN_180268980(param_1,0,
                         *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
  if (*(int *)(*plVar6 + 0x1578) == iVar12) {
    FUN_1802899e0(iVar12,0xb,param_1);
  }
  fVar21 = (float)FUN_18027f9c0();
  if ((*(byte *)(lVar5 + 0x1ec0) & 0x20) == 0) {
    local_130 = 0;
  }
  else {
    local_130 = *(uint *)(lVar5 + 0x1ef4);
  }
  pcVar17 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar17 != '\0') {
      pcVar1 = pcVar17 + 1;
      if (((*pcVar17 == '#') && (*pcVar1 == '#')) ||
         (pcVar17 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
  if (param_1 == pcVar17) {
    fVar22 = 0.0;
    local_13c = fVar2;
  }
  else {
    local_158 = 0;
    local_168 = 0;
    local_188 = (undefined *)CONCAT44(local_188._4_4_,DAT_180381384);
    local_180 = (float *)param_1;
    local_178 = pcVar17;
    local_170 = pcVar17;
    FUN_18029e350(&local_140,*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1228),fVar2,
                  DAT_180381308);
    fVar22 = (float)(int)(local_140 + DAT_180380ba8);
  }
  local_100 = *(float *)(plVar6 + 0x23);
  local_f8 = fVar21 + local_100;
  fStack_f4 = *(float *)(lVar5 + 0xcc8) + *(float *)(lVar5 + 0xcc8) + local_13c +
              *(float *)((longlong)plVar6 + 0x11c);
  fStack_fc = *(float *)((longlong)plVar6 + 0x11c);
  if (fVar22 <= 0.0) {
    local_e8 = 0.0;
  }
  else {
    local_e8 = fVar22 + *(float *)(lVar5 + 0xcdc);
  }
  local_e8 = local_e8 + local_f8;
  local_e4 = fStack_f4 + 0.0;
  fVar21 = (float)(param_8 & 0x80);
  local_138 = local_e8 - local_100;
  local_134 = local_e4 - fStack_fc;
  local_140 = fVar21;
  local_f0 = local_100;
  local_ec = fStack_fc;
  FUN_18027f400(&local_138,*(undefined4 *)(lVar5 + 0xcc8));
  uVar18 = 0;
  if (fVar21 == 0.0) {
    uVar18 = 0x100000;
  }
  uVar15 = FUN_18027f160(&local_f0,iVar12,&local_100,uVar18);
  if ((char)uVar15 == '\0') goto LAB_1802b2761;
  if (local_128 == (undefined *)0x0) {
    local_128 = (&PTR_DAT_180338980)[(longlong)local_144 * 4];
  }
  bVar10 = FUN_18026f180(&local_100,iVar12,*(undefined4 *)(lVar5 + 0x1efc));
  uVar19 = 1;
  local_148 = bVar10;
  if (fVar21 == 0.0) {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0xec0) + 0x1594) != iVar12) ||
       (*(int *)(*(longlong *)(lVar4 + 0xec0) + 0x2638) != iVar12)) goto LAB_1802b2197;
  }
  else {
LAB_1802b2197:
    bVar8 = true;
    if ((((bVar10 == 0) || (cVar11 = FUN_18027bce0(0,0,iVar12), cVar11 == '\0')) &&
        (bVar8 = false, bVar10 == 0)) || (*(short *)(lVar5 + 0xb3a) != 2)) {
LAB_1802b220a:
      bVar20 = false;
    }
    else {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar7 = *(longlong *)(lVar4 + 0xec0);
      if (iVar12 == 0) {
        bVar20 = *(char *)(lVar7 + 0x1cd4) == '\0';
LAB_1802b2202:
        if (!bVar20) goto LAB_1802b220a;
      }
      else if (*(int *)(lVar7 + 0x1ccc) != iVar12) {
        if (*(char *)(lVar7 + 0x1cd4) != '\0') goto LAB_1802b220a;
        bVar20 = *(int *)(lVar7 + 0x1ccc) == -1;
        goto LAB_1802b2202;
      }
      bVar20 = true;
    }
    if (((bVar8) || (bVar20)) || (*(int *)(lVar5 + 0x2084) == iVar12)) {
      local_147 = '\x01';
      if ((bVar8) || (bVar20)) {
        if (*(char *)(lVar4 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar7 = *(longlong *)(lVar4 + 0xec0);
        *(int *)(lVar7 + 0x1cd0) = iVar12;
        *(int *)(lVar7 + 0x1ccc) = iVar12;
        *(undefined2 *)(lVar7 + 0x1cd4) = 0;
      }
      if ((local_140 != 0.0) ||
         ((((!bVar8 || (*(char *)(lVar5 + 0x11c) == '\0')) && (!bVar20)) &&
          ((*(int *)(lVar5 + 0x2084) != iVar12 || ((*(byte *)(lVar5 + 0x2090) & 1) == 0))))))
      goto LAB_1802b2235;
      bVar8 = true;
    }
    else {
      local_147 = '\0';
LAB_1802b2235:
      bVar8 = false;
    }
    bVar10 = local_148;
    if (((*(char *)(lVar5 + 0x7d) != '\0') && (local_140 == 0.0)) &&
       ((!bVar8 &&
        (((*(int *)(lVar5 + 0x1594) == iVar12 && (local_148 != 0)) &&
         (*(char *)(lVar5 + 0xb4e) != '\0')))))) {
      fVar21 = *(float *)(lVar5 + 0x90) * DAT_180380ac0;
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (fVar21 < 0.0) {
        fVar21 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x90);
      }
      if (*(float *)(*(longlong *)(lVar4 + 0xec0) + 0xbb4) < fVar21 * fVar21) {
        *(int *)(lVar5 + 0x2084) = iVar12;
        bVar8 = true;
        *(undefined4 *)(lVar5 + 0x2090) = 1;
      }
    }
    if (local_147 == '\0') {
      if (!bVar8) goto LAB_1802b2324;
    }
    else {
      memcpy((void *)(lVar5 + 0x15d0),local_120,
             *(size_t *)(&DAT_180338970 + (longlong)local_144 * 0x20));
      plVar6 = local_108;
      if (!bVar8) {
        FUN_18026ea90(iVar12,local_108);
        FUN_180282e10(iVar12,plVar6);
        FUN_1802827b0(plVar6,0);
        *(undefined4 *)(lVar5 + 0x1ea8) = 3;
LAB_1802b2324:
        fVar21 = DAT_180380bb0;
        if (*(int *)(lVar5 + 0x1594) == iVar12) {
          iVar16 = 9;
        }
        else {
          iVar16 = bVar10 + 7;
        }
        uVar14 = FUN_18026a6a0(iVar16,DAT_180380bb0);
        FUN_18026c370(&local_100,iVar12,0);
        uVar3 = *(undefined4 *)(lVar5 + 0xccc);
        local_138 = local_f8;
        local_134 = fStack_f4;
        local_140 = local_100;
        local_13c = fStack_fc;
        if (*(char *)(lVar4 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_180 = (float *)((ulonglong)local_180 & 0xffffffff00000000);
        local_188 = (undefined *)CONCAT44(local_188._4_4_,uVar3);
        FUN_180295000(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x2c8),
                      &local_140,&local_138,uVar14);
        uVar19 = local_130;
        if ((local_130 != 0) && (0.0 < *(float *)(lVar5 + 0xd60))) {
          uVar3 = *(undefined4 *)(lVar5 + 0xccc);
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar2 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xc84);
          if (fVar2 < fVar21) {
            uVar19 = (int)(longlong)((float)(uVar19 >> 0x18) * fVar2) << 0x18 | uVar19 & 0xffffff;
          }
          if (local_100 + fVar21 < local_f8) {
            if (*(char *)(lVar4 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            local_180 = (float *)CONCAT44(local_180._4_4_,uVar3);
            fVar21 = local_100 + *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xd60);
            if (local_f8 <= fVar21) {
              fVar21 = local_f8;
            }
            local_188 = (undefined *)CONCAT44(local_188._4_4_,fVar21);
            FUN_18029f4a0(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x2c8),&local_100
                          ,uVar19);
          }
        }
        FUN_18026c1f0(CONCAT44(fStack_fc,local_100),CONCAT44(fStack_f4,local_f8),
                      *(undefined4 *)(lVar5 + 0xccc));
        puVar9 = local_128;
        iVar16 = local_144;
        local_170 = (char *)CONCAT44(local_170._4_4_,param_8);
        local_178 = local_128;
        local_180 = (float *)param_6;
        local_188 = (undefined *)local_118;
        bVar10 = FUN_1802b18a0(iVar12,local_144,local_120,param_4);
        if (bVar10 != 0) {
          FUN_18026ed00(iVar12);
        }
        local_188 = puVar9;
        iVar12 = FUN_1802b1470(local_d8,0x40,iVar16,local_120);
        if (*(char *)(lVar5 + 0x2858) != '\0') {
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar4 + 0xec0);
          *(undefined **)(lVar4 + 0x2880) = &DAT_18038002c;
          *(undefined **)(lVar4 + 0x2888) = &DAT_180380030;
        }
        local_138 = 0.5;
        local_178 = (char *)0x0;
        local_180 = &local_138;
        local_188 = (undefined *)0x0;
        local_134 = 0.5;
        FUN_18026ba40(&local_100,&local_f8,local_d8,local_d8 + iVar12);
        if (0.0 < fVar22) {
          FUN_18026b160(CONCAT44(fStack_fc + *(float *)(lVar5 + 0xcc8),
                                 local_f8 + *(float *)(lVar5 + 0xcdc)),local_110,pcVar17,0);
        }
        return (ulonglong)bVar10;
      }
    }
  }
  lVar5 = local_118;
  iVar16 = local_144;
  if ((param_8 >> 9 & 1) != 0) {
    if (local_118 == 0) {
      if (param_6 == 0) goto LAB_1802b2457;
LAB_1802b23ed:
      if ((local_118 == 0) || (iVar13 = 0, param_6 == 0)) goto LAB_1802b245a;
    }
    else {
      if (param_6 == 0) goto LAB_1802b23ed;
      iVar13 = FUN_1802b1760(local_144,local_118,param_6);
    }
    if (iVar13 < 0) goto LAB_1802b245a;
    if (iVar13 == 0) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      iVar16 = FUN_1802b1760(iVar16,lVar5,*(longlong *)(lVar4 + 0xec0) + 0x263c);
      uVar19 = 1;
      if (iVar16 == 0) {
        uVar19 = param_8 >> 10 & 1;
      }
      goto LAB_1802b245a;
    }
  }
LAB_1802b2457:
  uVar19 = 0;
LAB_1802b245a:
  local_170 = (char *)0;
  if (uVar19 != 0) {
    local_170 = (char *)param_6;
  }
  local_178 = (char *)0;
  if (uVar19 != 0) {
    local_178 = (char *)lVar5;
  }
  local_180 = (float *)local_128;
  local_188 = local_120;
  uVar15 = FUN_1802b3410(&local_100,iVar12,local_110,local_144);
  return uVar15;
}


