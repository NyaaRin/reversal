// 0x180096280  FUN_180096280
// size=6063 thunk=false
// signature: undefined FUN_180096280()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180096280(longlong *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                       float param_5,char param_6)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
  byte bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auStack_1d28 [32];
  float *local_1d08;
  undefined1 local_1cf8;
  char local_1cf7 [7];
  float local_1cf0;
  float local_1cec;
  float local_1ce8;
  float local_1ce0;
  float local_1cdc;
  float local_1cd8;
  float local_1cd4;
  float local_1cd0;
  float local_1ccc;
  float local_1cc8;
  float local_1cc4;
  float local_1cc0;
  float local_1cb8;
  float local_1cb4;
  float local_1cb0;
  undefined8 local_1ca8;
  float local_1ca0;
  float local_1c98;
  float local_1c94;
  float local_1c90;
  float local_1c88;
  float local_1c84;
  float local_1c80;
  undefined8 local_1c78;
  undefined8 uStack_1c70;
  undefined8 local_1c68;
  undefined8 uStack_1c60;
  undefined1 local_1c58;
  undefined1 local_1c57;
  undefined1 local_1c56;
  undefined1 local_1c55 [5];
  undefined4 local_1c50;
  undefined4 local_1c4c;
  undefined4 local_1c48;
  float local_1c44;
  float local_1c40;
  float local_1c3c;
  int local_1c38;
  int local_1c34;
  undefined4 local_1c30;
  undefined4 local_1c2c;
  undefined4 local_1c28;
  undefined4 local_1c24;
  undefined4 local_1c20;
  undefined4 local_1c1c;
  undefined4 local_1c18;
  int local_1c14;
  float local_1c10;
  int local_1c0c;
  undefined4 local_1c08;
  undefined4 local_1c04;
  undefined4 local_1c00;
  undefined4 local_1bfc;
  float local_1bf8 [2];
  float local_1bf0;
  float local_1bec;
  float local_1be8;
  undefined8 local_1be0;
  undefined8 local_1bd8;
  float local_1bd0;
  uint local_1bc8;
  uint local_1bc0;
  longlong local_1bb8;
  undefined1 *local_1bb0;
  longlong *local_1ba8;
  uint local_1ba0;
  uint local_1b98;
  float local_1b90;
  float local_1b88;
  float local_1b80;
  float local_1b78;
  float local_1b70;
  float local_1b68;
  float local_1b60;
  float local_1b5c;
  float local_1b58;
  float local_1b54;
  float local_1b50;
  float local_1b4c;
  float local_1b48;
  float local_1b44;
  float local_1b40;
  float local_1b3c;
  float local_1b38;
  float local_1b34;
  float local_1b30;
  float local_1b2c;
  float local_1b28;
  float local_1b24;
  uint local_1b20;
  float local_1b1c;
  float local_1b18;
  float local_1b14;
  float local_1b10;
  float local_1b0c;
  float local_1b08;
  float local_1b04;
  float local_1b00;
  float local_1afc;
  float local_1af8;
  uint local_1af0;
  float local_1ae8;
  float fStack_1ae4;
  float local_1ae0;
  undefined8 local_1ad8;
  uint local_1ad0;
  float local_1ac8;
  float local_1ac4;
  float local_1ac0;
  undefined8 local_1ab8;
  float fStack_1ab0;
  float fStack_1aac;
  undefined8 local_1aa8;
  undefined8 uStack_1aa0;
  undefined8 local_1a98;
  undefined8 uStack_1a90;
  undefined8 local_1a88;
  undefined8 uStack_1a80;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  float local_1a38;
  float local_1a34;
  float local_1a30;
  undefined8 local_1a28;
  float local_1a20;
  undefined1 local_1a18 [16];
  undefined1 local_1a08 [288];
  float local_18e8 [4];
  undefined1 local_18d8 [12];
  float afStack_18cc [4];
  float afStack_18bc [4];
  float afStack_18ac [1525];
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_1d28;
  DAT_18040a208 = 0;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_1be0 = param_3;
  local_1ba8 = param_1;
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar10 = (longlong *)(*pcVar1)(DAT_1803fa360,uVar4);
  if (((((param_1 == (longlong *)0x0) || (param_1[1] == 0)) || (plVar10 == (longlong *)0x0)) ||
      ((DAT_1803fa608 == (float *)0x0 || (DAT_1803faee8 == 0)))) || (DAT_1803faef0 == 0)) {
    return (ulonglong)plVar10 & 0xffffffffffffff00;
  }
  iVar5 = (**(code **)*param_1)(param_1);
  local_1c14 = iVar5;
  lVar11 = FUN_18001dbf0(plVar10);
  if ((lVar11 != DAT_180409ff8) || (param_1[1] != DAT_18040a210)) {
    FUN_180095d10();
    DAT_18040a210 = param_1[1];
    DAT_180409ff8 = lVar11;
  }
  local_1ab8 = 0;
  fStack_1ab0 = 0.0;
  fStack_1aac = 0.0;
  local_1aa8 = 0;
  uStack_1aa0 = 0;
  local_1a98 = 0;
  uStack_1a90 = 0;
  local_1a88 = 0;
  uStack_1a80 = 0;
  local_1a78 = 0;
  uStack_1a70 = 0;
  local_1a68 = 0;
  uStack_1a60 = 0;
  local_1a58 = 0;
  uStack_1a50 = 0;
  local_1a48 = _DAT_180381730;
  uStack_1a40 = _UNK_180381738;
  local_1a38 = 0.0;
  local_1a34 = 0.0;
  local_1a30 = 0.0;
  local_1ae0 = 0.0;
  fStack_1ae4 = 0.0;
  local_1ae8 = 0.0;
  local_1ce8 = 0.0;
  local_1cec = 0.0;
  local_1cf0 = 0.0;
  local_1ad0 = 0;
  local_1ad8 = 0;
  cVar3 = FUN_180095a10(param_1,param_2,"WorldPos",&uStack_1a70);
  if (((((cVar3 == '\0') ||
        (cVar3 = FUN_180095b20(param_1,param_2,"WorldAng",&local_1a58), cVar3 == '\0')) ||
       (cVar3 = FUN_180095a10(param_1,param_2,"LocalMuzzlePos",(longlong)&local_1a68 + 4),
       cVar3 == '\0')) ||
      (((cVar3 = FUN_180095b20(param_1,param_2,"LocalMuzzleAng",(longlong)&uStack_1a50 + 4),
        cVar3 == '\0' ||
        (cVar3 = FUN_180095a10(param_1,param_2,"RHPos",&uStack_1aa0), cVar3 == '\0')) ||
       ((cVar3 = FUN_180095a10(param_1,param_2,"AdditionalPos",&local_1cb8), cVar3 == '\0' ||
        ((cVar3 = FUN_180095b20(param_1,param_2,"AdditionalAng",&local_1ae8), cVar3 == '\0' ||
         (cVar3 = FUN_180095a10(param_1,param_2,"AdditionalPos2",&local_1ca8), cVar3 == '\0'))))))))
     || (cVar3 = FUN_180095b20(param_1,param_2,"AdditionalAng2",&local_1cf0), cVar3 == '\0')) {
    local_1c18 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c18,(ThrowInfo *)&DAT_1803d59f0);
  }
  local_1cf7[0] = '\0';
  cVar3 = FUN_180095fe0(param_1,param_2,"IsResting",local_1cf7);
  if ((cVar3 == '\0') || (local_1cf7[0] != '\0')) {
    local_1c1c = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c1c,(ThrowInfo *)&DAT_1803d59f0);
  }
  cVar3 = FUN_18001e2b0(plVar10,param_1);
  if (cVar3 == '\0') {
    local_1c50 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c50,(ThrowInfo *)&DAT_1803d59f0);
  }
  uVar4 = (**(code **)*param_1)(param_1);
  FUN_180095590(local_1a08,param_1,uVar4);
  FUN_180095710(local_1a08,"cachedhulltrace",0);
  cVar3 = FUN_180095f10(param_1,uVar4,"suiciding");
  if (cVar3 != '\0') {
    local_1c4c = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c4c,(ThrowInfo *)&DAT_1803d59f0);
  }
  FUN_18002d9c0(param_1[1],uVar4,"EyeAngles");
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar3 == '\0') {
    local_1c48 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c48,(ThrowInfo *)&DAT_1803d59f0);
  }
  (**(code **)(*param_1 + 8))(param_1,uVar4);
  iVar6 = FUN_180023180(param_1[1],1,1);
  if ((iVar6 != 0) ||
     (cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb), cVar3 == '\0')) {
    local_1c20 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c20,(ThrowInfo *)&DAT_1803d59f0);
  }
  puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
  local_1ad8 = *puVar12;
  local_1ad0 = *(uint *)(puVar12 + 1);
  (**(code **)(*param_1 + 0x10))(param_1,1);
  FUN_18001c430(plVar10,&local_1bf0);
  local_1bc0 = (uint)local_1ad8;
  if (((uint)local_1ad8 & 0x7f800000) == 0x7f800000) {
LAB_1800979c9:
    local_1c24 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c24,(ThrowInfo *)&DAT_1803d59f0);
  }
  local_1ba0 = local_1ad8._4_4_;
  if (((((local_1ad8._4_4_ & 0x7f800000) == 0x7f800000) ||
       (local_1b98 = local_1ad0, (local_1ad0 & 0x7f800000) == 0x7f800000)) ||
      (local_1b90 = local_1bf0, ((uint)local_1bf0 & 0x7f800000) == 0x7f800000)) ||
     ((local_1b88 = local_1bec, ((uint)local_1bec & 0x7f800000) == 0x7f800000 ||
      (local_1b80 = local_1be8, ((uint)local_1be8 & 0x7f800000) == 0x7f800000))))
  goto LAB_1800979c9;
  dVar16 = (double)FUN_180095e30(param_1,uVar4,"posture",0);
  local_1cdc = 0.9;
  local_1ce0 = 0.0;
  dVar17 = (double)FUN_180095e30(param_1,param_2,"pitch",0);
  local_1c44 = (float)dVar17;
  pfVar13 = &local_1ce0;
  if (local_1ce0 <= local_1c44) {
    pfVar13 = &local_1c44;
  }
  pfVar14 = &local_1cdc;
  if (local_1c44 <= local_1cdc) {
    pfVar14 = pfVar13;
  }
  local_1a38 = *pfVar14;
  local_1cd4 = 1.0;
  local_1cd8 = 0.0;
  dVar17 = (double)FUN_180095e30(param_1,param_2,"lerped_positioning",0);
  local_1c40 = (float)dVar17;
  pfVar13 = &local_1cd8;
  if (local_1cd8 <= local_1c40) {
    pfVar13 = &local_1c40;
  }
  pfVar14 = &local_1cd4;
  if (local_1c40 <= local_1cd4) {
    pfVar14 = pfVar13;
  }
  uStack_1a40 = CONCAT44(uStack_1a40._4_4_,*pfVar14);
  local_1ccc = 1.0;
  local_1cd0 = 0.0;
  dVar17 = (double)FUN_180095e30(param_1,param_2,"lerped_angle",0);
  local_1c3c = (float)dVar17;
  pfVar13 = &local_1cd0;
  if (local_1cd0 <= local_1c3c) {
    pfVar13 = &local_1c3c;
  }
  pfVar14 = &local_1ccc;
  if (local_1c3c <= local_1ccc) {
    pfVar14 = pfVar13;
  }
  uStack_1a40 = CONCAT44(*pfVar14,(float)uStack_1a40);
  if (DAT_180380ba4 <= (float)uStack_1a40) {
    uStack_1a40 = CONCAT44(*pfVar14,0x3f800000);
  }
  else {
    local_1bb0 = local_18d8;
    lVar11 = 0x80;
    while (local_1bb8 = lVar11 + -1, lVar11 != 0) {
      local_1bb0 = local_1bb0 + 0x30;
      lVar11 = local_1bb8;
    }
    uVar7 = FUN_18001bdf0(plVar10,"ValveBiped.Bip01_R_Hand");
    lVar11 = (longlong)(int)uVar7;
    if (0x7f < uVar7) {
LAB_18009790f:
      local_1c00 = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_1c00,(ThrowInfo *)&DAT_1803d59f0);
    }
    uVar20 = *(undefined8 *)(DAT_1803fa608 + 4);
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x28))(plVar10);
    local_1d08 = (float *)uVar20;
    cVar3 = (**(code **)(*plVar10 + 0x80))(plVar10,local_18d8,0x80,0x7ff00);
    if (cVar3 == '\0') goto LAB_18009790f;
    local_1b58 = afStack_18ac[lVar11 * 0xc];
    local_1b5c = afStack_18bc[lVar11 * 0xc];
    local_1b60 = afStack_18cc[lVar11 * 0xc];
    local_1b78 = local_1b60 - local_1bf0;
    local_1b50 = local_1b5c - local_1bec;
    local_1b4c = local_1b58 - local_1be8;
    local_1aa8 = CONCAT44(local_1b4c,local_1b50);
    local_1b54 = local_1b78;
    fStack_1aac = local_1b78;
    if (((((uint)local_1b78 & 0x7f800000) == 0x7f800000) ||
        (local_1b70 = local_1b50, ((uint)local_1b50 & 0x7f800000) == 0x7f800000)) ||
       ((local_1b68 = local_1b4c, ((uint)local_1b4c & 0x7f800000) == 0x7f800000 ||
        (DAT_1803812c4 < local_1b50 * local_1b50 + local_1b78 * local_1b78 + local_1b4c * local_1b4c
        )))) {
      local_1bfc = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_1bfc,(ThrowInfo *)&DAT_1803d59f0);
    }
  }
  FUN_180023e60(param_1,0);
  uVar8 = (**(code **)*param_1)(param_1);
  FUN_18002db10(param_1[1],uVar8,&DAT_180349348);
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar3 == '\0') {
    local_1c04 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c04,(ThrowInfo *)&DAT_1803d59f0);
  }
  uVar9 = (**(code **)*param_1)(param_1);
  FUN_18002db10(param_1[1],uVar9,&DAT_18034934c);
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar3 == '\0') {
    local_1c08 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c08,(ThrowInfo *)&DAT_1803d59f0);
  }
  (**(code **)(*param_1 + 8))(param_1,uVar4);
  (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380e50);
  iVar6 = FUN_180023180(param_1[1],2,1);
  if ((iVar6 != 0) ||
     (cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10), cVar3 == '\0')) {
    local_1c28 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c28,(ThrowInfo *)&DAT_1803d59f0);
  }
  FUN_1802d3e70(&local_1ad8,0,0,&local_1ac8);
  pfVar13 = (float *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
  fVar21 = DAT_180380d30;
  local_1b48 = *pfVar13 - local_1bf0;
  local_1b44 = pfVar13[1] - local_1bec;
  local_1b40 = pfVar13[2] - local_1be8;
  local_1b3c = local_1ac8 * DAT_180380d30;
  local_1b38 = local_1ac4 * DAT_180380d30;
  local_1b34 = local_1ac0 * DAT_180380d30;
  local_1b30 = local_1b48 - local_1b3c;
  local_1b2c = local_1b44 - local_1b38;
  local_1b28 = local_1b40 - local_1b34;
  local_1ab8 = CONCAT44(local_1b2c,local_1b30);
  _fStack_1ab0 = CONCAT44(fStack_1aac,local_1b28);
  (**(code **)(*param_1 + 0x10))(param_1,1);
  FUN_18002db10(param_1[1],uVar9,"GunPositions");
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 8))(param_1,uVar4);
    (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
    cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar3 != '\0') {
      local_18e8[0] = 0.0;
      local_18e8[1] = 0.0;
      local_18e8[2] = 0.0;
      iVar6 = 0;
      while (local_1c0c = iVar6, iVar6 < 3) {
        (**(code **)(*param_1 + 0xf0))(param_1,(double)(iVar6 + 1));
        (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
        cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
        if (cVar3 != '\0') {
          dVar17 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
          local_18e8[iVar6] = (float)dVar17;
        }
        (**(code **)(*param_1 + 0x10))(param_1,1);
        iVar6 = iVar6 + 1;
      }
      local_1b20 = (uint)local_18e8[1] ^ DAT_1803817f0;
      local_1b24 = local_18e8[0];
      local_1b1c = local_18e8[2];
      local_1a88 = CONCAT44(local_1b20,local_18e8[0]);
      uStack_1a80 = CONCAT44(uStack_1a80._4_4_,local_18e8[2]);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  fVar24 = (float)dVar16;
  (**(code **)(*param_1 + 0x10))(param_1,1);
  fVar2 = DAT_180380fa8;
  fVar26 = DAT_180380f90;
  if (((fVar24 == DAT_180380f90) || (fVar24 == DAT_180380fa8)) &&
     (cVar3 = FUN_180095f10(param_1,param_2,"reload"), cVar3 == '\0')) {
    local_1a88 = CONCAT44(local_1a88._4_4_,0x3f800000);
  }
  dVar16 = *(double *)(DAT_1803fa608 + 4) / _DAT_180380e00;
  if ((fVar24 != fVar26) && (fVar24 != fVar2)) {
    fVar21 = DAT_180380bb0;
  }
  dVar17 = sin(dVar16);
  dVar18 = sin(dVar16 - DAT_180380d80);
  dVar19 = cos(dVar16 + _DAT_180380df0);
  local_1a34 = (float)(dVar18 * (dVar17 + dVar17) * dVar19) * fVar21;
  dVar17 = sin(dVar16 - DAT_180380d38);
  dVar19 = cos(dVar16);
  dVar18 = DAT_180380d08;
  dVar19 = dVar19 * DAT_180380d68;
  dVar16 = cos(dVar16 + DAT_180380d08);
  local_1a30 = (float)(dVar17 * dVar19 * dVar16) * fVar21;
  dVar17 = (double)FUN_1800960f0(param_1,uVar8,"SysTime");
  dVar16 = (double)FUN_1800960f0(param_1,uVar8,"RealTime");
  uVar4 = (undefined4)DAT_1803813b0;
  uVar9 = (undefined4)((ulonglong)DAT_1803813b0 >> 0x20);
  dVar19 = (double)FUN_180095e30(param_1,param_2,"timetick2",DAT_1803813b0);
  if (((dVar17 < 0.0) || (dVar16 < 0.0)) ||
     ((dVar19 < 0.0 || ((dVar17 = dVar17 - dVar19, dVar17 < 0.0 || (DAT_180380c90 < dVar17)))))) {
    local_1c2c = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c2c,(ThrowInfo *)&DAT_1803d59f0);
  }
  fVar21 = (float)dVar17;
  DAT_1803e87d0 = fVar21;
  FUN_180093f20();
  FUN_180095e30(param_1,param_2,"lastShoot",0);
  FUN_1800950e0();
  local_1cc0 = 0.0;
  local_1cc4 = 0.0;
  local_1cc8 = 0.0;
  cVar3 = FUN_180095b20(param_1,uVar8,"angle_difference",&local_1cc8);
  if (cVar3 != '\0') {
    local_1ce8 = local_1ce8 - local_1cc4 * DAT_180380ac0;
  }
  fVar26 = local_1ce8;
  if ((((param_6 != '\0') && (0.0 < param_5)) && (0.0 <= dVar17)) &&
     ((dVar17 <= DAT_180380c48 && (0.0 <= dVar16)))) {
    local_1c10 = 0.03;
    pfVar13 = &local_1c10;
    if (param_5 <= _DAT_1803809b0) {
      pfVar13 = &param_5;
    }
    local_1bf8[0] = fVar21;
    pfVar14 = local_1bf8;
    if (*pfVar13 <= fVar21 && fVar21 != *pfVar13) {
      pfVar14 = pfVar13;
    }
    fVar21 = *pfVar14;
    local_1a28 = CONCAT44(fStack_1ae4,local_1ae8);
    local_1a20 = local_1ae0;
    FUN_180094290();
    local_1c78 = _DAT_180381770;
    uStack_1c70 = _UNK_180381778;
    local_1c68 = _DAT_1803814e0;
    uStack_1c60 = _UNK_1803814e8;
    local_1c58 = 0;
    local_1c57 = 0;
    local_1c56 = 0;
    local_1c55[0] = 0;
    dVar19 = (double)FUN_180095e30(param_1,param_2,"weight",dVar18);
    local_1c78 = CONCAT44(local_1c78._4_4_,(float)dVar19);
    dVar19 = (double)FUN_180095e30(param_1,param_2,"addweight",0);
    local_1c78 = CONCAT44((float)dVar19,(undefined4)local_1c78);
    dVar19 = (double)FUN_180095e30(param_1,param_2,"NumBullet",dVar18);
    uStack_1c70 = CONCAT44((float)dVar19,(undefined4)uStack_1c70);
    dVar19 = (double)FUN_180095e30(param_1,param_2,"animposmul",dVar18);
    local_1c68 = CONCAT44(local_1c68._4_4_,(float)dVar19);
    local_1c56 = FUN_180095f10(param_1,param_2,"podkid");
    dVar18 = (double)FUN_180095e30(param_1,param_2,"podkid",dVar18);
    local_1c68 = CONCAT44((float)dVar18,(undefined4)local_1c68);
    local_1c57 = FUN_180095f10(param_1,param_2,"PistolKinda");
    uStack_1c60 = CONCAT44(fVar24,(undefined4)uStack_1c60);
    FUN_180095fe0(param_1,param_2,"IsPistolHoldType",&local_1c58);
    FUN_180095fe0(param_1,param_2,"IsZoom",local_1c55);
    FUN_18002db10(param_1[1],uVar8,&DAT_1803476ec);
    cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar3 != '\0') {
      uVar8 = (**(code **)*param_1)(param_1);
      dVar18 = (double)FUN_1800960f0(param_1,uVar8,"GetTimeScale");
      uStack_1c60 = CONCAT44(uStack_1c60._4_4_,(float)dVar18);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    FUN_18002d9c0(param_1[1],param_2,"Primary");
    cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar3 != '\0') {
      uVar8 = (**(code **)*param_1)(param_1);
      uVar20 = FUN_180095e30(param_1,uVar8,"Force",DAT_180380e38);
      uVar8 = (**(code **)*param_1)(param_1);
      dVar18 = (double)FUN_180095e30(param_1,uVar8,"Force2",uVar20);
      uStack_1c70 = CONCAT44(uStack_1c70._4_4_,(float)dVar18);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    dVar16 = dVar16 - dVar17;
    local_1c38 = DAT_18040a200;
    do {
      local_1c38 = local_1c38 + -1;
      uVar8 = uVar4;
      uVar25 = uVar9;
      if (local_1c38 < 0) break;
      dVar17 = (double)(&DAT_18040a000)[local_1c38];
      uVar8 = SUB84(dVar17,0);
      uVar25 = (int)((ulonglong)dVar17 >> 0x20);
    } while (dVar16 < dVar17);
    local_1c34 = DAT_18040a200;
    do {
      local_1c34 = local_1c34 + -1;
      uVar22 = uVar4;
      uVar23 = uVar9;
      if (local_1c34 < 0) break;
      dVar17 = (double)(&DAT_18040a000)[local_1c34];
      uVar22 = SUB84(dVar17,0);
      uVar23 = (int)((ulonglong)dVar17 >> 0x20);
    } while ((double)fVar21 + dVar16 < dVar17);
    cVar3 = FUN_180095f10(param_1,param_2,"norecoil");
    if (((cVar3 == '\0') && (0.0 <= (double)CONCAT44(uVar25,uVar8))) &&
       (0.0 <= (double)CONCAT44(uVar23,uVar22))) {
      local_1c90 = 0.0;
      local_1c94 = 0.0;
      local_1c98 = 0.0;
      local_1c80 = 0.0;
      local_1c84 = 0.0;
      local_1c88 = 0.0;
      local_1d08 = &local_1c98;
      cVar3 = FUN_180094d00(&local_1c78,dVar16 - (double)CONCAT44(uVar25,uVar8),&local_1a28,
                            local_18e8);
      if (cVar3 != '\0') {
        local_1d08 = &local_1c88;
        cVar3 = FUN_180094d00(&local_1c78);
        if (cVar3 != '\0') {
          local_1b18 = local_1cc8 + (float)local_1ca8;
          local_1b14 = local_1cc4 + local_1ca8._4_4_;
          local_1b10 = local_1cc0 + local_1ca0;
          local_1ca0 = local_1b10 - local_18e8[2];
          local_1bd8 = CONCAT44(local_1b14 - local_18e8[1],local_1b18 - local_18e8[0]);
          local_1ca8 = CONCAT44(local_1b14 - local_18e8[1],local_1b18 - local_18e8[0]);
          fVar26 = (local_1c80 + fVar26) - local_1c90;
          local_1cec = (local_1c84 + local_1cec) - local_1c94;
          local_1cf0 = (local_1c88 + local_1cf0) - local_1c98;
          local_1ce8 = fVar26;
          local_1bd0 = local_1ca0;
          local_1b0c = local_1cf0;
          local_1b08 = local_1cec;
          local_1b04 = fVar26;
        }
      }
    }
  }
  local_1b00 = local_1cb8 + (float)local_1ca8;
  local_1afc = local_1cb4 + local_1ca8._4_4_;
  local_1af8 = local_1cb0 + local_1ca0;
  local_1a98 = CONCAT44(local_1b00,(undefined4)local_1a98);
  uStack_1a90 = CONCAT44(local_1af8,local_1afc);
  local_1cb0 = local_1ae0 + fVar26;
  local_1cb4 = fStack_1ae4 + local_1cec;
  local_1cb8 = local_1ae8 + local_1cf0;
  uStack_1a80 = CONCAT44(local_1cb8,(undefined4)uStack_1a80);
  local_1a78 = CONCAT44(local_1cb0,local_1cb4);
  local_1d08 = (float *)local_1a18;
  cVar3 = FUN_180094690(&local_1ab8,&local_1bf0,&local_1ad8,local_1be0);
  if (cVar3 == '\0') {
    local_1c30 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c30,(ThrowInfo *)&DAT_1803d59f0);
  }
  FUN_1802d4540(local_1a18,param_4);
  local_1af0 = *param_4;
  if (((local_1af0 & 0x7f800000) != 0x7f800000) &&
     (local_1bc8 = param_4[1], (local_1bc8 & 0x7f800000) != 0x7f800000)) {
    local_1be0 = CONCAT44(local_1be0._4_4_,param_4[2]);
    if ((param_4[2] & 0x7f800000) != 0x7f800000) {
      bVar15 = 1;
      local_1cf8 = 1;
      FUN_180097a50();
      DAT_1803e87d8 = (double)*DAT_1803fa608;
      DAT_18040a208 = 1;
      goto LAB_1800977ee;
    }
  }
  bVar15 = 0;
  local_1cf8 = 0;
LAB_1800977ee:
  FUN_180095910(local_1a08);
  iVar6 = (**(code **)*param_1)(param_1);
  if (iVar5 < iVar6) {
    puVar12 = (undefined8 *)*param_1;
    iVar6 = (*(code *)*puVar12)(param_1);
    (*(code *)puVar12[2])(param_1,iVar6 - iVar5);
  }
  return (ulonglong)bVar15;
}


