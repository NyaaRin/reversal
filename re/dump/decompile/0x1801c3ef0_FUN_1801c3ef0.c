// 0x1801c3ef0  FUN_1801c3ef0
// size=17069 thunk=false
// signature: undefined FUN_1801c3ef0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801c48fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c3ef0(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float *pfVar19;
  float *pfVar20;
  undefined4 *puVar21;
  float *pfVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  float *pfVar26;
  longlong lVar27;
  char *pcVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStackY_1d8 [32];
  float local_198 [2];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined4 local_170;
  int local_16c [3];
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined4 uStack_14c;
  undefined8 local_140;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStackY_1d8;
  lVar30 = 0;
  local_170 = 0;
  local_140 = CONCAT44(local_140._4_4_,4);
  local_198[0] = 0.0;
  pfVar26 = local_198;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar26 = &DAT_1803fb24c;
  }
  pfVar19 = (float *)&local_140;
  if ((int)DAT_1803fb24c < 5) {
    pfVar19 = pfVar26;
  }
  DAT_1803fb24c = *pfVar19;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar34 = DAT_180380fe0;
  lVar31 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  lVar32 = 0x280;
  if ((*(longlong *)(lVar31 + 0x1c8) != 0) ||
     (lVar27 = 0x280, *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x2368) != 0)) {
    lVar27 = 0x250;
  }
  fVar35 = ((*(float *)(lVar31 + lVar27) - *(float *)(lVar31 + 0x118)) - DAT_180380fe0) *
           DAT_180380ac0;
  local_160 = (char *)0x0;
  FUN_18026aad0(2,&local_160);
  uVar10 = DAT_180381384;
  local_160 = (char *)CONCAT44(0xbf800000,fVar35);
  FUN_180272fa0("##visual_left",&local_160,0,0x18);
  FUN_18026abb0(1);
  cVar13 = FUN_18019fbc0("Sky Editor",1,CONCAT44(uVar10,fVar35),0);
  fVar9 = DAT_180381190;
  fVar8 = DAT_180380c50;
  fVar7 = DAT_180380bb0;
  fVar6 = DAT_180380b20;
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_180,&local_158);
    lVar31 = *plVar16 + 0x28;
    local_160 = (char *)0x1f5f08cfb5ace54;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    uVar17 = FUN_1802029c0(*plVar16 + 0x28);
    local_160 = (char *)0x3cfd94a417011121;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    uVar18 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a16e0("Enable##sky",uVar18,"##sky_hotkey",uVar17);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Changes the skybox client-side (no sv_skyname write).\nEngine loader = presets + any installed sky, native, works on painted maps.\nHidden from OBS / screengrabbers while \"Stream-proof view\" is on."
                   );
    }
    local_160 = (char *)0x8911f3778b8c2d42;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
    local_198[0] = 1.5;
    local_140._0_4_ = 0.75;
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar22 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar22 = pfVar26;
    }
    fVar2 = *pfVar22;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar27 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar27 + 0x1ed8) = fVar2 * fVar9;
    FUN_1802b1200("Loader##sky",pfVar19);
    local_198[0] = 1.4013e-45;
    local_140 = (ulonglong)local_140._4_4_ << 0x20;
    pfVar26 = (float *)&local_140;
    if (-1 < (int)*pfVar19) {
      pfVar26 = pfVar19;
    }
    pfVar22 = local_198;
    if ((int)*pfVar19 < 2) {
      pfVar22 = pfVar26;
    }
    *pfVar19 = *pfVar22;
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Engine = native engine sky loader: presets + any installed sky,\nno material/loose-file footprint, works on painted/VPK maps.\nOverride = our loose-VMT swap (fallback if the engine signature\nbreaks after a game update)."
                   );
    }
    local_160 = (char *)0x4ebcf38ca2af7c6e;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    pfVar26 = (float *)FUN_1802029c0(*plVar16 + 0x28);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar27 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar27 + 0x1ed8) = 0xbf800000;
    FUN_1802b1200("##sky_preset",pfVar26);
    local_198[0] = 1.82169e-44;
    local_140 = local_140 & 0xffffffff00000000;
    pfVar22 = (float *)&local_140;
    if (-1 < (int)*pfVar26) {
      pfVar22 = pfVar26;
    }
    pfVar20 = local_198;
    if ((int)*pfVar26 < 0xe) {
      pfVar20 = pfVar22;
    }
    *pfVar26 = *pfVar20;
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      pcVar28 = 
      "Which sky the loose-VMT override points the map\'s faces at.\nNothing of ours is written into materials/ for a preset -- only the six VMTs."
      ;
      if (*pfVar19 == 0.0) {
        pcVar28 = "Which sky the engine loader binds for your view.";
      }
      FUN_180280d00(pcVar28);
    }
    if (*pfVar26 == 0.0) {
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar27 = *(longlong *)(lVar5 + 0xec0);
      puVar1 = (uint *)(lVar27 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(lVar27 + 0x1ed8) = 0xbf800000;
      local_160 = (char *)0x0;
      FUN_1802b74e0("##sky_name","installed sky name (e.g. sky_day01_01)",&DAT_1804010c0,0x50);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00("Type any sky already installed in the game, or import your own VTF below.");
      }
    }
    if ((*pfVar19 == 0.0) && (FUN_18012aa50(), DAT_180400ea0 == 0)) {
      local_198[0] = 5.60519e-45;
      local_140 = local_140 & 0xffffffff00000000;
      pfVar26 = (float *)&local_140;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar26 = &DAT_1803fb24c;
      }
      pfVar22 = local_198;
      if ((int)DAT_1803fb24c < 5) {
        pfVar22 = pfVar26;
      }
      DAT_1803fb24c = *pfVar22;
      FUN_1802aabb0(&DAT_1803dca08 + (longlong)(int)DAT_1803fb24c * 200,
                    "Engine loader not found - use Override.");
    }
    if (*pfVar19 == 1.4013e-45) {
      pcVar28 = (char *)FUN_18012a9f0();
      if ((pcVar28 == (char *)0x0) || (*pcVar28 == '\0')) {
        pcVar28 = "-";
      }
      local_198[0] = 5.60519e-45;
      local_140 = local_140 & 0xffffffff00000000;
      pfVar26 = (float *)&local_140;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar26 = &DAT_1803fb24c;
      }
      pfVar19 = local_198;
      if ((int)DAT_1803fb24c < 5) {
        pfVar19 = pfVar26;
      }
      DAT_1803fb24c = *pfVar19;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Map sky: %s",pcVar28);
    }
    local_160 = (char *)0x6e630b2ce2bdb225;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_108 = *puVar21;
    local_160 = (char *)0x6e63162ce2bdc4d6;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_104 = *puVar21;
    local_160 = (char *)0x6e631b2ce2bdcd55;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_100 = *puVar21;
    cVar13 = FUN_1802bac60("Tint##sky_tint",&local_108,0x22);
    uVar11 = local_108;
    if (cVar13 != '\0') {
      local_160 = (char *)0x6e630b2ce2bdb225;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      uVar12 = local_104;
      *puVar21 = uVar11;
      local_160 = (char *)0x6e63162ce2bdc4d6;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      uVar11 = local_100;
      *puVar21 = uVar12;
      local_160 = (char *)0x6e631b2ce2bdcd55;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
    }
    local_160 = (char *)0xb407de79ef79c9ba;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    uVar17 = FUN_180202dc0(*plVar16 + 0x28);
    fVar2 = DAT_180380e9c;
    FUN_1801a7a20("Brightness","##sky_bright",uVar17,0);
    local_198[0] = 1.5;
    local_140 = CONCAT44(local_140._4_4_,0x3f400000);
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    local_160 = (char *)((ulonglong)(uint)(*pfVar19 * fVar2) << 0x20);
    FUN_1802af260(&local_160);
    local_160 = (char *)0x4f0efc17f02b64be;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a0b60("Custom VTF sky",uVar17);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Replaces all six skybox faces with your own VTF from anywhere on disk.\nAnimated VTFs play (set the FPS below). Picking one face of a 6-face set\n(*rt.vtf with rt/lf/bk/ft/up/dn siblings) loads the whole set onto the right faces.\nThe file is copied under garrysmod/materials with a random name; Clear removes it.\nHidden from OBS / screengrabbers while \"Stream-proof view\" is on."
                   );
    }
    cVar13 = *(char *)(lVar5 + 0x10);
    if (cVar13 == '\0') {
      __dyn_tls_on_demand_init();
      cVar13 = *(char *)(lVar5 + 0x10);
    }
    lVar27 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar27 + 0x1c8) != 0) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x2368) != 0)) {
      lVar32 = 0x250;
    }
    local_198[0] = 1.5;
    local_140._0_4_ = 0.75;
    fVar3 = *(float *)(lVar32 + lVar27);
    fVar4 = *(float *)(lVar27 + 0x118);
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    fVar33 = *pfVar19 * _DAT_180381084;
    if (cVar13 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar32 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar32 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar32 + 0x1ed8) = (fVar3 - fVar4) - fVar33;
    local_160 = (void *)0x0;
    FUN_1802b74e0("##sky_vtf_path","C:\\path\\to\\sky.vtf",&DAT_180400ec0,0x200);
    local_198[0] = 1.5;
    local_140._0_4_ = 0.75;
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    FUN_18027f5b0(pfVar26,*pfVar19 * fVar2);
    local_198[0] = 1.5;
    local_140 = CONCAT44(local_140._4_4_,0x3f400000);
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    cVar14 = FUN_18019dc00("##sky_browse",6,*pfVar19 * DAT_180381078);
    cVar13 = DAT_1804011c0;
    if (cVar14 != '\0') {
      LOCK();
      DAT_1804011c0 = '\x01';
      UNLOCK();
      if (cVar13 == '\0') {
        local_160 = (char *)0x0;
        local_160 = (char *)FUN_1802d8350(1);
        local_170 = 1;
        local_128 = (char *)_beginthreadex((void *)0x0,0,FUN_180220e70,local_160,0,
                                           (uint *)&pcStack_120);
        if (local_128 != (char *)0x0) {
          local_160 = (void *)0x0;
          local_170 = 0;
          if ((int)pcStack_120 != 0) {
            pcStack_110 = pcStack_120;
            local_118 = local_128;
            iVar15 = _Thrd_detach(&local_118);
            if (iVar15 == 0) {
              local_128 = (char *)0x0;
              pcStack_120 = (char *)0x0;
              goto LAB_1801c4920;
            }
          }
          std::_Throw_Cpp_error(1);
        }
        pcStack_120 = (char *)((ulonglong)pcStack_120 & 0xffffffff00000000);
        std::_Throw_Cpp_error(6);
      }
    }
LAB_1801c4920:
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00("Browse for a .vtf file");
    }
    fVar3 = DAT_180381100;
    fVar2 = DAT_180381048;
    local_160 = (char *)CONCAT44(local_160._4_4_,0x3fc00000);
    _local_150 = CONCAT44(uStack_14c,0x3f400000);
    local_198[0] = 1.5;
    local_140 = CONCAT44(local_140._4_4_,0x3f400000);
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    local_140 = CONCAT44(local_140._4_4_,*pfVar19 * DAT_180381100);
    pfVar26 = &local_150;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar22 = (float *)&local_160;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar22 = pfVar26;
    }
    local_140 = CONCAT44(*pfVar22 * DAT_180381048,*pfVar19 * DAT_180381100);
    cVar13 = FUN_1802abf60("Load##sky_load",&local_140,0);
    if (cVar13 != '\0') {
      LOCK();
      DAT_180400eb0 = 1;
      UNLOCK();
      if (DAT_1803fa668 == (longlong *)0x0) {
LAB_1801c49fd:
        pcVar28 = "Queued - loads when you join a game.";
      }
      else {
        cVar13 = (**(code **)(*DAT_1803fa668 + 0xd0))();
        pcVar28 = "Loading...";
        if (cVar13 == '\0') goto LAB_1801c49fd;
      }
      FUN_18012ab30(pcVar28);
    }
    local_150 = 1.5;
    local_160._0_4_ = 0.75;
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    FUN_18027f5b0(pfVar26,*pfVar19 * DAT_180380f40);
    local_198[0] = 1.5;
    local_140 = CONCAT44(local_140._4_4_,0x3f400000);
    _local_150 = CONCAT44(uStack_14c,0x3fc00000);
    local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    local_160 = (char *)CONCAT44(local_160._4_4_,*pfVar19 * fVar3);
    pfVar26 = (float *)&local_140;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar22 = local_198;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar22 = pfVar26;
    }
    local_160 = (char *)CONCAT44(*pfVar22 * fVar2,*pfVar19 * fVar3);
    cVar13 = FUN_1802abf60("Clear##sky_clear",&local_160,0);
    if (cVar13 != '\0') {
      LOCK();
      DAT_180401148 = 1;
      UNLOCK();
    }
    FUN_1802aac80(&DAT_1803431ac,s_No_custom_VTF_loaded__1803e7a90);
    local_160 = (char *)0x8911f3778b8c2d42;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
    cVar13 = DAT_180400eb8;
    if (*piVar23 == 0) {
      cVar13 = DAT_180400b80 != '\0';
    }
    if ((DAT_180400b70 != '\0') && (cVar13 == '\0')) {
      FUN_1802aac80("Not applied yet (needs Enable + Custom VTF sky, in game).");
    }
    if (1 < DAT_180400c04) {
      local_160 = (char *)0xaeca5b24c521e60;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      uVar17 = FUN_180202dc0(*plVar16 + 0x28);
      FUN_1801a7a20("Anim FPS","##sky_fps",uVar17,fVar7);
    }
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  local_150 = 1.5;
  local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
  pfVar26 = (float *)&local_160;
  if (fVar6 <= DAT_1803da6a4) {
    pfVar26 = &DAT_1803da6a4;
  }
  pfVar19 = &local_150;
  if (DAT_1803da6a4 <= fVar8) {
    pfVar19 = pfVar26;
  }
  FUN_18027f5b0(pfVar26,*pfVar19 * fVar34);
  local_160 = (char *)0x0;
  FUN_18026aad0(2,&local_160);
  local_160 = (char *)0xbf80000000000000;
  FUN_180272fa0("##visual_right",&local_160,0,0x18);
  FUN_18026abb0(1);
  cVar13 = FUN_18019fbc0("Effects",2,CONCAT44(DAT_1803811d8,fVar35),0);
  if (cVar13 == '\0') goto LAB_1801c7d7f;
  local_158 = 0x93fd561a96ab0c67;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_180,&local_158);
  local_160 = (char *)0x214e9812b55edc3;
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_128,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("Chams",uVar17);
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##chams_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("chams_opts");
  }
  cVar13 = FUN_18019a680("chams_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_180,&local_158);
    lVar31 = *plVar16 + 0x28;
    local_150 = 1.5;
    local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    fVar34 = *pfVar19;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar32 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar32 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar32 + 0x1ed8) = fVar34 * fVar9;
    local_160 = (char *)0xd7a75c528ea57217;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    uVar17 = FUN_1802029c0(*plVar16 + 0x28);
    FUN_1802b1200("Mode##player_chams_mode",uVar17);
    local_150 = 1.4013e-45;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    local_140 = 0xd7a75c528ea57217;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_140);
    pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)*pfVar19) {
      pfVar26 = pfVar19;
    }
    pfVar22 = &local_150;
    if ((int)*pfVar19 < 2) {
      pfVar22 = pfVar26;
    }
    fVar34 = *pfVar22;
    local_160 = (char *)0xd7a75c528ea57217;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    pfVar26 = (float *)FUN_1802029c0(*plVar16 + 0x28);
    *pfVar26 = fVar34;
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Solid colors: repaints the model.\nOutline: a coloured border around the character and/or the real\ntextured model through walls - everything below is switchable."
                   );
    }
    local_160 = (char *)0xd7a75c528ea57217;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
    if (*piVar23 == 0) {
      local_150 = 1.5;
      local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
      pfVar26 = (float *)&local_160;
      if (fVar6 <= DAT_1803da6a4) {
        pfVar26 = &DAT_1803da6a4;
      }
      pfVar19 = &local_150;
      if (DAT_1803da6a4 <= fVar8) {
        pfVar19 = pfVar26;
      }
      fVar34 = *pfVar19;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar32 = *(longlong *)(lVar5 + 0xec0);
      puVar1 = (uint *)(lVar32 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar32 + 0x1ed8) = fVar34 * fVar9;
      FUN_1801071e0();
      local_160 = (char *)0x279c57cf06166f3d;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      uVar17 = FUN_1802029c0(*plVar16 + 0x28);
      FUN_1802b1200("Material##player_chams_mat",uVar17);
      _local_150 = CONCAT44(uStack_14c,0xc);
      local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
      local_140 = 0x279c57cf06166f3d;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_140);
      pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
      pfVar26 = (float *)&local_160;
      if (-1 < (int)*pfVar19) {
        pfVar26 = pfVar19;
      }
      pfVar22 = &local_150;
      if ((int)*pfVar19 < 0xd) {
        pfVar22 = pfVar26;
      }
      fVar34 = *pfVar22;
      local_160 = (char *)0x279c57cf06166f3d;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      pfVar26 = (float *)FUN_1802029c0(*plVar16 + 0x28);
      *pfVar26 = fVar34;
      local_160 = (char *)0x279c57cf06166f3d;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
      if (*piVar23 == 0xc) {
        FUN_1801c3ca0();
      }
      local_150 = 5.60519e-45;
      local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
      pfVar26 = (float *)&local_160;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar26 = &DAT_1803fb24c;
      }
      pfVar19 = &local_150;
      if ((int)DAT_1803fb24c < 5) {
        pfVar19 = pfVar26;
      }
      DAT_1803fb24c = *pfVar19;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Opacity");
      local_140 = 0xe07bf745bbabe848;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_140);
      fVar34 = DAT_1803809c4;
      local_160._0_4_ = 1.0;
      local_150 = 0.05;
      uVar17 = FUN_180202dc0(*plVar16 + 0x28);
      FUN_1801a6c50("##chams_alpha",8,uVar17,&local_150);
      local_150 = 1.0;
      local_160 = (char *)CONCAT44(local_160._4_4_,0x3d4ccccd);
      local_140 = 0xe07bf745bbabe848;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_140);
      pfVar19 = (float *)FUN_180202dc0(*plVar16 + 0x28);
      pfVar26 = (float *)&local_160;
      if (fVar34 <= *pfVar19) {
        pfVar26 = pfVar19;
      }
      pfVar22 = &local_150;
      if (*pfVar19 <= fVar7) {
        pfVar22 = pfVar26;
      }
      fVar34 = *pfVar22;
      local_160 = (char *)0xe07bf745bbabe848;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      pfVar26 = (float *)FUN_180202dc0(*plVar16 + 0x28);
      *pfVar26 = fVar34;
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "1.00 = the solid chams as before.\nLower makes the fill see-through - the transparent chams look.\nWorks with any material; Flat and Additive ghost read best.\nNote: the viewmodel chams draw from the same material list, so with the\nsame look selected there they turn see-through too."
                     );
      }
      local_160 = (char *)0x279c57cf06166f3d;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
      piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
      if (DAT_1803e9334 == *piVar23) {
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
        fVar34 = *(float *)(lVar32 + 0x118);
        fVar2 = *(float *)(lVar32 + 0x28);
        fVar3 = *(float *)(lVar32 + 0x98);
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
        pfVar26 = (float *)(lVar32 + 0x1f0);
        FUN_18028a630(lVar32 + 0x208,pfVar26);
        *pfVar26 = (fVar34 - fVar2) + fVar3 + fVar9;
        if (DAT_1803e9a10 == '\0') {
          local_150 = 5.60519e-45;
          local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
          pfVar26 = (float *)&local_160;
          if (-1 < (int)DAT_1803fb24c) {
            pfVar26 = &DAT_1803fb24c;
          }
          pfVar19 = &local_150;
          if ((int)DAT_1803fb24c < 5) {
            pfVar19 = pfVar26;
          }
          DAT_1803fb24c = *pfVar19;
          puVar29 = (undefined8 *)(&DAT_1803dca08 + (longlong)(int)DAT_1803fb24c * 200);
          pcVar28 = "Not mounted on this install - drawing Flat.";
LAB_1801c5275:
          FUN_1802aabb0(puVar29,pcVar28);
        }
        else if (DAT_1803e9a12 != '\0') {
          local_128 = _DAT_180381680;
          pcStack_120 = _UNK_180381688;
          pcVar28 = 
          "Refract material: distorts what is BEHIND the model, so the ESP-editor preview can only approximate it. In game it looks right."
          ;
          puVar29 = &local_128;
          goto LAB_1801c5275;
        }
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
        iVar15 = *(int *)(lVar32 + 0x208);
        if (iVar15 < 1) {
          FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
        }
        else {
          *(undefined4 *)(lVar32 + 0x1f0) =
               *(undefined4 *)(*(longlong *)(lVar32 + 0x210) + -4 + (longlong)iVar15 * 4);
          *(int *)(lVar32 + 0x208) = iVar15 + -1;
        }
      }
    }
    local_160 = (char *)0xd7a75c528ea57217;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_128,&local_160);
    piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
    if (*piVar23 == 1) {
      local_160 = (char *)0x25ac6bf5fc61a680;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Outline##glow_outline",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00("The coloured border around the character.");
      }
      local_160 = (char *)0x44e346faced5d1ce;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Show model through walls##glow_xray",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Redraws the player\'s own textured model with the depth suppressed,\nso you see the actual body behind geometry. Independent of the border:\nturn one of the two off for outline-only or model-only."
                     );
      }
      local_160 = (char *)0xfd3d160b71592661;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Fill model with material##glow_fillmodel",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Draws the model through walls repainted with a chams material -\nthe same look list \"Solid colors\" uses - with its own colour and opacity.\nIndependent of \"Show model through walls\", which keeps the real texture:\nwith both on, this one is drawn on top."
                     );
      }
      local_160 = (char *)0xfd3d160b71592661;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
      pcVar28 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
      if (*pcVar28 != '\0') {
        local_150 = 1.5;
        local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
        pfVar26 = (float *)&local_160;
        if (fVar6 <= DAT_1803da6a4) {
          pfVar26 = &DAT_1803da6a4;
        }
        pfVar19 = &local_150;
        if (DAT_1803da6a4 <= fVar8) {
          pfVar19 = pfVar26;
        }
        fVar34 = *pfVar19;
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(lVar5 + 0xec0);
        puVar1 = (uint *)(lVar32 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(float *)(lVar32 + 0x1ed8) = fVar34 * fVar9;
        FUN_1801071e0();
        local_160 = (char *)0xf4da6ac1d14e886e;
        plVar16 = (longlong *)FUN_180241a30(lVar31,&local_150,&local_160);
        uVar17 = FUN_1802029c0(*plVar16 + 0x28);
        FUN_1802b1200("Fill material##glow_fill_mat",uVar17);
        local_150 = 1.68156e-44;
        local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
        local_140 = 0xf4da6ac1d14e886e;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_140);
        pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
        pfVar26 = (float *)&local_160;
        if (-1 < (int)*pfVar19) {
          pfVar26 = pfVar19;
        }
        pfVar22 = &local_150;
        if ((int)*pfVar19 < 0xd) {
          pfVar22 = pfVar26;
        }
        fVar34 = *pfVar22;
        local_160 = (char *)0xf4da6ac1d14e886e;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        pfVar26 = (float *)FUN_1802029c0(*plVar16 + 0x28);
        *pfVar26 = fVar34;
        local_160 = (char *)0xf4da6ac1d14e886e;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
        if (*piVar23 == 0xc) {
          FUN_1801c3ca0();
        }
        local_160 = (char *)0xb3fae27070269fb2;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        local_108 = *puVar21;
        local_160 = (char *)0xb3faef707026b5c9;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        local_104 = *puVar21;
        local_160 = (char *)0xb3faf2707026bae2;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        local_100 = *puVar21;
        cVar13 = FUN_1802bac60("Fill color##glow_fill_col",&local_108,0x22);
        uVar11 = local_108;
        if (cVar13 != '\0') {
          local_160 = (char *)0xb3fae27070269fb2;
          plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
          puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
          uVar12 = local_104;
          *puVar21 = uVar11;
          local_160 = (char *)0xb3faef707026b5c9;
          plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
          puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
          uVar11 = local_100;
          *puVar21 = uVar12;
          local_160 = (char *)0xb3faf2707026bae2;
          plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
          puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
          *puVar21 = uVar11;
        }
        cVar13 = FUN_18026ee60(0);
        if (cVar13 != '\0') {
          FUN_180280d00(
                       "One colour for the whole fill - it is drawn through walls, so there is no\nvisible/hidden split to make here. The border keeps its own two colours."
                       );
        }
      }
      local_160 = (char *)0x5bca754c19d73cdf;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Outline through walls##glow_thr",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Colours the part of the body that is behind geometry too, in the\n\"hidden\" colour. Off = the border only marks what you can actually see."
                     );
      }
      local_160 = (char *)0x3db4763925009906;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Sharp border (no glow)##glow_sharp",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "No blur at all. The silhouette is grown by a fixed number of\npixels and its inside is cut out, so the border is hard-edged and evenly\nthick instead of fading. Overrides \"Soft glow\"."
                     );
      }
      local_160 = (char *)0x3db4763925009906;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      pcVar28 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
      if (*pcVar28 == '\0') {
        local_160 = (char *)0x5cded73623217c2a;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
        FUN_1801a0b60("Soft glow##glow_soft",uVar17);
        cVar13 = FUN_18026ee60(0);
        if (cVar13 != '\0') {
          FUN_180280d00(
                       "On: the blur bounces through the engine\'s quarter-size bloom buffer, which\nsmears the ring far wider than its radius - a soft halo.\nOff: full-resolution blur, so a small radius leaves a crisp border\nand no glow at all. Pair \"off\" with thickness 1-2."
                       );
        }
      }
      local_160 = (char *)0x18fc161e9b31bc79;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_118 = (char *)CONCAT44(local_118._4_4_,*puVar21);
      local_160 = (char *)0x18fc291e9b31dcc2;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_118 = (char *)CONCAT44(*puVar21,(undefined4)local_118);
      local_160 = (char *)0x18fc261e9b31d7a9;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      pcStack_110 = (char *)CONCAT44(pcStack_110._4_4_,*puVar21);
      cVar13 = FUN_1802bac60("Hidden##glow_tr_col",&local_118,0x22);
      if (cVar13 != '\0') {
        uVar11 = (undefined4)local_118;
        local_160 = (char *)0x18fc161e9b31bc79;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = local_118._4_4_;
        local_160 = (char *)0x18fc291e9b31dcc2;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = pcStack_110._0_4_;
        local_160 = (char *)0x18fc261e9b31d7a9;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
      }
      local_160 = (char *)0xafd05be4da944c2d;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_128 = (char *)CONCAT44(local_128._4_4_,*puVar21);
      local_160 = (char *)0xafd046e4da94287e;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_128 = (char *)CONCAT44(*puVar21,(undefined4)local_128);
      local_160 = (char *)0xafd04be4da9430fd;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,*puVar21);
      cVar13 = FUN_1802bac60("Visible##glow_vis_col",&local_128,0x22);
      if (cVar13 != '\0') {
        uVar11 = (undefined4)local_128;
        local_160 = (char *)0xafd05be4da944c2d;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = local_128._4_4_;
        local_160 = (char *)0xafd046e4da94287e;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = (int)pcStack_120;
        local_160 = (char *)0xafd04be4da9430fd;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
      }
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "The border is coloured PER PIXEL: the part of the body behind geometry\ngets the \"hidden\" colour, the part in line of sight the \"visible\" one."
                     );
      }
      local_160 = (char *)0x3db4763925009906;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      pcVar28 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
      local_150 = 5.60519e-45;
      local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
      pfVar26 = (float *)&local_160;
      if (*pcVar28 == '\0') {
        if (-1 < (int)DAT_1803fb24c) {
          pfVar26 = &DAT_1803fb24c;
        }
        pfVar19 = &local_150;
        if ((int)DAT_1803fb24c < 5) {
          pfVar19 = pfVar26;
        }
        DAT_1803fb24c = *pfVar19;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Thickness");
        local_140 = 0x928aca364203258f;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_140);
        local_160 = (char *)CONCAT44(local_160._4_4_,0x41a00000);
        _local_150 = CONCAT44(uStack_14c,0x3f000000);
        uVar17 = FUN_180202dc0(*plVar16 + 0x28);
        FUN_1801a6c50("##glow_size",8,uVar17,&local_150);
        cVar13 = FUN_18026ee60(0);
        if (cVar13 != '\0') {
          FUN_180280d00(
                       "Blur radius = how far the ring spreads from the silhouette.\n~2 for a crisp border, ~5 and up with \"Soft glow\" on."
                       );
        }
        local_150 = 5.60519e-45;
        local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
        pfVar26 = (float *)&local_160;
        if (-1 < (int)DAT_1803fb24c) {
          pfVar26 = &DAT_1803fb24c;
        }
        pfVar19 = &local_150;
        if ((int)DAT_1803fb24c < 5) {
          pfVar19 = pfVar26;
        }
        DAT_1803fb24c = *pfVar19;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Spread");
        local_160 = (char *)CONCAT44(local_160._4_4_,4);
        _local_150 = CONCAT44(uStack_14c,1);
        local_140 = 0x2c86430344857507;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_140);
        uVar17 = FUN_1802029c0(*plVar16 + 0x28);
        FUN_1801a6c50("##glow_passes",4,uVar17,&local_150);
        cVar13 = FUN_18026ee60(0);
        if (cVar13 != '\0') {
          pcVar28 = "Extra blur passes - widens the ring further. Keep at 1 for a crisp border.";
          goto LAB_1801c5d97;
        }
      }
      else {
        if (-1 < (int)DAT_1803fb24c) {
          pfVar26 = &DAT_1803fb24c;
        }
        pfVar19 = &local_150;
        if ((int)DAT_1803fb24c < 5) {
          pfVar19 = pfVar26;
        }
        DAT_1803fb24c = *pfVar19;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Thickness (px)");
        local_140 = 0x28549c2b3ea27228;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_140);
        local_160._0_4_ = 1.4013e-44;
        local_150 = 1.4013e-45;
        uVar17 = FUN_1802029c0(*plVar16 + 0x28);
        FUN_1801a6c50("##glow_thick",4,uVar17,&local_150);
        _local_150 = CONCAT44(uStack_14c,10);
        local_160 = (char *)CONCAT44(local_160._4_4_,1);
        local_140 = 0x28549c2b3ea27228;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_140);
        pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
        pfVar26 = (float *)&local_160;
        if (0 < (int)*pfVar19) {
          pfVar26 = pfVar19;
        }
        pfVar22 = &local_150;
        if ((int)*pfVar19 < 0xb) {
          pfVar22 = pfVar26;
        }
        fVar34 = *pfVar22;
        local_160 = (char *)0x28549c2b3ea27228;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        pfVar26 = (float *)FUN_1802029c0(*plVar16 + 0x28);
        *pfVar26 = fVar34;
        cVar13 = FUN_18026ee60(0);
        if (cVar13 != '\0') {
          pcVar28 = "Border width in screen pixels - an exact count, not a falloff.";
LAB_1801c5d97:
          FUN_180280d00(pcVar28);
        }
      }
      local_150 = 5.60519e-45;
      local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
      pfVar26 = (float *)&local_160;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar26 = &DAT_1803fb24c;
      }
      pfVar19 = &local_150;
      if ((int)DAT_1803fb24c < 5) {
        pfVar19 = pfVar26;
      }
      DAT_1803fb24c = *pfVar19;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Brightness");
      local_160 = (char *)CONCAT44(local_160._4_4_,4);
      local_150 = 1.4013e-45;
      local_140 = 0x5d20275a62ec75ff;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_140);
      uVar17 = FUN_1802029c0(*plVar16 + 0x28);
      FUN_1801a6c50("##glow_intensity",4,uVar17,&local_150);
    }
    else {
      local_160 = (char *)0xe41cc5816226c1db;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_128 = (char *)CONCAT44(local_128._4_4_,*puVar21);
      local_160 = (char *)0xe41cb8816226abc4;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_128 = (char *)CONCAT44(*puVar21,(undefined4)local_128);
      local_160 = (char *)0xe41cb5816226a6ab;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,*puVar21);
      cVar13 = FUN_1802bac60("Through walls",&local_128,0x22);
      if (cVar13 != '\0') {
        uVar11 = (undefined4)local_128;
        local_160 = (char *)0xe41cc5816226c1db;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = local_128._4_4_;
        local_160 = (char *)0xe41cb8816226abc4;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = (int)pcStack_120;
        local_160 = (char *)0xe41cb5816226a6ab;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
      }
      local_160 = (char *)0x940197fc4ed098e7;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_118 = (char *)CONCAT44(local_118._4_4_,*puVar21);
      local_160 = (char *)0x940182fc4ed07538;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      local_118 = (char *)CONCAT44(*puVar21,(undefined4)local_118);
      local_160 = (char *)0x940187fc4ed07db7;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      pcStack_110 = (char *)CONCAT44(pcStack_110._4_4_,*puVar21);
      cVar13 = FUN_1802bac60("Visible",&local_118,0x22);
      if (cVar13 != '\0') {
        uVar11 = (undefined4)local_118;
        local_160 = (char *)0x940197fc4ed098e7;
        plVar16 = (longlong *)FUN_180241a30(lVar31,local_190,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = local_118._4_4_;
        local_160 = (char *)0x940182fc4ed07538;
        plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
        uVar11 = pcStack_110._0_4_;
        local_160 = (char *)0x940187fc4ed07db7;
        plVar16 = (longlong *)FUN_180241a30(lVar31,&local_150,&local_160);
        puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
        *puVar21 = uVar11;
      }
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_158 = 0x93fd561a96ab0c67;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  local_160 = (char *)0x809c2c8398aa910b;
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("Viewmodel chams",uVar17);
  cVar13 = FUN_18026ee60(0);
  if (cVar13 != '\0') {
    FUN_180280d00(
                 "Recolors the hands + weapon in first person.\nHidden from streamproof / screenshots automatically."
                 );
  }
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##vmchams_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("vmchams_opts");
  }
  cVar13 = FUN_18019a680("vmchams_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    lVar31 = *plVar16 + 0x28;
    if ((DAT_180426248 & 1) == 0) {
      DAT_180426248 = DAT_180426248 | 1;
      atexit(FUN_18030b280);
    }
    if (DAT_1803fe520 == DAT_1803fe528) {
      local_160 = "Tint (keep texture)";
      if (DAT_1803fe528 == DAT_1803fe530) {
        FUN_180221c00(&DAT_1803fe520,DAT_1803fe528,&local_160);
      }
      else {
        *DAT_1803fe528 = "Tint (keep texture)";
        DAT_1803fe528 = DAT_1803fe528 + 1;
      }
      do {
        if (DAT_1803fe528 == DAT_1803fe530) {
          FUN_180221c00(&DAT_1803fe520);
        }
        else {
          *DAT_1803fe528 = (&PTR_DAT_18033c190)[lVar30 * 5];
          DAT_1803fe528 = DAT_1803fe528 + 1;
        }
        lVar30 = lVar30 + 1;
      } while (lVar30 != 0xd);
    }
    _local_150 = CONCAT44(uStack_14c,0x3fc00000);
    local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    fVar34 = *pfVar19;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar30 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar30 + 0x1ed8) = fVar34 * DAT_180381178;
    local_160 = (char *)0xea004a2b62efe75f;
    plVar16 = (longlong *)FUN_180241a30(lVar31,local_180,&local_160);
    uVar17 = FUN_1802029c0(*plVar16 + 0x28);
    FUN_1802b1200("Mode##vm_chams_mode",uVar17);
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    local_150 = 2.212722e+21;
    uStack_14c = 0xea004a2b;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_118,&local_150);
    piVar24 = (int *)FUN_1802029c0(*plVar16 + 0x28);
    piVar23 = (int *)&local_160;
    if (-1 < *piVar24) {
      piVar23 = piVar24;
    }
    if (0xd < *piVar24) {
      piVar23 = &DAT_18033c398;
    }
    iVar15 = *piVar23;
    local_160 = (char *)0xea004a2b62efe75f;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
    piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
    *piVar23 = iVar15;
    local_160 = (char *)0xea004a2b62efe75f;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_140,&local_160);
    piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
    if (*piVar23 == 0xd) {
      FUN_1801c3ca0();
    }
    local_160 = (char *)0x17668cc7d4d6e10a;
    plVar16 = (longlong *)FUN_180241a30(lVar31,local_180,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(local_128._4_4_,*puVar21);
    local_160 = (char *)0x176699c7d4d6f721;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_118,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(*puVar21,(undefined4)local_128);
    local_160 = (char *)0x17669cc7d4d6fc3a;
    plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,*puVar21);
    cVar13 = FUN_1802bac60("Color##vm_chams_col",&local_128,0x22);
    if (cVar13 != '\0') {
      uVar11 = (undefined4)local_128;
      local_160 = (char *)0x17668cc7d4d6e10a;
      plVar16 = (longlong *)FUN_180241a30(lVar31,local_180,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = local_128._4_4_;
      local_160 = (char *)0x176699c7d4d6f721;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_118,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = (int)pcStack_120;
      local_160 = (char *)0x17669cc7d4d6fc3a;
      plVar16 = (longlong *)FUN_180241a30(lVar31,&local_108,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0x77529aa166dd40cf;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("LookBeam (view direction)",uVar17);
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##lookbeam_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("lookbeam_opts");
  }
  cVar13 = FUN_18019a680("lookbeam_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    lVar30 = *plVar16 + 0x28;
    local_160 = (char *)0x7a0421ca2acf25a6;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(local_128._4_4_,*puVar21);
    local_160 = (char *)0x7a0436ca2acf4955;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(*puVar21,(undefined4)local_128);
    local_160 = (char *)0x7a0431ca2acf40d6;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_108,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,*puVar21);
    cVar13 = FUN_1802bac60("Color##lookbeam_col",&local_128,0x22);
    if (cVar13 != '\0') {
      uVar11 = (undefined4)local_128;
      local_160 = (char *)0x7a0421ca2acf25a6;
      plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = local_128._4_4_;
      local_160 = (char *)0x7a0436ca2acf4955;
      plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = (int)pcStack_120;
      local_160 = (char *)0x7a0431ca2acf40d6;
      plVar16 = (longlong *)FUN_180241a30(lVar30,&local_108,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
    }
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Thickness");
    local_140 = 0x2191660276572982;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_140);
    local_160 = (char *)CONCAT44(local_160._4_4_,0x41000000);
    _local_150 = CONCAT44(uStack_14c,0x3f000000);
    uVar17 = FUN_180202dc0(*plVar16 + 0x28);
    FUN_1801a6c50("##lookbeam_th",8,uVar17,&local_150);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00("Line width in pixels for 2D, world units for 3D materials.");
    }
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Length");
    local_140 = 0x8cf9aa16a6e38aec;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_140);
    local_160._0_4_ = 4096.0;
    local_150 = 10.0;
    uVar17 = FUN_180202dc0(*plVar16 + 0x28);
    FUN_1801a6c50("##lookbeam_len",8,uVar17,&local_150);
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160._4_4_ << 0x20);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Material");
    local_160 = (char *)0x2571ed13f906d189;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
    uVar17 = FUN_1802028c0(*plVar16 + 0x28);
    FUN_1801a7850("##lookbeam_mat",uVar17,1);
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0x63c2f5206022a3b5;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("Radar",uVar17);
  cVar13 = FUN_18026ee60(0);
  if (cVar13 != '\0') {
    FUN_180280d00(
                 "Rotating top-down player radar (up = where you look).\nFrosted-glass background: samples the blurred game screen behind it.\nDrawn in the ESP overlay -- hidden from OBS / screenshots automatically."
                 );
  }
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##radar_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("radar_opts");
  }
  cVar13 = FUN_18019a680("radar_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    lVar30 = *plVar16 + 0x28;
    local_160 = (char *)0x9753ed81b6269b2f;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a0b60("Blur background",uVar17);
    local_160 = (char *)0x3e2e6be62248a268;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_128,&local_160);
    uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a0b60("Hide out-of-range",uVar17);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Players beyond the radar range disappear entirely\ninstead of sticking to the radar edge."
                   );
    }
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Range");
    local_140 = 0x7138abbc8fbd554b;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_140);
    local_160._0_4_ = 5000.0;
    local_150 = 500.0;
    uVar17 = FUN_180202dc0(*plVar16 + 0x28);
    FUN_1801a6c50("##radar_range",8,uVar17,&local_150);
    local_150 = 5.60519e-45;
    local_160._0_4_ = 0.0;
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Darkness");
    local_140 = 0x21306c17f9cf4cda;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_128,&local_140);
    local_160._0_4_ = 1.0;
    local_150 = 0.0;
    uVar17 = FUN_180202dc0(*plVar16 + 0x28);
    FUN_1801a6c50("##radar_bga",8,uVar17,&local_150);
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160._4_4_ << 0x20);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                  "Move: drag the radar while the menu is open.\nResize: drag its bottom-right corner grip."
                 );
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0x34e7dc901c246087;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("Tracers (bullet paths)",uVar17);
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##tracer_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("tracer_opts");
  }
  cVar13 = FUN_18019a680("tracer_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    lVar30 = *plVar16 + 0x28;
    local_160 = (char *)0x2ea97143df721d4c;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
    local_118 = "World beam (3D)";
    pcStack_110 = "Overlay (projected)";
    local_150 = 1.5;
    local_160._0_4_ = 0.75;
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar22 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar22 = pfVar26;
    }
    fVar34 = *pfVar22;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar31 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    fVar9 = DAT_180381188;
    *(float *)(lVar31 + 0x1ed8) = fVar34 * DAT_180381188;
    _local_150 = CONCAT44(uStack_14c,1);
    local_160 = (char *)((ulonglong)local_160._4_4_ << 0x20);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)*pfVar19) {
      pfVar26 = pfVar19;
    }
    pfVar22 = &local_150;
    if ((int)*pfVar19 < 2) {
      pfVar22 = pfVar26;
    }
    local_198[0] = *pfVar22;
    cVar13 = FUN_1802b1200("Mode##tracer_mode",local_198);
    if (cVar13 != '\0') {
      *pfVar19 = local_198[0];
    }
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "World beam: real 3D, hidden by walls, thickness recedes\nwith distance. Kept out of screenshots by a check on the\nrender pass.\n\nOverlay: the line is projected and drawn in the ESP overlay,\nwhich is outside the captured pass by construction - nothing\nto forget. Draws through walls, flat thickness."
                   );
    }
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Fade-out");
    local_140 = 0x334402fc9b7038cd;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_140);
    local_160 = (char *)CONCAT44(local_160._4_4_,0x40a00000);
    _local_150 = CONCAT44(uStack_14c,0x3dcccccd);
    uVar17 = FUN_180202dc0(*plVar16 + 0x28);
    FUN_1801a6c50("##tracer_fade",8,uVar17,&local_150);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(&DAT_18036d770);
    }
    local_160 = (char *)0x9995061b0b99dc3b;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
    local_150 = 1.5;
    local_160._0_4_ = 0.75;
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar22 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar22 = pfVar26;
    }
    fVar34 = *pfVar22;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar31 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar31 + 0x1ed8) = fVar34 * fVar9;
    FUN_1801a85a0("Thickness","##tracer_th",pfVar19,1);
    _local_150 = CONCAT44(uStack_14c,4);
    local_160 = (char *)CONCAT44(local_160._4_4_,1);
    pfVar26 = (float *)&local_160;
    if (0 < (int)*pfVar19) {
      pfVar26 = pfVar19;
    }
    pfVar22 = &local_150;
    if ((int)*pfVar19 < 5) {
      pfVar22 = pfVar26;
    }
    *pfVar19 = *pfVar22;
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00("Beam width in world units (real 3D beam).");
    }
    local_150 = 5.60519e-45;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Material");
    local_160 = (char *)0xdb13c9bf8c41683a;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    uVar17 = FUN_1802028c0(*plVar16 + 0x28);
    FUN_1801a7850("##tracer_mat",uVar17,0);
    local_160 = (char *)0xaa0b5dfd20a7f83;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(local_128._4_4_,*puVar21);
    local_160 = (char *)0xaa0a8dfd20a696c;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_108,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(*puVar21,(undefined4)local_128);
    local_160 = (char *)0xaa0a5dfd20a6453;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_140,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,*puVar21);
    cVar13 = FUN_1802bac60("Color##tracer_col",&local_128,0x22);
    if (cVar13 != '\0') {
      uVar11 = (undefined4)local_128;
      local_160 = (char *)0xaa0b5dfd20a7f83;
      plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = local_128._4_4_;
      local_160 = (char *)0xaa0a8dfd20a696c;
      plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = (int)pcStack_120;
      local_160 = (char *)0xaa0a5dfd20a6453;
      plVar16 = (longlong *)FUN_180241a30(lVar30,&local_108,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0x33ebf49592e8d668;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("World tint",uVar17);
  cVar13 = FUN_18026ee60(0);
  if (cVar13 != '\0') {
    FUN_180280d00(
                 "Tints every world texture client-side (no cvar written).\nMultiplies the world\'s color -- pick a dark blue for a \"night\" look.\nHidden from OBS / screengrabbers while \"Stream-proof view\" is on."
                 );
  }
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##worldtint_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("worldtint_opts");
  }
  cVar13 = FUN_18019a680("worldtint_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    lVar30 = *plVar16 + 0x28;
    local_160 = (char *)0xbbd46f0aa9aa58e5;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(local_128._4_4_,*puVar21);
    local_160 = (char *)0xbbd47a0aa9aa6b96;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = (char *)CONCAT44(*puVar21,(undefined4)local_128);
    local_160 = (char *)0xbbd47f0aa9aa7415;
    plVar16 = (longlong *)FUN_180241a30(lVar30,&local_108,&local_160);
    puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,*puVar21);
    cVar13 = FUN_1802bac60("Color##worldtint_col",&local_128,0x22);
    if (cVar13 != '\0') {
      uVar11 = (undefined4)local_128;
      local_160 = (char *)0xbbd46f0aa9aa58e5;
      plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = local_128._4_4_;
      local_160 = (char *)0xbbd47a0aa9aa6b96;
      plVar16 = (longlong *)FUN_180241a30(lVar30,&local_118,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
      uVar11 = (int)pcStack_120;
      local_160 = (char *)0xbbd47f0aa9aa7415;
      plVar16 = (longlong *)FUN_180241a30(lVar30,&local_108,&local_160);
      puVar21 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
      *puVar21 = uVar11;
    }
    local_160 = (char *)0xb2eb02e304a12441;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_160);
    uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a0b60("Include props",uVar17);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Also tint prop / model materials, not just the world brushes.\nNote: players, NPCs and ragdolls share this material group,\nso they get tinted too (your own viewmodel is left alone)."
                   );
    }
    _local_150 = CONCAT44(uStack_14c,4);
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    pfVar26 = (float *)&local_160;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar26 = &DAT_1803fb24c;
    }
    pfVar19 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar19 = pfVar26;
    }
    DAT_1803fb24c = *pfVar19;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Toggle key");
    local_160 = (char *)0x42f00000;
    local_150 = -3.0636092e-13;
    uStack_14c = 0x2910e3a0;
    plVar16 = (longlong *)FUN_180241a30(lVar30,local_180,&local_150);
    uVar17 = FUN_1802029c0(*plVar16 + 0x28);
    FUN_1802d31a0("##worldtint_hotkey",uVar17,&local_160,0);
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0x8d6c6958b3bd884;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("Observer bypass",uVar17);
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0xb900ad038caed4bd;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_128,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_118,&local_160);
  uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
  FUN_1801a0b60("Stream-proof view",uVar17);
  cVar13 = FUN_18026ee60(0);
  if (cVar13 != '\0') {
    FUN_180280d00(
                 "use at own risk!\nRenders the scene TWICE: a clean first-person pass for the stream, then the cheat view for you.\nHides freecam/thirdperson/fullbright from OBS Game Capture and RSC/GTS screengrabbers.\nCosts a second scene render -- tune the cost in the gear settings."
                 );
  }
  FUN_18027f5b0();
  cVar13 = FUN_18019dc00("##sp_opts",4,0);
  if (cVar13 != '\0') {
    FUN_180280fd0("sp_opts");
  }
  local_150 = 1.5;
  local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
  pfVar26 = (float *)&local_160;
  if (fVar6 <= DAT_1803da6a4) {
    pfVar26 = &DAT_1803da6a4;
  }
  pfVar19 = &local_150;
  if (DAT_1803da6a4 <= fVar8) {
    pfVar19 = pfVar26;
  }
  fVar34 = *pfVar19 * _DAT_1803811ec;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar30 = *(longlong *)(lVar5 + 0xec0);
  *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 2;
  *(float *)(lVar30 + 0x1f68) = fVar34;
  *(undefined4 *)(lVar30 + 0x1f6c) = 0;
  *(undefined4 *)(lVar30 + 0x1f50) = 1;
  cVar13 = FUN_18019a680("sp_opts");
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0xd5eedd6096f28a0d;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
    pcVar28 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
    local_198[0] = (float)(uint)(*pcVar28 != '\0');
    local_150 = 1.5;
    local_160 = (char *)CONCAT44(local_160._4_4_,0x3f400000);
    pfVar26 = (float *)&local_160;
    if (fVar6 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar19 = &local_150;
    if (DAT_1803da6a4 <= fVar8) {
      pfVar19 = pfVar26;
    }
    fVar34 = *pfVar19;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(lVar5 + 0xec0);
    puVar1 = (uint *)(lVar30 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar30 + 0x1ed8) = fVar34 * _DAT_1803811a0;
    cVar13 = FUN_1802b1200("Clean pass##sp_mode",local_198);
    fVar34 = local_198[0];
    if (cVar13 != '\0') {
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0xd5eedd6096f28a0d;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      *(bool *)uVar17 = fVar34 == 1.4013e-45;
    }
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Offscreen (v5): the clean pass renders into a private render target.\nWorks with threaded rendering, so your gmod_mcore_test stays as-is.\nRecommended -- this is the mode that keeps your FPS.\n\nBackbuffer (v4): renders both passes into the screen buffer and\nsnapshots it mid-frame. That only works with SYNCHRONOUS rendering,\nso it needs \"gmod_mcore_test 0\" in console -- set by YOU, we never\ntouch the cvar. While mcore is 1 this mode simply skips the clean\npass (nothing is published to OBS; your own view is unaffected)."
                   );
    }
    if (fVar34 == 0.0) {
      local_128 = _DAT_1803816a0;
      pcStack_120 = _UNK_1803816a8;
      FUN_18026a810(0,&local_128);
      FUN_1802aac80("Backbuffer mode needs \"gmod_mcore_test 0\" in console.");
      FUN_18026a890(1);
    }
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0x5ec423757a9ceab;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
    uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a0b60("Capture UI panels (Q menu, F1/F4)",uVar17);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Also paint UI-panel vgui frames into the OBS capture: Q spawn menu,\nF1/F4 gamemode menus, context menu, RSC pop-ups.\nOff = only in-game HUD panels (hp/ammo, scoreboard, chat, net_graph).\nTrade-off: if you open the Escape (pause) menu while streaming, it will\nappear in the OBS capture too. Leave ON unless that matters."
                   );
    }
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0x7a7f52ad97e147b7;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
    uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a0b60("Hide clean pass from Lua",uVar17);
    FUN_18027f5b0();
    cVar13 = FUN_18019dc00("##sp_lua_hide_opts",4,0);
    if (cVar13 != '\0') {
      FUN_180280fd0("sp_lua_hide_opts");
    }
    cVar13 = FUN_18019a680("sp_lua_hide_opts");
    if (cVar13 != '\0') {
      local_150 = 5.60519e-45;
      local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
      pfVar26 = (float *)&local_160;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar26 = &DAT_1803fb24c;
      }
      pfVar19 = &local_150;
      if ((int)DAT_1803fb24c < 5) {
        pfVar19 = pfVar26;
      }
      DAT_1803fb24c = *pfVar19;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Extended skip");
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0x2b08eda621452889;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Lifecycle hooks (PreRender / PostRender / RenderScene)",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Also skip Lua frame-lifecycle hooks (PreRender / PostRender / RenderScene)\nin the clean pass. These go through the SIMPLE dispatch which has no\nbracket calls around it, so skipping is verified-safe.\neven here: PreDrawSkyBox, PreDrawOpaqueRenderables, PreDrawViewModel\netc. Those go through CallN which wraps the dispatch in engine bracket calls\n\nTurn this ON if a server counts PreRender/RenderScene in addition to HUD hooks."
                     );
      }
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0x59d309e8a2eb12f6;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("RenderScreenspaceEffects (risky)",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "The last hook a per-frame counter can see doubling.\nCallN\nClean frame loses Lua screen-space effects."
                     );
      }
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0x2e9325269e4e4100;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_1801fcfc0(*plVar16 + 0x28);
      FUN_1801a0b60("Scene draw hooks (risky)",uVar17);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Opaque / translucent / viewmodel / player draw hooks.\nSame CallN risk. The clean frame also loses whatever the\nSERVER draws in them, so a screengrab looks different."
                     );
      }
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0x3b8975e208102780;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
    uVar17 = FUN_1802029c0(*plVar16 + 0x28);
    FUN_1801a85a0("Clean-pass FPS","##sp_clean_hz",uVar17,5);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "How often the clean stream frame is re-rendered. Match it to your OBS/record FPS.\nLower = cheaper (the heavy 2nd render runs this many times/sec instead of every game frame).\nThis is the main FPS lever: at 30-60 Hz the double-render runs far less often than your game FPS."
                   );
    }
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0xd5eedd6096f28a0d;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
    pcVar28 = (char *)FUN_1801fcfc0(*plVar16 + 0x28);
    if (*pcVar28 != '\0') {
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0x4f6b04c86bf5c594;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_1802029c0(*plVar16 + 0x28);
      FUN_1801a85a0("Clean-pass quality","##sp_clean_scale",uVar17,0x28);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Resolution of the clean stream pass, as a %% of your screen (Offscreen mode only).\nLower = the 2nd render draws fewer pixels = more FPS if you are GPU/fill-bound,\nat the cost of a softer stream image (upscaled back to full size for OBS/RSC).\n100%% = identical to your screen. Text/HUD in the stream get blurry below ~70%%.\n\nBelow 100%% the clean target also gets a size no engine render target shares,\nwhich makes the OBS bridge pick it up on the first frame instead of retrying."
                     );
      }
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
LAB_1801c7d7f:
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  local_158 = 0x93fd561a96ab0c67;
  local_160 = (char *)0xffac8367807810dc;
  plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
  plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
  piVar23 = (int *)FUN_1802029c0(*plVar16 + 0x28);
  cVar13 = FUN_18019fbc0("Fullbright",2,CONCAT44(uVar10,fVar35),0);
  if (cVar13 != '\0') {
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0xd81ed85b8c49331;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
    uVar17 = FUN_1802029c0(*plVar16 + 0x28);
    local_158 = 0x93fd561a96ab0c67;
    local_160 = (char *)0xb0295df9ff8697be;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_128,&local_158);
    plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,&local_118,&local_160);
    uVar18 = FUN_1801fcfc0(*plVar16 + 0x28);
    FUN_1801a16e0("Enable##fb",uVar18,"##fb_hotkey",uVar17);
    cVar13 = FUN_18026ee60(0);
    if (cVar13 != '\0') {
      FUN_180280d00(
                   "Client-side world lighting.\nLight = brightness boost (ColorModulate) with a slider.\nFullBright = true unlit world (selfillum on world brushes), lights dark corners too.\nCheap = native render.SetLightingMode: touches no materials, no FPS cost, instant on/off.\nWhite LM = replaces the map lightmap with white while preserving textures and World Tint.\nConfig Hook = forces nFullbright only inside the engine\'s normal OverrideConfig call.\nModes 0-3 are cvar-free and hidden from clean captures; Config Hook is not."
                   );
    }
    FUN_1801a2900(&DAT_18034782c,"fb_mode",piVar23,&PTR_s_Light_1803e9690);
    local_16c[1] = 4;
    local_16c[0] = 0;
    piVar24 = local_16c;
    if (-1 < *piVar23) {
      piVar24 = piVar23;
    }
    piVar25 = local_16c + 1;
    if (*piVar23 < 5) {
      piVar25 = piVar24;
    }
    iVar15 = *piVar25;
    *piVar23 = iVar15;
    if (iVar15 == 0) {
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0x61dd282f4fc8d8f8;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_180202dc0(*plVar16 + 0x28);
      FUN_1801a7a20("Brightness","##fb_bright",uVar17,fVar7);
    }
    else if (iVar15 == 2) {
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0xaa2fec72fb859f6b;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      pfVar19 = (float *)FUN_1802029c0(*plVar16 + 0x28);
      local_150 = 2.8026e-45;
      local_160 = (char *)CONCAT44(local_160._4_4_,1);
      pfVar26 = (float *)&local_160;
      if (0 < (int)*pfVar19) {
        pfVar26 = pfVar19;
      }
      pfVar22 = &local_150;
      if ((int)*pfVar19 < 3) {
        pfVar22 = pfVar26;
      }
      local_198[0] = (float)((int)*pfVar22 - 1);
      FUN_1801a2900("Level","fb_cheap_lvl",local_198,&PTR_s_Fullbright_1803e7018);
      *pfVar19 = (float)((int)local_198[0] + 1);
    }
    else if (iVar15 == 3) {
      local_158 = 0x93fd561a96ab0c67;
      local_160 = (char *)0x2b9f64e127f850a9;
      plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_190,&local_158);
      plVar16 = (longlong *)FUN_180241a30(*plVar16 + 0x28,local_180,&local_160);
      uVar17 = FUN_180202dc0(*plVar16 + 0x28);
      FUN_1801a7a20("Intensity","##fb_white_lm_intensity",uVar17,DAT_1803809ec);
      cVar13 = FUN_18026ee60(0);
      if (cVar13 != '\0') {
        FUN_180280d00(
                     "Brightness of the replacement white lightmap.\n0.45-0.65 usually preserves texture contrast while removing dark areas."
                     );
      }
    }
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  return;
}


