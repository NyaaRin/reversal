// 0x180091350  Features_Weapons_Backends_ZSWeaponBackend_vfunc25
// size=4407 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Weapons_Backends_ZSWeaponBackend_vfunc25(longlong param_1,longlong param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  char *pcVar13;
  size_t sVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *******ppppppplVar17;
  byte bVar18;
  longlong *******ppppppplVar19;
  undefined8 *_Buf1;
  undefined8 *puVar20;
  undefined **ppuVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  bool bVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  uint local_190;
  uint local_188;
  uint local_180;
  uint local_178;
  uint local_170;
  uint local_168;
  uint local_160;
  uint local_158;
  uint local_150;
  uint local_148;
  int local_140;
  int local_138;
  uint local_130;
  float local_128;
  uint local_120;
  uint local_118;
  byte local_108;
  byte local_107;
  char local_106;
  byte local_105;
  byte local_104;
  byte local_103;
  byte local_102;
  byte local_101;
  byte local_100;
  char local_ff;
  char local_fe;
  byte local_fd;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  float local_dc;
  int local_d8;
  float local_d4;
  int local_d0;
  longlong local_c8;
  undefined1 local_c0;
  undefined4 uStack_bf;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  undefined4 local_b8;
  undefined4 local_b4;
  char local_b0;
  longlong local_a8;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  undefined **local_88;
  longlong local_80;
  longlong ******local_78 [2];
  size_t local_68;
  ulonglong local_60;
  longlong ******local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  local_d8 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (DAT_1803fa678 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_80 = param_1;
  FUN_18001bcd0(0,&local_f8);
  if (local_f8 == (longlong *)0x0) goto LAB_1800923f2;
  iVar8 = (**(code **)*local_f8)();
  local_8c = iVar8;
  FUN_18001e2b0(param_2,local_f8);
  cVar5 = (**(code **)(*local_f8 + 0x138))(local_f8,0xffffffff,9);
  plVar4 = local_f8;
  if (cVar5 == '\0') {
    if ((local_f8 != (longlong *)0x0) && (iVar9 = (**(code **)*local_f8)(local_f8), iVar8 < iVar9))
    {
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar9 - iVar8);
    }
    if (local_f8 == (longlong *)0x0) {
      return;
    }
    (**(code **)*local_f8)();
    if (local_e8 == 0) {
      DAT_1803fa330 = local_c8;
      DAT_1803fa339 = uStack_bf;
      DAT_1803fa33d = uStack_bb;
      local_99 = uStack_b9;
    }
    else {
      DAT_1803fa330 = local_e8;
      DAT_1803fa339 = local_9f;
      DAT_1803fa33d = local_9b;
    }
    DAT_1803fa338 = local_e8 != 0;
    DAT_1803fa33f = local_99;
    return;
  }
  uVar10 = (**(code **)*local_f8)();
  FUN_18001f260(param_2,local_58);
  local_104 = FUN_18008d9b0(local_f8,uVar10,"IsGun");
  cVar5 = FUN_18008d9b0(local_f8,uVar10,"IsMelee");
  if (cVar5 == '\0') {
    cVar5 = FUN_18008d9b0(local_f8,uVar10,"IsMeleeWeapon");
    local_100 = 0;
    if (cVar5 != '\0') goto LAB_1800915c9;
  }
  else {
LAB_1800915c9:
    local_100 = 1;
  }
  local_103 = FUN_18008d9b0(local_f8,uVar10,"ProjectileWeapon");
  cVar5 = FUN_18008d9b0(local_f8,uVar10,"IsAkimbo");
  if (cVar5 == '\0') {
    ppppppplVar19 = local_58;
    if (0xf < local_40) {
      ppppppplVar19 = (longlong *******)local_58[0];
    }
    if ((local_48 == 0x15) &&
       (iVar8 = memcmp(ppppppplVar19,"weapon_zs_base_akimbo",0x15), iVar8 == 0)) goto LAB_18009164d;
    local_107 = 0;
  }
  else {
LAB_18009164d:
    local_107 = 1;
  }
  local_ff = FUN_18008d9b0(local_f8,uVar10,"NotFirearm");
  uVar6 = FUN_18008da70(local_f8,uVar10,"CustomAimVec");
  *(undefined1 *)(param_1 + 0xe) = uVar6;
  local_102 = FUN_18008da70(local_f8,uVar10,"CustomShootPos");
  local_101 = FUN_18008da70(local_f8,uVar10,"AdditionalShootBulletsFunc");
  FUN_18016d4c0(local_78,&DAT_1803de118);
  plVar4 = local_f8;
  if (DAT_1803faee8 != (code *)0x0) {
    lVar15 = local_f8[1];
    FUN_180023010(&local_c8,lVar15);
    (*DAT_1803faee8)(lVar15,uVar10,"BaseQuality");
    if ((local_b0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_c8,CONCAT17(uStack_b9,CONCAT25(uStack_bb,CONCAT41(uStack_bf,local_c0)))
                       ,local_b8,local_b4);
    }
  }
  cVar5 = (**(code **)(*plVar4 + 0x138))(plVar4,0xffffffff,4);
  if (cVar5 != '\0') {
    pcVar13 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,0xffffffff,0);
    sVar14 = strlen(pcVar13);
    FUN_180212700(local_78,pcVar13,sVar14);
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,1);
  local_d4 = 0.0;
  FUN_18007daf0(local_f8,uVar10,"Branch",&local_d4);
  lVar15 = FUN_18008db50(local_f8,uVar10,"ShootBullets");
  lVar16 = FUN_18008dc10(extraout_XMM0_Da,local_f8,"ShootBullets");
  if (((lVar15 == 0) || (lVar16 == 0)) || (local_105 = 1, lVar15 != lVar16)) {
    local_105 = 0;
  }
  lVar15 = FUN_18008db50(local_f8,uVar10,"PrimaryAttack");
  lVar16 = FUN_18008dc10(extraout_XMM0_Da_00,local_f8,"PrimaryAttack");
  if (((lVar15 == 0) || (lVar16 == 0)) || (lVar15 != lVar16)) {
    local_d0 = 0;
  }
  else {
    local_d0 = 1;
  }
  local_a8 = FUN_18008db50(local_f8,uVar10,"GetCone");
  local_106 = '\0';
  FUN_18002d9c0(local_f8[1],uVar10,"Primary");
  cVar5 = (**(code **)(*local_f8 + 0x138))(local_f8,0xffffffff,5);
  if (cVar5 != '\0') {
    uVar11 = (**(code **)*local_f8)();
    uVar6 = FUN_18008d9b0(local_f8,uVar11,"Automatic");
    *(undefined1 *)(param_1 + 0xd) = uVar6;
    local_106 = FUN_18008da70(local_f8,uVar11,"Projectile");
    local_dc = 1.0;
    cVar5 = FUN_18007daf0(local_f8,uVar11,"NumShots",&local_dc);
    if (cVar5 != '\0') {
      local_94 = (uint)local_dc;
      local_98 = 1;
      uVar22 = 1;
      if (1 < (int)local_94) {
        uVar22 = local_94;
      }
      *(uint *)(param_1 + 0x20) = uVar22;
    }
  }
  (**(code **)(*local_f8 + 0x10))(local_f8,1);
  FUN_18007daf0(local_f8,uVar10,"SpreadMultiHor",param_1 + 0x18);
  FUN_18007daf0(local_f8,uVar10,"SpreadMultiVer",param_1 + 0x1c);
  local_198 = param_1 + 0x14;
  uVar6 = FUN_18008ed00(local_f8,uVar10,"SpreadPattern",param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xf) = uVar6;
  bVar26 = false;
  FUN_18002d9c0(local_f8[1],uVar10,"WeaponBuildup");
  cVar5 = (**(code **)(*local_f8 + 0x138))(local_f8,0xffffffff,5);
  if (cVar5 != '\0') {
    uVar11 = (**(code **)*local_f8)();
    plVar4 = local_f8;
    if (DAT_1803faee8 != (code *)0x0) {
      lVar15 = local_f8[1];
      FUN_180023010(&local_c8,lVar15);
      (*DAT_1803faee8)(lVar15,uVar11,"NameFull");
      if ((local_b0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_c8,CONCAT17(uStack_b9,
                                           CONCAT25(uStack_bb,CONCAT41(uStack_bf,local_c0))),
                         local_b8,local_b4);
      }
    }
    cVar5 = (**(code **)(*plVar4 + 0x138))(plVar4,0xffffffff,4);
    if (cVar5 == '\0') {
LAB_180091aed:
      bVar26 = false;
    }
    else {
      pcVar13 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,0xffffffff,0);
      iVar8 = strcmp(pcVar13,"Fracture Wave");
      if (iVar8 != 0) goto LAB_180091aed;
      bVar26 = true;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
  }
  (**(code **)(*local_f8 + 0x10))(local_f8,1);
  if ((*(char *)(param_1 + 0xf) == '\0') && (bVar26)) {
    local_198 = param_1 + 0x14;
    uVar6 = FUN_18008ed00(local_f8,uVar10,"SpreadPatternHorizontal",param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xf) = uVar6;
  }
  bVar26 = false;
  local_e0 = 0;
  bVar27 = false;
  local_df = 0;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar11 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar15 = (*pcVar1)(DAT_1803fa360,uVar11);
  if (lVar15 != 0) {
    FUN_18001e2b0(lVar15,local_f8);
    cVar5 = (**(code **)(*local_f8 + 0x138))(local_f8,0xffffffff,9);
    if (cVar5 != '\0') {
      uVar11 = (**(code **)*local_f8)();
      lVar15 = FUN_18008db50(local_f8,uVar11,"FireBulletsInfo");
      bVar26 = lVar15 != 0;
      local_e0 = bVar26;
      lVar15 = FUN_18008db50(local_f8,uVar11,"FireBulletsLua");
      bVar27 = lVar15 != 0;
      local_198 = param_1 + 0x24;
      local_df = bVar27;
      FUN_18008e6d0(local_f8,uVar11);
      uVar6 = FUN_18008eb80(local_f8,uVar11,param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x2c) = uVar6;
    }
    (**(code **)(*local_f8 + 0x10))(local_f8,1);
  }
  FUN_180023e60(local_f8,0);
  FUN_18002db10(local_f8[1],0xffffffff,"PLAYER_RandomSeed");
  cVar5 = (**(code **)(*local_f8 + 0x138))(local_f8,0xffffffff,5);
  (**(code **)(*local_f8 + 0x10))(local_f8,2);
  lVar15 = FUN_18008db50(local_f8,uVar10,"ShootBulletsPreShot");
  if ((bVar26) && (cVar5 != '\0')) {
    *(uint *)(param_1 + 8) = 3 - (uint)(lVar15 != 0);
  }
  else if (bVar27) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  iVar8 = *(int *)(param_1 + 8);
  if ((DAT_1803fe3f4 == '\0') || (DAT_1803ff254 != iVar8)) {
    DAT_1803fe3f4 = '\x01';
    if (iVar8 == 2) {
      pcVar13 = "sunrust";
    }
    else if (iVar8 == 3) {
      pcVar13 = "midnight";
    }
    else {
      pcVar13 = "NONE";
      if (iVar8 == 1) {
        pcVar13 = "legacy";
      }
    }
    local_190 = (uint)bVar27;
    local_198 = CONCAT44(local_198._4_4_,(uint)(lVar15 != 0));
    DAT_1803ff254 = iVar8;
    FUN_180014410("[ZS] dialect=%s (fbi=%d seedTable=%d preShot=%d legacy=%d)\n",pcVar13,bVar26,
                  cVar5 != '\0');
  }
  uVar24 = local_60;
  ppppppplVar19 = (longlong *******)local_78[0];
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 2) {
    ppppppplVar17 = local_78;
    if (0xf < local_60) {
      ppppppplVar17 = (longlong *******)local_78[0];
    }
    if ((((local_68 != 0xe) || (*ppppppplVar17 != (longlong ******)0x7a5f6e6f70616577)) ||
        (*(int *)(ppppppplVar17 + 1) != 0x696f5f73)) ||
       (*(short *)((longlong)ppppppplVar17 + 0xc) != 0x7763)) goto LAB_180091dd9;
    uVar6 = 1;
  }
  else {
LAB_180091dd9:
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x2d) = uVar6;
  if (local_105 == 0) {
    if ((int)local_d4 == 0) {
      if (iVar8 != 1) {
        if (iVar8 == 2) {
          for (ppuVar21 = &PTR_s_weapon_zs_bigglock3_180338e90; local_88 = ppuVar21,
              ppuVar21 != &Features::MoveFix::MoveFixFeature::vftable_meta_ptr;
              ppuVar21 = ppuVar21 + 1) {
            pcVar13 = *ppuVar21;
            sVar14 = strlen(pcVar13);
            ppppppplVar17 = local_78;
            if (0xf < uVar24) {
              ppppppplVar17 = ppppppplVar19;
            }
            if ((local_68 == sVar14) &&
               ((local_68 == 0 || (iVar8 = memcmp(ppppppplVar17,pcVar13,local_68), iVar8 == 0))))
            goto LAB_180091f4b;
          }
        }
        goto LAB_180091f08;
      }
      bVar26 = 0xf < local_60;
      ppppppplVar17 = local_78;
      if (0xf < local_60) {
        ppppppplVar17 = (longlong *******)local_78[0];
      }
      if (((local_68 != 0x10) || (*ppppppplVar17 != (longlong ******)0x7a5f6e6f70616577)) ||
         (ppppppplVar17[1] != (longlong ******)0x7265736172655f73)) {
        ppppppplVar17 = local_78;
        if (bVar26) {
          ppppppplVar17 = (longlong *******)local_78[0];
        }
        if ((local_68 != 0x13) ||
           (iVar8 = memcmp(ppppppplVar17,"weapon_zs_hurricane",0x13), iVar8 != 0)) {
          ppppppplVar17 = local_78;
          if (bVar26) {
            ppppppplVar17 = ppppppplVar19;
          }
          if ((((local_68 != 0x11) || (*ppppppplVar17 != (longlong ******)0x7a5f6e6f70616577)) ||
              (ppppppplVar17[1] != (longlong ******)0x6562626174735f73)) ||
             (*(char *)(ppppppplVar17 + 2) != 'r')) goto LAB_180091f08;
        }
      }
      goto LAB_180091f4b;
    }
LAB_180091f08:
    if (local_105 != 0) goto LAB_180091f30;
    local_d8 = 0;
    local_fe = '\0';
  }
  else {
LAB_180091f30:
    local_d8 = 0;
LAB_180091f4b:
    local_fe = '\x01';
  }
  bVar3 = local_101;
  bVar2 = local_102;
  bVar7 = local_104;
  uVar22 = (uint)local_103;
  local_108 = FUN_18008dda0(*(undefined4 *)(param_1 + 8),local_78,(int)local_d4);
  iVar8 = *(int *)(param_1 + 8);
  if ((iVar8 - 1U & 0xfffffffd) == 0) {
    ppppppplVar17 = local_58;
    if (0xf < local_40) {
      ppppppplVar17 = (longlong *******)local_58[0];
    }
    if (((local_48 != 0xe) || (*ppppppplVar17 != (longlong ******)0x7a5f6e6f70616577)) ||
       ((*(int *)(ppppppplVar17 + 1) != 0x61625f73 ||
        (*(short *)((longlong)ppppppplVar17 + 0xc) != 0x6573)))) {
      ppppppplVar17 = local_58;
      if (0xf < local_40) {
        ppppppplVar17 = (longlong *******)local_58[0];
      }
      if (local_48 == 0x15) {
        iVar9 = memcmp(ppppppplVar17,"weapon_zs_baseshotgun",0x15);
        iVar8 = *(int *)(param_1 + 8);
        if (iVar9 == 0) goto LAB_180092021;
      }
      goto LAB_180092025;
    }
LAB_180092021:
    local_fd = 1;
  }
  else {
LAB_180092025:
    local_fd = 0;
  }
  if ((bVar7 == 0) && (local_fd == 0)) {
    bVar26 = false;
  }
  else {
    bVar26 = true;
  }
  if (((iVar8 == 2) && (*(char *)(param_1 + 0x2c) == '\0')) && (*(int *)(param_1 + 0x20) - 2U < 2))
  {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  if (((((bVar26) && (local_100 == 0)) &&
       ((local_103 == 0 && ((local_106 == '\0' && (local_107 == 0)))))) && (local_ff == '\0')) &&
     ((((((*(char *)(param_1 + 0xe) == '\0' && (local_102 == 0)) && (local_101 == 0)) &&
        ((local_fe != '\0' && (local_108 == 0)))) && (bVar7 != 0)) &&
      ((local_a8 != 0 && (iVar8 != 0)))))) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  *(byte *)(param_1 + 0xc) = bVar18;
  local_dc = (float)(uint)bVar7;
  local_90 = (uint)bVar3;
  local_98 = (uint)bVar2;
  uVar12 = (uint)local_108;
  uVar23 = -(uint)(local_106 != '\0') & 0x1000 | (uint)bVar18 << 0x10 |
           -(uint)(local_a8 != 0) & 0x20 | -(uint)(*(char *)(param_1 + 0xe) != '\0') & 8 |
           local_90 << 0xf | (int)local_dc << 0x12 | uVar22 * 4 | (uint)local_108 << 0x11 |
           iVar8 << 8 | (uint)local_107 << 0xd | local_d0 << 7 | local_98 << 0xe |
           (uint)local_105 << 4 | (uint)local_100 + (uint)local_100 | local_d8 << 6 |
           (uint)local_104;
  local_94 = uVar22;
  if ((DAT_18042a8b0 & 1) == 0) {
    DAT_18042a8b0 = DAT_18042a8b0 | 1;
    atexit((_func_5014 *)&LAB_180309860);
    uVar24 = local_60;
    ppppppplVar19 = (longlong *******)local_78[0];
  }
  puVar25 = DAT_1803de118;
  local_ff = 0xf < DAT_1803de130;
  puVar20 = &DAT_1803de118;
  if (0xf < DAT_1803de130) {
    puVar20 = DAT_1803de118;
  }
  _Buf1 = &DAT_1803e94a0;
  if (0xf < DAT_1803e94b8) {
    _Buf1 = DAT_1803e94a0;
  }
  if ((DAT_1803e94b0 != DAT_1803de128) ||
     (((DAT_1803e94b0 != 0 && (iVar8 = memcmp(_Buf1,puVar20,DAT_1803e94b0), iVar8 != 0)) ||
      (DAT_1803da624 != uVar23)))) {
    ppppppplVar17 = local_78;
    if (0xf < uVar24) {
      ppppppplVar17 = ppppppplVar19;
    }
    puVar20 = &DAT_1803de118;
    if (local_ff != '\0') {
      puVar20 = puVar25;
    }
    local_120 = (uint)(local_a8 != 0);
    local_130 = uVar12 ^ 1;
    local_118 = (uint)(*(char *)(param_1 + 0xc) != '\0');
    local_128 = local_dc;
    local_138 = local_d0;
    local_140 = local_d8;
    local_148 = (uint)local_105;
    local_150 = local_90;
    local_158 = local_98;
    local_160 = (uint)(*(char *)(param_1 + 0xe) != '\0');
    local_168 = (uint)local_107;
    local_170 = (uint)(local_106 != '\0');
    local_178 = local_94;
    local_180 = (uint)local_100;
    local_188 = (uint)local_fd;
    local_190 = (uint)local_104;
    local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)(param_1 + 8));
    FUN_180014410("[ZS-NS] class=%s profile=%s branch=%d mode=%d gun=%d legacygun=%d melee=%d projectile=%d primaryproj=%d akimbo=%d customaim=%d custompos=%d multibullets=%d basebullets=%d audited=%d baseprimary=%d context=%d countsafe=%d getcone=%d enabled=%d\n"
                  ,puVar20,ppppppplVar17,(int)local_d4);
    puVar25 = &DAT_1803de118;
    if (0xf < DAT_1803de130) {
      puVar25 = DAT_1803de118;
    }
    FUN_180212700(&DAT_1803e94a0,puVar25,DAT_1803de128);
    DAT_1803da624 = uVar23;
  }
  FUN_18020e450(local_78);
  FUN_18020e450(local_58);
  plVar4 = local_f8;
  if ((local_f8 != (longlong *)0x0) && (iVar8 = (**(code **)*local_f8)(local_f8), local_8c < iVar8))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar8 - local_8c);
  }
LAB_1800923f2:
  if (local_f8 != (longlong *)0x0) {
    (**(code **)*local_f8)();
    DAT_1803fa338 = local_e8 != 0;
    DAT_1803fa330 = local_c8;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_e8;
    }
    DAT_1803fa339 = uStack_bf;
    DAT_1803fa33d = uStack_bb;
    DAT_1803fa33f = uStack_b9;
  }
  return;
}


