// 0x1801c23c0  FUN_1801c23c0
// size=6353 thunk=false
// signature: undefined FUN_1801c23c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c23c0(void)

{
  uint *puVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  char *pcVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  char *local_148;
  char *local_140;
  undefined1 local_138;
  float local_128 [2];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8 [2];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  local_f0 = CONCAT44(local_f0._4_4_,4);
  local_128[0] = 0.0;
  pfVar17 = local_128;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar17 = &DAT_1803fb24c;
  }
  pfVar12 = (float *)&local_f0;
  if ((int)DAT_1803fb24c < 5) {
    pfVar12 = pfVar17;
  }
  DAT_1803fb24c = *pfVar12;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar19 + 0x1c8) != 0) ||
     (lVar18 = 0x280, *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x2368) != 0)) {
    lVar18 = 0x250;
  }
  local_f0 = 0;
  fVar20 = ((*(float *)(lVar18 + lVar19) - *(float *)(lVar19 + 0x118)) - DAT_180380fd8) *
           DAT_180380ac0;
  FUN_18026aad0(2,&local_f0);
  uVar6 = DAT_180381384;
  local_f0 = CONCAT44(0xbf800000,fVar20);
  FUN_180272fa0("##players_settings",&local_f0,0,0x18);
  FUN_18026abb0(1);
  cVar9 = FUN_18019fbc0("Player ESP",1,CONCAT44(uVar6,fVar20),0);
  uVar5 = DAT_1803812b0;
  fVar4 = DAT_180381120;
  fVar3 = DAT_180380c50;
  fVar20 = DAT_180380b20;
  if (cVar9 != '\0') {
    local_d8 = 0x93fd561a96ab0c67;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_100,&local_d8);
    lVar19 = *plVar10 + 0x28;
    local_f0 = 0x228a0511fbcdbb9;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = (char *)0x0;
    FUN_1801a1910("Enable player ESP","esp_master",uVar11,0);
    local_f0 = 0x43dc26eb12dd2e34;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = "esp_dormant_opts";
    FUN_1801a1910("Show dormant","esp_dormant",uVar11,
                  "Keep drawing players the server has stopped transmitting.\nTheir box freezes where they were last seen."
                 );
    cVar9 = FUN_18019a680("esp_dormant_opts");
    if (cVar9 != '\0') {
      local_f0 = 0x3de1d4a1ddc4912e;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      pfVar12 = (float *)FUN_180202dc0(*plVar10 + 0x28);
      pfVar17 = (float *)&local_f0;
      local_128[0] = 5.60519e-45;
      local_f0 = local_f0 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar14 = local_128;
      if ((int)DAT_1803fb24c < 5) {
        pfVar14 = pfVar17;
      }
      DAT_1803fb24c = *pfVar14;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Reveal distance");
      pfVar17 = (float *)&local_f0;
      local_128[0] = 1.5;
      local_f0._0_4_ = 0.75;
      if (fVar20 <= DAT_1803da6a4) {
        pfVar17 = &DAT_1803da6a4;
      }
      pfVar14 = local_128;
      if (DAT_1803da6a4 <= fVar3) {
        pfVar14 = pfVar17;
      }
      fVar21 = *pfVar14;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *(longlong *)(lVar2 + 0xec0);
      fVar21 = fVar21 * DAT_180381188;
      local_138 = 1;
      local_f0 = CONCAT44(local_f0._4_4_,0x466a6000);
      puVar1 = (uint *)(lVar18 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar18 + 0x1ed8) = fVar21;
      local_140 = "%.0f u";
      local_148 = (char *)&local_f0;
      local_128[0] = 0.0;
      FUN_1801a6c50("##esp_dormant_dist",8,pfVar12,local_128);
      if ((0.0 < *pfVar12) && (*pfVar12 < fVar4)) {
        *pfVar12 = 100.0;
      }
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "How far the dormant reveal reaches. 0 = unlimited.\nThe stalest boxes are the far ones: a low value keeps the ghost\nof someone who just went round a corner, and drops the half-server\na transmit optimizer dropped."
                     );
      }
      local_f0 = 0x24da2018957c545b;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      FUN_1801a0b60("Own color",uVar11);
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "Paint dormant players - box, skeleton and every text - with the\ncolor below, so a stale box is never mistaken for a live one.\nWins over Team / Usergroup / Friend colors, loses to the aim target.\n\nWorks on any dormant player on screen, including ones held by the\ngrace window, not only the ones this toggle reveals."
                     );
      }
      local_f0 = 0xe5a471a826b01f9;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_d0 = *puVar13;
      local_f0 = 0xe5a5a1a826b2242;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_cc = *puVar13;
      local_f0 = 0xe5a571a826b1d29;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c8 = *puVar13;
      local_f0 = 0xe5a541a826b1810;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c4 = *puVar13;
      cVar9 = FUN_1802bac60("Color##esp_dormant_col",&local_d0,0x40020);
      uVar7 = local_d0;
      if (cVar9 != '\0') {
        local_f0 = 0xe5a471a826b01f9;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_cc;
        *puVar13 = uVar7;
        local_f0 = 0xe5a5a1a826b2242;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar7 = local_c8;
        *puVar13 = uVar8;
        local_f0 = 0xe5a571a826b1d29;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_c4;
        *puVar13 = uVar7;
        local_f0 = 0xe5a541a826b1810;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        *puVar13 = uVar8;
      }
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_f0 = 0x5391b64679e936ba;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = (char *)0x0;
    FUN_1801a1910("Reveal invisible","esp_invisible",uVar11,
                  "Show players hidden via NODRAW / ShouldDraw=false\n(hoverboard riders, cloak SWEPs, some seats, distance-fog addons),\nand put their MODEL back into the render - chams/glow work on them again.\n\nCannot help with dormant players: the engine refuses to draw\nwhat the server is not transmitting."
                 );
    local_f0 = 0x7aad0bc54d55fc8a;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = (char *)0x0;
    FUN_1801a1910("Ignore same team","visuals_same_team",uVar11,0);
    local_f0 = 0xcd347fc1a3829be9;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = (char *)0x0;
    FUN_1801a1910("Ignore noclip","visuals_noclip",uVar11,0);
    local_f0 = 0xccdef166ec8c517e;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = (char *)0x0;
    FUN_1801a1910("Ignore dead","visuals_dead",uVar11,
                  "Hide boxes on corpses. Chams, glow, look beams and the aimbot");
    local_f0 = 0x908f1a603f411b5c;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = "esp_target_opts";
    FUN_1801a1910("Highlight target","esp_target_highlight",uVar11,
                  "Highlight the player/NPC you are aiming at or locked onto.");
    cVar9 = FUN_18019a680("esp_target_opts");
    if (cVar9 != '\0') {
      local_f0 = 0xfccc7d3fa335b622;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_d0 = *puVar13;
      local_f0 = 0xfccc6a3fa33595d9;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_cc = *puVar13;
      local_f0 = 0xfccc6d3fa3359af2;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c8 = *puVar13;
      local_f0 = 0xfccc6c3fa335993f;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c4 = *puVar13;
      cVar9 = FUN_1802bac60("Color##esp_tgt_col",&local_d0,0x40020);
      uVar7 = local_d0;
      if (cVar9 != '\0') {
        local_f0 = 0xfccc7d3fa335b622;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_cc;
        *puVar13 = uVar7;
        local_f0 = 0xfccc6a3fa33595d9;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar7 = local_c8;
        *puVar13 = uVar8;
        local_f0 = 0xfccc6d3fa3359af2;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_c4;
        *puVar13 = uVar7;
        local_f0 = 0xfccc6c3fa335993f;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        *puVar13 = uVar8;
      }
      local_f0 = 0xc0a7d35683114a67;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      pfVar12 = (float *)FUN_1802029c0(*plVar10 + 0x28);
      pfVar17 = (float *)&local_f0;
      local_128[0] = 1.5;
      local_f0._0_4_ = 0.75;
      if (fVar20 <= DAT_1803da6a4) {
        pfVar17 = &DAT_1803da6a4;
      }
      pfVar14 = local_128;
      if (DAT_1803da6a4 <= fVar3) {
        pfVar14 = pfVar17;
      }
      fVar21 = *pfVar14;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *(longlong *)(lVar2 + 0xec0);
      fVar21 = fVar21 * _DAT_180381170;
      local_148 = (char *)CONCAT44(local_148._4_4_,4);
      puVar1 = (uint *)(lVar18 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar18 + 0x1ed8) = fVar21;
      FUN_1802b1200("Trigger mode##esp_tgt_mode",pfVar12);
      local_128[0] = 4.2039e-45;
      local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
      pfVar17 = (float *)&local_f0;
      if (-1 < (int)*pfVar12) {
        pfVar17 = pfVar12;
      }
      pfVar14 = local_128;
      if ((int)*pfVar12 < 4) {
        pfVar14 = pfVar17;
      }
      *pfVar12 = *pfVar14;
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "In FOV Candidate - a real aimbot scan (bones, hitscan, visibility\ntraces) once per tick. Exact, but it is the expensive one.\n\nIn FOV (fast) - screen-space only: the player whose box is nearest\nthe crosshair inside the FOV circle. Same team/friend/dormant\nfilters, no bone setup and no traces, so it costs almost nothing.\nIt can disagree with the aimbot behind cover or with a hitbox filter."
                     );
      }
      local_f0 = 0x8a386bd0bf0679d2;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      local_148 = (char *)0x0;
      FUN_1801a1910("Recolor Box","esp_target_recolor_box",uVar11,0);
      local_f0 = 0x532b2e31ad1a6312;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      local_148 = (char *)0x0;
      FUN_1801a1910("Recolor Skeleton","esp_target_recolor_skel",uVar11,0);
      local_f0 = 0x1153f407eb06a5de;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      local_148 = (char *)0x0;
      FUN_1801a1910("Recolor Text","esp_target_recolor_text",uVar11,
                    "Paint every ESP text element of the target (name, job, weapon,\ndistance, ...) with the color above. Off by default.\nBeats a Team / Usergroup / Friend text color, like the box does."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_f0 = 0x625d105d5fd15611;
    plVar10 = (longlong *)FUN_180241a30(lVar19,&local_d0,&local_f0);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = "esp_skel_opts";
    FUN_1801a1910("Skeleton","esp_skeleton",uVar11,"Bone lines over each player (hitbox skeleton).")
    ;
    cVar9 = FUN_18019a680("esp_skel_opts");
    if (cVar9 != '\0') {
      local_f0 = 0xd272ac8da4aab768;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_d0 = *puVar13;
      local_f0 = 0xd272a18da4aaa4b7;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_cc = *puVar13;
      local_f0 = 0xd2729c8da4aa9c38;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c8 = *puVar13;
      cVar9 = FUN_1802bac60("Color##esp_skel_col",&local_d0,0x22);
      uVar7 = local_d0;
      if (cVar9 != '\0') {
        local_f0 = 0xd272ac8da4aab768;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_cc;
        *puVar13 = uVar7;
        local_f0 = 0xd272a18da4aaa4b7;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar7 = local_c8;
        *puVar13 = uVar8;
        local_f0 = 0xd2729c8da4aa9c38;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_e8,&local_f0);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        *puVar13 = uVar7;
      }
      local_128[0] = 5.60519e-45;
      pfVar17 = (float *)&local_f0;
      local_f0 = local_f0 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar12 = local_128;
      if ((int)DAT_1803fb24c < 5) {
        pfVar12 = pfVar17;
      }
      DAT_1803fb24c = *pfVar12;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Thickness");
      local_f0 = CONCAT44(local_f0._4_4_,0x40c00000);
      local_e8[0] = 0x54682040994c2754;
      local_128[0] = 0.5;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
      uVar11 = FUN_180202dc0(*plVar10 + 0x28);
      local_138 = 1;
      local_140 = "%.1f";
      local_148 = (char *)&local_f0;
      FUN_1801a6c50("##esp_skel_th",8,uVar11,local_128);
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_e8[0] = 0x39a166e326dd1eac;
    plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = "esp_snap_opts";
    FUN_1801a1910("Snap line","esp_snapline",uVar11,"Line from a screen edge to each player.");
    cVar9 = FUN_18019a680("esp_snap_opts");
    if (cVar9 != '\0') {
      local_e8[0] = 0x9e08b79189c0e961;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_d0 = *puVar13;
      local_e8[0] = 0x9e08aa9189c0d34a;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_cc = *puVar13;
      local_e8[0] = 0x9e08a79189c0ce31;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c8 = *puVar13;
      cVar9 = FUN_1802bac60("Color##esp_snap_col",&local_d0,0x22);
      uVar7 = local_d0;
      if (cVar9 != '\0') {
        local_e8[0] = 0x9e08b79189c0e961;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_cc;
        *puVar13 = uVar7;
        local_e8[0] = 0x9e08aa9189c0d34a;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar7 = local_c8;
        *puVar13 = uVar8;
        local_e8[0] = 0x9e08a79189c0ce31;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        *puVar13 = uVar7;
      }
      local_e8[0] = 0x9c2c141ec1380adb;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
      pfVar12 = (float *)FUN_1802029c0(*plVar10 + 0x28);
      pfVar17 = (float *)&local_f0;
      local_128[0] = 1.5;
      local_f0._0_4_ = 0.75;
      if (fVar20 <= DAT_1803da6a4) {
        pfVar17 = &DAT_1803da6a4;
      }
      pfVar14 = local_128;
      if (DAT_1803da6a4 <= fVar3) {
        pfVar14 = pfVar17;
      }
      fVar21 = *pfVar14;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *(longlong *)(lVar2 + 0xec0);
      fVar21 = fVar21 * DAT_18038116c;
      local_148 = (char *)CONCAT44(local_148._4_4_,3);
      puVar1 = (uint *)(lVar18 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar18 + 0x1ed8) = fVar21;
      FUN_1802b1200("Origin##esp_snap_origin",pfVar12);
      local_128[0] = 2.8026e-45;
      local_f0._0_4_ = 0.0;
      pfVar17 = (float *)&local_f0;
      if (-1 < (int)*pfVar12) {
        pfVar17 = pfVar12;
      }
      pfVar14 = local_128;
      if ((int)*pfVar12 < 3) {
        pfVar14 = pfVar17;
      }
      *pfVar12 = *pfVar14;
      local_e8[0] = 0x25b6fbdbfceb85c6;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
      pfVar12 = (float *)FUN_1802029c0(*plVar10 + 0x28);
      pfVar17 = (float *)&local_f0;
      local_128[0] = 1.5;
      local_f0._0_4_ = 0.75;
      if (fVar20 <= DAT_1803da6a4) {
        pfVar17 = &DAT_1803da6a4;
      }
      pfVar14 = local_128;
      if (DAT_1803da6a4 <= fVar3) {
        pfVar14 = pfVar17;
      }
      fVar21 = *pfVar14;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *(longlong *)(lVar2 + 0xec0);
      fVar21 = fVar21 * DAT_18038116c;
      local_148 = (char *)CONCAT44(local_148._4_4_,3);
      puVar1 = (uint *)(lVar18 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar18 + 0x1ed8) = fVar21;
      FUN_1802b1200("Draw for##esp_snap_mode",pfVar12);
      local_128[0] = 2.8026e-45;
      local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
      pfVar17 = (float *)&local_f0;
      if (-1 < (int)*pfVar12) {
        pfVar17 = pfVar12;
      }
      pfVar14 = local_128;
      if ((int)*pfVar12 < 3) {
        pfVar14 = pfVar17;
      }
      *pfVar12 = *pfVar14;
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "All players - unchanged.\nAimbot target - one line, to whoever the aimbot / silent aim is on.\nInside aimbot FOV - only players within the aimbot FOV circle."
                     );
      }
      if (*pfVar12 == 1.4013e-45) {
        local_e8[0] = 0xc3cc876af74b4db6;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_120,local_e8);
        pfVar14 = (float *)FUN_1802029c0(*plVar10 + 0x28);
        pfVar17 = (float *)&local_f0;
        local_128[0] = 1.5;
        local_f0._0_4_ = 0.75;
        if (fVar20 <= DAT_1803da6a4) {
          pfVar17 = &DAT_1803da6a4;
        }
        pfVar15 = local_128;
        if (DAT_1803da6a4 <= fVar3) {
          pfVar15 = pfVar17;
        }
        fVar21 = *pfVar15;
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar2 = *(longlong *)(lVar2 + 0xec0);
        fVar21 = fVar21 * DAT_18038116c;
        local_148 = (char *)CONCAT44(local_148._4_4_,3);
        puVar1 = (uint *)(lVar2 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(float *)(lVar2 + 0x1ed8) = fVar21;
        FUN_1802b1200("Target##esp_snap_tmode",pfVar14);
        local_128[0] = 2.8026e-45;
        local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
        pfVar17 = (float *)&local_f0;
        if (-1 < (int)*pfVar14) {
          pfVar17 = pfVar14;
        }
        pfVar15 = local_128;
        if ((int)*pfVar14 < 3) {
          pfVar15 = pfVar17;
        }
        *pfVar14 = *pfVar15;
        cVar9 = FUN_18026ee60(0);
        if (cVar9 != '\0') {
          FUN_180280d00(
                       "Locked - the player the aimbot is actually aiming at\nwhile the aim key is held (silent aim included).\nFOV candidate - who it WOULD pick right now."
                       );
        }
        if (*pfVar12 == 1.4013e-45) {
          local_e8[0] = 0xf7521f28977a3033;
          local_f0 = 0x402819404e703058;
          plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_120,local_e8);
          plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_110,&local_f0);
          pcVar16 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
          if (*pcVar16 == '\0') {
            local_128[0] = 5.60519e-45;
            pfVar17 = (float *)&local_f0;
            local_f0 = local_f0 & 0xffffffff00000000;
            if (-1 < (int)DAT_1803fb24c) {
              pfVar17 = &DAT_1803fb24c;
            }
            pfVar12 = local_128;
            if ((int)DAT_1803fb24c < 5) {
              pfVar12 = pfVar17;
            }
            DAT_1803fb24c = *pfVar12;
            FUN_1802aabb0(&DAT_1803dc9f8 + (longlong)(int)DAT_1803fb24c * 200,
                          "Aimbot is off - no target, no lines.");
          }
        }
      }
      local_128[0] = 5.60519e-45;
      pfVar17 = (float *)&local_f0;
      local_f0 = local_f0 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar12 = local_128;
      if ((int)DAT_1803fb24c < 5) {
        pfVar12 = pfVar17;
      }
      DAT_1803fb24c = *pfVar12;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Thickness");
      local_f0 = CONCAT44(local_f0._4_4_,0x40c00000);
      local_e8[0] = 0xff0dfb3785b0a4d9;
      local_128[0] = 0.5;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
      uVar11 = FUN_180202dc0(*plVar10 + 0x28);
      local_138 = 1;
      local_140 = "%.1f";
      local_148 = (char *)&local_f0;
      FUN_1801a6c50("##esp_snap_th",8,uVar11,local_128);
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_e8[0] = 0x6b1f1e9713c5a183;
    plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    local_148 = "esp_off_opts";
    FUN_1801a1910("Offscreen arrows","esp_offscreen",uVar11,
                  "Arrows at the screen edge pointing to players out of view.");
    cVar9 = FUN_18019a680("esp_off_opts");
    if (cVar9 != '\0') {
      local_e8[0] = 0xa15b7e45ace4b212;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_e8[0] = 0xa15b8b45ace4c829;
      local_d0 = *puVar13;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_e8[0] = 0xa15b8e45ace4cd42;
      local_cc = *puVar13;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
      puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_c8 = *puVar13;
      cVar9 = FUN_1802bac60("Color##esp_off_col",&local_d0,0x22);
      uVar7 = local_d0;
      if (cVar9 != '\0') {
        local_e8[0] = 0xa15b7e45ace4b212;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_cc;
        local_e8[0] = 0xa15b8b45ace4c829;
        *puVar13 = uVar7;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar7 = local_c8;
        local_e8[0] = 0xa15b8e45ace4cd42;
        *puVar13 = uVar8;
        plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
        puVar13 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        *puVar13 = uVar7;
      }
      local_128[0] = 5.60519e-45;
      pfVar17 = (float *)&local_f0;
      local_f0 = local_f0 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar12 = local_128;
      if ((int)DAT_1803fb24c < 5) {
        pfVar12 = pfVar17;
      }
      DAT_1803fb24c = *pfVar12;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Arrow size");
      local_f0 = CONCAT44(local_f0._4_4_,0x42200000);
      local_e8[0] = 0x5dc2df42372b2b0d;
      local_128[0] = 6.0;
      plVar10 = (longlong *)FUN_180241a30(lVar19,local_110,local_e8);
      uVar11 = FUN_180202dc0(*plVar10 + 0x28);
      local_138 = 1;
      local_140 = "%.0f";
      local_148 = (char *)&local_f0;
      FUN_1801a6c50("##esp_off_size",8,uVar11,local_128);
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    pfVar17 = (float *)&local_f0;
    local_128[0] = 1.5;
    local_f0 = CONCAT44(local_f0._4_4_,0x3f400000);
    local_d8 = local_d8 & 0xffffffff00000000;
    if (fVar20 <= DAT_1803da6a4) {
      pfVar17 = &DAT_1803da6a4;
    }
    pfVar12 = local_128;
    if (DAT_1803da6a4 <= fVar3) {
      pfVar12 = pfVar17;
    }
    local_d8 = (ulonglong)(uint)(*pfVar12 * DAT_180380f40) << 0x20;
    FUN_1802af260(&local_d8);
    FUN_1801a0ae0(
                 "Boxes, bars and texts are arranged in the ESP editor (sidebar) - drag elements straight onto the model there."
                 );
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  pfVar17 = (float *)&local_f0;
  local_128[0] = 1.5;
  local_f0 = CONCAT44(local_f0._4_4_,0x3f400000);
  if (fVar20 <= DAT_1803da6a4) {
    pfVar17 = &DAT_1803da6a4;
  }
  pfVar12 = local_128;
  if (DAT_1803da6a4 <= fVar3) {
    pfVar12 = pfVar17;
  }
  FUN_18027f5b0(0,*pfVar12 * DAT_180380fd8);
  local_d8 = 0;
  FUN_18026aad0(2,&local_d8);
  local_d8 = 0xbf80000000000000;
  FUN_180272fa0("##players_perf",&local_d8,0,0x18);
  FUN_18026abb0(1);
  cVar9 = FUN_18019fbc0("Performance",2,(ulonglong)uVar6 << 0x20,0);
  if (cVar9 != '\0') {
    local_e8[0] = 0x93fd561a96ab0c67;
    local_d8 = 0xdaefe600c147795;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_110,local_e8);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_120,&local_d8);
    pfVar17 = (float *)FUN_180202dc0(*plVar10 + 0x28);
    local_140 = "%.0f u";
    local_148 = (char *)CONCAT44(local_148._4_4_,uVar5);
    FUN_1801a7a20("Visuals draw distance","##visuals_max_dist",pfVar17,0);
    if ((0.0 < *pfVar17) && (*pfVar17 < fVar4)) {
      *pfVar17 = 100.0;
    }
    FUN_1801a0ae0(
                 "Culls every player visual - ESP box, texts, bars, chams, look beams - beyond this distance. 0 = unlimited. Lower it on crowded servers to save FPS."
                 );
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  return;
}


