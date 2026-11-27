// 0x180113770  Features_FreeCam_FreeCamFeature_vfunc07
// size=2172 thunk=false
// signature: undefined Features_FreeCam_FreeCamFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_FreeCam_FreeCamFeature_vfunc07(longlong param_1,undefined8 param_2,void *param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  ulonglong *puVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  float local_e4;
  float local_e0 [2];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float local_b0;
  ulonglong local_a8;
  float local_a0 [4];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  BVar4 = IsBadReadPtr(param_3,200);
  if (BVar4 != 0) {
    return;
  }
  BVar4 = IsBadWritePtr(param_3,200);
  if (BVar4 != 0) {
    return;
  }
  if (DAT_1803f9280 == (longlong *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*DAT_1803f9280 + 0xd8);
  iVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
  iVar6 = (*pcVar1)(DAT_1803f9280);
  if (iVar6 != iVar5) {
    return;
  }
  local_a0[0] = -5.7999425e+28;
  local_a0[1] = 1.36507276e-17;
  local_a8 = 0x402819404e703058;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,local_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_c8,&local_a8);
  pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
  if (DAT_180423610 == '\0') {
    local_a0[0] = -5.7999425e+28;
    local_a0[1] = 1.36507276e-17;
    local_a8 = 0x549a0576bfe235e1;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_a0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_d8,&local_a8);
    puVar9 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    FUN_180024720(&local_e8,*puVar9);
    if (((char)local_e8 == '\0') && (local_e8._1_1_ != '\0')) {
      *pcVar8 = *pcVar8 == '\0';
    }
  }
  if (DAT_180423610 != '\0') {
    return;
  }
  if (*pcVar8 == '\0') {
    local_a8 = 0x402819404e703058;
    local_a0[0] = -1.01137916e+11;
    local_a0[1] = 2.4408512e+14;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_a0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_d8,&local_a8);
    pcVar10 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    if (*pcVar10 == '\0') {
      uVar16 = 0;
      goto LAB_180113943;
    }
  }
  uVar16 = 1;
LAB_180113943:
  FUN_1801136b0(uVar16);
  if (*pcVar8 == '\0') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((longlong)param_3 + 0x40);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0x44);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_3 + 0x48);
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    DAT_1803db458 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)((longlong)param_3 + 0x40);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0x44);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_3 + 0x48);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_3 + 0x4c);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x50);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    if ((((DAT_1803db62c != '\0') &&
         (DAT_1803db62c = '\0', (DAT_1803db630 & 0x7f800000) != 0x7f800000)) &&
        ((DAT_1803db634 & 0x7f800000) != 0x7f800000)) &&
       ((DAT_1803db638 & 0x7f800000) != 0x7f800000)) {
      *(uint *)(param_1 + 8) = DAT_1803db630;
      *(uint *)(param_1 + 0xc) = DAT_1803db634;
      *(uint *)(param_1 + 0x10) = DAT_1803db638;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    fVar21 = 0.0;
    if (DAT_1803fa668 != (longlong *)0x0) {
      local_a0[0] = 0.0;
      local_a0[1] = 0.0;
      local_a0[2] = 0.0;
      (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,local_a0);
      FUN_180113550(param_1,local_a0);
    }
    if (((DAT_1803db63c != '\0') &&
        (DAT_1803db63c = '\0', ((uint)DAT_1803db640 & 0x7f800000) != 0x7f800000)) &&
       (((DAT_1803db644 & 0x7f800000) != 0x7f800000 && ((DAT_1803db648 & 0x7f800000) != 0x7f800000))
       )) {
      puVar17 = (ulonglong *)&local_e8;
      local_a8 = CONCAT44(local_a8._4_4_,0x42b20000);
      local_e8 = -89.0;
      if (DAT_180381410 <= DAT_1803db640) {
        puVar17 = (ulonglong *)&DAT_1803db640;
      }
      puVar11 = &local_a8;
      if (DAT_1803db640 <= DAT_180381108) {
        puVar11 = puVar17;
      }
      *(int *)(param_1 + 0x20) = (int)*puVar11;
      uVar18 = FUN_1802d3e00(DAT_1803db644);
      *(undefined4 *)(param_1 + 0x24) = uVar18;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    *(undefined4 *)((longlong)param_3 + 0x4c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)param_3 + 0x50) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x28);
    DAT_1803db44c = *(undefined4 *)(param_1 + 0x2c);
    DAT_1803db450 = *(undefined4 *)(param_1 + 0x30);
    DAT_1803db454 = *(undefined4 *)(param_1 + 0x34);
    if (DAT_1803db458 == '\0') {
      DAT_1803db458 = '\x01';
    }
    local_a0[0] = -5.7999425e+28;
    local_a0[1] = 1.36507276e-17;
    local_a8 = 0x6ac2a43546cc4271;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_a0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_d8,&local_a8);
    pfVar12 = (float *)FUN_180202dc0(*plVar7 + 0x28);
    local_a0[0] = -5.7999425e+28;
    local_a0[1] = 1.36507276e-17;
    local_a8 = 0xc645d24a36bb943e;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_a0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_d8,&local_a8);
    piVar13 = (int *)FUN_1802029c0(*plVar7 + 0x28);
    fVar20 = (float)(*piVar13 << 4);
    FUN_1802d3e70((longlong)param_3 + 0x4c,&local_90,&local_80,local_70);
    cVar3 = FUN_180024540();
    if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) && (cVar3 = FUN_1800245f0(0x11), cVar3 != '\0')
       ) {
      fVar20 = fVar20 * DAT_180380ac0;
    }
    cVar3 = FUN_180024540();
    if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) && (cVar3 = FUN_1800245f0(0x10), cVar3 != '\0')
       ) {
      fVar20 = fVar20 + fVar20;
    }
    local_b8 = 0.0;
    fStack_b4 = 0.0;
    local_b0 = 0.0;
    cVar3 = FUN_180024540();
    if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) && (cVar3 = FUN_1800245f0(0x57), cVar3 != '\0')
       ) {
      local_b8 = local_b8 + local_90;
      fStack_b4 = fStack_b4 + local_8c;
      local_b0 = local_b0 + local_88;
    }
    cVar3 = FUN_180024540();
    if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) && (cVar3 = FUN_1800245f0(0x53), cVar3 != '\0')
       ) {
      local_b8 = local_b8 - local_90;
      fStack_b4 = fStack_b4 - local_8c;
      local_b0 = local_b0 - local_88;
    }
    cVar3 = FUN_180024540();
    if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) && (cVar3 = FUN_1800245f0(0x41), cVar3 != '\0')
       ) {
      local_b8 = local_b8 - local_80;
      fStack_b4 = fStack_b4 - local_7c;
      local_b0 = local_b0 - local_78;
    }
    cVar3 = FUN_180024540();
    if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) && (cVar3 = FUN_1800245f0(0x44), cVar3 != '\0')
       ) {
      local_b8 = local_b8 + local_80;
      fStack_b4 = fStack_b4 + local_7c;
      local_b0 = local_b0 + local_78;
    }
    (*(code *)PTR_FUN_1803da000)(&local_b8);
    lVar2 = DAT_1803fa608;
    _local_b8 = CONCAT44(fStack_b4 * fVar20,local_b8 * fVar20);
    local_b0 = local_b0 * fVar20;
    if (DAT_1803fa608 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(DAT_1803fa608 + 4);
    }
    if (iVar5 != *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = iVar5;
      if (lVar2 == 0) {
        fVar22 = 0.0;
      }
      else {
        local_e0[0] = 0.1;
        local_e4 = 0.0;
        pfVar15 = &local_e4;
        if (0.0 <= *(float *)(lVar2 + 8)) {
          pfVar15 = (float *)(lVar2 + 8);
        }
        pfVar14 = local_e0;
        if (*(float *)(lVar2 + 8) <= DAT_1803809ec) {
          pfVar14 = pfVar15;
        }
        fVar22 = *pfVar14;
      }
      cVar3 = FUN_180024540();
      if (((cVar3 != '\0') && (DAT_1803fa545 == '\0')) &&
         (cVar3 = FUN_1800245f0(0x20), cVar3 != '\0')) {
        *(float *)(param_1 + 0x10) = fVar22 * fVar20 + *(float *)(param_1 + 0x10);
      }
      fVar20 = DAT_180380bb0;
      local_e8 = *pfVar12 / DAT_180380f00;
      local_a0[0] = 0.999;
      local_a8 = local_a8 & 0xffffffff00000000;
      pfVar12 = (float *)&local_a8;
      if (0.0 <= local_e8) {
        pfVar12 = (float *)&local_e8;
      }
      if (0.0 < fVar22) {
        pfVar15 = local_a0;
        if (local_e8 <= DAT_180380ba0) {
          pfVar15 = pfVar12;
        }
        fVar21 = powf(DAT_180380bb0 - *pfVar15,fVar22 * DAT_1803810c8);
        fVar21 = fVar20 - fVar21;
      }
      fVar20 = (local_b0 - *(float *)(param_1 + 0x1c)) * fVar21 + *(float *)(param_1 + 0x1c);
      fVar19 = (local_b8 - *(float *)(param_1 + 0x14)) * fVar21 + *(float *)(param_1 + 0x14);
      fVar21 = (fStack_b4 - *(float *)(param_1 + 0x18)) * fVar21 + *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x1c) = fVar20;
      *(float *)(param_1 + 0x14) = fVar19;
      *(float *)(param_1 + 0x18) = fVar21;
      *(float *)(param_1 + 0x10) = fVar22 * fVar20 + *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 8) = fVar22 * fVar19 + *(float *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = fVar22 * fVar21 + *(float *)(param_1 + 0xc);
    }
    *(undefined4 *)((longlong)param_3 + 0x40) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)param_3 + 0x44) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((longlong)param_3 + 0x48) = *(undefined4 *)(param_1 + 0x10);
    DAT_1803db614 = *(undefined4 *)(param_1 + 8);
    DAT_1803db618 = *(undefined4 *)(param_1 + 0xc);
    DAT_1803db61c = *(undefined4 *)(param_1 + 0x10);
    DAT_1803db620 = *(undefined4 *)(param_1 + 0x20);
    DAT_1803db624 = *(undefined4 *)(param_1 + 0x24);
    DAT_1803db628 = *(undefined4 *)(param_1 + 0x28);
    DAT_1803db610 = 1;
  }
  return;
}


