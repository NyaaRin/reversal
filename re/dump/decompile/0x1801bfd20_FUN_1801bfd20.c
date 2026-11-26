// 0x1801bfd20  FUN_1801bfd20
// size=9498 thunk=false
// signature: undefined FUN_1801bfd20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bfd20(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float *pfVar16;
  char *pcVar17;
  int *piVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined *puVar21;
  int iVar22;
  char *pcVar23;
  int iVar24;
  longlong lVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  char *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_a8 = CONCAT44(local_a8._4_4_,4);
  iVar24 = 0;
  local_a0 = 0.0;
  pfVar20 = &local_a0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar20 = &DAT_1803fb24c;
  }
  pfVar12 = (float *)&local_a8;
  if ((int)DAT_1803fb24c < 5) {
    pfVar12 = pfVar20;
  }
  DAT_1803fb24c = *pfVar12;
  lVar25 = (longlong)(int)DAT_1803fb24c * 200;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
     (pfVar20 = (float *)(lVar3 + 0x280), *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x2368) != 0)
     ) {
    pfVar20 = (float *)(lVar3 + 0x250);
  }
  local_b0 = 0;
  fVar28 = ((*pfVar20 - *(float *)(lVar3 + 0x118)) - DAT_180380fe0) * DAT_180380ac0;
  FUN_18026aad0(2,&local_b0);
  uVar6 = DAT_180381384;
  local_b0 = CONCAT44(0xbf800000,fVar28);
  FUN_180272fa0("##hvh_left",&local_b0,0,0x18);
  FUN_18026abb0(1);
  cVar9 = FUN_18019fbc0("Anti-Aim",0xf,CONCAT44(uVar6,fVar28),0);
  fVar5 = DAT_180380c50;
  fVar27 = DAT_180380b20;
  if (cVar9 != '\0') {
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xf877df6876fb9434;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_a0,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Enable anti-aim",uVar11);
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xd2ceb89ade8cdec;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    pfVar12 = (float *)FUN_1802029c0(*plVar10 + 0x28);
    pfVar20 = (float *)&local_a8;
    local_a0 = 1.5;
    local_a8._0_4_ = 0.75;
    if (fVar27 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar16 = &local_a0;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar16 = pfVar20;
    }
    fVar26 = *pfVar16;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar26 = fVar26 * _DAT_180381170;
    local_e8 = 5;
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    puVar1 = (uint *)(lVar3 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar3 + 0x1ed8) = fVar26;
    FUN_1802b1200("Pitch",pfVar12);
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    local_a0 = 5.60519e-45;
    pfVar20 = (float *)&local_a8;
    if (-1 < (int)*pfVar12) {
      pfVar20 = pfVar12;
    }
    local_b0 = 0x2d8f695138585a77;
    pfVar16 = &local_a0;
    if ((int)*pfVar12 < 5) {
      pfVar16 = pfVar20;
    }
    *pfVar12 = *pfVar16;
    local_a8 = 0x398cc31e81e2db51;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    pfVar20 = (float *)FUN_1802029c0(*plVar10 + 0x28);
    fVar26 = *pfVar20;
    if ((int)fVar26 - 7U < 2) {
      *pfVar20 = 1.26117e-44;
      local_a0 = 9.80909e-45;
    }
    else if (fVar26 == 1.26117e-44) {
      local_a0 = 9.80909e-45;
    }
    else {
      local_a0 = 8.40779e-45;
      local_a8 = local_a8 & 0xffffffff00000000;
      pfVar12 = (float *)&local_a8;
      if (-1 < (int)fVar26) {
        pfVar12 = pfVar20;
      }
      pfVar16 = &local_a0;
      if ((int)fVar26 < 7) {
        pfVar16 = pfVar12;
      }
      local_a0 = *pfVar16;
    }
    pfVar12 = (float *)&local_a8;
    local_b0 = CONCAT44(local_b0._4_4_,0x3fc00000);
    local_a8 = CONCAT44(local_a8._4_4_,0x3f400000);
    if (fVar27 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar16 = (float *)&local_b0;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar16 = pfVar12;
    }
    fVar26 = *pfVar16;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar26 = fVar26 * _DAT_180381170;
    local_e8 = 8;
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    puVar1 = (uint *)(lVar3 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar3 + 0x1ed8) = fVar26;
    cVar9 = FUN_1802b1200(&DAT_1803690d8,&local_a0);
    if (cVar9 != '\0') {
      fVar26 = local_a0;
      if (local_a0 == 9.80909e-45) {
        fVar26 = 1.26117e-44;
      }
      *pfVar20 = fVar26;
    }
    if ((*pfVar20 == 8.40779e-45) && (cVar9 = FUN_18026ee60(0), cVar9 != '\0')) {
      FUN_180280d00(
                   "Backwards, flipped left/right once per server update, so their aim\nlands where you were one update ago."
                   );
    }
    if ((*pfVar20 == 1.26117e-44) && (cVar9 = FUN_18026ee60(0), cVar9 != '\0')) {
      FUN_180280d00(
                   "Choked commands steer the server\'s body, the sent one shows enemies\nthe far side of it. Holds ~170 deg at any choke depth.\nNEEDS FAKE LAG -- with nothing choked it is just Backwards."
                   );
    }
    if (((int)*pfVar20 - 2U & 0xfffffffb) == 0) {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xeddd7019415d29f4;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d deg";
      local_e8 = 0xb4;
      FUN_1801a85a0("Jitter width","##aa_jitter",piVar13,10);
      local_a8 = CONCAT44(local_a8._4_4_,0xb4);
      piVar18 = (int *)&local_b0;
      if (9 < *piVar13) {
        piVar18 = piVar13;
      }
      local_b0 = CONCAT44(local_b0._4_4_,10);
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0xb5) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
    }
    if (*pfVar20 == 1.26117e-44) {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0x423a90540ddbc421;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d deg";
      local_e8 = 0x3c;
      FUN_1801a85a0("Desync jitter","##aa_desync_jitter",piVar13,0);
      local_b0 = local_b0 & 0xffffffff00000000;
      local_a8 = CONCAT44(local_a8._4_4_,0x3c);
      piVar18 = (int *)&local_b0;
      if (-1 < *piVar13) {
        piVar18 = piVar13;
      }
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0x3d) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
      local_a8 = 0x2e7b87382f9b768;
      local_b0 = 0x2d8f695138585a77;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_a8 = CONCAT44(local_a8._4_4_,2);
      uVar4 = local_b0 >> 0x20;
      local_b0 = local_b0 & 0xffffffff00000000;
      piVar18 = (int *)&local_b0;
      if (-1 < *piVar13) {
        piVar18 = piVar13;
      }
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 3) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
      pfVar12 = (float *)&local_b0;
      local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
      local_b0 = CONCAT44((int)uVar4,0x3f400000);
      if (fVar27 <= DAT_1803da6a4) {
        pfVar12 = &DAT_1803da6a4;
      }
      pfVar16 = (float *)&local_a8;
      if (DAT_1803da6a4 <= fVar5) {
        pfVar16 = pfVar12;
      }
      fVar26 = *pfVar16;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar26 = fVar26 * DAT_18038115c;
      local_e8 = 3;
      lVar3 = *(longlong *)(lVar2 + 0xec0);
      puVar1 = (uint *)(lVar3 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar3 + 0x1ed8) = fVar26;
      FUN_1802b1200("Body side##aa_desync_side",piVar13);
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "Which way the body is turned. The server\'s hitboxes follow the FEET,\nso this decides whether the anti-aim does anything at all.\nAlternate flips every ~0.18s. Freestanding overrides it."
                     );
      }
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0x52e8e7a5c772ca6c;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      FUN_1801a0b60("Freestanding",uVar11);
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "Pick the side from cover instead of alternating: the body turns\ntoward the closer wall. Does nothing in the open."
                     );
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xa9b614a7a14b0311;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    local_a8 = CONCAT44(local_a8._4_4_,4);
    uVar4 = local_b0 >> 0x20;
    local_b0 = local_b0 & 0xffffffff00000000;
    piVar18 = (int *)&local_b0;
    if (-1 < *piVar13) {
      piVar18 = piVar13;
    }
    piVar14 = (int *)&local_a8;
    if (*piVar13 < 5) {
      piVar14 = piVar18;
    }
    *piVar13 = *piVar14;
    pfVar12 = (float *)&local_b0;
    local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
    local_b0 = CONCAT44((int)uVar4,0x3f400000);
    if (fVar27 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar16 = (float *)&local_a8;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar16 = pfVar12;
    }
    fVar26 = *pfVar16;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar26 = fVar26 * _DAT_180381170;
    local_e8 = 5;
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    puVar1 = (uint *)(lVar3 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar3 + 0x1ed8) = fVar26;
    FUN_1802b1200("Modifier",piVar13);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Layered on top of the direction instead of replacing it, so\n\'backwards + jitter\' is reachable. Steps once per server update."
                   );
    }
    if (*piVar13 != 0) {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xd0bdc5255ffea357;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar14 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d deg";
      local_e8 = 0xb4;
      FUN_1801a85a0("Modifier range","##aa_add_range",piVar14,0);
      local_a8 = CONCAT44(local_a8._4_4_,0xb4);
      local_b0 = local_b0 & 0xffffffff00000000;
      piVar18 = (int *)&local_b0;
      if (-1 < *piVar14) {
        piVar18 = piVar14;
      }
      piVar15 = (int *)&local_a8;
      if (*piVar14 < 0xb5) {
        piVar15 = piVar18;
      }
      *piVar14 = *piVar15;
      if (*piVar13 - 2U < 2) {
        local_b0 = 0x2d8f695138585a77;
        local_a8 = 0x87caec02f83d070d;
        plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
        plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
        piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
        local_e0 = "%d deg/snapshot";
        local_e8 = 0xb4;
        FUN_1801a85a0("Modifier speed","##aa_add_speed",piVar13,1);
        local_a8 = CONCAT44(local_a8._4_4_,0xb4);
        piVar18 = (int *)&local_b0;
        if (0 < *piVar13) {
          piVar18 = piVar13;
        }
        local_b0 = CONCAT44(local_b0._4_4_,1);
        piVar14 = (int *)&local_a8;
        if (*piVar13 < 0xb5) {
          piVar14 = piVar18;
        }
        *piVar13 = *piVar14;
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xa9c1817373260c25;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    uVar4 = local_b0 >> 0x20;
    local_b0 = local_b0 & 0xffffffff00000000;
    local_a8 = CONCAT44(local_a8._4_4_,2);
    piVar18 = (int *)&local_b0;
    if (-1 < *piVar13) {
      piVar18 = piVar13;
    }
    piVar14 = (int *)&local_a8;
    if (*piVar13 < 3) {
      piVar14 = piVar18;
    }
    *piVar13 = *piVar14;
    pfVar12 = (float *)&local_b0;
    local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
    local_b0 = CONCAT44((int)uVar4,0x3f400000);
    if (fVar27 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar16 = (float *)&local_a8;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar16 = pfVar12;
    }
    fVar26 = *pfVar16;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar26 = fVar26 * DAT_180381188;
    local_e8 = 3;
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    puVar1 = (uint *)(lVar3 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar3 + 0x1ed8) = fVar26;
    FUN_1802b1200("Relative to##aa_at_target",piVar13);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "What \'backwards\' and \'sideways\' are measured from. Your own view\nmeans backwards points at anyone you are not looking at."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xd34643a33790f520;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Manual direction",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00("Hold a side on a key instead of letting it alternate.");
    }
    FUN_18027f5b0(0,uVar6);
    cVar9 = FUN_18019dc00("##aa_manual_opts",4,0);
    if (cVar9 != '\0') {
      FUN_180280fd0("aa_manual_opts");
    }
    cVar9 = FUN_18019a680("aa_manual_opts");
    if (cVar9 != '\0') {
      FUN_1802aabb0(&DAT_1803dca28 + lVar25,"Manual direction (toggles)");
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xb13946245d7c0048;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1802029c0(*plVar10 + 0x28);
      FUN_1801c2240(extraout_XMM0_Da,&DAT_180360a40,"##aa_man_l",uVar11);
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0x59dd15dc32d48bd;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1802029c0(*plVar10 + 0x28);
      FUN_1801c2240(extraout_XMM0_Da_00,"Right","##aa_man_r",uVar11);
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xf702e5968aa6c59a;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1802029c0(*plVar10 + 0x28);
      FUN_1801c2240(extraout_XMM0_Da_01,&DAT_180369614,"##aa_man_b",uVar11);
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xaae97fae090a88e9;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1802029c0(*plVar10 + 0x28);
      FUN_1801c2240(extraout_XMM0_Da_02,"Invert","##aa_man_i",uVar11);
      FUN_1802aabb0(&DAT_1803dca28 + lVar25,
                    "Press again to release. Back is ignored\nby Real desync (it already faces away)."
                   );
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xaf1968f7424da736;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      FUN_1801a0b60("Direction arrows",uVar11);
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00("Arrows at the crosshair. The lit one is the body side, not the key.");
      }
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    pfVar12 = (float *)&local_b0;
    local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
    local_b0 = CONCAT44(local_b0._4_4_,0x3f400000);
    local_a0 = 0.0;
    if (fVar27 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar16 = (float *)&local_a8;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar16 = pfVar12;
    }
    local_9c = *pfVar16 * DAT_180380e28;
    FUN_1802af260(&local_a0);
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x421c37ab4bbb9fa9;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Keep steering on cooldown",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Anti-aim normally stops on every tick you hold fire. This keeps it\nsteering on the ticks the weapon is still on cooldown.\nOnly works on weapons with an engine fire clock -- the log line\n[AA-COOLDOWN] says whether it is doing anything."
                   );
    }
    if (*pfVar20 == 4.2039e-45) {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xa93407069741444e;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d deg";
      local_e8 = 0x12;
      FUN_1801a85a0("Spin speed","##aa_spin",piVar13,1);
      local_a8 = CONCAT44(local_a8._4_4_,0x12);
      piVar18 = (int *)&local_b0;
      if (0 < *piVar13) {
        piVar18 = piVar13;
      }
      local_b0 = CONCAT44(local_b0._4_4_,1);
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0x13) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
    }
    if (*pfVar20 == 1.12104e-44) {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xd253a18c1def955d;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d deg";
      local_e8 = 0x168;
      FUN_1801a85a0("LBY min delta","##aa_lby_min",piVar13,0);
      local_b0 = local_b0 & 0xffffffff00000000;
      local_a8 = CONCAT44(local_a8._4_4_,0x168);
      piVar18 = (int *)&local_b0;
      if (-1 < *piVar13) {
        piVar18 = piVar13;
      }
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0x169) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
      local_a8 = 0xc5d1df3fb454def6;
      local_b0 = 0x2d8f695138585a77;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d deg";
      local_e8 = 0x168;
      FUN_1801a85a0("LBY break delta","##aa_lby_break",piVar13,0);
      local_a8 = CONCAT44(local_a8._4_4_,0x168);
      local_b0 = local_b0 & 0xffffffff00000000;
      piVar18 = (int *)&local_b0;
      if (-1 < *piVar13) {
        piVar18 = piVar13;
      }
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0x169) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
    }
    if ((int)*pfVar20 - 7U < 2) {
      local_b0 = 0x93fd561a96ab0c67;
      local_a8 = 0x46af284dbd58f0c;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      pcVar17 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
      pcVar23 = "(!) Fake Lag is OFF -- LBY modes need it";
      if (*pcVar17 == '\0') {
        puVar21 = &DAT_1803dca08;
      }
      else {
        pcVar23 = "Fake Lag: ON";
        puVar21 = &DAT_1803dca28;
      }
      FUN_1802aabb0(puVar21 + lVar25,pcVar23);
    }
    pfVar20 = (float *)&local_b0;
    local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
    local_b0 = CONCAT44(local_b0._4_4_,0x3f400000);
    local_a0 = 0.0;
    if (fVar27 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar12 = (float *)&local_a8;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar12 = pfVar20;
    }
    local_9c = *pfVar12 * DAT_180380e9c;
    FUN_1802af260(&local_a0);
    FUN_1802aabb0(&DAT_1803dca28 + lVar25,"Silent: your own view is untouched.");
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  pfVar20 = (float *)&local_b0;
  local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
  local_b0 = CONCAT44(local_b0._4_4_,0x3f400000);
  if (fVar27 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar12 = (float *)&local_a8;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar12 = pfVar20;
  }
  FUN_18027f5b0(0,*pfVar12 * DAT_180380fe0);
  local_b0 = 0;
  FUN_18026aad0(2,&local_b0);
  local_b0 = 0xbf80000000000000;
  FUN_180272fa0("##hvh_right",&local_b0,0,0x18);
  FUN_18026abb0(1);
  cVar9 = FUN_18019fbc0("Resolver",0,CONCAT44(DAT_1803811bc,fVar28),0);
  if (cVar9 == '\0') goto LAB_1801c1d81;
  local_b0 = 0x2d8f695138585a77;
  local_a8 = 0x604d6bbb4537d70d;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
  uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
  FUN_1801a0b60("Enable resolver",uVar11);
  local_b0 = 0x2d8f695138585a77;
  local_a8 = 0x896c5505eb940c1d;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
  piVar18 = (int *)FUN_1802029c0(*plVar10 + 0x28);
  iVar22 = *piVar18;
  if ((iVar22 == 1) || (iVar22 == 3)) {
    *piVar18 = 0;
    iVar22 = 0;
  }
  local_b8[1] = 2;
  local_b8[0] = 0;
  piVar13 = local_b8;
  if (-1 < iVar22) {
    piVar13 = piVar18;
  }
  local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
  local_b0 = CONCAT44(local_b0._4_4_,0x3f400000);
  piVar14 = local_b8 + 1;
  if (iVar22 < 3) {
    piVar14 = piVar13;
  }
  iVar22 = *piVar14;
  *piVar18 = iVar22;
  pfVar20 = (float *)&local_b0;
  local_a0 = (float)(uint)(iVar22 == 2);
  if (fVar27 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar12 = (float *)&local_a8;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar12 = pfVar20;
  }
  fVar26 = *pfVar12;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar26 = fVar26 * DAT_180381188;
  local_e8 = 2;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar3 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar3 + 0x1ed8) = fVar26;
  cVar9 = FUN_1802b1200("Mode##res_mode",&local_a0);
  if (cVar9 != '\0') {
    if (local_a0 == 1.4013e-45) {
      iVar24 = 2;
    }
    *piVar18 = iVar24;
  }
  if (local_a0 == 0.0) {
    cVar9 = FUN_18026ee60();
    if (cVar9 != '\0') {
      pcVar23 = 
      "Replays the enemy\'s animation for several guesses at the commands\nwe never received. Does nothing to a MOVING enemy -- the engine pins\nhis feet to his eyes, so there is nothing to resolve."
      ;
LAB_1801c10c5:
      FUN_180280d00(pcVar23);
    }
  }
  else if ((local_a0 == 1.4013e-45) && (cVar9 = FUN_18026ee60(0), cVar9 != '\0')) {
    pcVar23 = 
    "Never touches the yaw, only flattens a fake pitch. The safe choice\non servers full of legit players."
    ;
    goto LAB_1801c10c5;
  }
  local_b0 = 0x2d8f695138585a77;
  local_a8 = 0xee6638fef6f481c0;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
  uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
  FUN_1801a0b60("Safe point",uVar11);
  cVar9 = FUN_18026ee60(0);
  if (cVar9 != '\0') {
    FUN_180280d00(
                 "Sample six points around each head/chest/stomach box instead of\ntrusting the centre and two diagonals.\n\nTHE CASE IT FIXES: the head is the chosen group and an arm is in\nfront of it. With three samples all three trace into the arm, the\nhead is called invisible, and the aimbot drops a group and shoots\nthe ARM. A head box is a few units across and a limb rarely covers\nall of it -- this finds the exposed sliver and keeps the head.\n\nCosts traces only when nothing on the preferred group is visible\nyet: the scan still stops at the first point it can see, and the\ncentre stays first because it is the most forgiving of a wrong\nresolve.\n\nWith Multi-hypothesis points also on, these extra samples are\nordered by how many resolver guesses contain them -- that is the\nreal safe point: one that hits whichever guess turns out right."
                 );
  }
  local_b0 = 0x2d8f695138585a77;
  local_a8 = 0x59fd2f0c010a554e;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
  uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
  FUN_1801a0b60("Multi-hypothesis points",uVar11);
  cVar9 = FUN_18026ee60(0);
  if (cVar9 != '\0') {
    FUN_180280d00(
                 "Build a skeleton per guess and prefer aim points that hit under the\nmost of them. Live targets only, not backtrack records."
                 );
  }
  FUN_18027f5b0(0,uVar6);
  cVar9 = FUN_18019dc00("##res_opts",4,0);
  if (cVar9 != '\0') {
    FUN_180280fd0("res_opts");
  }
  cVar9 = FUN_18019a680("res_opts");
  if (cVar9 != '\0') {
    puVar21 = &DAT_1803dca28 + lVar25;
    FUN_1802aabb0(puVar21,"Resolver internals");
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xee6638fef6f481c0;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    pcVar23 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if (*pcVar23 != '\0') {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0x4f6f32755f56219;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d%%";
      local_e8 = 0x5f;
      FUN_1801a85a0("Safe point spread","##safepoint_scale",piVar13,0x28);
      local_a8 = CONCAT44(local_a8._4_4_,0x5f);
      piVar18 = (int *)&local_b0;
      if (0x27 < *piVar13) {
        piVar18 = piVar13;
      }
      local_b0 = CONCAT44(local_b0._4_4_,0x28);
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0x60) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "How far the six samples sit from the box centre, as a percentage\nof its half-size.\n\nLow = huddled near the centre: safest against a wrong resolve, but\nfinds fewer exposed slivers. High = out at the faces: finds the\npeeking edge, but a point near the face leaves the box the moment\nthe resolve is off. 70%% is the compromise."
                     );
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x59fd2f0c010a554e;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    pcVar23 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if (*pcVar23 != '\0') {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xf4577e7766fe48a2;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d";
      local_e8 = 6;
      FUN_1801a85a0("Hypotheses","##res_multipose_n",piVar13,2);
      local_a8 = CONCAT44(local_a8._4_4_,6);
      piVar18 = (int *)&local_b0;
      if (1 < *piVar13) {
        piVar18 = piVar13;
      }
      local_b0 = CONCAT44(local_b0._4_4_,2);
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 7) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00("How many guesses to build. Each one costs a bone setup.");
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x896c5505eb940c1d;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    piVar18 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    if (*piVar18 == 0) {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xdf7c8b38eaee4e25;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
      FUN_1801a0b60("Seed brute from body signals",uVar11);
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "Start the search at directions taken from the target (last hit,\nmovement heading, goal feet yaw) instead of a blind table."
                     );
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x160d61dbc3aba2bb;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Ignore uninformative shots",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Do not move the search on an outcome that says nothing about the yaw.\n\nTwo cases, both measurable rather than guessed:\n  * every hypothesis covered the aim point -- they all predict the SAME\n    outcome, so a miss was not caused by the yaw and a hit does not name\n    a winner (needs Multi-hypothesis points);\n  * the target crouched mid-flight -- duck is predicted for you and only\n    interpolated for him, so that pose was never the server\'s.\n\nThe search gets ONE scored shot per round trip. Spending those on\nmisses the yaw did not cause walks it away from the right angle exactly\nas fast as it walks toward it. Off = the old behaviour, charge everything."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x3d5b6f9e4e0af044;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Pitch correction",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Enemy sends pitch +-89 to tilt his whole skeleton. This flattens it\nto 0 before the hitboxes are built."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x87b687d7366a2a99;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Torso twist correction",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Turning the legs alone leaves the chest and head at the twist the\nclient guessed. This sets the twist the server holds. Leave on."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x5b93262b0c9c00e0;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Apply in animation state",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Experimental: hook the animation state and let the engine rebuild\nthe pose instead of rotating it. Mostly covered by Torso twist now."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x6ab593f4aff6a4b1;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Debug readout",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Per-enemy state next to each player: AA/legit verdict, choke,\ndeg/tick, current guess, misses and hits."
                   );
    }
    cVar9 = FUN_1800b81b0();
    if (cVar9 != '\0') {
      cVar9 = FUN_1800b83a0();
      if (cVar9 != '\0') {
        puVar21 = &DAT_1803dc9e8 + lVar25;
      }
      pcVar23 = "Feedback: player_hurt (exact)";
      if (cVar9 == '\0') {
        pcVar23 = "Feedback: health poll (approx)";
      }
      FUN_1802aabb0(puVar21,pcVar23);
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "Where hit/miss comes from. The exact source needs\n\"Subscribe to player_hurt event\" under Loggers > DamageLogs."
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
  local_b0 = 0x2d8f695138585a77;
  local_a8 = 0x72114d0ef27e6e77;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
  uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
  FUN_1801a0b60("Visualize desync",uVar11);
  cVar9 = FUN_18026ee60(0);
  if (cVar9 != '\0') {
    FUN_180280d00(
                 "Master switch for desync visualization.\nUse ... to configure lines and fake chams separately."
                 );
  }
  FUN_18027f5b0(0,uVar6);
  cVar9 = FUN_18019dc00("##desync_visual_opts",4,0);
  if (cVar9 != '\0') {
    FUN_180280fd0("desync_visual_opts");
  }
  cVar9 = FUN_18019a680("desync_visual_opts");
  if (cVar9 != '\0') {
    FUN_1802aabb0(&DAT_1803dca28 + lVar25,"Desync visualization");
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x1cb083bf379fe263;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Direction lines",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "ESP-projected direction lines.\nExcluded from GTS and streamproof clean captures."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xd4036f972fdb6911;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Rebuild your own model",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Builds your third-person body at the yaw the SERVER is holding, so what you see is what an enemy\'s hitboxes are doing.\nThe engine builds the pose, so the torso twist and the limbs are the server\'s.\n\nOff falls back to Fake chams, which rotates an already-built pose rigidly -- that is why the red copy looks stretched and bent.\nVisual only: the server is driven by the command angles, which this never touches."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x1c0fbb64b84b566e;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Fake chams",uVar11);
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x72114d0ef27e6e77;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    pcVar23 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if (*pcVar23 != '\0') {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xd4036f972fdb6911;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
      pcVar23 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
      if (*pcVar23 != '\0') {
        local_a8 = CONCAT44(local_a8._4_4_,4);
        pfVar20 = (float *)&local_b0;
        local_b0 = local_b0 & 0xffffffff00000000;
        if (-1 < (int)DAT_1803fb24c) {
          pfVar20 = &DAT_1803fb24c;
        }
        pfVar12 = (float *)&local_a8;
        if ((int)DAT_1803fb24c < 5) {
          pfVar12 = pfVar20;
        }
        DAT_1803fb24c = *pfVar12;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                      "Ghost is off while the model is rebuilt.");
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x1c0fbb64b84b566e;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_a0,&local_a8);
    pcVar23 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if (*pcVar23 != '\0') {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xef633722fde02243;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_c8,&local_a8);
      pfVar20 = (float *)FUN_180202dc0(*plVar10 + 0x28);
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0xef632a22fde00c2c;
      local_a0 = *pfVar20;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
      pfVar20 = (float *)FUN_180202dc0(*plVar10 + 0x28);
      local_b0 = 0x2d8f695138585a77;
      local_9c = *pfVar20;
      local_a8 = 0xef632722fde00713;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
      puVar19 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
      local_98 = *puVar19;
      cVar9 = FUN_1802bac60("Chams color##desync_chams_color",&local_a0,0x22);
      fVar26 = local_a0;
      if (cVar9 != '\0') {
        local_b0 = 0x2d8f695138585a77;
        local_a8 = 0xef633722fde02243;
        plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
        plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
        pfVar20 = (float *)FUN_180202dc0(*plVar10 + 0x28);
        fVar7 = local_9c;
        local_b0 = 0x2d8f695138585a77;
        local_a8 = 0xef632a22fde00c2c;
        *pfVar20 = fVar26;
        plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
        plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
        pfVar20 = (float *)FUN_180202dc0(*plVar10 + 0x28);
        uVar8 = local_98;
        local_b0 = 0x2d8f695138585a77;
        *pfVar20 = fVar7;
        local_a8 = 0xef632722fde00713;
        plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
        plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
        puVar19 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        *puVar19 = uVar8;
      }
    }
    FUN_1802afb40();
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xc980722e39863cca;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("LBY indicator",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "On-screen readout of your own feet yaw (current / goal / delta).\nUse it to confirm the animstate layout reads correctly in-game."
                   );
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x8823bab96cef1ea;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Animstate probe (listen server)",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(
                   "Phase-0 measurement, debug only. Host a listen server or start a map, turn this on, choke a few ticks, then turn it off and read the VERDICT line in the log.\nDoes nothing at all when server.dll is not in this process."
                   );
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
LAB_1801c1d81:
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  cVar9 = FUN_18019fbc0("Lag Compensation",2,CONCAT44(uVar6,fVar28),0);
  if (cVar9 != '\0') {
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xe0c32a7e4da84b2e;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Enable##lagcomp",uVar11);
    FUN_18027f5b0(0,uVar6);
    cVar9 = FUN_18019dc00("##lagcomp_opts",4,0);
    if (cVar9 != '\0') {
      FUN_180280fd0("lagcomp_opts");
    }
    pfVar20 = (float *)&local_b0;
    local_a8 = CONCAT44(local_a8._4_4_,0x3fc00000);
    local_b0 = CONCAT44(local_b0._4_4_,0x3f400000);
    if (fVar27 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar12 = (float *)&local_a8;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar12 = pfVar20;
    }
    fVar28 = *pfVar12 * _DAT_1803811b8;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar25 = *(longlong *)(lVar2 + 0xec0);
    *(uint *)(lVar25 + 0x1f48) = *(uint *)(lVar25 + 0x1f48) | 2;
    *(float *)(lVar25 + 0x1f68) = fVar28;
    *(undefined4 *)(lVar25 + 0x1f6c) = 0;
    *(undefined4 *)(lVar25 + 0x1f50) = 1;
    cVar9 = FUN_18019a680("lagcomp_opts");
    if (cVar9 != '\0') {
      local_b0 = 0x2d8f695138585a77;
      local_a8 = 0x4fc289ac518c30d0;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      local_e0 = "%d";
      local_e8 = 0xe;
      FUN_1801a85a0("Tick offset","##lagcomp_offset",piVar13,0xfffffff2);
      local_a8 = CONCAT44(local_a8._4_4_,0xe);
      piVar18 = (int *)&local_b0;
      if (-0xf < *piVar13) {
        piVar18 = piVar13;
      }
      local_b0 = CONCAT44(local_b0._4_4_,0xfffffff2);
      piVar14 = (int *)&local_a8;
      if (*piVar13 < 0xf) {
        piVar14 = piVar18;
      }
      *piVar13 = *piVar14;
      cVar9 = FUN_18026ee60(0);
      if (cVar9 != '\0') {
        FUN_180280d00(
                     "Fine-tune the sent tick_count if hits land just\nahead/behind the enemy. 0 = auto (ping+interp).\nRaise if shots hit where they WERE, lower if ahead."
                     );
      }
      local_a8 = CONCAT44(local_a8._4_4_,4);
      pfVar20 = (float *)&local_b0;
      local_b0 = local_b0 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar20 = &DAT_1803fb24c;
      }
      pfVar12 = (float *)&local_a8;
      if ((int)DAT_1803fb24c < 5) {
        pfVar12 = pfVar20;
      }
      DAT_1803fb24c = *pfVar12;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"0 = auto (ping + interp).")
      ;
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0x80da9dc943fdf3cc;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    piVar18 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    pfVar20 = (float *)&local_b0;
    local_a8._0_4_ = 1.5;
    local_b0._0_4_ = 0.75;
    if (fVar27 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar12 = (float *)&local_a8;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar12 = pfVar20;
    }
    fVar27 = *pfVar12;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    fVar27 = fVar27 * DAT_180381198;
    local_e8 = 2;
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar2 + 0x1ed8) = fVar27;
    FUN_1802b1200("Mode##lagcomp_mode",piVar18);
    local_a8 = CONCAT44(local_a8._4_4_,1);
    local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
    piVar13 = (int *)&local_b0;
    if (-1 < *piVar18) {
      piVar13 = piVar18;
    }
    piVar14 = (int *)&local_a8;
    if (*piVar18 < 2) {
      piVar14 = piVar13;
    }
    *piVar18 = *piVar14;
    FUN_1802afb40();
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xf56e486121667a2b;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Disable interpolation##no_interp",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(&DAT_18036ad20);
    }
    FUN_1802afb40();
    local_b0 = 0x2d8f695138585a77;
    local_a8 = 0xb11c6c42591b6fcf;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_b0);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_d8,&local_a8);
    uVar11 = FUN_1801fcfc0(*plVar10 + 0x28);
    FUN_1801a0b60("Tick-quantised animation##tick_anims",uVar11);
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      FUN_180280d00(&DAT_18036ae10);
    }
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  return;
}


