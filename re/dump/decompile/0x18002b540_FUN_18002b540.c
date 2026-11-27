// 0x18002b540  FUN_18002b540
// size=6758 thunk=false
// signature: undefined FUN_18002b540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18002b540(longlong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  longlong *plVar10;
  size_t sVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  char *pcVar16;
  ulonglong uVar17;
  void *pvVar18;
  char *pcVar19;
  char *_Str;
  ulonglong uVar20;
  byte *****pppppbVar21;
  ulonglong *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined8 uStack_670;
  undefined1 auStack_668 [8];
  undefined1 auStack_660 [24];
  longlong local_648;
  char *local_640;
  undefined8 local_638;
  uint local_628 [2];
  ulonglong local_620 [8];
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int local_5d4;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  byte ****local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  ulonglong local_598;
  byte ****local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  ulonglong local_578;
  byte ****local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  ulonglong local_558;
  byte ****local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  ulonglong local_538;
  byte ****local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  ulonglong local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  byte ****local_4b0 [3];
  ulonglong local_498;
  byte ****local_490 [3];
  ulonglong local_478;
  byte ****local_470 [3];
  ulonglong local_458;
  byte ****local_450 [3];
  ulonglong local_438;
  byte ****local_430 [3];
  ulonglong local_418;
  byte ****local_410 [3];
  ulonglong local_3f8;
  byte ****local_3f0 [3];
  ulonglong local_3d8;
  undefined *local_3d0;
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined8 local_208;
  char *local_200;
  undefined1 local_1f8 [16];
  longlong local_1e8;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  int local_1a8 [2];
  void *local_1a0;
  void *pvStack_198;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined2 local_168;
  undefined1 local_166;
  void *local_160;
  void *pvStack_158;
  void *local_150;
  void *local_148;
  int local_138 [2];
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  longlong local_60;
  ulonglong local_50;
  
  puVar26 = auStack_668;
  puVar25 = auStack_668;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_668;
  iVar29 = 0;
  iVar28 = 0;
  local_628[0] = 0;
  local_3d0 = &DAT_1803e9140;
  iVar5 = _Mtx_lock(&DAT_1803e9140);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e918c == 0x7fffffff) {
    DAT_1803e918c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  local_5d0 = 0;
  uStack_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  FUN_18001d080(&local_5d0,&DAT_18033e5ea,0);
  local_5b0 = (byte ****)0x0;
  uStack_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  FUN_18001d080(&local_5b0,"netvars.override.name",0x15);
  pppppbVar21 = &local_5b0;
  if (0xf < local_598) {
    pppppbVar21 = (byte *****)local_5b0;
  }
  uVar15 = 0x14650fb0739d0383;
  for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
      pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
    uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
  }
  puVar14 = (undefined8 *)*param_1;
  cVar3 = *(char *)((longlong)puVar14[1] + 0x19);
  puVar8 = puVar14;
  puVar23 = (undefined8 *)puVar14[1];
  while (cVar3 == '\0') {
    if ((ulonglong)puVar23[4] < uVar15) {
      puVar13 = (undefined8 *)puVar23[2];
      puVar23 = puVar8;
    }
    else {
      puVar13 = (undefined8 *)*puVar23;
    }
    puVar8 = puVar23;
    puVar23 = puVar13;
    cVar3 = *(char *)((longlong)puVar13 + 0x19);
  }
  if (((*(char *)((longlong)puVar8 + 0x19) == '\0') && ((ulonglong)puVar8[4] <= uVar15)) &&
     (puVar8 != puVar14)) {
    puVar8 = puVar8 + 5;
  }
  else {
    puVar8 = &local_5d0;
  }
  FUN_18016d4c0(local_388,puVar8);
  local_628[0] = 0x8000;
  uVar6 = FUN_180029880(local_2e8,local_388,0x80);
  FUN_18020e8a0(&DAT_1803ebb90,uVar6);
  FUN_18020e450(local_2e8);
  local_628[0] = 0;
  FUN_18020e450(local_388);
  FUN_18020e450(&local_5b0);
  FUN_18020e450(&local_5d0);
  local_620[4] = 0;
  local_620[5] = 0;
  local_620[6] = 0;
  local_620[7] = 0;
  FUN_18001d080(local_620 + 4,&DAT_18033e5ea,0);
  local_590 = (byte ****)0x0;
  uStack_588 = 0;
  local_580 = 0;
  local_578 = 0;
  FUN_18001d080(&local_590,"netvars.override.group",0x16);
  pppppbVar21 = &local_590;
  if (0xf < local_578) {
    pppppbVar21 = (byte *****)local_590;
  }
  uVar15 = 0x14650fb0739d0383;
  for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
      pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
    uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
  }
  puVar8 = (undefined8 *)*param_1;
  cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
  puVar14 = puVar8;
  puVar23 = (undefined8 *)puVar8[1];
  while (cVar3 == '\0') {
    if ((ulonglong)puVar23[4] < uVar15) {
      puVar13 = (undefined8 *)puVar23[2];
      puVar23 = puVar14;
    }
    else {
      puVar13 = (undefined8 *)*puVar23;
    }
    puVar14 = puVar23;
    puVar23 = puVar13;
    cVar3 = *(char *)((longlong)puVar13 + 0x19);
  }
  if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] <= uVar15)) &&
     (puVar14 != puVar8)) {
    puVar22 = puVar14 + 5;
  }
  else {
    puVar22 = local_620 + 4;
  }
  FUN_18016d4c0(local_3a8,puVar22);
  local_628[0] = 0x4000;
  uVar6 = FUN_180029880(local_2c8,local_3a8,0x80);
  FUN_18020e8a0(&DAT_1803e9ae8,uVar6);
  FUN_18020e450(local_2c8);
  local_628[0] = 0;
  FUN_18020e450(local_3a8);
  FUN_18020e450(&local_590);
  FUN_18020e450(local_620 + 4);
  local_5d0 = 0;
  uStack_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  FUN_18001d080(&local_5d0,&DAT_18033e5ea,0);
  local_570 = (byte ****)0x0;
  uStack_568 = 0;
  local_560 = 0;
  local_558 = 0;
  FUN_18001d080(&local_570,"netvars.override.job",0x14);
  pppppbVar21 = &local_570;
  if (0xf < local_558) {
    pppppbVar21 = (byte *****)local_570;
  }
  uVar15 = 0x14650fb0739d0383;
  for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
      pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
    uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
  }
  puVar14 = (undefined8 *)*param_1;
  cVar3 = *(char *)((longlong)puVar14[1] + 0x19);
  puVar8 = puVar14;
  puVar23 = (undefined8 *)puVar14[1];
  while (cVar3 == '\0') {
    if ((ulonglong)puVar23[4] < uVar15) {
      puVar13 = (undefined8 *)puVar23[2];
      puVar23 = puVar8;
    }
    else {
      puVar13 = (undefined8 *)*puVar23;
    }
    puVar8 = puVar23;
    puVar23 = puVar13;
    cVar3 = *(char *)((longlong)puVar13 + 0x19);
  }
  if (((*(char *)((longlong)puVar8 + 0x19) == '\0') && ((ulonglong)puVar8[4] <= uVar15)) &&
     (puVar8 != puVar14)) {
    puVar8 = puVar8 + 5;
  }
  else {
    puVar8 = &local_5d0;
  }
  FUN_18016d4c0(local_3c8,puVar8);
  local_628[0] = 0x2000;
  uVar6 = FUN_180029880(local_2a8,local_3c8,0x80);
  FUN_18020e8a0(&DAT_1803ea258,uVar6);
  FUN_18020e450(local_2a8);
  local_628[0] = 0;
  FUN_18020e450(local_3c8);
  FUN_18020e450(&local_570);
  FUN_18020e450(&local_5d0);
  puVar8 = (undefined8 *)*param_1;
  cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
  puVar14 = puVar8;
  puVar23 = (undefined8 *)puVar8[1];
  while (cVar3 == '\0') {
    if ((ulonglong)puVar23[4] < 0x8df727bcac4037b1) {
      puVar13 = (undefined8 *)puVar23[2];
      puVar23 = puVar14;
    }
    else {
      puVar13 = (undefined8 *)*puVar23;
    }
    puVar14 = puVar23;
    puVar23 = puVar13;
    cVar3 = *(char *)((longlong)puVar13 + 0x19);
  }
  if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] < 0x8df727bcac4037b2)
      ) && (puVar14 != puVar8)) {
    local_5e0 = 0;
    local_550 = (byte ****)0x0;
    uStack_548 = 0;
    local_540 = 0;
    local_538 = 0;
    FUN_18001d080(&local_550,"netvars.count",0xd);
    pppppbVar21 = &local_550;
    if (0xf < local_538) {
      pppppbVar21 = (byte *****)local_550;
    }
    uVar15 = 0x14650fb0739d0383;
    for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
        pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
      uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
    }
    puVar8 = (undefined8 *)*param_1;
    cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
    puVar14 = puVar8;
    puVar23 = (undefined8 *)puVar8[1];
    while (cVar3 == '\0') {
      if ((ulonglong)puVar23[4] < uVar15) {
        puVar13 = (undefined8 *)puVar23[2];
        puVar23 = puVar14;
      }
      else {
        puVar13 = (undefined8 *)*puVar23;
      }
      puVar14 = puVar23;
      puVar23 = puVar13;
      cVar3 = *(char *)((longlong)puVar13 + 0x19);
    }
    local_5dc = iVar28;
    if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] <= uVar15)) &&
       (puVar14 != puVar8)) {
      local_208 = (char *)0x0;
      pcVar19 = (char *)(puVar14 + 5);
      pcVar16 = pcVar19;
      if (0xf < (ulonglong)puVar14[8]) {
        pcVar16 = *(char **)pcVar19;
      }
      local_5dc = strtol(pcVar16,(char **)&local_208,10);
      if (0xf < (ulonglong)puVar14[8]) {
        pcVar19 = *(char **)pcVar19;
      }
      if (local_208 == pcVar19) {
        local_5dc = iVar28;
      }
    }
    piVar7 = &local_5e0;
    if (-1 < local_5dc) {
      piVar7 = &local_5dc;
    }
    if (8 < local_5dc) {
      piVar7 = &DAT_18033c6a4;
    }
    iVar5 = *piVar7;
    local_208._0_4_ = iVar5;
    FUN_18020e450(&local_550);
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    if (0 < iVar5) {
      do {
        pcVar19 = (char *)0x0;
        uVar15 = 0x14650fb0739d0383;
        uVar6 = FUN_180013ba0(local_288,iVar29);
        puVar8 = (undefined8 *)FUN_18022a630(uVar6);
        local_510 = *puVar8;
        uStack_508 = puVar8[1];
        local_500 = puVar8[2];
        uStack_4f8 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        local_628[0] = 8;
        FUN_1801fc680(local_1f8,&local_510,&DAT_18033ea54);
        local_628[0] = 0;
        FUN_18020e450(&local_510);
        FUN_18020e450(local_288);
        local_1a8[0] = 0;
        pvStack_198 = (void *)0x0;
        local_190 = (void *)0x0;
        local_188 = (void *)0xf;
        local_1a0 = (void *)0x0;
        local_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 1;
        local_166 = 1;
        pvStack_158 = (void *)0x0;
        local_150 = (void *)0x0;
        local_148 = (void *)0xf;
        local_160 = (void *)0x0;
        local_4d0 = 0;
        uStack_4c8 = 0;
        local_4c0 = 0;
        local_4b8 = 0;
        FUN_18001d080(&local_4d0,&DAT_18033e5ea,0);
        if (0x7fffffffffffffffU - local_1e8 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_638 = 4;
        local_640 = "path";
        local_648 = local_1e8;
        FUN_18020e930(local_4b0);
        local_628[0] = 0x20;
        pppppbVar21 = local_4b0;
        if (0xf < local_498) {
          pppppbVar21 = (byte *****)local_4b0[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
            pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppbVar21) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        cVar3 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar8 = puVar14;
        puVar23 = (undefined8 *)puVar14[1];
        while (cVar3 == '\0') {
          if ((ulonglong)puVar23[4] < uVar17) {
            puVar13 = (undefined8 *)puVar23[2];
            puVar23 = puVar8;
          }
          else {
            puVar13 = (undefined8 *)*puVar23;
          }
          puVar8 = puVar23;
          puVar23 = puVar13;
          cVar3 = *(char *)((longlong)puVar13 + 0x19);
        }
        if (((*(char *)((longlong)puVar8 + 0x19) == '\0') && ((ulonglong)puVar8[4] <= uVar17)) &&
           (puVar8 != puVar14)) {
          puVar8 = puVar8 + 5;
        }
        else {
          puVar8 = &local_4d0;
        }
        FUN_18016d4c0(local_368,puVar8);
        uVar27 = 0x60;
        local_628[0] = 0x60;
        ppvVar9 = (void **)FUN_180029880(local_268,local_368,0x80);
        if (&local_1a0 != ppvVar9) {
          if ((void *)0xf < local_188) {
            puVar8 = (undefined8 *)((longlong)local_188 + 1);
            pvVar18 = local_1a0;
            if (((undefined8 *)0xfff < puVar8) &&
               (pvVar18 = *(void **)((longlong)local_1a0 + -8),
               0x1f < (ulonglong)((longlong)local_1a0 + (-8 - (longlong)pvVar18)))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar25 = auStack_660;
              goto LAB_18002c9ea;
            }
            free(pvVar18);
          }
          local_1a0 = *ppvVar9;
          pvStack_198 = ppvVar9[1];
          local_190 = ppvVar9[2];
          local_188 = ppvVar9[3];
          ppvVar9[2] = (void *)0x0;
          ppvVar9[3] = (void *)0xf;
          *(undefined1 *)ppvVar9 = 0;
        }
        FUN_18020e450(local_268);
        local_628[0] = 0x20;
        FUN_18020e450(local_368);
        local_628[0] = 0;
        FUN_18020e450(local_4b0);
        FUN_18020e450(&local_4d0);
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_88 = 0;
        local_80 = 0;
        local_78 = 0xf;
        local_90 = 0;
        cVar3 = FUN_180026bc0(&local_1a0,&local_a8,&local_90);
        if (cVar3 == '\0') {
          FUN_18020e450(&local_90);
          FUN_18020d5c0(&local_a8);
          FUN_18020e450(&local_160);
          FUN_18020d5c0(&local_180);
          FUN_18020e450(&local_1a0);
        }
        else {
          local_1a8[0] = DAT_1803e9130;
          if (0x7fffffffffffffffU - local_1e8 < 7) {
            DAT_1803e9130 = DAT_1803e9130 + 1;
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_638 = 7;
          local_640 = "enabled";
          local_648 = local_1e8;
          DAT_1803e9130 = DAT_1803e9130 + 1;
          FUN_18020e930(local_490);
          local_628[0] = 0x1000;
          pppppbVar21 = local_490;
          if (0xf < local_478) {
            pppppbVar21 = (byte *****)local_490[0];
          }
          uVar17 = 0x14650fb0739d0383;
          for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
              pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
            uVar17 = (uVar17 ^ *(byte *)pppppbVar21) * 0x100000001b3;
          }
          puVar8 = (undefined8 *)*param_1;
          cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
          puVar14 = puVar8;
          puVar23 = (undefined8 *)puVar8[1];
          while (cVar3 == '\0') {
            if ((ulonglong)puVar23[4] < uVar17) {
              puVar13 = (undefined8 *)puVar23[2];
              puVar23 = puVar14;
            }
            else {
              puVar13 = (undefined8 *)*puVar23;
            }
            puVar14 = puVar23;
            puVar23 = puVar13;
            cVar3 = *(char *)((longlong)puVar13 + 0x19);
          }
          if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] <= uVar17))
             && (puVar14 != puVar8)) {
            puVar23 = puVar14 + 5;
            pcVar19 = (char *)puVar14[7];
            uVar17 = puVar14[8];
            puVar8 = puVar23;
            if (0xf < uVar17) {
              puVar8 = (undefined8 *)*puVar23;
            }
            if ((pcVar19 == (char *)0x1) && (iVar5 = memcmp(puVar8,&DAT_18034124c,1), iVar5 == 0))
            goto LAB_18002c021;
            if (0xf < uVar17) {
              puVar23 = (undefined8 *)*puVar23;
            }
            if ((pcVar19 == (char *)0x4) && (iVar5 = memcmp(puVar23,&DAT_18033e5dc,4), iVar5 == 0))
            goto LAB_18002c021;
            uVar4 = 0;
          }
          else {
LAB_18002c021:
            uVar4 = 1;
          }
          local_168 = CONCAT11(local_168._1_1_,uVar4);
          local_628[0] = 0;
          FUN_18020e450(local_490);
          if (0x7fffffffffffffffU - local_1e8 < 0xb) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_638 = 0xb;
          local_640 = "tpl_enabled";
          local_648 = local_1e8;
          FUN_18020e930(local_470);
          local_628[0] = 0x80;
          pppppbVar21 = local_470;
          if (0xf < local_458) {
            pppppbVar21 = (byte *****)local_470[0];
          }
          uVar17 = 0x14650fb0739d0383;
          for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
              pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
            uVar17 = (uVar17 ^ *(byte *)pppppbVar21) * 0x100000001b3;
          }
          puVar8 = (undefined8 *)*param_1;
          cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
          puVar14 = puVar8;
          puVar23 = (undefined8 *)puVar8[1];
          while (cVar3 == '\0') {
            if ((ulonglong)puVar23[4] < uVar17) {
              puVar13 = (undefined8 *)puVar23[2];
              puVar23 = puVar14;
            }
            else {
              puVar13 = (undefined8 *)*puVar23;
            }
            puVar14 = puVar23;
            puVar23 = puVar13;
            cVar3 = *(char *)((longlong)puVar13 + 0x19);
          }
          if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] <= uVar17))
             && (puVar14 != puVar8)) {
            puVar23 = puVar14 + 5;
            pcVar19 = (char *)puVar14[7];
            uVar17 = puVar14[8];
            puVar8 = puVar23;
            if (0xf < uVar17) {
              puVar8 = (undefined8 *)*puVar23;
            }
            if ((pcVar19 != (char *)0x1) || (iVar5 = memcmp(puVar8,&DAT_18034124c,1), iVar5 != 0)) {
              if (0xf < uVar17) {
                puVar23 = (undefined8 *)*puVar23;
              }
              if ((pcVar19 != (char *)0x4) || (iVar5 = memcmp(puVar23,&DAT_18033e5dc,4), iVar5 != 0)
                 ) goto LAB_18002c179;
            }
            uVar4 = 1;
          }
          else {
LAB_18002c179:
            uVar4 = 0;
          }
          local_168 = CONCAT11(uVar4,(undefined1)local_168);
          local_628[0] = 0;
          FUN_18020e450(local_470);
          if (0x7fffffffffffffffU - local_1e8 < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_638 = 9;
          local_640 = "tpl_first";
          local_648 = local_1e8;
          FUN_18020e930(local_450);
          local_628[0] = 0x100;
          pppppbVar21 = local_450;
          if (0xf < local_438) {
            pppppbVar21 = (byte *****)local_450[0];
          }
          uVar17 = 0x14650fb0739d0383;
          for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
              pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
            uVar17 = (uVar17 ^ *(byte *)pppppbVar21) * 0x100000001b3;
          }
          puVar8 = (undefined8 *)*param_1;
          cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
          puVar14 = puVar8;
          puVar23 = (undefined8 *)puVar8[1];
          while (cVar3 == '\0') {
            if ((ulonglong)puVar23[4] < uVar17) {
              puVar13 = (undefined8 *)puVar23[2];
              puVar23 = puVar14;
            }
            else {
              puVar13 = (undefined8 *)*puVar23;
            }
            puVar14 = puVar23;
            puVar23 = puVar13;
            cVar3 = *(char *)((longlong)puVar13 + 0x19);
          }
          if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] <= uVar17))
             && (puVar14 != puVar8)) {
            puVar23 = puVar14 + 5;
            pcVar19 = (char *)puVar14[7];
            uVar17 = puVar14[8];
            puVar8 = puVar23;
            if (0xf < uVar17) {
              puVar8 = (undefined8 *)*puVar23;
            }
            if ((pcVar19 == (char *)0x1) && (iVar5 = memcmp(puVar8,&DAT_18034124c,1), iVar5 == 0))
            goto LAB_18002c2ca;
            if (0xf < uVar17) {
              puVar23 = (undefined8 *)*puVar23;
            }
            if ((pcVar19 == (char *)0x4) && (iVar5 = memcmp(puVar23,&DAT_18033e5dc,4), iVar5 == 0))
            goto LAB_18002c2ca;
            local_166 = 0;
          }
          else {
LAB_18002c2ca:
            local_166 = 1;
          }
          local_628[0] = 0;
          FUN_18020e450(local_450);
          local_4f0 = 0;
          uStack_4e8 = 0;
          local_4e0 = 0;
          local_4d8 = 0;
          FUN_18001d080(&local_4f0,&DAT_18033e5ea,0);
          if (0x7fffffffffffffffU - local_1e8 < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_638 = 3;
          local_640 = "tpl";
          local_648 = local_1e8;
          FUN_18020e930(local_430);
          local_628[0] = 0x200;
          pppppbVar21 = local_430;
          if (0xf < local_418) {
            pppppbVar21 = (byte *****)local_430[0];
          }
          uVar17 = 0x14650fb0739d0383;
          for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
              pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
            uVar17 = (uVar17 ^ *(byte *)pppppbVar21) * 0x100000001b3;
          }
          puVar14 = (undefined8 *)*param_1;
          cVar3 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar8 = puVar14;
          puVar23 = (undefined8 *)puVar14[1];
          while (cVar3 == '\0') {
            if ((ulonglong)puVar23[4] < uVar17) {
              puVar13 = (undefined8 *)puVar23[2];
              puVar23 = puVar8;
            }
            else {
              puVar13 = (undefined8 *)*puVar23;
            }
            puVar8 = puVar23;
            puVar23 = puVar13;
            cVar3 = *(char *)((longlong)puVar13 + 0x19);
          }
          if (((*(char *)((longlong)puVar8 + 0x19) == '\0') && ((ulonglong)puVar8[4] <= uVar17)) &&
             (puVar8 != puVar14)) {
            puVar8 = puVar8 + 5;
          }
          else {
            puVar8 = &local_4f0;
          }
          FUN_18016d4c0(local_348,puVar8);
          uVar27 = 0x600;
          local_628[0] = 0x600;
          ppvVar9 = (void **)FUN_180029880(local_248,local_348,0x80);
          if (&local_160 != ppvVar9) {
            if ((void *)0xf < local_148) {
              puVar8 = (undefined8 *)((longlong)local_148 + 1);
              pvVar18 = local_160;
              if (((undefined8 *)0xfff < puVar8) &&
                 (pvVar18 = *(void **)((longlong)local_160 + -8),
                 0x1f < (ulonglong)((longlong)local_160 + (-8 - (longlong)pvVar18)))) {
LAB_18002c9ea:
                pcVar2 = (code *)swi(0x29);
                puVar14 = (undefined8 *)(*pcVar2)(5);
                puVar26 = puVar25 + 8;
                goto LAB_18002c9f1;
              }
              free(pvVar18);
            }
            local_160 = *ppvVar9;
            pvStack_158 = ppvVar9[1];
            local_150 = ppvVar9[2];
            local_148 = ppvVar9[3];
            ppvVar9[2] = (void *)0x0;
            ppvVar9[3] = (void *)0xf;
            *(undefined1 *)ppvVar9 = 0;
          }
          FUN_18020e450(local_248);
          local_628[0] = 0x200;
          FUN_18020e450(local_348);
          local_628[0] = 0;
          FUN_18020e450(local_430);
          FUN_18020e450(&local_4f0);
          local_5d8 = 0;
          if (0x7fffffffffffffffU - local_1e8 < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_638 = 8;
          local_640 = "keycount";
          local_648 = local_1e8;
          FUN_18020e930(local_410);
          local_628[0] = 0x800;
          pppppbVar21 = local_410;
          if (0xf < local_3f8) {
            pppppbVar21 = (byte *****)local_410[0];
          }
          uVar15 = 0x14650fb0739d0383;
          for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
              pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
            uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
          }
          puVar8 = (undefined8 *)*param_1;
          cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
          puVar14 = puVar8;
          puVar23 = (undefined8 *)puVar8[1];
          while (cVar3 == '\0') {
            if ((ulonglong)puVar23[4] < uVar15) {
              puVar13 = (undefined8 *)puVar23[2];
              puVar23 = puVar14;
            }
            else {
              puVar13 = (undefined8 *)*puVar23;
            }
            puVar14 = puVar23;
            puVar23 = puVar13;
            cVar3 = *(char *)((longlong)puVar13 + 0x19);
          }
          if (((*(char *)((longlong)puVar14 + 0x19) == '\0') && ((ulonglong)puVar14[4] <= uVar15))
             && (puVar14 != puVar8)) {
            local_200 = (char *)0x0;
            pcVar16 = (char *)(puVar14 + 5);
            pcVar19 = pcVar16;
            if (0xf < (ulonglong)puVar14[8]) {
              pcVar19 = *(char **)pcVar16;
            }
            local_5d4 = strtol(pcVar19,&local_200,10);
            if (0xf < (ulonglong)puVar14[8]) {
              pcVar16 = *(char **)pcVar16;
            }
            if (local_200 == pcVar16) {
              local_5d4 = 0;
            }
          }
          else {
            local_5d4 = 0;
          }
          piVar7 = &local_5d8;
          if (-1 < local_5d4) {
            piVar7 = &local_5d4;
          }
          if (0x10 < local_5d4) {
            piVar7 = &DAT_18033c6a8;
          }
          iVar5 = *piVar7;
          local_628[0] = 0;
          FUN_18020e450(local_410);
          iVar28 = 0;
          if (0 < iVar5) {
            do {
              local_620[4] = 0;
              local_620[5] = 0;
              local_620[6] = 0;
              local_620[7] = 0;
              FUN_18001d080(local_620 + 4,&DAT_18033e5ea,0);
              FUN_180013ba0(local_228,iVar28);
              if (0x7fffffffffffffffU - local_1e8 < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_1800130a0();
              }
              local_638 = 4;
              local_640 = "key.";
              local_648 = local_1e8;
              FUN_18020e930(local_308);
              local_628[0] = 2;
              FUN_18021e540(local_3f0);
              local_628[0] = 6;
              pppppbVar21 = local_3f0;
              if (0xf < local_3d8) {
                pppppbVar21 = (byte *****)local_3f0[0];
              }
              uVar15 = 0x14650fb0739d0383;
              for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
                  pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
                uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
              }
              puVar8 = (undefined8 *)*param_1;
              cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
              puVar14 = puVar8;
              puVar23 = (undefined8 *)puVar8[1];
              while (cVar3 == '\0') {
                if ((ulonglong)puVar23[4] < uVar15) {
                  puVar13 = (undefined8 *)puVar23[2];
                  puVar23 = puVar14;
                }
                else {
                  puVar13 = (undefined8 *)*puVar23;
                }
                puVar14 = puVar23;
                puVar23 = puVar13;
                cVar3 = *(char *)((longlong)puVar13 + 0x19);
              }
              if (((*(char *)((longlong)puVar14 + 0x19) == '\0') &&
                  ((ulonglong)puVar14[4] <= uVar15)) && (puVar14 != puVar8)) {
                puVar22 = puVar14 + 5;
              }
              else {
                puVar22 = local_620 + 4;
              }
              FUN_18016d4c0(local_328,puVar22);
              local_628[0] = 7;
              FUN_180029880(local_70,local_328);
              local_628[0] = 6;
              FUN_18020e450(local_328);
              local_628[0] = 2;
              FUN_18020e450(local_3f0);
              local_628[0] = 0;
              FUN_18020e450(local_308);
              FUN_18020e450(local_228);
              FUN_18020e450(local_620 + 4);
              if (local_60 != 0) {
                FUN_180214300(&local_180,local_70);
              }
              FUN_18020e450(local_70);
              iVar28 = iVar28 + 1;
            } while (iVar28 < iVar5);
          }
          if (uStack_1d0 == local_1c8) {
            FUN_180229690(&local_1d8,uStack_1d0,local_1a8);
          }
          else {
            FUN_180210160(uStack_1d0,local_1a8);
            uStack_1d0 = uStack_1d0 + 0x68;
          }
          FUN_18020e450(&local_90);
          FUN_18020d5c0(&local_a8);
          FUN_18020e450(&local_160);
          FUN_18020d5c0(&local_180);
          FUN_18020e450(&local_1a0);
        }
        FUN_18020e450(local_1f8);
        iVar29 = iVar29 + 1;
      } while (iVar29 < (int)local_208);
    }
    uVar24 = DAT_1803e9b18;
    uVar20 = DAT_1803e9b10;
    uVar17 = DAT_1803e9b08;
    uVar27 = 0;
    pcVar19 = (char *)0x0;
    uVar15 = 0x14650fb0739d0383;
    DAT_1803e9b08 = local_1d8;
    local_1d8 = uVar17;
    DAT_1803e9b10 = uStack_1d0;
    uStack_1d0 = uVar20;
    DAT_1803e9b18 = local_1c8;
    local_1c8 = uVar24;
    local_530 = (byte ****)0x0;
    uStack_528 = 0;
    local_520 = 0;
    local_518 = 0;
    FUN_18001d080(&local_530,"netvars.version",0xf);
    pppppbVar21 = &local_530;
    if (0xf < local_518) {
      pppppbVar21 = (byte *****)local_530;
    }
    for (; (pppppbVar21 != (byte *****)0x0 && (*(byte *)pppppbVar21 != 0));
        pppppbVar21 = (byte *****)((longlong)pppppbVar21 + 1)) {
      uVar15 = (uVar15 ^ *(byte *)pppppbVar21) * 0x100000001b3;
    }
    puVar8 = (undefined8 *)*param_1;
    cVar3 = *(char *)((longlong)puVar8[1] + 0x19);
    puVar23 = puVar8;
    puVar14 = (undefined8 *)puVar8[1];
    puVar26 = auStack_668;
    while (cVar3 == '\0') {
      if ((ulonglong)puVar14[4] < uVar15) {
        puVar13 = (undefined8 *)puVar14[2];
        puVar14 = puVar23;
      }
      else {
LAB_18002c9f1:
        puVar13 = (undefined8 *)*puVar14;
      }
      puVar23 = puVar14;
      puVar14 = puVar13;
      cVar3 = *(char *)((longlong)puVar13 + 0x19);
    }
    if (((*(char *)((longlong)puVar23 + 0x19) == '\0') && ((ulonglong)puVar23[4] <= uVar15)) &&
       (puVar23 != puVar8)) {
      pcVar16 = (char *)(puVar23 + 5);
      _Str = pcVar16;
      if (0xf < (ulonglong)puVar23[8]) {
        _Str = *(char **)pcVar16;
      }
      *(undefined8 *)(puVar26 + -8) = 0x18002ca39;
      local_200 = pcVar19;
      iVar5 = strtol(_Str,&local_200,10);
      if (0xf < (ulonglong)puVar23[8]) {
        pcVar16 = *(char **)pcVar16;
      }
      if (local_200 == pcVar16) {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 1;
    }
    local_208 = (char *)CONCAT44(local_208._4_4_,iVar5);
    *(undefined8 *)(puVar26 + -8) = 0x18002ca74;
    FUN_18020e450(&local_530);
    if (iVar5 < 6) {
      uVar20 = (ulonglong)pcVar19 & 0xffffffff;
      iVar29 = (int)pcVar19;
      *(undefined8 *)(puVar26 + -8) = 0x18002ca85;
      plVar10 = (longlong *)FUN_180029cc0();
      puVar8 = (undefined8 *)*plVar10;
      puVar14 = (undefined8 *)plVar10[1];
      uVar17 = DAT_1803e9b08;
      uVar15 = DAT_1803e9b10;
      if (puVar8 != puVar14) {
        do {
          uVar15 = DAT_1803e9b10;
          iVar29 = (int)uVar20;
          uVar17 = DAT_1803e9b08;
          if (7 < (int)((longlong)(DAT_1803e9b10 - DAT_1803e9b08) >> 3) * -0x3b13b13b) {
LAB_18002ce82:
            iVar5 = (int)local_208;
            goto LAB_18002ce88;
          }
          pcVar19 = (char *)*puVar8;
          local_1c0 = 0;
          lStack_1b8 = 0;
          uVar17 = 0;
          local_1b0 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0xf;
          local_c8 = 0;
          *(undefined8 *)(puVar26 + 0x68) = 0;
          *(undefined8 *)(puVar26 + 0x70) = 0;
          *(undefined8 *)(puVar26 + 0x78) = 0;
          local_620[7] = 0;
          *(undefined8 *)(puVar26 + -8) = 0x18002cb32;
          sVar11 = strlen(pcVar19);
          *(undefined8 *)(puVar26 + -8) = 0x18002cb42;
          FUN_18001d080(puVar26 + 0x68,pcVar19,sVar11);
          *(undefined8 *)(puVar26 + -8) = 0x18002cb5b;
          cVar3 = FUN_180026bc0(puVar26 + 0x68,&local_1c0,&local_c8);
          *(undefined8 *)(puVar26 + -8) = 0x18002cb68;
          FUN_18020e450(puVar26 + 0x68);
          if (cVar3 != '\0') {
            *(undefined8 *)(puVar26 + -8) = 0x18002cb7e;
            cVar3 = FUN_180027310(&local_1c0,0);
            if (cVar3 == '\0') {
              uStack_128 = 0;
              local_120 = 0;
              local_118 = 0xf;
              local_130 = (void *)0x0;
              local_110 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_f8 = 1;
              local_f6 = 1;
              uStack_e8 = 0;
              local_e0 = 0;
              local_d8 = 0xf;
              local_f0 = 0;
              iVar5 = DAT_1803e9130 + 1;
              local_138[0] = DAT_1803e9130;
              *(undefined8 *)(puVar26 + 0x48) = 0;
              *(undefined8 *)(puVar26 + 0x50) = 0;
              *(undefined8 *)(puVar26 + 0x58) = 0;
              *(undefined8 *)(puVar26 + 0x60) = 0;
              *(undefined8 *)(puVar26 + 0x58) = 0;
              uVar20 = 0xf;
              *(undefined8 *)(puVar26 + 0x60) = 0xf;
              puVar26[0x48] = 0;
              *(uint *)(puVar26 + 0x40) = uVar27 | 0x10000;
              uVar24 = uVar17;
              DAT_1803e9130 = iVar5;
              if (lStack_1b8 - local_1c0 >> 5 != 0) {
                do {
                  if (uVar24 != 0) {
                    uVar1 = *(ulonglong *)(puVar26 + 0x58);
                    if (uVar1 < uVar20) {
                      *(ulonglong *)(puVar26 + 0x58) = uVar1 + 1;
                      puVar12 = puVar26 + 0x48;
                      if (0xf < uVar20) {
                        puVar12 = *(undefined1 **)(puVar26 + 0x48);
                      }
                      *(undefined2 *)(puVar12 + uVar1) = 0x2e;
                    }
                    else {
                      *(undefined8 *)(puVar26 + -8) = 0x18002cca1;
                      FUN_18021abd0(puVar26 + 0x48);
                    }
                  }
                  puVar23 = (undefined8 *)(uVar24 * 0x20 + local_1c0);
                  uVar6 = puVar23[2];
                  if (0xf < (ulonglong)puVar23[3]) {
                    puVar23 = (undefined8 *)*puVar23;
                  }
                  *(undefined8 *)(puVar26 + -8) = 0x18002ccc7;
                  FUN_18021aef0(puVar26 + 0x48,puVar23,uVar6);
                  uVar24 = uVar24 + 1;
                  uVar20 = *(ulonglong *)(puVar26 + 0x60);
                } while (uVar24 < (ulonglong)(lStack_1b8 - local_1c0 >> 5));
              }
              if (0xf < local_118) {
                pvVar18 = local_130;
                if ((0xfff < local_118 + 1) &&
                   (pvVar18 = *(void **)((longlong)local_130 + -8),
                   0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)pvVar18)))) {
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  puVar26 = puVar26 + 8;
                  goto LAB_18002ce82;
                }
                *(undefined8 *)(puVar26 + -8) = 0x18002cd2b;
                free(pvVar18);
                uVar20 = *(ulonglong *)(puVar26 + 0x60);
              }
              local_120 = 0;
              local_118 = 0xf;
              local_130 = (void *)((ulonglong)local_130 & 0xffffffffffffff00);
              local_130 = *(void **)(puVar26 + 0x48);
              uStack_128 = *(undefined8 *)(puVar26 + 0x50);
              local_120 = *(undefined8 *)(puVar26 + 0x58);
              *(undefined8 *)(puVar26 + 0x58) = 0;
              *(undefined8 *)(puVar26 + 0x60) = 0xf;
              puVar26[0x48] = 0;
              *(uint *)(puVar26 + 0x40) = uVar27;
              *(undefined8 *)(puVar26 + -8) = 0x18002cd99;
              local_118 = uVar20;
              FUN_18020e450(puVar26 + 0x48);
              *(undefined8 *)(puVar26 + -8) = 0x18002cd9e;
              puVar13 = (undefined8 *)FUN_180029ed0();
              puVar23 = (undefined8 *)puVar13[1];
              for (puVar13 = (undefined8 *)*puVar13; puVar13 != puVar23; puVar13 = puVar13 + 1) {
                local_200 = (char *)*puVar13;
                *(undefined8 *)(puVar26 + -8) = 0x18002cdcd;
                FUN_180210ae0(&local_110,&local_200);
              }
              if (DAT_1803e9b10 == DAT_1803e9b18) {
                *(undefined8 *)(puVar26 + -8) = 0x18002ce15;
                FUN_180229690(&DAT_1803e9b08,DAT_1803e9b10,local_138);
              }
              else {
                *(undefined8 *)(puVar26 + -8) = 0x18002cdf5;
                FUN_180210160(DAT_1803e9b10,local_138);
                DAT_1803e9b10 = DAT_1803e9b10 + 0x68;
              }
              uVar20 = (ulonglong)(iVar29 + 1);
              *(undefined8 *)(puVar26 + -8) = 0x18002ce24;
              FUN_18020e450(&local_f0);
              *(undefined8 *)(puVar26 + -8) = 0x18002ce31;
              FUN_18020d5c0(&local_110);
              *(undefined8 *)(puVar26 + -8) = 0x18002ce3e;
              FUN_18020e450(&local_130);
            }
          }
          iVar29 = (int)uVar20;
          *(undefined8 *)(puVar26 + -8) = 0x18002ce4b;
          FUN_18020e450(&local_c8);
          *(undefined8 *)(puVar26 + -8) = 0x18002ce58;
          FUN_18020d5c0(&local_1c0);
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar14);
        uVar17 = DAT_1803e9b08;
        uVar15 = DAT_1803e9b10;
        iVar5 = (int)local_208;
      }
LAB_18002ce88:
      iVar28 = 0;
      if ((iVar5 == 5) && (uVar17 != uVar15)) {
        do {
          *(undefined8 *)(puVar26 + -8) = 0x18002cea9;
          iVar5 = FUN_180026950(uVar17 + 8);
          if ((iVar5 != 0) && (*(longlong *)(uVar17 + 0x28) == *(longlong *)(uVar17 + 0x30))) {
            *(undefined8 *)(puVar26 + -8) = 0x18002cebc;
            puVar14 = (undefined8 *)FUN_180029ed0();
            puVar8 = (undefined8 *)puVar14[1];
            for (puVar14 = (undefined8 *)*puVar14; puVar14 != puVar8; puVar14 = puVar14 + 1) {
              local_200 = (char *)*puVar14;
              *(undefined8 *)(puVar26 + -8) = 0x18002ceea;
              FUN_180210ae0(uVar17 + 0x28,&local_200);
            }
            iVar28 = iVar28 + 1;
          }
          uVar17 = uVar17 + 0x68;
        } while (uVar17 != uVar15);
        iVar5 = (int)local_208;
      }
      if ((iVar29 != 0) || (iVar28 != 0)) {
        *(int *)(puVar26 + 0x20) = iVar28;
        *(undefined8 *)(puVar26 + -8) = 0x18002cf2b;
        FUN_180014410("[NETVARS] migrated config v%d -> v%d: %d source(s) added, %d NW pseudo-store(s) re-seeded with name keys\n"
                      ,iVar5,6,iVar29);
      }
    }
    DAT_180423751 = 1;
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
    *(undefined8 *)(puVar26 + -8) = 0x18002cf45;
    FUN_18021d720(&local_1d8);
  }
  else {
    FUN_180029fc0();
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar26 + -8) = 0x18002cf60;
  _Mtx_unlock(&DAT_1803e9140);
  *(undefined8 *)(puVar26 + -8) = 0x18002cf6f;
  return;
}


