// 0x1801bf770  FUN_1801bf770
// size=1451 thunk=false
// signature: undefined FUN_1801bf770()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bf770(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  float local_70 [2];
  undefined8 local_68 [2];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar4 + 0x1c8) != 0) ||
     (lVar8 = 0x280, *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x2368) != 0)) {
    lVar8 = 0x250;
  }
  local_78 = 0;
  fVar14 = ((*(float *)(lVar4 + lVar8) - *(float *)(lVar4 + 0x118)) - DAT_180380fe0) * DAT_180380ac0
  ;
  FUN_18026aad0(2,&local_78);
  uVar6 = DAT_180381384;
  local_78 = CONCAT44(0xbf800000,fVar14);
  FUN_180272fa0("##rage_left",&local_78,0,0x18);
  FUN_18026abb0(1);
  cVar7 = FUN_18019fbc0("Rage aim",0,CONCAT44(uVar6,fVar14),0);
  fVar14 = DAT_180380b20;
  if (cVar7 != '\0') {
    local_70[0] = 1.007425e+09;
    local_70[1] = 2.6265411;
    local_78 = 0x2723fc3764d74742;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_78);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,local_70);
    uVar10 = FUN_1801fcfc0(*plVar9 + 0x28);
    FUN_1801a0b60("Enable##rage",uVar10);
    cVar7 = FUN_18026ee60(0);
    if (cVar7 != '\0') {
      FUN_180280d00(
                   "Runs BESIDE the legit aimbot, reusing its target selection,\nbacktrack records, visibility and resolver -- only the policy\ndiffers: no smoothing, no FOV cone, the angle is written on the\ntick it exists.\n\nThis is loud. It is meant to be."
                   );
    }
    FUN_18027f5b0(0,uVar6);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar5 = DAT_18038113c;
    local_78._0_4_ = 1.5;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
    local_70[0] = 0.75;
    fVar1 = *(float *)(lVar4 + 0x280);
    fVar2 = *(float *)(lVar4 + 0x28);
    pfVar12 = local_70;
    if (fVar14 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar11 = (float *)&local_78;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar11 = pfVar12;
    }
    fVar13 = *pfVar11 * DAT_18038113c;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    local_70[0] = 1.5;
    local_78 = CONCAT44(local_78._4_4_,0x3f400000);
    *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar3 + 0x1520);
    pfVar12 = (float *)&local_78;
    *(undefined1 *)(lVar3 + 0x159) = 1;
    *(float *)(lVar3 + 0x118) =
         (*(float *)(lVar3 + 0x28) - *(float *)(lVar3 + 0x98)) + ((fVar1 - fVar2) - fVar13);
    if (fVar14 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar11 = local_70;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar11 = pfVar12;
    }
    local_70[0] = 3.1769477e+22;
    local_70[1] = 2.275752e-15;
    local_68[0] = 0x549a0576bfe235e1;
    local_78 = (ulonglong)(uint)(*pfVar11 * fVar5);
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_98,local_70);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_88,local_68);
    uVar10 = FUN_1802029c0(*plVar9 + 0x28);
    FUN_1802d31a0("##rage_hotkey",uVar10,&local_78,0);
    cVar7 = FUN_18026ee60(0);
    if (cVar7 != '\0') {
      FUN_180280d00("Held, not toggled. Unbound (0) means always on while enabled.");
    }
    local_68[0] = 0x2723fc3764d74742;
    local_78 = 0xad8998a7cc2812c;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,local_68);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,&local_78);
    uVar10 = FUN_1801fcfc0(*plVar9 + 0x28);
    FUN_1801a0b60("Auto fire",uVar10);
    cVar7 = FUN_18026ee60(0);
    if (cVar7 != '\0') {
      FUN_180280d00(
                   "Pull the trigger whenever the weapon backend reports ready.\nThere is no hitchance gate: with Nospread on the cone is no\nlonger random, so a \'chance\' would be gating on a number that\nstopped describing anything."
                   );
    }
    local_68[0] = 0x2723fc3764d74742;
    local_78 = 0x4064f70bc33de70a;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,local_68);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,&local_78);
    uVar10 = FUN_1801fcfc0(*plVar9 + 0x28);
    FUN_1801a0b60("Silent",uVar10);
    cVar7 = FUN_18026ee60(0);
    if (cVar7 != '\0') {
      FUN_180280d00(
                   "Write the angle into the command only. Off also moves your\nactual view, which is visible to you and to spectators."
                   );
    }
    local_68[0] = 0x2723fc3764d74742;
    local_78 = 0x150438b5fa29716a;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,local_68);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,&local_78);
    uVar10 = FUN_1801fcfc0(*plVar9 + 0x28);
    FUN_1801a0b60("Extrapolate unreachable targets",uVar10);
    cVar7 = FUN_18026ee60(0);
    if (cVar7 != '\0') {
      FUN_180280d00(
                   "For targets the server refuses to rewind (fake laggers). Carries them\nforward through the real movement code, in steps of their own command\nbundle, to a pose the server is actually holding.\nFalls back to cl_lagcompensation 0, which the server can see."
                   );
    }
    local_68[0] = 0x2723fc3764d74742;
    local_78 = 0x44f6ba6c1a751b7f;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,local_68);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,&local_78);
    uVar10 = FUN_1801fcfc0(*plVar9 + 0x28);
    FUN_1801a0b60("Release anti-LSAC guards",uVar10);
    cVar7 = FUN_18026ee60(0);
    if (cVar7 != '\0') {
      FUN_180280d00(
                   "Turns aimbot_settings.anti_lsac OFF while rage is held and puts\nYOUR value back the moment it is not -- the angle-delta limiter,\nthe reversal check, the fake mouse deltas and the movement octant\nsnap all hang off that one master.\n\nEvery one of them exists to make the aim look like a hand, and\nevery one costs accuracy. In a rage fight the anti-aim has already\ngiven that away."
                   );
    }
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  pfVar12 = (float *)&local_78;
  local_70[0] = 1.5;
  local_78 = CONCAT44(local_78._4_4_,0x3f400000);
  if (fVar14 <= DAT_1803da6a4) {
    pfVar12 = &DAT_1803da6a4;
  }
  pfVar11 = local_70;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar11 = pfVar12;
  }
  FUN_18027f5b0(0,*pfVar11 * DAT_180380fe0);
  local_78 = 0;
  FUN_18026aad0(2,&local_78);
  local_78 = 0xbf80000000000000;
  FUN_180272fa0("##rage_right",&local_78,0,0x18);
  FUN_18026abb0(1);
  FUN_180273410();
  return;
}


