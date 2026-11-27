// 0x1801e2220  FUN_1801e2220
// size=5634 thunk=false
// signature: undefined FUN_1801e2220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e2220(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  char *pcVar12;
  float *pfVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  float *pfVar17;
  float *pfVar18;
  undefined *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_118 [32];
  double local_f8;
  char *local_f0;
  float local_e8 [2];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar20 = DAT_180380ac0;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar2 + 0x1c8) != 0) ||
     (lVar16 = 0x280, *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x2368) != 0)) {
    lVar16 = 0x250;
  }
  local_b8 = 0;
  fVar22 = ((*(float *)(lVar2 + lVar16) - *(float *)(lVar2 + 0x118)) - DAT_180380fe0) *
           DAT_180380ac0;
  FUN_18026aad0(2,&local_b8);
  uVar4 = DAT_180381384;
  local_b8 = CONCAT44(0xbf800000,fVar22);
  FUN_180272fa0("##camera_left",&local_b8,0,0x18);
  FUN_18026abb0(1);
  cVar5 = FUN_18019fbc0("Third Person",3,CONCAT44(DAT_18038116c,fVar22),0);
  fVar3 = DAT_180380c50;
  fVar21 = DAT_180380b20;
  if (cVar5 == '\0') goto LAB_1801e280b;
  local_b0 = 0x575dfe7fd1bc6251;
  local_b8 = 0x8776ac2cca5b5bb8;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_e0,&local_b0);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_d0,&local_b8);
  piVar7 = (int *)FUN_1802029c0(*plVar6 + 0x28);
  if (*piVar7 == 0) {
    local_b0 = 0x575dfe7fd1bc6251;
    local_b8 = 0x9bf05500c69582b6;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    piVar7 = (int *)FUN_1802029c0(*plVar6 + 0x28);
    if (*piVar7 != 0) goto LAB_1801e243e;
    uVar8 = 0;
  }
  else {
LAB_1801e243e:
    uVar8 = 1;
  }
  local_f8 = 0.0;
  FUN_1801a04c0("Third Person","Offsets","##tp_offsets",uVar8);
  local_b0 = 0x575dfe7fd1bc6251;
  local_b8 = 0x549a0576bfe235e1;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
  uVar8 = FUN_1802029c0(*plVar6 + 0x28);
  local_b0 = 0x575dfe7fd1bc6251;
  local_b8 = 0x402819404e703058;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
  uVar9 = FUN_1801fcfc0(*plVar6 + 0x28);
  FUN_1801a16e0("Enable",uVar9,"##tp_hotkey",uVar8);
  local_b0 = 0x575dfe7fd1bc6251;
  local_b8 = 0x278f2665d9fce53c;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
  uVar8 = FUN_1802029c0(*plVar6 + 0x28);
  local_f0 = "%d";
  local_f8 = (double)CONCAT44(local_f8._4_4_,0x1e);
  FUN_1801a85a0("Distance","##tp_distance",uVar8,5);
  pfVar17 = local_e8;
  local_b8 = CONCAT44(local_b8._4_4_,0x3fc00000);
  local_e8[0] = 0.75;
  if (fVar21 <= DAT_1803da6a4) {
    pfVar17 = &DAT_1803da6a4;
  }
  pfVar11 = (float *)&local_b8;
  if (DAT_1803da6a4 <= fVar3) {
    pfVar11 = pfVar17;
  }
  fVar23 = *pfVar11 * DAT_1803811e0;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 2;
  *(float *)(lVar2 + 0x1f68) = fVar23;
  *(undefined4 *)(lVar2 + 0x1f6c) = 0;
  *(undefined4 *)(lVar2 + 0x1f50) = 1;
  cVar5 = FUN_18019a680("##tp_offsets");
  if (cVar5 != '\0') {
    local_b0 = 0x575dfe7fd1bc6251;
    local_b8 = 0x8776ac2cca5b5bb8;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1802029c0(*plVar6 + 0x28);
    local_f0 = "%d";
    local_f8 = (double)CONCAT44(local_f8._4_4_,0x1e);
    FUN_1801a85a0(&DAT_180377f94,"##tp_side",uVar8,0xffffffe2);
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00(
                   "Shoulder offset.\nPositive is to the right, negative to the left, 0 is centered."
                   );
    }
    local_b0 = 0x575dfe7fd1bc6251;
    local_b8 = 0x9bf05500c69582b6;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1802029c0(*plVar6 + 0x28);
    local_f0 = "%d";
    local_f8 = (double)CONCAT44(local_f8._4_4_,0x1e);
    FUN_1801a85a0("Height","##tp_up",uVar8,0xffffffe2);
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00(
                   "Vertical offset of the camera.\nPositive looks down from above, negative from below."
                   );
    }
    local_b8 = 0xbf800000;
    cVar5 = FUN_1802abf60("Reset##tp_offsets",&local_b8,0);
    if (cVar5 != '\0') {
      local_b0 = 0x575dfe7fd1bc6251;
      local_b8 = 0x8776ac2cca5b5bb8;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      puVar10 = (undefined4 *)FUN_1802029c0(*plVar6 + 0x28);
      local_b0 = 0x575dfe7fd1bc6251;
      local_b8 = 0x9bf05500c69582b6;
      *puVar10 = 0;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      puVar10 = (undefined4 *)FUN_1802029c0(*plVar6 + 0x28);
      *puVar10 = 0;
    }
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00("Back to the centered camera (both offsets 0).");
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
LAB_1801e280b:
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  cVar5 = FUN_18019fbc0("Free Camera",3,CONCAT44(uVar4,fVar22),0);
  if (cVar5 != '\0') {
    local_b8 = 0x549a0576bfe235e1;
    local_b0 = 0x237bcfbdef3b6800;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1802029c0(*plVar6 + 0x28);
    local_b0 = 0x237bcfbdef3b6800;
    local_b8 = 0x402819404e703058;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar9 = FUN_1801fcfc0(*plVar6 + 0x28);
    FUN_1801a16e0("Enable##fc",uVar9,"##fc_hotkey",uVar8);
    local_b0 = 0x237bcfbdef3b6800;
    local_b8 = 0xc645d24a36bb943e;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1802029c0(*plVar6 + 0x28);
    local_f0 = "%dm/s";
    local_f8._0_4_ = 100;
    FUN_1801a85a0("Speed","##fc_speed",uVar8,0xf);
    local_b0 = 0x237bcfbdef3b6800;
    local_b8 = 0x6ac2a43546cc4271;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_180202dc0(*plVar6 + 0x28);
    local_f0 = "%.3f";
    local_f8 = (double)CONCAT44(local_f8._4_4_,DAT_180380bb0);
    FUN_1801a7a20("Velocity decay","##fc_velocity_decay",uVar8,DAT_1803809ec);
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  pfVar17 = (float *)&local_b8;
  local_e8[0] = 1.5;
  local_b8 = CONCAT44(local_b8._4_4_,0x3f400000);
  if (fVar21 <= DAT_1803da6a4) {
    pfVar17 = &DAT_1803da6a4;
  }
  pfVar11 = local_e8;
  if (DAT_1803da6a4 <= fVar3) {
    pfVar11 = pfVar17;
  }
  FUN_18027f5b0(pfVar17,*pfVar11 * DAT_180380fe0);
  local_b8 = 0;
  FUN_18026aad0(2,&local_b8);
  local_b8._0_4_ = 0.0;
  local_b8._4_4_ = 0xbf800000;
  FUN_180272fa0("##camera_right",&local_b8,0,0x18);
  FUN_18026abb0(1);
  cVar5 = FUN_18019fbc0("Viewport",3,CONCAT44(uVar4,fVar22),0);
  if (cVar5 != '\0') {
    local_b8 = 0x1014d57bcb173b0c;
    local_b0 = 0xf4f1688ffe5269e4;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1801fcfc0(*plVar6 + 0x28);
    FUN_1801a0b60("Custom FOV",uVar8);
    local_b0 = 0xf4f1688ffe5269e4;
    local_b8 = 0xfb3877511c4b6892;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1802029c0(*plVar6 + 0x28);
    local_f0 = "%d";
    local_f8 = (double)CONCAT44(local_f8._4_4_,0xa0);
    FUN_1801a85a0(&DAT_180364b58,"##cam_fov",uVar8,0x1e);
    local_b0 = 0xf4f1688ffe5269e4;
    local_b8 = 0x98851fb6087b0463;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1801fcfc0(*plVar6 + 0x28);
    FUN_1801a0b60("Override while zoomed",uVar8);
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00(
                   "Force the custom FOV even while a weapon scope/zoom is active.\nOff = scopes keep their normal zoom."
                   );
    }
    local_b0 = 0xf4f1688ffe5269e4;
    local_b8 = 0x3506af0b5263e534;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1801fcfc0(*plVar6 + 0x28);
    FUN_1801a0b60("Viewmodel FOV",uVar8);
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00(
                   "Hands/weapon are drawn in their own pass with a separate FOV.\nRaise it to pull the viewmodel away from the camera.\nThe gear also holds the hand position offset."
                   );
    }
    FUN_18027f5b0();
    cVar5 = FUN_18019dc00("##cam_vm_opts",4,0);
    if (cVar5 != '\0') {
      FUN_180280fd0("cam_vm_opts");
    }
    pfVar17 = (float *)&local_b8;
    local_e8[0] = 1.5;
    local_b8._0_4_ = 0.75;
    if (fVar21 <= DAT_1803da6a4) {
      pfVar17 = &DAT_1803da6a4;
    }
    pfVar11 = local_e8;
    if (DAT_1803da6a4 <= fVar3) {
      pfVar11 = pfVar17;
    }
    fVar22 = *pfVar11 * _DAT_1803811b8;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 2;
    *(float *)(lVar2 + 0x1f68) = fVar22;
    *(undefined4 *)(lVar2 + 0x1f6c) = 0;
    *(undefined4 *)(lVar2 + 0x1f50) = 1;
    cVar5 = FUN_18019a680("cam_vm_opts");
    if (cVar5 != '\0') {
      local_b0 = 0xf4f1688ffe5269e4;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      pfVar17 = (float *)&local_b8;
      local_e8[0] = 5.60519e-45;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      lVar2 = *plVar6;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar11 = local_e8;
      if ((int)DAT_1803fb24c < 5) {
        pfVar11 = pfVar17;
      }
      DAT_1803fb24c = *pfVar11;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"Hand position");
      local_b8 = 0xe268578e777a09e5;
      plVar6 = (longlong *)FUN_180241a30(lVar2 + 0x28,local_e0,&local_b8);
      pfVar17 = (float *)FUN_180202dc0(*plVar6 + 0x28);
      local_b8 = 0x2c59d7d0279662e0;
      plVar6 = (longlong *)FUN_180241a30(lVar2 + 0x28,local_e0,&local_b8);
      pfVar11 = (float *)FUN_180202dc0(*plVar6 + 0x28);
      fVar23 = DAT_1803813fc;
      fVar22 = DAT_180381024;
      local_f0 = "%.1f";
      local_f8 = (double)CONCAT44(local_f8._4_4_,DAT_180381024);
      FUN_1801a7a20("Right / left","##cam_vm_off_r",pfVar17,DAT_1803813fc);
      cVar5 = FUN_18026ee60(0);
      if (cVar5 != '\0') {
        FUN_180280d00("Positive moves the hands to the right, negative to the left.");
      }
      local_f0 = "%.1f";
      local_f8 = (double)CONCAT44(local_f8._4_4_,fVar22);
      FUN_1801a7a20("Up / down","##cam_vm_off_u",pfVar11,fVar23);
      cVar5 = FUN_18026ee60(0);
      if (cVar5 != '\0') {
        FUN_180280d00("Positive raises the hands, negative lowers them.");
      }
      local_b8 = CONCAT44(local_b8._4_4_,0xc1a00000);
      pfVar18 = (float *)&local_b8;
      if (fVar23 <= *pfVar17) {
        pfVar18 = pfVar17;
      }
      pfVar13 = local_e8;
      if (*pfVar17 <= fVar22) {
        pfVar13 = pfVar18;
      }
      *pfVar17 = *pfVar13;
      local_b8 = CONCAT44(local_b8._4_4_,0xc1a00000);
      local_e8[0] = 20.0;
      pfVar18 = (float *)&local_b8;
      if (fVar23 <= *pfVar11) {
        pfVar18 = pfVar11;
      }
      pfVar13 = local_e8;
      if (*pfVar11 <= fVar22) {
        pfVar13 = pfVar18;
      }
      *pfVar11 = *pfVar13;
      local_b8 = 0xbf800000;
      cVar5 = FUN_1802abf60("Reset##cam_vm_off",&local_b8,0);
      if (cVar5 != '\0') {
        *pfVar11 = 0.0;
        *pfVar17 = 0.0;
      }
      pfVar17 = (float *)&local_b8;
      local_e8[0] = 5.60519e-45;
      local_b8 = local_b8 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar11 = local_e8;
      if ((int)DAT_1803fb24c < 5) {
        pfVar11 = pfVar17;
      }
      DAT_1803fb24c = *pfVar11;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                    "Forward/back is the VM FOV slider.\nNeeds Viewmodel FOV on; hidden from captures."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_b0 = 0xf4f1688ffe5269e4;
    local_b8 = 0x14198b18bdb8cdca;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1802029c0(*plVar6 + 0x28);
    local_f0 = "%d";
    local_f8 = (double)CONCAT44(local_f8._4_4_,0x82);
    FUN_1801a85a0("VM FOV","##cam_vm_fov",uVar8,0x1e);
    local_b0 = 0xf4f1688ffe5269e4;
    local_b8 = 0x6b51d6e205141ff1;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    uVar8 = FUN_1801fcfc0(*plVar6 + 0x28);
    FUN_1801a0b60("Custom aspect ratio",uVar8);
    cVar5 = FUN_18026ee60(0);
    if (cVar5 != '\0') {
      FUN_180280d00(
                   "Render the view at an explicit width:height instead of the screen\'s own.\nNarrower than the screen = stretched (models look wider), wider = squished.\nHidden from streamproof captures."
                   );
    }
    FUN_18027f5b0();
    cVar5 = FUN_18019dc00("##cam_aspect_opts",4,0);
    if (cVar5 != '\0') {
      FUN_180280fd0("cam_aspect_opts");
    }
    cVar5 = FUN_18019a680("cam_aspect_opts");
    if (cVar5 != '\0') {
      local_b0 = 0xf4f1688ffe5269e4;
      local_b8 = 0x630699bb15a84dfa;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      uVar8 = FUN_1801fcfc0(*plVar6 + 0x28);
      FUN_1801a0b60("Two-axis stretch",uVar8);
      pfVar17 = (float *)&local_b8;
      local_e8[0] = 5.60519e-45;
      local_b8 = local_b8 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar11 = local_e8;
      if ((int)DAT_1803fb24c < 5) {
        pfVar11 = pfVar17;
      }
      DAT_1803fb24c = *pfVar11;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                    "Two real, independent axes. A width:height pair\ncannot do that -- the ratio is a single number,\nso 16:9 and 32:18 render identically and both\nfields move the same thing."
                   );
      pfVar17 = (float *)&local_b8;
      local_e8[0] = 1.5;
      local_b8 = CONCAT44(local_b8._4_4_,0x3f400000);
      local_b0 = local_b0 & 0xffffffff00000000;
      if (fVar21 <= DAT_1803da6a4) {
        pfVar17 = &DAT_1803da6a4;
      }
      pfVar11 = local_e8;
      if (DAT_1803da6a4 <= fVar3) {
        pfVar11 = pfVar17;
      }
      local_b0 = (ulonglong)(uint)(*pfVar11 * DAT_180380e9c) << 0x20;
      FUN_1802af260(&local_b0);
      local_b0 = 0xf4f1688ffe5269e4;
      local_b8 = 0x1f3365743787d63f;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      uVar8 = FUN_1801fcfc0(*plVar6 + 0x28);
      FUN_1801a0b60("Legacy multiplier",uVar8);
      pfVar17 = (float *)&local_b8;
      local_e8[0] = 5.60519e-45;
      local_b8 = local_b8 & 0xffffffff00000000;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar17 = &DAT_1803fb24c;
      }
      pfVar11 = local_e8;
      if ((int)DAT_1803fb24c < 5) {
        pfVar11 = pfVar17;
      }
      DAT_1803fb24c = *pfVar11;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                    "The old control: one number scaling the ratio\nthe screen already has (>1 wider, <1 squished).\nOff = explicit width:height, which comes out the\nsame on any monitor."
                   );
      if (DAT_1803facfd == '\0') {
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
    local_b0 = 0xf4f1688ffe5269e4;
    local_b8 = 0x630699bb15a84dfa;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
    local_b0 = 0xf4f1688ffe5269e4;
    if (*pcVar12 == '\0') {
      local_b8 = 0x1f3365743787d63f;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      pcVar12 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      local_b0 = 0xf4f1688ffe5269e4;
      if (*pcVar12 == '\0') {
        local_b8 = 0xaf72b5e3ad14de05;
        plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
        plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
        piVar14 = (int *)FUN_1802029c0(*plVar6 + 0x28);
        local_b0 = 0xf4f1688ffe5269e4;
        local_b8 = 0xaf72c6e3ad14fae8;
        plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
        plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
        piVar15 = (int *)FUN_1802029c0(*plVar6 + 0x28);
        local_f0 = "%d";
        local_f8._0_4_ = 0x20;
        FUN_1801a85a0("Aspect width","##cam_aspect_w",piVar14,1);
        local_f0 = "%d";
        local_f8 = (double)CONCAT44(local_f8._4_4_,0x20);
        FUN_1801a85a0("Aspect height","##cam_aspect_h",piVar15,1);
        local_b8 = CONCAT44(local_b8._4_4_,1);
        piVar7 = (int *)&local_b8;
        if (0 < *piVar14) {
          piVar7 = piVar14;
        }
        if (0x20 < *piVar14) {
          piVar7 = &DAT_18033bf30;
        }
        *piVar14 = *piVar7;
        local_b8._0_4_ = 1.4013e-45;
        piVar7 = (int *)&local_b8;
        if (0 < *piVar15) {
          piVar7 = piVar15;
        }
        if (0x20 < *piVar15) {
          piVar7 = &DAT_18033bf30;
        }
        *piVar15 = *piVar7;
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar20 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x34);
        if ((0.0 < fVar20) &&
           (fVar20 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x30) / fVar20, 0.0 < fVar20)) {
          pfVar17 = (float *)&local_b8;
          local_f0 = (char *)(double)fVar20;
          if (-1 < (int)DAT_1803fb24c) {
            pfVar17 = &DAT_1803fb24c;
          }
          local_e8[0] = 5.60519e-45;
          local_b8._0_4_ = 0.0;
          pfVar11 = local_e8;
          if ((int)DAT_1803fb24c < 5) {
            pfVar11 = pfVar17;
          }
          DAT_1803fb24c = *pfVar11;
          local_f8 = (double)((float)*piVar14 / (float)*piVar15);
          FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                        "%d:%d = %.2f    screen %.2f");
        }
      }
      else {
        local_b8._0_4_ = -21.116667;
        local_b8._4_4_ = 0xd242d32a;
        plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
        plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
        uVar8 = FUN_180202dc0(*plVar6 + 0x28);
        local_f0 = "%.2fx";
        local_f8 = (double)CONCAT44(local_f8._4_4_,DAT_180380d30);
        FUN_1801a7a20("Aspect","##cam_aspect",uVar8,fVar20);
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(
                       "Multiplier of the native aspect ratio.\n>1 = stretched (wider), <1 = squished."
                       );
        }
      }
    }
    else {
      local_b8 = 0xa317ec6c0b19990a;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      pfVar17 = (float *)FUN_180202dc0(*plVar6 + 0x28);
      local_b0 = 0xf4f1688ffe5269e4;
      local_b8 = 0xa317ed6c0b199abd;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d0,&local_b0);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_e0,&local_b8);
      pfVar11 = (float *)FUN_180202dc0(*plVar6 + 0x28);
      fVar21 = DAT_180380d30;
      local_f0 = "%.2fx";
      local_f8 = (double)CONCAT44(local_f8._4_4_,DAT_180380d30);
      FUN_1801a7a20("Horizontal","##cam_stretch_x",pfVar17,fVar20);
      cVar5 = FUN_18026ee60(0);
      if (cVar5 != '\0') {
        FUN_180280d00(
                     "Sideways only (rides the FOV).\n>1 = models wider, less visible to the sides. <1 = squished, more visible."
                     );
      }
      local_f0 = "%.2fx";
      local_f8 = (double)CONCAT44(local_f8._4_4_,fVar21);
      FUN_1801a7a20("Vertical","##cam_stretch_y",pfVar11,fVar20);
      cVar5 = FUN_18026ee60(0);
      if (cVar5 != '\0') {
        FUN_180280d00(
                     "Up/down only (rides the ratio).\n>1 = models taller, less visible above/below. <1 = squished, more visible."
                     );
      }
      local_b8 = CONCAT44(local_b8._4_4_,0x3f000000);
      local_bc = 2.0;
      local_c0 = 0.5;
      pfVar18 = (float *)&local_b8;
      if (fVar20 <= *pfVar17) {
        pfVar18 = pfVar17;
      }
      pfVar13 = local_e8;
      if (*pfVar17 <= fVar21) {
        pfVar13 = pfVar18;
      }
      *pfVar17 = *pfVar13;
      fVar3 = DAT_180380980;
      pfVar18 = &local_c0;
      if (fVar20 <= *pfVar11) {
        pfVar18 = pfVar11;
      }
      pfVar13 = &local_bc;
      if (*pfVar11 <= fVar21) {
        pfVar13 = pfVar18;
      }
      fVar20 = *pfVar13;
      *pfVar11 = fVar20;
      fVar21 = *pfVar17;
      if (fVar3 <= (float)((uint)(fVar21 - fVar20) & _DAT_1803817c0)) {
        puVar19 = &DAT_1803787f4;
        if (fVar20 < fVar21) {
          puVar19 = &DAT_1803787ec;
          fVar21 = fVar21 / fVar20;
        }
        else {
          fVar21 = fVar20 / fVar21;
        }
        pfVar17 = (float *)&local_b8;
        local_e8[0] = 5.60519e-45;
        if (-1 < (int)DAT_1803fb24c) {
          pfVar17 = &DAT_1803fb24c;
        }
        local_b8._0_4_ = 0.0;
        pfVar11 = local_e8;
        if ((int)DAT_1803fb24c < 5) {
          pfVar11 = pfVar17;
        }
        DAT_1803fb24c = *pfVar11;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,"%.2fx %s",(double)fVar21,
                      puVar19);
      }
      else {
        pfVar17 = (float *)&local_b8;
        local_e8[0] = 5.60519e-45;
        local_b8._0_4_ = 0.0;
        if (-1 < (int)DAT_1803fb24c) {
          pfVar17 = &DAT_1803fb24c;
        }
        pfVar11 = local_e8;
        if ((int)DAT_1803fb24c < 5) {
          pfVar11 = pfVar17;
        }
        DAT_1803fb24c = *pfVar11;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)(int)DAT_1803fb24c * 200,
                      "Both axes equal = plain zoom, no stretch");
      }
    }
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_180273410();
  return;
}


