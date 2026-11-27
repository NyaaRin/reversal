// 0x1801bb810  FUN_1801bb810
// size=16215 thunk=false
// signature: undefined FUN_1801bb810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bb810(void)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  char cVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  char *pcVar21;
  int *piVar22;
  size_t sVar23;
  int *piVar24;
  float *pfVar25;
  float *pfVar26;
  int *piVar27;
  float *pfVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  undefined *puVar33;
  char *_Src;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_238 [32];
  char *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  local_128 = CONCAT44(local_128._4_4_,4);
  iVar31 = 0;
  local_130 = local_130 & 0xffffffff00000000;
  piVar27 = (int *)&local_130;
  if (-1 < DAT_1803fb24c) {
    piVar27 = &DAT_1803fb24c;
  }
  piVar22 = (int *)&local_128;
  if (DAT_1803fb24c < 5) {
    piVar22 = piVar27;
  }
  DAT_1803fb24c = *piVar22;
  lVar32 = (longlong)DAT_1803fb24c;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar36 = DAT_180380fd8;
  fVar7 = DAT_180380ac0;
  lVar30 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
     (pfVar28 = (float *)(lVar30 + 0x280), *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x2368) != 0
     )) {
    pfVar28 = (float *)(lVar30 + 0x250);
  }
  local_128 = 0;
  fVar37 = ((*pfVar28 - *(float *)(lVar30 + 0x118)) - DAT_180380fd8) * DAT_180380ac0;
  FUN_18026aad0(2,&local_128);
  uVar11 = DAT_180381384;
  local_128 = CONCAT44(0xbf800000,fVar37);
  FUN_180272fa0("##aim_v4_left",&local_128,0,0x18);
  FUN_18026abb0(1);
  cVar16 = FUN_18019fbc0("Targeting",0,CONCAT44(DAT_1803811b4,fVar37),1);
  uVar13 = DAT_180381158;
  fVar9 = DAT_180380c50;
  fVar8 = DAT_180380b20;
  if (cVar16 != '\0') {
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x549a0576bfe235e1;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    FUN_1802029c0(*plVar17 + 0x28);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x402819404e703058;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    FUN_1801fcfc0(*plVar17 + 0x28);
    FUN_1801a24c0();
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar35 = *pfVar26 * _DAT_180381200;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 2;
    *(float *)(lVar30 + 0x1f68) = fVar35;
    *(undefined4 *)(lVar30 + 0x1f6c) = 0;
    *(undefined4 *)(lVar30 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##aim_enabled_popup");
    if (cVar16 != '\0') {
      local_128 = 0xf7521f28977a3033;
      local_130 = 0x55a65b38bc54c4a2;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Override movement locks","override_movement_locks",uVar18,
                    "ON (default, the way the cheat always behaved): your real WASD is\nput back into the command after the gamemode\'s Lua CreateMove hook\nran, so a server that zeroes movement there - handcuffs, stun,\narrest, roleplay freezes - does not hold you.\n\nOFF: those locks work again, like a client with no cheat loaded.\n\nDoes not touch upmove: vehicle addons ship their aim distance in\nthat field, and overriding it makes mounted guns fire straight up."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x50665d13ff420b11;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Aim at players","aim_players",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x699671ccb6cec028;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = "##aim_npc_popup";
    FUN_1801a1910("Aim at NPCs","aim_npcs",uVar18,0);
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar35 = *pfVar26 * _DAT_1803811e4;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 2;
    *(float *)(lVar30 + 0x1f68) = fVar35;
    *(undefined4 *)(lVar30 + 0x1f6c) = 0;
    *(undefined4 *)(lVar30 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##aim_npc_popup");
    if (cVar16 != '\0') {
      local_128 = 0xf7521f28977a3033;
      local_130 = 0xd782259d0bddef5c;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Ignore FL_NOTARGET","ignore_notarget_npc",uVar18,
                    "Ignores anti-aimbot trap NPCs created by server anti-cheats (like LSAC).");
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x4064f70bc33de70a;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1802029c0(*plVar17 + 0x28);
    local_200 = (char *)0x0;
    local_208 = (char *)0x0;
    local_210 = (char *)CONCAT44(local_210._4_4_,uVar13);
    local_218 = (char *)CONCAT44(local_218._4_4_,3);
    FUN_1801a2900("Aim mode","aim_mode",uVar18,&PTR_DAT_1803e94e8);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xef1c37d3998fa2e7;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Automatic fire","aim_autofire",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x98b61f50425db001;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Always on aim","aim_autoaim",uVar18,
                  "Keeps aiming at the best target without holding the aim key.");
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x6c034efd213a832;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Stop on kill","aim_stopkill",uVar18,
                  "After the locked target dies, stop aiming.\nHold-key mode: release and re-press the aim key to aim again.\nAlways-on aim: resumes after a short pause instead of\ninstantly snapping to the next player."
                 );
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  cVar16 = FUN_18019fbc0("Filters",0xe,CONCAT44(uVar11,fVar37),0);
  if (cVar16 != '\0') {
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x216df9830429193f;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore god mode","filter_god",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xe5e03453c741697f;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore dormant","filter_dormant",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x8dbcb6da1c093609;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore invisible","filter_invisible",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x585adea58af62688;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore same team","filter_same_team",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x7f0b28cb8d45cb74;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore same Lua team (job)","filter_same_luateam",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xb893a7799007b22f;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore noclip","filter_noclip",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x8ae1ad0adb54c4f0;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore frozen","filter_frozen",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xf7e7f1435da8388f;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Pause over interfaces","filter_vgui",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xe89b321d94ba62e7;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Ignore non-firing weapons","filter_nonfiring",uVar18,
                  "Never pull the trigger with something that cannot shoot anybody:\ncamera, toolgun, physgun, melee, or a weapon with no ammo concept.\n\nTurn OFF to fire with whatever is in hand - the way out when a real\nweapon is refused, e.g. a pack that reports no ammo type until it\nhas fired once by hand. Aiming and tracking are never affected."
                 );
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  pfVar28 = (float *)&local_128;
  local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
  local_128 = CONCAT44(local_128._4_4_,0x3f400000);
  if (fVar8 <= DAT_1803da6a4) {
    pfVar28 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)&local_130;
  if (DAT_1803da6a4 <= fVar9) {
    pfVar26 = pfVar28;
  }
  FUN_18027f5b0(0,*pfVar26 * fVar36);
  local_128 = 0;
  FUN_18026aad0(2,&local_128);
  local_128 = 0xbf80000000000000;
  FUN_180272fa0("##aim_v4_right",&local_128,0,0x18);
  FUN_18026abb0(1);
  cVar16 = FUN_18019fbc0("Precision & hitscan",0,CONCAT44(DAT_1803811c4,fVar37),1);
  fVar36 = DAT_1803811e0;
  uVar11 = DAT_1803810c8;
  if (cVar16 != '\0') {
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xdc8f15f640c36b21;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_180202dc0(*plVar17 + 0x28);
    local_200 = "Aim mode None only - Silent and PSilent send the solved angle as it is.\n\n";
    local_208._0_4_ = uVar11;
    local_210 = "%.0f";
    local_218._0_4_ = DAT_180381068;
    FUN_1801a7bd0("Smooth","##v4_aim_smooth",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xfb3877511c4b6892;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_180202dc0(*plVar17 + 0x28);
    local_200 = (char *)0x0;
    local_208 = (char *)CONCAT44(local_208._4_4_,uVar11);
    local_210 = "%.0f";
    local_218 = (char *)CONCAT44(local_218._4_4_,DAT_180381188);
    FUN_1801a7bd0(&DAT_180364b58,"##v4_aim_fov",uVar18,0);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xfd8fb219a478c8e5;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = "##drawfov_v4_popup";
    FUN_1801a1910("Draw FOV","draw_fov",uVar18,0);
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar35 = *pfVar26 * _DAT_18038118c;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 2;
    *(float *)(lVar30 + 0x1f68) = fVar35;
    *(undefined4 *)(lVar30 + 0x1f6c) = 0;
    *(undefined4 *)(lVar30 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##drawfov_v4_popup");
    if (cVar16 != '\0') {
      local_128 = 0xf7521f28977a3033;
      local_130 = 0xc811eaac2acc1f62;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Filled","draw_fov_filled",uVar18,
                    "Off = only the circle outline, center stays clear.");
      local_128 = 0xf7521f28977a3033;
      local_130 = 0xe54c15e402c9ceb4;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
      puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
      local_128 = 0xf7521f28977a3033;
      local_110 = *puVar19;
      local_130 = 0xe54c02e402c9ae6b;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
      puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
      local_128 = 0xf7521f28977a3033;
      local_10c = *puVar19;
      local_130 = 0xe54c05e402c9b384;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
      puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
      local_128 = 0xf7521f28977a3033;
      local_108 = *puVar19;
      local_130 = 0xe54c08e402c9b89d;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
      puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
      local_104 = *puVar19;
      cVar16 = FUN_1801a2180();
      uVar12 = local_110;
      if (cVar16 != '\0') {
        local_128 = 0xf7521f28977a3033;
        local_130 = 0xe54c15e402c9ceb4;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        uVar15 = local_10c;
        local_128 = 0xf7521f28977a3033;
        *puVar19 = uVar12;
        local_130 = 0xe54c02e402c9ae6b;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        uVar12 = local_108;
        local_128 = 0xf7521f28977a3033;
        *puVar19 = uVar15;
        local_130 = 0xe54c05e402c9b384;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        uVar15 = local_104;
        local_128 = 0xf7521f28977a3033;
        *puVar19 = uVar12;
        local_130 = 0xe54c08e402c9b89d;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        *puVar19 = uVar15;
      }
      local_128 = 0xf7521f28977a3033;
      local_130 = 0xc12dea166e54d7d9;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_120,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_100,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Debug","draw_fov_debug",uVar18,
                    "Per player: the angle the FOV gate measured against its threshold (green = passed), the same angle from the camera, and where the player sits on the drawn ellipse (1.00 = on the edge).\n\nGreen but still no shot means FOV is not what refuses the target."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x9653fa4f0c4e1755;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = "##anti_ac_v4_popup";
    FUN_1801a1910("Anti-AC protection","anti_ac",uVar18,0);
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar35 = *pfVar26;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 2;
    *(float *)(lVar30 + 0x1f68) = fVar35 * fVar36;
    *(undefined4 *)(lVar30 + 0x1f6c) = 0;
    *(undefined4 *)(lVar30 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##anti_ac_v4_popup");
    if (cVar16 != '\0') {
      local_128 = 0xf7521f28977a3033;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      lVar30 = *plVar17 + 0x28;
      local_130 = 0x1ff3938001ecac80;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Anti-reversal","aa_reversal",uVar18,
                    "REQUIRED: Offsetting angles avoids immediate ban\nfrom angle-consistency check."
                   );
      local_130 = 0xf49ef2058e631d85;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Fake mouse deltas","aa_mouse",uVar18,
                    "CRITICAL: If disabled, cheating/silent angles will NOT match\nreal mouse inputs, causing a 100% ban for Viewangle Manipulation!"
                   );
      local_130 = 0xd80d0afae9fc7f5a;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Snap protection","aa_snap",uVar18,
                    "RECOMMENDED: Prevents autoshooting during rapid snaps\nto avoid detection by snap checks."
                   );
      local_130 = 0xe455dd426f2b5319;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Pace backtrack tickshift","aa_tickshift",uVar18,
                    "CRITICAL: LSAC flags a tick delta of 0 or above 3 between two\nconsecutive commands while holding fire. This walks into the\nshift inside that band instead of jumping, so backtrack keeps\nworking; unavoidable jumps are rate-limited to one per 3s."
                   );
      local_130 = 0x69dd0449bc44a7a5;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Autofire timing","aa_timing",uVar18,
                    "CRITICAL: If disabled, clicking at identical intervals\nwill trigger a 100% ban for Autofire Timed Checks!"
                   );
      local_130 = 0xfbdfb712f0666000;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Nova autoclick bypass","aa_nova",uVar18,
                    "Paces autofire/autoshoot by game time (not frames) so Nova\nautoclick checks do not flag it. Needs Anti-AC on; if off,\nhigh FPS can cause detection."
                   );
      local_130 = 0x527acabecbc8e53b;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Block event subscriptions","aa_events",uVar18,
                    "Keeps opt-in game-event subscriptions off the wire. Only\nLoggers > DamageLogs > \"Subscribe to player_hurt event\"\nuses one today: it sets a bit in clc_ListenEvents, which\nLSAC\'s sourcenet can majority-vote across players.\nOff = the subscription is allowed while Anti-AC stays on."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    FUN_1802afb40();
    local_128 = 0xf7521f28977a3033;
    local_130 = 0x87c123d070d26543;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1802029c0(*plVar17 + 0x28);
    local_200 = (char *)0x0;
    local_208 = (char *)0x0;
    local_210._0_4_ = uVar13;
    local_218._0_4_ = 2;
    FUN_1801a2900("Target priority","target_priority",uVar18,&PTR_s_Crosshair_1803da5e8);
    local_128 = 0xf7521f28977a3033;
    local_130 = 0xec3e0e78b5602cd;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    puVar20 = (uint *)FUN_1802029c0(*plVar17 + 0x28);
    if (1 < *puVar20) {
      *puVar20 = 0;
    }
    local_200 = "##hitscan_perf_popup";
    local_208 = 
    "Both walk the model\'s hitbox set: one visibility trace per hitbox\nper target, per tick. Ordered takes the highest-priority visible\nhitbox (head first); Closest takes the visible one nearest your\ncrosshair. Use the popup to trim the cost on a wide FOV."
    ;
    local_210 = (char *)CONCAT44(local_210._4_4_,uVar13);
    local_218 = (char *)CONCAT44(local_218._4_4_,2);
    FUN_1801a2900("Hitscan mode","hitbox_mode",puVar20,&PTR_s_Ordered_1803e98b8);
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar35 = *pfVar26 * _DAT_1803811e8;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 2;
    *(float *)(lVar30 + 0x1f68) = fVar35;
    *(undefined4 *)(lVar30 + 0x1f6c) = 0;
    *(undefined4 *)(lVar30 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##hitscan_perf_popup");
    if (cVar16 != '\0') {
      local_128 = 0xf7521f28977a3033;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      lVar30 = *plVar17 + 0x28;
      puVar33 = &DAT_1803dca28 + lVar32 * 200;
      FUN_1802aabb0(puVar33,"Performance");
      local_130 = 0xcb531a901b22d600;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Cache visibility traces","opt_vis_cache",uVar18,
                    "Remembers each aim point\'s visibility for the current tick, so the\nsame point is not traced again by another backtrack record, the\nESP pass or the close-range head retry."
                   );
      local_130 = 0xd0ed55109de221bb;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Head multipoint only close","opt_multipoint_near",uVar18,
                    "The two extra head points (for heads peeking cover) cost two traces\nper target. ON = only within 800 units, where they actually help."
                   );
      FUN_1802afb40();
      FUN_1802aabb0(puVar33,"Through cover");
      local_130 = 0xe0a48c0d8e551c4c;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Autowall","aim_autowall",uVar18,
                    "Keeps a target whose direct ray is blocked when the weapon pack\'s\nown penetration maths says the bullet still arrives.\n\nSupported packs: ArcCW, ARC9, TacRP, SWCS, TFA (incl. Insurgency),\nM9K, CW 2.0, SWB (incl. the UT fork), FA:S 2.0. Each one is\nmodelled separately - budgets, material tables and damage loss\nare that pack\'s own numbers, not a shared guess.\n\nSilent on a pack with no wallbang, and on a server that has turned\nits pack\'s penetration convar off.\n\nHomigrad/Z-City has its own, older autowall with its own switch\nunder Compensation > Gamemode support - that pack ricochets and\nfires from the world model\'s muzzle, so it needs its own simulator."
                   );
      local_130 = 0xe0a48c0d8e551c4c;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      pcVar21 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
      uVar12 = DAT_180381120;
      if (*pcVar21 != '\0') {
        local_130 = 0xef946101541b4e0d;
        plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
        uVar18 = FUN_180202dc0(*plVar17 + 0x28);
        local_200 = 
        "Damage that has to survive the cover before the shot is worth\ntaking. A round that arrives with nothing left only gives your\nposition away.\n\nIgnored on a weapon whose damage could not be read - an unknown\nnumber is not a reason to refuse a shot the maths says lands."
        ;
        local_208 = (char *)CONCAT44(local_208._4_4_,uVar12);
        local_210 = "%.0f";
        local_218._0_4_ = uVar11;
        FUN_1801a7bd0("Min damage","##v4_aw_dmg",uVar18,0);
        local_130 = 0xe7e1311753777c16;
        plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
        uVar18 = FUN_1802029c0(*plVar17 + 0x28);
        local_210 = "%d";
        local_218 = (char *)CONCAT44(local_218._4_4_,4);
        FUN_1801a85a0("Walls","##v4_aw_walls",uVar18,1);
        cVar16 = FUN_18026ee60(0);
        if (cVar16 != '\0') {
          FUN_180280d00(
                       "How many surfaces the bullet may cross.\n\nEach wall is a long trace plus an exit search, run per aim point\nper target - 1 is the honest default. CW 2.0, SWB and FA:S allow\nexactly one and cap this themselves; SWCS allows four, ARC9\nthree, TFA whatever its weapon says."
                       );
        }
      }
      FUN_1802afb40();
      FUN_1802aabb0(puVar33,"Aim point");
      local_130 = 0x841e60f2a28125db;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Lead uncompensated bodies","lead_uncomped",uVar18,
                    "The server rewinds PLAYERS when it traces your bullet, and nothing\nelse. A body that is not a player - the prop_ragdoll a downed\nHomigrad player actually is, or an NPC - is hit where it stands NOW,\nwhile you aim where it was drawn: cl_interp + ping ago. Moving\nbodies miss, still ones do not.\n\nOn = shift the aim point by that body\'s measured velocity. Players\nare never touched, so backtrack keeps working as it does today."
                   );
      local_130 = 0x4d3af9f5fe2c9c98;
      plVar17 = (longlong *)FUN_180241a30(lVar30,&local_120,&local_130);
      uVar18 = FUN_180202dc0(*plVar17 + 0x28);
      local_200 = 
      "Ceiling on the shift, in units. A tumbling ragdoll stops being\ndescribed by a straight line past some magnitude - this makes it\nunder-lead instead of walking the aim point off the body."
      ;
      local_208 = (char *)CONCAT44(local_208._4_4_,uVar12);
      local_210 = "%.0f u";
      local_218 = (char *)CONCAT44(local_218._4_4_,DAT_1803811cc);
      FUN_1801a7bd0("Max lead","##v4_lead_max",uVar18,0);
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_128 = 0xf7521f28977a3033;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    lVar32 = *plVar17 + 0x28;
    local_130 = 0x13c84f53e7f68d8c;
    plVar17 = (longlong *)FUN_180241a30(lVar32,&local_120,&local_130);
    local_158 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_130 = 0xd250cd42f963fefb;
    plVar17 = (longlong *)FUN_180241a30(lVar32,&local_120,&local_130);
    local_150 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_130 = 0x510e3af75e01d7bb;
    plVar17 = (longlong *)FUN_180241a30(lVar32,&local_120,&local_130);
    local_148 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_130 = 0x27e309181a7f6085;
    plVar17 = (longlong *)FUN_180241a30(lVar32,&local_120,&local_130);
    local_140 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_130 = 0x574f5671b7de6287;
    plVar17 = (longlong *)FUN_180241a30(lVar32,&local_120,&local_130);
    local_138 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_210 = (char *)CONCAT44(local_210._4_4_,uVar13);
    FUN_1801a2d90();
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  cVar16 = FUN_18019fbc0("Compensation",0xf,CONCAT44(DAT_180381148,fVar37),1);
  if (cVar16 == '\0') goto LAB_1801bf6ef;
  local_130 = 0xb180266dc2efa3d2;
  local_128 = 0x93fd561a96ab0c67;
  plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
  plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
  pcVar21 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
  if (*pcVar21 == '\0') {
    local_130 = 0xba33a12acf3fe1c3;
    local_128 = 0x93fd561a96ab0c67;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    pcVar21 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
    if (*pcVar21 != '\0') goto LAB_1801bd35b;
    uVar18 = 0;
  }
  else {
LAB_1801bd35b:
    uVar18 = 1;
  }
  local_218 = "Gamemodes";
  FUN_1801a04c0("Compensation","Gamemode support","##gm_v4_popup",uVar18);
  local_128 = 0x93fd561a96ab0c67;
  local_130 = 0x4660102069c10657;
  plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
  plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
  uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
  local_218 = (char *)0x0;
  FUN_1801a1910("No spread","comp_spread",uVar18,0);
  local_128 = 0x93fd561a96ab0c67;
  local_130 = 0x148d378145076092;
  plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
  plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
  uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
  local_218 = "##nvr_v4_popup";
  FUN_1801a1910("No visual recoil","comp_recoil",uVar18,0);
  pfVar28 = (float *)&local_128;
  local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
  local_128 = CONCAT44(local_128._4_4_,0x3f400000);
  if (fVar8 <= DAT_1803da6a4) {
    pfVar28 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)&local_130;
  if (DAT_1803da6a4 <= fVar9) {
    pfVar26 = pfVar28;
  }
  fVar37 = *pfVar26;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar32 = *(longlong *)(lVar1 + 0xec0);
  *(uint *)(lVar32 + 0x1f48) = *(uint *)(lVar32 + 0x1f48) | 2;
  *(float *)(lVar32 + 0x1f68) = fVar37 * fVar36;
  *(undefined4 *)(lVar32 + 0x1f6c) = 0;
  *(undefined4 *)(lVar32 + 0x1f50) = 1;
  cVar16 = FUN_18019a680("##nvr_v4_popup");
  if (cVar16 != '\0') {
    local_128 = 0x93fd561a96ab0c67;
    local_130 = 0x9fc064cf8b020230;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    piVar27 = (int *)FUN_1802029c0(*plVar17 + 0x28);
    pfVar28 = (float *)&local_128;
    local_130._0_4_ = 1.5;
    local_128._0_4_ = 0.75;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar37 = *pfVar26;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar32 = *(longlong *)(lVar1 + 0xec0);
    fVar37 = fVar37 * DAT_18038116c;
    local_218 = (char *)CONCAT44(local_218._4_4_,2);
    puVar20 = (uint *)(lVar32 + 0x1ec0);
    *puVar20 = *puVar20 | 1;
    *(float *)(lVar32 + 0x1ed8) = fVar37;
    FUN_1802b1200("Mode##nvr_v4",piVar27);
    local_130 = CONCAT44(local_130._4_4_,1);
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
    piVar22 = (int *)&local_128;
    if (-1 < *piVar27) {
      piVar22 = piVar27;
    }
    piVar24 = (int *)&local_130;
    if (*piVar27 < 2) {
      piVar24 = piVar22;
    }
    *piVar27 = *piVar24;
    cVar16 = FUN_18026ee60(0);
    if (cVar16 != '\0') {
      FUN_180280d00(
                   "Classic (lock): for SetEyeAngles-recoil packs (M9K etc.) - freezes\n  the view for 4 ticks after each shot so the kick never happens.\n  Undetectable (zero angle delta), but the mouse stiffens briefly\n  while firing, and view-punch packs are not covered.\nRage: both recoil families, live mouse, no screen movement.\n  Kills the SetEyeAngles kick by dropping view writes that come\n  from inside prediction (the mouse never writes from there), and\n  compensates the view punch on the sent angles while you hold\n  fire, so ARC9/HL2-style bullets land on the crosshair."
                   );
    }
    if (*piVar27 == 1) {
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x3c5438a1a47f8b76;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Show screen recoil","nvr_v4_showpunch",uVar18,
                    "Keep the visual kick on screen while the bullets stay compensated.\nLooks like a legit player pulling down - for OBS/spectating admins."
                   );
      local_128 = -0x6c02a9e56954f399;
      local_130 = 0x5a9cbbd2dc8bfb63;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Eye Sync bypass","nvr_v4_eyesync",uVar18,
                    "LSAC servers only: drops IN_ATTACK on 1-3 cooldown ticks per shot\nso the Eye Sync forcing re-anchors to our angles instead of letting\nthe spray climb. Costs attack edges (~fire rate, randomized) and\ndoes nothing while ADS (IN_ATTACK2) is held."
                   );
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_128 = 0x13806d9e35de0023;
  local_130 = 0x402819404e703058;
  plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
  plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
  uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
  local_218 = "##backtrack_v4_popup";
  FUN_1801a1910("Backtrack","comp_backtrack",uVar18,0);
  pfVar28 = (float *)&local_128;
  local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
  local_128 = CONCAT44(local_128._4_4_,0x3f400000);
  if (fVar8 <= DAT_1803da6a4) {
    pfVar28 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)&local_130;
  if (DAT_1803da6a4 <= fVar9) {
    pfVar26 = pfVar28;
  }
  fVar37 = *pfVar26;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar32 = *(longlong *)(lVar1 + 0xec0);
  *(uint *)(lVar32 + 0x1f48) = *(uint *)(lVar32 + 0x1f48) | 2;
  *(float *)(lVar32 + 0x1f68) = fVar37 * fVar36;
  *(undefined4 *)(lVar32 + 0x1f6c) = 0;
  *(undefined4 *)(lVar32 + 0x1f50) = 1;
  cVar16 = FUN_18019a680("##backtrack_v4_popup");
  if (cVar16 != '\0') {
    local_130 = 0x6018685605485a;
    local_128 = 0x13806d9e35de0023;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1802029c0(*plVar17 + 0x28);
    local_210 = "%d ms";
    local_218 = (char *)CONCAT44(local_218._4_4_,1000);
    FUN_1801a85a0("Backtrack window","##v4_backtrack",uVar18,1);
    local_128 = 0x13806d9e35de0023;
    local_130 = 0x72114d0ef27e6e77;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_100,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_f0,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Show records","backtrack_visualize",uVar18,
                  "Marks every stored record (each backtrackable position).\nPurely visual - turning it off changes nothing about the aim.\nAlso covers the records HVH lag comp stores.\n\nStyle picks what a record is drawn AS; see the tooltip there."
                 );
    local_130 = 0x72114d0ef27e6e77;
    local_128 = 0x13806d9e35de0023;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1c8,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1b8,&local_130);
    pcVar21 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
    if (*pcVar21 != '\0') {
      local_128 = 0x13806d9e35de0023;
      local_130 = 0x28d1724205c8b8ad;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
      piVar22 = (int *)FUN_1802029c0(*plVar17 + 0x28);
      local_130 = CONCAT44(local_130._4_4_,2);
      uVar6 = local_128 >> 0x20;
      local_128 = local_128 & 0xffffffff00000000;
      piVar27 = (int *)&local_128;
      if (-1 < *piVar22) {
        piVar27 = piVar22;
      }
      piVar24 = (int *)&local_130;
      if (*piVar22 < 3) {
        piVar24 = piVar27;
      }
      *piVar22 = *piVar24;
      pfVar28 = (float *)&local_128;
      local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
      local_128 = CONCAT44((int)uVar6,0x3f400000);
      if (fVar8 <= DAT_1803da6a4) {
        pfVar28 = &DAT_1803da6a4;
      }
      pfVar26 = (float *)&local_130;
      if (DAT_1803da6a4 <= fVar9) {
        pfVar26 = pfVar28;
      }
      fVar36 = *pfVar26;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar32 = *(longlong *)(lVar1 + 0xec0);
      fVar36 = fVar36 * DAT_18038115c;
      local_218 = (char *)CONCAT44(local_218._4_4_,3);
      puVar20 = (uint *)(lVar32 + 0x1ec0);
      *puVar20 = *puVar20 | 1;
      *(float *)(lVar32 + 0x1ed8) = fVar36;
      FUN_1802b1200("Style##bt_vis_style",piVar22);
      cVar16 = FUN_18026ee60(0);
      if (cVar16 != '\0') {
        FUN_180280d00(
                     "Dots  - a marker at each record\'s eye. Says where and how many, reads at a glance, hides nothing.\nChams - each record drawn in the POSE the server would restore. Says what a shot solved against it would actually hit, which is the view that answers \'why did that miss\'. One full model draw per pose.\nBoth  - the dot marks the record its pose belongs to."
                     );
      }
      if (*piVar22 != 0) {
        local_130 = 0xfc3bf28ed4bc2e57;
        local_128 = 0x13806d9e35de0023;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
        uVar18 = FUN_1802029c0(*plVar17 + 0x28);
        local_210 = "%d";
        local_218 = (char *)CONCAT44(local_218._4_4_,0x40);
        FUN_1801a85a0("Poses shown","##bt_vis_count2",uVar18,1);
        local_128 = 0x13806d9e35de0023;
        local_130 = 0xb651be2253fff5d1;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
        uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
        local_218 = (char *)0x0;
        FUN_1801a1910("Only shootable ones","backtrack_vis_valid",uVar18,
                      "Hide records outside the server\'s acceptance band.\nThose are poses it will never rewind to, so drawing one\nclaims a shot that cannot happen.\n\nOff shows the whole stored history, shootable or not."
                     );
      }
    }
    local_128 = 0x13806d9e35de0023;
    local_130 = 0x34f63b042c73cf80;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("No extrapolation","backtrack_no_extrap",uVar18,
                  "Writes cl_extrapolate 0 straight onto the ConVar (it is a cheat\ncvar, so the console cannot set it on a normal server).\n\nWhen the connection starves, the engine runs EVERY entity up to\n0.25s past its last real position - a pose the server never had,\nso both the live aim and the records taken then are fiction.\nWith this on it clamps to the last real snapshot instead.\n\nCosts a visible stutter during packet loss. Does NOT affect\nfakelaggers: the engine already clamps a player whose updates\nstopped while other packets keep arriving.\nRestored on disconnect and on unload."
                 );
    FUN_1802afb40();
    local_130 = 0x758f1875f440310a;
    local_128 = 0x2d8f695138585a77;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Fake ping","backtrack_fakeping",uVar18,
                  "Acknowledges an OLDER server packet than the one you really got,\nso the server measures a bigger round trip and widens its\nlag-compensation window by exactly that much.\n\nNothing you send is delayed - there is no input lag. The cost is\nthat your ping is genuinely higher to everyone, scoreboard included.\n\nRemote servers only: a listen server has no latency to inflate."
                 );
    local_128 = 0x2d8f695138585a77;
    local_130 = 0x1fdde58283cebf32;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_100,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_f0,&local_130);
    piVar22 = (int *)FUN_1802029c0(*plVar17 + 0x28);
    local_210 = "%d ms";
    local_218 = (char *)CONCAT44(local_218._4_4_,0x37a);
    FUN_1801a85a0("Target ping","##fakeping_target",piVar22,200);
    piVar27 = piVar22;
    if (*piVar22 < 200) {
      piVar27 = &DAT_1803310a8;
    }
    if (0x37a < *piVar22) {
      piVar27 = &DAT_180330f3c;
    }
    *piVar22 = *piVar27;
    cVar16 = FUN_18026ee60(0);
    if (cVar16 != '\0') {
      FUN_180280d00(
                   "TOTAL latency the server should measure, real ping included.\nThe cap is 890 and not 1000 because the server prunes its\nhistory at sv_maxunlag (1.0s) and the pose it must still find\nsits at this plus your interp."
                   );
    }
    fVar36 = (float)FUN_1800c5790();
    dVar10 = DAT_180380ec0;
    dVar4 = (double)*piVar22 / DAT_180380ec0;
    dVar5 = (double)FUN_1800c5aa0();
    dVar2 = (double)FUN_1800c5c00();
    piVar27 = (int *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,4);
    dVar3 = (double)fVar36 * dVar10;
    local_128 = local_128 & 0xffffffff00000000;
    if (dVar4 <= (dVar2 - DAT_180380c28) + DAT_180380b40) {
      if (-1 < DAT_1803fb24c) {
        piVar27 = &DAT_1803fb24c;
      }
      piVar22 = (int *)&local_130;
      if (DAT_1803fb24c < 5) {
        piVar22 = piVar27;
      }
      DAT_1803fb24c = *piVar22;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)DAT_1803fb24c * 200,
                    "rewind %.0f ms (+%.0f ms interp)",SUB84((dVar4 + (double)fVar36) * dVar10,0),
                    dVar3);
    }
    else {
      if (-1 < DAT_1803fb24c) {
        piVar27 = &DAT_1803fb24c;
      }
      local_218 = (char *)(dVar5 * dVar10);
      piVar22 = (int *)&local_130;
      if (DAT_1803fb24c < 5) {
        piVar22 = piVar27;
      }
      DAT_1803fb24c = *piVar22;
      FUN_1802aabb0(&DAT_1803dc9f8 + (longlong)DAT_1803fb24c * 200,
                    "capped at %.0f ms (interp %.0f + real ping %.0f)",
                    SUB84((dVar2 - DAT_180380c28) * dVar10,0),dVar3);
      cVar16 = FUN_18026ee60(0);
      if (cVar16 != '\0') {
        FUN_180280d00(
                     "Rewind depth is your ping + this + interp, and sv_maxunlag caps the SUM.\nPast the cap the depth stops growing but the acceptance band keeps\nclimbing, so every usable record ends up jammed against the oldest\nedge of the history -- exactly the poses the server is dropping.\nThat reads as \'backtrack misses\'.\n\nThe request is clamped here rather than sent, so this costs you no\nextra real ping either. Lower the slider to make the line go away."
                     );
      }
    }
    uVar14 = DAT_1803fb0dc;
    fVar36 = DAT_180381278;
    if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
       (fVar37 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
      fVar37 = 0.0;
    }
    if ((DAT_1803fb0dc == 8) && (iVar29 = (int)(fVar37 * DAT_180381278 + fVar7), 0 < iVar29)) {
      if ((DAT_1803fa668 != (longlong *)0x0) &&
         (plVar17 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), plVar17 != (longlong *)0x0)
         ) {
        fVar37 = (float)(**(code **)(*plVar17 + 0x50))(plVar17,0);
        iVar31 = (int)(fVar37 * fVar36 + fVar7);
      }
      fVar37 = (float)FUN_1800b7350(1);
      piVar27 = (int *)&local_128;
      local_130 = CONCAT44(local_130._4_4_,4);
      local_128 = local_128 & 0xffffffff00000000;
      if ((int)(fVar37 * fVar36 + fVar7) - iVar29 < 0x15) {
        if (-1 < DAT_1803fb24c) {
          piVar27 = &DAT_1803fb24c;
        }
        piVar22 = (int *)&local_130;
        if (DAT_1803fb24c < 5) {
          piVar22 = piVar27;
        }
        DAT_1803fb24c = *piVar22;
        FUN_1802aabb0(&DAT_1803dc9c8 + (longlong)DAT_1803fb24c * 200,"+%d ms (server sees %d ms)",
                      iVar29,iVar31 + iVar29);
      }
      else {
        if (-1 < DAT_1803fb24c) {
          piVar27 = &DAT_1803fb24c;
        }
        piVar22 = (int *)&local_130;
        if (DAT_1803fb24c < 5) {
          piVar22 = piVar27;
        }
        DAT_1803fb24c = *piVar22;
        FUN_1802aabb0(&DAT_1803dc9c8 + (longlong)DAT_1803fb24c * 200,"+%d of %d ms (ramping up)",
                      iVar29);
      }
    }
    else {
      local_130 = 0x758f1875f440310a;
      local_128 = 0x2d8f695138585a77;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
      pcVar21 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
      if (*pcVar21 != '\0') {
        local_130 = CONCAT44(local_130._4_4_,4);
        piVar27 = (int *)&local_128;
        local_128 = local_128 & 0xffffffff00000000;
        if (-1 < DAT_1803fb24c) {
          piVar27 = &DAT_1803fb24c;
        }
        piVar22 = (int *)&local_130;
        if (DAT_1803fb24c < 5) {
          piVar22 = piVar27;
        }
        DAT_1803fb24c = *piVar22;
        lVar32 = (longlong)DAT_1803fb24c;
        uVar18 = FUN_1800b6c60(uVar14);
        FUN_1802aabb0(&DAT_1803dca28 + lVar32 * 200,&DAT_1803431ac,uVar18);
      }
    }
    local_128 = 0x2d8f695138585a77;
    local_130 = 0xdfb199559e5fc2fa;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Strict reliable safety","fakeping_strict",uVar18,
                  "Never acknowledge across a reliable-state change.\nCosts a little depth right after chat/kill traffic.\nLeave on unless you are debugging."
                 );
    local_128 = 0x2d8f695138585a77;
    local_130 = 0x1d9ceb5d1400d87;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Rewind reliable state","fakeping_rewind_reliable",uVar18,
                  "Also rewinds the reliable flip-flop. Ages the ack clock\nharder, but the server then RETRANSMITS reliable traffic -\nchat, kill feed and joins arrive twice. Off by default."
                 );
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  fVar7 = DAT_1803811f0;
  pfVar28 = (float *)&local_128;
  local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
  local_128 = CONCAT44(local_128._4_4_,0x3f400000);
  if (fVar8 <= DAT_1803da6a4) {
    pfVar28 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)&local_130;
  if (DAT_1803da6a4 <= fVar9) {
    pfVar26 = pfVar28;
  }
  fVar36 = *pfVar26 * DAT_1803811f0;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar32 = *(longlong *)(lVar1 + 0xec0);
  *(uint *)(lVar32 + 0x1f48) = *(uint *)(lVar32 + 0x1f48) | 2;
  *(float *)(lVar32 + 0x1f68) = fVar36;
  *(undefined4 *)(lVar32 + 0x1f6c) = 0;
  *(undefined4 *)(lVar32 + 0x1f50) = 1;
  cVar16 = FUN_18019a680("##gm_v4_popup");
  if (cVar16 != '\0') {
    FUN_1802aa3c0("Gamemode support",0,1);
    FUN_1802afb40();
    local_128 = 0x93fd561a96ab0c67;
    local_130 = 0xfc192b983f5bff62;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = (char *)0x0;
    FUN_1801a1910("Local movement prediction","gm_v4_movesim",uVar18,
                  "Simulates your next movement tick locally so the aimbot leads with\nthe origin you are about to have. It runs with the gamemode\'s Lua\nhooks off, so GM:SetupMove / GM:Move never see it.\n\nTurn OFF on gamemodes that restrict movement from Lua - handcuffs,\nstuns, cutscene locks. There the sim moves you when the server does\nnot: you walk while cuffed and then rubber-band back.\n\nNo spread is not affected either way."
                 );
    FUN_1802afb40();
    local_128 = 0x93fd561a96ab0c67;
    local_130 = 0xb180266dc2efa3d2;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = "##gm_v4_zcity_popup";
    FUN_1801a1910("Z-City / Homigrad","gm_v4_zcity",uVar18,
                  "Support for the Z-City / Homigrad weapon pack.\nSet No visual recoil to Classic on this pack."
                 );
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar36 = *pfVar26;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar32 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar32 + 0x1f48) = *(uint *)(lVar32 + 0x1f48) | 2;
    *(float *)(lVar32 + 0x1f68) = fVar36 * fVar7;
    *(undefined4 *)(lVar32 + 0x1f6c) = 0;
    *(undefined4 *)(lVar32 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##gm_v4_zcity_popup");
    uVar13 = DAT_18038112c;
    if (cVar16 != '\0') {
      FUN_1802aa3c0("Z-City / Homigrad",0,1);
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0xc262839f3cb156d3;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
      pcVar21 = (char *)FUN_1802028c0(*plVar17 + 0x28);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(int *)(*(longlong *)(lVar1 + 0xec0) + 0x1594) == 0) {
        _Src = pcVar21;
        if (0xf < *(ulonglong *)(pcVar21 + 0x18)) {
          _Src = *(char **)pcVar21;
        }
        strncpy_s(&DAT_180425b80,0x400,_Src,0xffffffffffffffff);
      }
      local_200 = (char *)0x0;
      local_218 = (char *)&local_128;
      local_208 = (char *)0x0;
      local_210 = (char *)((ulonglong)local_210 & 0xffffffff00000000);
      local_128 = 0;
      cVar16 = FUN_1802b74e0("Custom bases##zcbase",0,&DAT_180425b80,0x400);
      if (cVar16 != '\0') {
        sVar23 = strlen(&DAT_180425b80);
        FUN_180212700(pcVar21,&DAT_180425b80,sVar23);
      }
      FUN_1802aac80(
                   "Comma-separated weapon bases using the Homigrad method contract. Applies on every server."
                   );
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x3b4f6d0984fb7935;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1c8,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Kill spread (aim)","gm_v4_zcity_ks",uVar18,
                    "Kills what moves your aim. Needs No spread on.");
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x4eeac9b4b69916b0;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_110,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_120,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Kill recoil (screen)","gm_v4_zcity_kr",uVar18,
                    "Kills what shakes the screen. Needs No visual recoil on.");
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x5e23024750be0215;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_100,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,&local_f0,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Kill bullet cone (client only)","gm_v4_zcity_kc",uVar18,&DAT_180367410);
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x24281ae302625222;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_178,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_168,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Aim at ragdoll body","gm_v4_zcity_rag",uVar18,
                    "A downed player is a parked dot; the body is a separate\nragdoll. Aim at the body."
                   );
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0xc81ef1c43455b3be;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_198,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_188,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Aim like build 16","gm_v4_zcity_v16",uVar18,
                    "Reverts the whole Z-City aim path to build 16 (10.08) in one\nswitch: no per-tick muzzle sample, no shot feedback loop, no\nwalk lead, the old 14 deg solver ceiling, the raw view basis,\nno bullet-redirect detection, and the pack\'s norecoil flag\nwritten unconditionally. Also restores the unconditional\nCreateMove angle restore that 7b2bccf made conditional.\n\nOverrides Pack switch and Bullet redirect while it is on.\n\nFor comparing against 16 directly. If 16 comes back, turn the\nparts below back on one at a time to find which one cost it."
                   );
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x8e62cf1c230948fa;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1d8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1e8,&local_130);
      piVar22 = (int *)FUN_1802029c0(*plVar17 + 0x28);
      local_200 = (char *)0x0;
      local_208 = 
      "The gun fires along its barrel, not your eye line.\nSolver also corrects manual shots when Nospread is enabled."
      ;
      local_210 = (char *)CONCAT44(local_210._4_4_,uVar13);
      local_218._0_4_ = 4;
      FUN_1801a2900("Muzzle comp","gm_v4_zcity_muzzle",piVar22,&PTR_DAT_1803e74e8);
      local_128 = local_128 & 0xffffffff00000000;
      local_130 = CONCAT44(local_130._4_4_,3);
      piVar27 = (int *)&local_128;
      if (-1 < *piVar22) {
        piVar27 = piVar22;
      }
      piVar24 = (int *)&local_130;
      if (*piVar22 < 4) {
        piVar24 = piVar27;
      }
      *piVar22 = *piVar24;
      local_130 = 0xc7aca84756c0deaa;
      local_128 = 0xf7521f28977a3033;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1f8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1a8,&local_130);
      pfVar28 = (float *)FUN_180202dc0(*plVar17 + 0x28);
      fVar36 = DAT_180381094;
      local_200 = (char *)0x0;
      local_208 = (char *)CONCAT44(local_208._4_4_,uVar11);
      local_210 = "%.0f deg";
      local_218 = (char *)CONCAT44(local_218._4_4_,DAT_180381094);
      FUN_1801a7bd0("Snap radius","##gm_v4_zcity_snap",pfVar28,0);
      cVar16 = FUN_18026ee60(0);
      if (cVar16 != '\0') {
        FUN_180280d00(
                     "Does nothing while Smooth is 0.\n\nInside this many degrees the aim stops smoothing and takes the\nsolution in one step.\n\nThe last few degrees are where the barrel model\'s own error\nlives, and on Z-City the shot is gated on the REAL barrel at\nthe angle being sent - so crawling that stretch does not miss,\nit holds the trigger for the whole approach.\n\n0 turns it off. Bigger = a larger instant step on acquisition."
                     );
      }
      local_128 = local_128 & 0xffffffff00000000;
      local_130 = CONCAT44(local_130._4_4_,0x42340000);
      pfVar26 = (float *)&local_128;
      if (0.0 <= *pfVar28) {
        pfVar26 = pfVar28;
      }
      pfVar25 = (float *)&local_130;
      if (*pfVar28 <= fVar36) {
        pfVar25 = pfVar26;
      }
      *pfVar28 = *pfVar25;
      local_130 = 0x36e83df20bb4f44e;
      local_128 = 0x93fd561a96ab0c67;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1f8,&local_130);
      piVar22 = (int *)FUN_1802029c0(*plVar17 + 0x28);
      local_200 = (char *)0x0;
      local_208 = 
      "Off preserves the pack\'s shoot animation.\nAuto also preserves it while Muzzle comp is Solver,\nand uses the pack flag in other compensation modes.\n\nAlways disables the client animation even though the\nserver still runs it; this can make the muzzle model\ndisagree with the server, including on rifles.\n\nUse Auto for the official pose solver."
      ;
      local_210._0_4_ = uVar13;
      local_218._0_4_ = 3;
      FUN_1801a2900("Pack switch","gm_v4_zcity_pack",piVar22,&PTR_DAT_1803e7240);
      local_128 = local_128 & 0xffffffff00000000;
      local_130 = CONCAT44(local_130._4_4_,2);
      piVar27 = (int *)&local_128;
      if (-1 < *piVar22) {
        piVar27 = piVar22;
      }
      piVar24 = (int *)&local_130;
      if (*piVar22 < 3) {
        piVar24 = piVar27;
      }
      *piVar22 = *piVar24;
      local_130 = 0xf33b4d9fbb78de14;
      local_128 = 0x93fd561a96ab0c67;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1d8,&local_130);
      piVar22 = (int *)FUN_1802029c0(*plVar17 + 0x28);
      local_200 = (char *)0x0;
      local_208 = 
      "Auto keeps the barrel ray for the supported Homigrad contract.\nIsVR alone never changes the ray method. Use Always only for\na custom base whose bullet code redirects toward the eye trace."
      ;
      local_210 = (char *)CONCAT44(local_210._4_4_,uVar13);
      local_218 = (char *)CONCAT44(local_218._4_4_,3);
      FUN_1801a2900("Bullet redirect","gm_v4_zcity_eye",piVar22,&PTR_DAT_1803e9530);
      local_130 = CONCAT44(local_130._4_4_,2);
      local_128 = local_128 & 0xffffffff00000000;
      piVar27 = (int *)&local_128;
      if (-1 < *piVar22) {
        piVar27 = piVar22;
      }
      piVar24 = (int *)&local_130;
      if (*piVar22 < 3) {
        piVar24 = piVar27;
      }
      *piVar22 = *piVar24;
      local_130 = 0x943e8f97e20d790f;
      local_128 = 0x93fd561a96ab0c67;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_188,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_198,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Fire on fresh solve","gm_v4_zcity_fresh",uVar18,
                    "AutoFire uses a fresh muzzle sample and the aim for this command.\nPistol recoil and hand movement already included in the\nofficial pose calculation do not need to settle first.\nYour own clicks are not blocked by this option."
                   );
      local_128 = 0xf7521f28977a3033;
      local_130 = 0x4064f70bc33de70a;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_168,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_178,&local_130);
      piVar27 = (int *)FUN_1802029c0(*plVar17 + 0x28);
      if (*piVar27 == 0) {
        local_128 = 0xf7521f28977a3033;
        local_130 = 0xd82019af4eb08e8c;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
        plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1f8,&local_130);
        uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
        local_218 = (char *)0x0;
        FUN_1801a1910("Aim on tick","gm_v4_zcity_tickaim",uVar18,
                      "Mode None only, Z-City only. Runs the aim once per tick,\nthe way Silent and PSilent do, instead of once per\nrendered frame.\n\nThe barrel this pack aims by is sampled once a tick, so\nper frame the aim solves several times against the same\nsample and steers the view between the steps - that is\nthe crosshair shaking around the head.\n\nCosts: with smoothing on, the crosshair walks at tick\nrate instead of frame rate."
                     );
      }
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0xca4e752e29553884;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1f8,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Steady barrel (aim None)","gm_v4_zcity_hold",uVar18,
                    "Stops the crosshair shaking on aim mode None.\n\nThe solved angle is written to your real view, that turns\nthe gun, and the gun\'s new position changes the next\nsolution - a loop that rings at a few Hz and looks like\nthe aimbot is picking random angles around the head.\n\nThis holds the barrel correction between ticks and only\nre-takes it once the gun has stopped moving. Tracking is\nnot slowed: the angle to the target is still rebuilt every\nframe, only the gun-offset part is held.\n\nSilent and PSilent never move your view, so this does\nnothing there."
                   );
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x1a096a9307a0dc72;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1d8,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Autowall","gm_v4_zcity_aw",uVar18,
                    "Shoot through thin cover when the bullet still gets there.");
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0xa6fe116c060e2773;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_188,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_198,&local_130);
      pfVar28 = (float *)FUN_180202dc0(*plVar17 + 0x28);
      local_200 = (char *)0x0;
      local_208 = (char *)CONCAT44(local_208._4_4_,uVar11);
      local_210 = "%.0f";
      local_218 = (char *)CONCAT44(local_218._4_4_,uVar11);
      FUN_1801a7bd0("Min damage","##gm_v4_zcity_aw_dmg",pfVar28,0);
      cVar16 = FUN_18026ee60(0);
      if (cVar16 != '\0') {
        FUN_180280d00("Damage that has to survive the walls.");
      }
      local_130 = CONCAT44(local_130._4_4_,0x43480000);
      local_128 = local_128 & 0xffffffff00000000;
      pfVar26 = (float *)&local_128;
      if (0.0 <= *pfVar28) {
        pfVar26 = pfVar28;
      }
      pfVar25 = (float *)&local_130;
      if (*pfVar28 <= DAT_180381198) {
        pfVar25 = pfVar26;
      }
      *pfVar28 = *pfVar25;
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x664dead32a23502e;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1f8,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Shot preview","gm_v4_zcity_bp",uVar18,
                    "Draw where the bullet goes. Needs Muzzle comp = Solver.");
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x664dead32a23502e;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1d8,&local_130);
      pcVar21 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
      if (*pcVar21 != '\0') {
        local_128 = 0x93fd561a96ab0c67;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
        lVar32 = *plVar17 + 0x28;
        local_130 = 0x458f5bdd872c1a5a;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
        uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
        local_218 = (char *)0x0;
        FUN_1801a1910("  Ricochets","gm_v4_zcity_bp_ric",uVar18,"Keep drawing after a bounce.");
        local_130 = 0x3444988f08a45235;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
        uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
        local_218 = (char *)0x0;
        FUN_1801a1910("  Penetrations","gm_v4_zcity_bp_pen",uVar18,"Keep drawing after a wall.");
        local_130 = 0xf0a1c0c34f189d8b;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
        uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
        local_218 = (char *)0x0;
        FUN_1801a1910("  Impact point","gm_v4_zcity_bp_pt",uVar18,0);
        local_130 = 0x41733ddd14766b92;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_188,&local_130);
        uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
        local_218 = (char *)0x0;
        FUN_1801a1910("  Damage left","gm_v4_zcity_bp_dmg",uVar18,
                      "Damage at the impact, and walls/bounces taken.");
        local_130 = 0x52baa275b0ded003;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_198,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_f0 = *puVar19;
        local_130 = 0x52ba9575b0deb9ec;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_168,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_ec = *puVar19;
        local_130 = 0x52ba9275b0deb4d3;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_178,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_e8 = *puVar19;
        cVar16 = FUN_1802bac60("Direct##zcity_bp_col",&local_f0,0x22);
        uVar12 = local_f0;
        if (cVar16 != '\0') {
          local_130 = 0x52baa275b0ded003;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar15 = local_ec;
          *puVar19 = uVar12;
          local_130 = 0x52ba9575b0deb9ec;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar12 = local_e8;
          *puVar19 = uVar15;
          local_130 = 0x52ba9275b0deb4d3;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          *puVar19 = uVar12;
        }
        local_130 = 0x3fefb7f2d012d053;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_100 = *puVar19;
        local_130 = 0x3fefcaf2d012f09c;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_fc = *puVar19;
        local_130 = 0x3fefc7f2d012eb83;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_f8 = *puVar19;
        cVar16 = FUN_1802bac60("Through wall##zcity_bp_pcol",&local_100,0x22);
        uVar12 = local_100;
        if (cVar16 != '\0') {
          local_130 = 0x3fefb7f2d012d053;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar15 = local_fc;
          *puVar19 = uVar12;
          local_130 = 0x3fefcaf2d012f09c;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar12 = local_f8;
          *puVar19 = uVar15;
          local_130 = 0x3fefc7f2d012eb83;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          *puVar19 = uVar12;
        }
        local_130 = 0xe593c30362c405ee;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_120 = *puVar19;
        local_130 = 0xe593b80362c3f33d;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_11c = *puVar19;
        local_130 = 0xe593b30362c3eabe;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_118 = *puVar19;
        cVar16 = FUN_1802bac60("Ricochet##zcity_bp_rcol",&local_120,0x22);
        uVar12 = local_120;
        if (cVar16 != '\0') {
          local_130 = 0xe593c30362c405ee;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar15 = local_11c;
          *puVar19 = uVar12;
          local_130 = 0xe593b80362c3f33d;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar12 = local_118;
          *puVar19 = uVar15;
          local_130 = 0xe593b30362c3eabe;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          *puVar19 = uVar12;
        }
        local_130 = 0x275446d884c62fd9;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_110 = *puVar19;
        local_130 = 0x275459d884c65022;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_10c = *puVar19;
        local_130 = 0x275456d884c64b09;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_108 = *puVar19;
        cVar16 = FUN_1802bac60("Hits a player##zcity_bp_hcol",&local_110,0x22);
        uVar12 = local_110;
        if (cVar16 != '\0') {
          local_130 = 0x275446d884c62fd9;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar15 = local_10c;
          *puVar19 = uVar12;
          local_130 = 0x275459d884c65022;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          uVar12 = local_108;
          *puVar19 = uVar15;
          local_130 = 0x275456d884c64b09;
          plVar17 = (longlong *)FUN_180241a30(lVar32,local_1d8,&local_130);
          puVar19 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
          *puVar19 = uVar12;
        }
        local_130 = 0xdeee6b0ba2852235;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1f8,&local_130);
        uVar18 = FUN_180202dc0(*plVar17 + 0x28);
        local_200 = (char *)0x0;
        local_208._0_4_ = uVar11;
        local_210 = "%.1f";
        local_218._0_4_ = DAT_180380f40;
        FUN_1801a7bd0("Beam width","##zcity_bp_w",uVar18,DAT_180380a3c);
        local_130 = 0x8d4e2b57d73bf615;
        plVar17 = (longlong *)FUN_180241a30(lVar32,local_1e8,&local_130);
        uVar18 = FUN_180202dc0(*plVar17 + 0x28);
        local_200 = (char *)0x0;
        local_208 = (char *)CONCAT44(local_208._4_4_,uVar11);
        local_210 = "%.0f";
        local_218 = (char *)CONCAT44(local_218._4_4_,DAT_180381038);
        FUN_1801a7bd0("Marker size","##zcity_bp_ps",uVar18,DAT_180380d30);
      }
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_128 = 0x93fd561a96ab0c67;
    local_130 = 0xba33a12acf3fe1c3;
    plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
    plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1f8,&local_130);
    uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
    local_218 = "##gm_v4_octo_popup";
    FUN_1801a1910("Dobrograd (Octo)","gm_v4_octo",uVar18,
                  "Octothorp pack - Dobrograd and the other OctoTeam DarkRP servers.\nOff = we never touch its trigger gate or its muzzle geometry.\nThe cone itself comes from the weapon backend either way, because\nthis pack calls FireBullets on the SERVER only."
                 );
    pfVar28 = (float *)&local_128;
    local_130 = CONCAT44(local_130._4_4_,0x3fc00000);
    local_128 = CONCAT44(local_128._4_4_,0x3f400000);
    if (fVar8 <= DAT_1803da6a4) {
      pfVar28 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)&local_130;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar26 = pfVar28;
    }
    fVar36 = *pfVar26;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar1 + 0x1f48) = *(uint *)(lVar1 + 0x1f48) | 2;
    *(float *)(lVar1 + 0x1f68) = fVar36 * fVar7;
    *(undefined4 *)(lVar1 + 0x1f6c) = 0;
    *(undefined4 *)(lVar1 + 0x1f50) = 1;
    cVar16 = FUN_18019a680("##gm_v4_octo_popup");
    if (cVar16 != '\0') {
      FUN_1802aa3c0("Dobrograd (Octo)",0,1);
      FUN_1802afb40();
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0xc94e595f119c0d27;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1f8,&local_130);
      piVar22 = (int *)FUN_1802029c0(*plVar17 + 0x28);
      local_200 = (char *)0x0;
      local_208 = 
      "The pack\'s CanFire() refuses unless the server has set its IsReady\nnetvar, which needs right-click held (or crouch, with a long gun).\nWithout this, autoshoot/triggerbot press the trigger of a weapon\nthat has already decided not to fire.\nAuto: hold right-click while the aimbot has a target. (default)\nAlways: hold it whenever an octo gun is out.\nOff: never touch it - you aim down sights yourself."
      ;
      local_210._0_4_ = uVar13;
      local_218._0_4_ = 3;
      FUN_1801a2900("ADS hold","gm_v4_octo_ads",piVar22,&PTR_DAT_1803e7508);
      local_128 = local_128 & 0xffffffff00000000;
      local_130 = CONCAT44(local_130._4_4_,2);
      piVar27 = (int *)&local_128;
      if (-1 < *piVar22) {
        piVar27 = piVar22;
      }
      piVar24 = (int *)&local_130;
      if (*piVar22 < 3) {
        piVar24 = piVar27;
      }
      *piVar22 = *piVar24;
      local_130 = 0x147e6eb3aac54b6a;
      local_128 = 0x93fd561a96ab0c67;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_1d8,&local_130);
      puVar20 = (uint *)FUN_1802029c0(*plVar17 + 0x28);
      local_200 = (char *)0x0;
      local_208 = 
      "Aim from the weapon barrel, including its position and direction.\nWorks without nospread. Solver is the default.\nOld Angle profiles use Solver automatically."
      ;
      local_130 = CONCAT44(local_130._4_4_,(uint)(0 < (int)*puVar20));
      local_210 = (char *)CONCAT44(local_210._4_4_,uVar13);
      local_218 = (char *)CONCAT44(local_218._4_4_,2);
      FUN_1801a2900("Muzzle comp","gm_v4_octo_muzzle",&local_130,&PTR_DAT_1803e6f18);
      bVar34 = (float)local_130 != 0.0;
      local_128 = 0x93fd561a96ab0c67;
      local_130 = 0x3d5984117d619a29;
      *puVar20 = -(uint)bVar34 & 2;
      plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_188,&local_128);
      plVar17 = (longlong *)FUN_180241a30(*plVar17 + 0x28,local_198,&local_130);
      uVar18 = FUN_1801fcfc0(*plVar17 + 0x28);
      local_218 = (char *)0x0;
      FUN_1801a1910("Steady view","gm_v4_octo_steady",uVar18,
                    "Smooth camera motion relative to your view.\nTurning and walking keep their normal response.\nThe sight transition is smoothed too. Bullet aim is unchanged."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
LAB_1801bf6ef:
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  return;
}


