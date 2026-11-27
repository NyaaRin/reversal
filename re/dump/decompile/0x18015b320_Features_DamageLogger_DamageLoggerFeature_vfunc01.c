// 0x18015b320  Features_DamageLogger_DamageLoggerFeature_vfunc01
// size=4147 thunk=false
// signature: undefined Features_DamageLogger_DamageLoggerFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018015bab9) */
/* WARNING: Type propagation algorithm not settling */

void Features_DamageLogger_DamageLoggerFeature_vfunc01(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  BOOL BVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  char *_Str;
  size_t sVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *******pppppppuVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int *piVar22;
  uint uVar23;
  float fVar24;
  undefined1 auStack_4c8 [32];
  undefined8 *******local_4a8;
  int *local_4a0;
  undefined8 *******local_498;
  undefined1 local_490;
  char local_488;
  uint local_484;
  char local_480;
  char local_47f;
  int local_47c;
  char local_478;
  int local_474;
  int local_470;
  float local_46c;
  int *local_468;
  int local_460;
  int local_45c;
  longlong *local_458;
  longlong *local_450;
  int *local_448;
  int local_440;
  int local_43c [3];
  longlong local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  int local_388 [8];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  int local_2c8 [8];
  undefined1 local_2a8 [16];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  int local_1b8 [2];
  undefined8 *******local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  ulonglong local_198;
  undefined8 *******local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  int local_f0 [8];
  undefined8 ******local_d0 [2];
  longlong local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_4c8;
  uVar19 = 0;
  local_484 = 0;
  local_430 = param_1;
  if ((DAT_18042586c == '\0') && (DAT_18042586b == '\0')) {
    local_480 = '\0';
    cVar8 = FUN_1801596b0();
    if (cVar8 == '\0') {
      FUN_18020a670(param_1 + 0x30);
      FUN_18021c260(param_1 + 8);
      return;
    }
  }
  else {
    local_480 = '\x01';
  }
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar12 = (longlong *)(*pcVar3)(DAT_1803fa360,uVar9);
  local_450 = plVar12;
  if ((((plVar12 == (longlong *)0x0) || (BVar10 = IsBadReadPtr(plVar12,8), BVar10 != 0)) ||
      (BVar10 = IsBadReadPtr((void *)*plVar12,8), BVar10 != 0)) ||
     (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12), plVar12 == (longlong *)0x0)) {
    local_47c = -1;
  }
  else {
    local_47c = (**(code **)(*plVar12 + 0x48))(plVar12);
  }
  iVar18 = local_47c;
  if (DAT_1803fa608 == (float *)0x0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = *DAT_1803fa608;
  }
  local_460 = 0x80;
  local_470 = local_47c;
  local_46c = fVar24;
  if (DAT_1803fa668 != (longlong *)0x0) {
    iVar11 = (**(code **)(*DAT_1803fa668 + 0xa8))();
    local_460 = 0x80;
    if (iVar11 - 1U < 0x80) {
      local_460 = iVar11;
    }
  }
  fVar7 = DAT_180380db8;
  fVar6 = DAT_180380bf0;
  fVar5 = DAT_180380a88;
  local_1b8[0] = 1;
  uVar20 = uVar19;
LAB_18015b4c0:
  do {
    if (local_460 < local_1b8[0]) {
      return;
    }
    local_458 = (longlong *)0x0;
    plVar12 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_1b8[0]);
    local_458 = plVar12;
    if ((plVar12 == (longlong *)0x0) || (BVar10 = IsBadReadPtr(plVar12,8), BVar10 != 0)) {
LAB_18015b550:
      local_488 = '\0';
    }
    else {
      BVar10 = IsBadReadPtr((void *)*plVar12,8);
      local_488 = '\x01';
      if (BVar10 != 0) goto LAB_18015b550;
    }
    local_47f = '\0';
    local_478 = '\x01';
    local_474 = -1;
    if ((local_488 != '\0') &&
       (local_47f = (**(code **)(*plVar12 + 0x420))(plVar12), local_47f != '\0')) {
      plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
      if (plVar13 == (longlong *)0x0) {
        local_478 = '\x01';
      }
      else {
        local_478 = (**(code **)(*plVar13 + 0x40))(plVar13);
      }
      local_474 = FUN_18001c680(plVar12);
    }
    iVar11 = local_474;
    plVar13 = (longlong *)FUN_180216850(local_430 + 0x30,local_2a8,local_1b8);
    lVar4 = *plVar13;
    piVar22 = (int *)(lVar4 + 0x28);
    local_468 = piVar22;
    if ((((local_488 != '\0') && (local_47f != '\0')) && (local_478 == '\0')) &&
       ((-1 < iVar11 && (iVar11 < 0x186a1)))) {
      if (local_1b8[0] == iVar18) {
        local_348 = 0;
        uStack_340 = 0;
        local_338 = 0;
        local_330 = 0;
        FUN_18001d080(&local_348,&DAT_1803601d8,3);
        puVar16 = &local_348;
        uVar20 = uVar20 | 1;
      }
      else {
        puVar16 = (undefined8 *)FUN_180159750(local_298,local_1b8[0],local_450);
        uVar20 = uVar20 | 2;
      }
      local_448 = (int *)(lVar4 + 0x60);
      local_484 = uVar20;
      FUN_18020e8a0(local_448,puVar16);
      if ((uVar20 & 2) != 0) {
        uVar20 = uVar20 & 0xfffffffd;
        local_484 = uVar20;
        FUN_18020e450(local_298);
      }
      if ((uVar20 & 1) != 0) {
        uVar20 = uVar20 & 0xfffffffe;
        local_484 = uVar20;
        FUN_18020e450(&local_348);
      }
      local_488 = FUN_18015a0a0(plVar12,iVar11);
      iVar2 = *piVar22;
      if ((-1 < iVar2) && (iVar11 < iVar2)) {
        if (local_1b8[0] - 1U < 0x81) {
          bVar21 = fVar24 - *(float *)((longlong)&DAT_1803e7d00 + (longlong)local_1b8[0] * 8 + 4) <
                   fVar5;
        }
        else {
          bVar21 = false;
        }
        piVar22 = local_468;
        if ((0 < iVar2 - iVar11) && (iVar2 - iVar11 < 0x3e9)) {
          uStack_1a8 = 0;
          local_1a0 = 0;
          local_198 = 0xf;
          local_1b0 = (undefined8 *******)0x0;
          local_498 = &local_1b0;
          local_4a0 = local_43c;
          local_4a8 = (undefined8 *******)&local_440;
          FUN_180159dc0(local_430,local_1b8[0],iVar18,fVar24);
          iVar11 = local_440;
          if ((local_440 < 1) || (uVar23 = uVar19, local_440 != iVar18)) {
            uVar23 = (local_1b8[0] != local_47c) + 1;
          }
          if (local_440 < 1) {
            local_368 = 0;
            uStack_360 = 0;
            local_358 = 0;
            uStack_350 = 0;
            FUN_18001d080(&local_368,&DAT_18033e9cc,1);
            puVar16 = &local_368;
            uVar20 = uVar20 | 0x10;
LAB_18015b93d:
            local_3e8 = 0;
            uStack_3e0 = 0;
            local_3d8 = 0;
            uStack_3d0 = 0;
            local_3e8 = *puVar16;
            uStack_3e0 = puVar16[1];
            local_3d8 = puVar16[2];
            uStack_3d0 = puVar16[3];
            puVar16[2] = 0;
            puVar16[3] = 0xf;
            *(undefined1 *)puVar16 = 0;
            puVar16 = &local_3e8;
            uVar20 = uVar20 | 0x20;
          }
          else {
            if (local_440 != local_47c) {
              puVar16 = (undefined8 *)FUN_180159750(local_258,local_440,local_450);
              uVar20 = uVar20 | 8;
              goto LAB_18015b93d;
            }
            local_328 = 0;
            uStack_320 = 0;
            local_318 = 0;
            uStack_310 = 0;
            FUN_18001d080(&local_328,&DAT_1803601d8,3);
            puVar16 = &local_328;
            uVar20 = uVar20 | 4;
          }
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_130 = *puVar16;
          uStack_128 = puVar16[1];
          local_120 = puVar16[2];
          uStack_118 = puVar16[3];
          puVar16[2] = 0;
          puVar16[3] = 0xf;
          *(undefined1 *)puVar16 = 0;
          local_484 = uVar20;
          if ((uVar20 & 0x20) != 0) {
            uVar20 = uVar20 & 0xffffffdf;
            local_484 = uVar20;
            FUN_18020e450(&local_3e8);
          }
          if ((uVar20 & 0x10) != 0) {
            uVar20 = uVar20 & 0xffffffef;
            local_484 = uVar20;
            FUN_18020e450(&local_368);
          }
          if ((uVar20 & 8) != 0) {
            uVar20 = uVar20 & 0xfffffff7;
            local_484 = uVar20;
            FUN_18020e450(local_258);
          }
          if ((uVar20 & 4) != 0) {
            uVar20 = uVar20 & 0xfffffffb;
            local_484 = uVar20;
            FUN_18020e450(&local_328);
          }
          FUN_18016d4c0(local_90,local_448);
          if (local_43c[0] < 0) {
            _Str = "";
          }
          else {
            _Str = (char *)FUN_18006b160();
          }
          local_f0[0] = 0;
          local_f0[1] = 0;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          local_f0[5] = 0;
          local_f0[6] = 0;
          local_f0[7] = 0;
          sVar14 = strlen(_Str);
          FUN_18001d080(local_f0,_Str,sVar14);
          if ((local_480 != '\0') && (bVar21 == false)) {
            local_498 = (undefined8 *******)CONCAT44(local_498._4_4_,local_474);
            local_4a0 = local_f0;
            local_4a8 = &local_1b0;
            local_490 = bVar21;
            FUN_18006b200(uVar23,&local_130,local_90);
          }
          piVar22 = local_468;
          local_468[2] = (int)fVar24;
          if ((0 < iVar11) || (bVar21 == false)) {
            local_468[4] = iVar11;
          }
          if (((local_1a0 != 0) || (bVar21 == false)) &&
             ((undefined8 ********)(local_468 + 6) != &local_1b0)) {
            pppppppuVar17 = &local_1b0;
            if (0xf < local_198) {
              pppppppuVar17 = local_1b0;
            }
            FUN_180212700(local_468 + 6,pppppppuVar17);
          }
          FUN_18020e450(local_f0);
          FUN_18020e450(local_90);
          FUN_18020e450(&local_130);
          FUN_18020e450(&local_1b0);
        }
      }
      piVar1 = piVar22 + 1;
      local_448 = piVar1;
      if (((char)*piVar1 != '\0') && (local_488 == '\0')) {
        iVar18 = piVar22[4];
        FUN_18016d4c0(local_d0,piVar22 + 6);
        iVar11 = local_47c;
        if ((iVar18 < 1) || (fVar6 < fVar24 - (float)piVar22[2])) {
          local_45c = -1;
          local_43c[1] = 0xffffffff;
          uStack_188 = 0;
          local_180 = 0;
          local_178 = 0xf;
          local_190 = (undefined8 *******)0x0;
          local_498 = &local_190;
          local_4a0 = local_43c + 1;
          local_4a8 = (undefined8 *******)&local_45c;
          FUN_180159dc0(local_430,local_1b8[0],local_47c,fVar24);
          iVar18 = local_45c;
          pppppppuVar17 = &local_190;
          if (0xf < local_178) {
            pppppppuVar17 = local_190;
          }
          FUN_180212700(local_d0,pppppppuVar17,local_180);
          if (local_c0 == 0) {
            uVar15 = FUN_180159980(local_238,iVar18);
            FUN_18020e8a0(local_d0,uVar15);
            FUN_18020e450(local_238);
          }
          FUN_18020e450(&local_190);
          if (0 < iVar18) goto LAB_18015bd63;
LAB_18015bced:
          cVar8 = (local_1b8[0] != iVar11) + '\x01';
        }
        else {
LAB_18015bd63:
          cVar8 = '\0';
          if (iVar18 != iVar11) goto LAB_18015bced;
        }
        if (iVar18 < 1) {
          local_308 = 0;
          uStack_300 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          FUN_18001d080(&local_308,&DAT_18033e9cc,1);
          puVar16 = &local_308;
          uVar20 = uVar20 | 0x100;
LAB_18015bdc9:
          local_408 = 0;
          uStack_400 = 0;
          local_3f8 = 0;
          uStack_3f0 = 0;
          local_408 = *puVar16;
          uStack_400 = puVar16[1];
          local_3f8 = puVar16[2];
          uStack_3f0 = puVar16[3];
          puVar16[2] = 0;
          puVar16[3] = 0xf;
          *(undefined1 *)puVar16 = 0;
          puVar16 = &local_408;
          uVar20 = uVar20 | 0x200;
        }
        else {
          if (iVar18 != iVar11) {
            puVar16 = (undefined8 *)FUN_180159750(local_218,iVar18,local_450);
            uVar20 = uVar20 | 0x80;
            goto LAB_18015bdc9;
          }
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2d8 = 0;
          local_2d0 = 0;
          FUN_18001d080(&local_2e8,&DAT_1803601d8,3);
          puVar16 = &local_2e8;
          uVar20 = uVar20 | 0x40;
        }
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = *puVar16;
        uStack_108 = puVar16[1];
        local_100 = puVar16[2];
        uStack_f8 = puVar16[3];
        puVar16[2] = 0;
        puVar16[3] = 0xf;
        *(undefined1 *)puVar16 = 0;
        local_484 = uVar20;
        if ((uVar20 >> 9 & 1) != 0) {
          uVar20 = uVar20 & 0xfffffdff;
          local_484 = uVar20;
          FUN_18020e450(&local_408);
        }
        if ((uVar20 >> 8 & 1) != 0) {
          uVar20 = uVar20 & 0xfffffeff;
          local_484 = uVar20;
          FUN_18020e450(&local_308);
        }
        if ((char)uVar20 < '\0') {
          uVar20 = uVar20 & 0xffffff7f;
          local_484 = uVar20;
          FUN_18020e450(local_218);
        }
        if ((uVar20 & 0x40) != 0) {
          uVar20 = uVar20 & 0xffffffbf;
          local_484 = uVar20;
          FUN_18020e450(&local_2e8);
        }
        FUN_18016d4c0(local_b0,piVar22 + 0xe);
        if (fVar7 <= fVar24 - (float)piVar22[3]) {
          piVar22[3] = (int)fVar24;
          piVar22[2] = -0x3b860000;
          if (local_480 != '\0') {
            local_2c8[0] = 0;
            local_2c8[1] = 0;
            local_2c8[2] = 0;
            local_2c8[3] = 0;
            local_2c8[4] = 0;
            local_2c8[5] = 0;
            local_2c8[6] = 0;
            local_2c8[7] = 0;
            FUN_18001d080(local_2c8,&DAT_18033e5ea,0);
            local_490 = 1;
            local_498 = (undefined8 *******)CONCAT44(local_498._4_4_,0xffffffff);
            local_4a0 = local_2c8;
            local_4a8 = local_d0;
            FUN_18006b200(cVar8,&local_110,local_b0);
            FUN_18020e450(local_2c8);
          }
          if ((cVar8 == '\0') && (local_1b8[0] != iVar11)) {
            FUN_180142670(local_b0,0xffffffff,local_1b8[0],0);
          }
        }
        FUN_18020e450(local_b0);
        FUN_18020e450(&local_110);
        FUN_18020e450(local_d0);
      }
      *(char *)piVar1 = local_488;
      *piVar22 = local_474;
      *(char *)((longlong)piVar22 + 5) = local_488;
      local_1b8[0] = local_1b8[0] + 1;
      iVar18 = local_47c;
      goto LAB_18015b4c0;
    }
    piVar1 = (int *)(lVar4 + 0x2d);
    local_448 = piVar1;
    if (((*(char *)piVar1 != '\0') &&
        ((fVar24 - *(float *)(lVar4 + 0x30) < fVar6 && (local_1b8[0] != iVar18)))) &&
       (fVar7 <= fVar24 - *(float *)(lVar4 + 0x34))) {
      *(float *)(lVar4 + 0x34) = fVar24;
      *(undefined4 *)(lVar4 + 0x30) = 0xc47a0000;
      iVar11 = *(int *)(lVar4 + 0x38);
      if ((iVar11 < 1) || (uVar23 = uVar19, iVar11 != iVar18)) {
        uVar23 = (local_1b8[0] != iVar18) + 1;
      }
      if (iVar11 < 1) {
        local_3c8 = 0;
        uStack_3c0 = 0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        FUN_18001d080(&local_3c8,&DAT_18033e9cc,1);
        puVar16 = &local_3c8;
        uVar20 = uVar20 | 0x1000;
LAB_18015c171:
        local_428 = 0;
        uStack_420 = 0;
        local_418 = 0;
        uStack_410 = 0;
        local_428 = *puVar16;
        uStack_420 = puVar16[1];
        local_418 = puVar16[2];
        uStack_410 = puVar16[3];
        puVar16[2] = 0;
        puVar16[3] = 0xf;
        *(undefined1 *)puVar16 = 0;
        puVar16 = &local_428;
        uVar20 = uVar20 | 0x2000;
      }
      else {
        if (iVar11 != iVar18) {
          puVar16 = (undefined8 *)FUN_180159750(local_1f8,iVar11,local_450);
          uVar20 = uVar20 | 0x800;
          goto LAB_18015c171;
        }
        local_3a8 = 0;
        uStack_3a0 = 0;
        local_398 = 0;
        uStack_390 = 0;
        FUN_18001d080(&local_3a8,&DAT_1803601d8,3);
        puVar16 = &local_3a8;
        uVar20 = uVar20 | 0x400;
      }
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = *puVar16;
      uStack_148 = puVar16[1];
      local_140 = puVar16[2];
      uStack_138 = puVar16[3];
      puVar16[2] = 0;
      puVar16[3] = 0xf;
      *(undefined1 *)puVar16 = 0;
      local_484 = uVar20;
      if ((uVar20 >> 0xd & 1) != 0) {
        uVar20 = uVar20 & 0xffffdfff;
        local_484 = uVar20;
        FUN_18020e450(&local_428);
      }
      if ((uVar20 >> 0xc & 1) != 0) {
        uVar20 = uVar20 & 0xffffefff;
        local_484 = uVar20;
        FUN_18020e450(&local_3c8);
      }
      if ((uVar20 >> 0xb & 1) != 0) {
        uVar20 = uVar20 & 0xfffff7ff;
        local_484 = uVar20;
        FUN_18020e450(local_1f8);
      }
      if ((uVar20 >> 10 & 1) != 0) {
        uVar20 = uVar20 & 0xfffffbff;
        local_484 = uVar20;
        FUN_18020e450(&local_3a8);
      }
      if (*(longlong *)(lVar4 + 0x70) == 0) {
        puVar16 = (undefined8 *)FUN_180159750(local_1d8,local_1b8[0],local_450);
        uVar20 = uVar20 | 0x8000;
      }
      else {
        puVar16 = (undefined8 *)FUN_18016d4c0(local_278);
        uVar20 = uVar20 | 0x4000;
      }
      local_170 = *puVar16;
      uStack_168 = puVar16[1];
      local_160 = puVar16[2];
      uStack_158 = puVar16[3];
      puVar16[2] = 0;
      puVar16[3] = 0xf;
      *(undefined1 *)puVar16 = 0;
      local_484 = uVar20;
      if (uVar20 >> 0xf != 0) {
        uVar20 = uVar20 & 0xffff7fff;
        local_484 = uVar20;
        FUN_18020e450(local_1d8);
      }
      if ((uVar20 >> 0xe & 1) != 0) {
        uVar20 = uVar20 & 0xffffbfff;
        local_484 = uVar20;
        FUN_18020e450(local_278);
      }
      if (local_480 != '\0') {
        local_388[0] = 0;
        local_388[1] = 0;
        local_388[2] = 0;
        local_388[3] = 0;
        local_388[4] = 0;
        local_388[5] = 0;
        local_388[6] = 0;
        local_388[7] = 0;
        FUN_18001d080(local_388,&DAT_18033e5ea,0);
        local_4a8 = (undefined8 *******)(lVar4 + 0x40);
        local_490 = 1;
        local_498 = (undefined8 *******)CONCAT44(local_498._4_4_,0xffffffff);
        local_4a0 = local_388;
        FUN_18006b200(uVar23,&local_150,&local_170,0xffffffff);
        FUN_18020e450(local_388);
      }
      if (uVar23 == 0) {
        FUN_180142670(&local_170,0xffffffff,local_1b8[0],0);
      }
      FUN_18020e450(&local_170);
      FUN_18020e450(&local_150);
    }
    *(char *)piVar1 = '\0';
    *(undefined1 *)(lVar4 + 0x2c) = 0;
    if (((local_488 != '\0') && (local_47f != '\0')) && (-1 < local_474)) {
      *piVar22 = local_474;
    }
    local_1b8[0] = local_1b8[0] + 1;
    iVar18 = local_47c;
  } while( true );
}


