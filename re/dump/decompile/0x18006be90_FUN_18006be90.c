// 0x18006be90  FUN_18006be90
// size=1638 thunk=false
// signature: undefined FUN_18006be90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006be90(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte *pbVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_338 [4];
  undefined8 *local_328;
  ulonglong local_320;
  undefined *local_308;
  uint local_300 [2];
  byte local_2f8 [4];
  uint uStack_2f4;
  uint uStack_2f0;
  int iStack_2ec;
  int local_2e8;
  char acStack_2e4 [332];
  char local_198 [65];
  ushort local_157;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_388;
  if (DAT_1803fd35c == '\0') {
    return;
  }
  if (DAT_1803fe378 == 0) {
    if (DAT_1803fe370 == (code *)0x0) {
      return;
    }
    DAT_1803fd360 = DAT_1803fd360 + 1;
    if ((DAT_1803fd360 == 200) || (DAT_1803fd360 == 2000)) {
      FUN_180014410("[NWCAP] still undecided after %d message(s): agree=%d disagree=%d. If this never moves, no subtype-0 payload is arriving and the check needs a different oracle.\n"
                    ,DAT_1803fd360,DAT_1803fe388,DAT_1803fe38c);
      FUN_18006bd90(param_1,"undecided");
    }
    local_300[0] = 0;
    local_338[0] = 0;
    iVar9 = FUN_18006bbb0(param_1,local_300,3,local_338);
    if (iVar9 < 3) {
      return;
    }
    if ((char)local_300[0] != '\0') {
      return;
    }
    uVar17 = local_300[0] >> 8 & 0xffff;
    cVar8 = (*DAT_1803fe370)(uVar17,local_198 + 0x40,0x100);
    if ((cVar8 == '\0') || (local_198[0x40] == 0)) {
      DAT_1803fe38c = DAT_1803fe38c + 1;
      if (DAT_1803fe38c < 4) {
        return;
      }
      if (DAT_1803fe388 != 0) {
        return;
      }
      FUN_18006bd90(param_1,"mismatch");
      DAT_1803fe378 = 0xffffffff;
      FUN_180014410(&DAT_1803460b0,4,uVar17);
      return;
    }
    DAT_1803fe388 = DAT_1803fe388 + 1;
    if (DAT_1803fe388 == 1) {
      FUN_18006bd90(param_1,"candidate");
    }
    if (DAT_1803fe388 < 8) {
      return;
    }
    DAT_1803fe378 = 1;
    local_368 = FUN_18006baa0(param_1);
    local_340 = 0x58;
    local_348 = 0x48;
    local_350 = 0x44;
    local_358 = 0x40;
    local_360 = local_338[0];
    FUN_180014410("[NWCAP] layout CONFIRMED: %d subtype-0 payloads resolved to real network-string names (last tag=%d \'%s\', peek24=%06llX bits=%d). Payload reads from the CURSOR (+0x%X word / +0x%X avail / +0x%X in), NOT from +0x%X.\n"
                  ,8,uVar17,local_198 + 0x40);
  }
  else if (DAT_1803fe378 < 1) {
    return;
  }
  local_300[0] = 0;
  iVar9 = FUN_18006bbb0(param_1,local_198 + 0x40,0x100,local_300);
  if (iVar9 < 1) {
    return;
  }
  uVar18 = (ulonglong)(byte)local_198[0x40];
  uVar17 = 0xffffffff;
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  local_198[4] = '\0';
  local_198[5] = '\0';
  local_198[6] = '\0';
  local_198[7] = '\0';
  local_198[8] = '\0';
  local_198[9] = '\0';
  local_198[10] = '\0';
  local_198[0xb] = '\0';
  local_198[0xc] = '\0';
  local_198[0xd] = '\0';
  local_198[0xe] = '\0';
  local_198[0xf] = '\0';
  local_198[0x10] = '\0';
  local_198[0x11] = '\0';
  local_198[0x12] = '\0';
  local_198[0x13] = '\0';
  local_198[0x14] = '\0';
  local_198[0x15] = '\0';
  local_198[0x16] = '\0';
  local_198[0x17] = '\0';
  local_198[0x18] = '\0';
  local_198[0x19] = '\0';
  local_198[0x1a] = '\0';
  local_198[0x1b] = '\0';
  local_198[0x1c] = '\0';
  local_198[0x1d] = '\0';
  local_198[0x1e] = '\0';
  local_198[0x1f] = '\0';
  local_198[0x20] = '\0';
  local_198[0x21] = '\0';
  local_198[0x22] = '\0';
  local_198[0x23] = '\0';
  local_198[0x24] = '\0';
  local_198[0x25] = '\0';
  local_198[0x26] = '\0';
  local_198[0x27] = '\0';
  local_198[0x28] = '\0';
  local_198[0x29] = '\0';
  local_198[0x2a] = '\0';
  local_198[0x2b] = '\0';
  local_198[0x2c] = '\0';
  local_198[0x2d] = '\0';
  local_198[0x2e] = '\0';
  local_198[0x2f] = '\0';
  local_198[0x30] = '\0';
  local_198[0x31] = '\0';
  local_198[0x32] = '\0';
  local_198[0x33] = '\0';
  local_198[0x34] = '\0';
  local_198[0x35] = '\0';
  local_198[0x36] = '\0';
  local_198[0x37] = '\0';
  local_198[0x38] = '\0';
  local_198[0x39] = '\0';
  local_198[0x3a] = '\0';
  local_198[0x3b] = '\0';
  local_198[0x3c] = '\0';
  local_198[0x3d] = '\0';
  local_198[0x3e] = '\0';
  local_198[0x3f] = '\0';
  if (((local_198[0x40] == 0) && (2 < iVar9)) &&
     (uVar17 = (uint)local_157, DAT_1803fe370 != (code *)0x0)) {
    (*DAT_1803fe370)(uVar17,local_198,0x40);
  }
  local_308 = &DAT_1803da640;
  iVar10 = _Mtx_lock(&DAT_1803da640);
  if (iVar10 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803da68c == 0x7fffffff) {
    DAT_1803da68c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  uVar5 = local_300[0];
  DAT_1803fe380 = DAT_1803fe380 + 1;
  lVar15 = (&DAT_1803fd370)[uVar18 * 2];
  if (lVar15 == 0) {
    (&DAT_1803fd378)[uVar18 * 4] = local_300[0];
LAB_18006c143:
    *(uint *)(&DAT_1803fd37c + uVar18 * 0x10) = local_300[0];
  }
  else {
    if ((int)local_300[0] < (int)(&DAT_1803fd378)[uVar18 * 4]) {
      (&DAT_1803fd378)[uVar18 * 4] = local_300[0];
    }
    if (*(int *)(&DAT_1803fd37c + uVar18 * 0x10) < (int)local_300[0]) goto LAB_18006c143;
  }
  (&DAT_1803fd370)[uVar18 * 2] = lVar15 + 1;
  puVar7 = DAT_1805c7c50;
  if ((int)uVar17 < 0) goto LAB_18006c295;
  puVar19 = (undefined8 *)DAT_1805c7c50[1];
  puVar11 = puVar19;
  puVar12 = DAT_1805c7c50;
  if (*(char *)((longlong)puVar19 + 0x19) == '\0') {
    do {
      puVar19 = puVar11;
      if ((int)uVar17 <= *(int *)(puVar19 + 4)) {
        puVar11 = (undefined8 *)*puVar19;
        puVar12 = puVar19;
      }
      else {
        puVar11 = (undefined8 *)puVar19[2];
      }
      uVar16 = (uint)((int)uVar17 <= *(int *)(puVar19 + 4));
    } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
  }
  else {
    uVar16 = 0;
  }
  if ((*(char *)((longlong)puVar12 + 0x19) != '\0') || ((int)uVar17 < *(int *)(puVar12 + 4))) {
    if (DAT_1805c7c58 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_328 = &DAT_1805c7c50;
    local_320 = 0;
    puVar11 = (undefined8 *)FUN_1802d8350(0x78);
    *(uint *)(puVar11 + 4) = uVar17;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    *puVar11 = puVar7;
    puVar11[1] = puVar7;
    puVar11[2] = puVar7;
    *(undefined2 *)(puVar11 + 3) = 0;
    local_320 = (ulonglong)uVar16;
    local_328 = puVar19;
    puVar12 = (undefined8 *)FUN_18022bb90(&DAT_1805c7c50);
  }
  if (puVar12[5] == 0) {
    *(uint *)(puVar12 + 6) = uVar5;
LAB_18006c259:
    *(uint *)((longlong)puVar12 + 0x34) = uVar5;
  }
  else {
    if ((int)uVar5 < *(int *)(puVar12 + 6)) {
      *(uint *)(puVar12 + 6) = uVar5;
    }
    if (*(int *)((longlong)puVar12 + 0x34) < (int)uVar5) goto LAB_18006c259;
  }
  puVar12[5] = puVar12[5] + 1;
  if ((*(char *)(puVar12 + 7) == '\0') && (local_198[0] != '\0')) {
    strncpy_s((char *)(puVar12 + 7),0x40,local_198,0xffffffffffffffff);
  }
LAB_18006c295:
  acStack_2e4[0] = '\0';
  acStack_2e4[1] = '\0';
  acStack_2e4[2] = '\0';
  acStack_2e4[3] = '\0';
  acStack_2e4[4] = '\0';
  acStack_2e4[5] = '\0';
  acStack_2e4[6] = '\0';
  acStack_2e4[7] = '\0';
  acStack_2e4[8] = '\0';
  acStack_2e4[9] = '\0';
  acStack_2e4[10] = '\0';
  acStack_2e4[0xb] = '\0';
  acStack_2e4[0xc] = '\0';
  acStack_2e4[0xd] = '\0';
  acStack_2e4[0xe] = '\0';
  acStack_2e4[0xf] = '\0';
  acStack_2e4[0x10] = '\0';
  acStack_2e4[0x11] = '\0';
  acStack_2e4[0x12] = '\0';
  acStack_2e4[0x13] = '\0';
  acStack_2e4[0x14] = '\0';
  acStack_2e4[0x15] = '\0';
  acStack_2e4[0x16] = '\0';
  acStack_2e4[0x17] = '\0';
  acStack_2e4[0x18] = '\0';
  acStack_2e4[0x19] = '\0';
  acStack_2e4[0x1a] = '\0';
  acStack_2e4[0x1b] = '\0';
  acStack_2e4[0x1c] = '\0';
  acStack_2e4[0x1d] = '\0';
  acStack_2e4[0x1e] = '\0';
  acStack_2e4[0x1f] = '\0';
  acStack_2e4[0x20] = '\0';
  acStack_2e4[0x21] = '\0';
  acStack_2e4[0x22] = '\0';
  acStack_2e4[0x23] = '\0';
  acStack_2e4[0x24] = '\0';
  acStack_2e4[0x25] = '\0';
  acStack_2e4[0x26] = '\0';
  acStack_2e4[0x27] = '\0';
  acStack_2e4[0x28] = '\0';
  acStack_2e4[0x29] = '\0';
  acStack_2e4[0x2a] = '\0';
  acStack_2e4[0x2b] = '\0';
  acStack_2e4[0x2c] = '\0';
  acStack_2e4[0x2d] = '\0';
  acStack_2e4[0x2e] = '\0';
  acStack_2e4[0x2f] = '\0';
  acStack_2e4[0x30] = '\0';
  acStack_2e4[0x31] = '\0';
  acStack_2e4[0x32] = '\0';
  acStack_2e4[0x33] = '\0';
  acStack_2e4[0x34] = '\0';
  acStack_2e4[0x35] = '\0';
  acStack_2e4[0x36] = '\0';
  acStack_2e4[0x37] = '\0';
  acStack_2e4[0x38] = '\0';
  acStack_2e4[0x39] = '\0';
  acStack_2e4[0x3a] = '\0';
  acStack_2e4[0x3b] = '\0';
  acStack_2e4[0x3c] = '\0';
  acStack_2e4[0x3d] = '\0';
  acStack_2e4[0x3e] = '\0';
  acStack_2e4[0x3f] = '\0';
  memset(acStack_2e4 + 0x40,0,0x100);
  local_2f8[0] = local_198[0x40];
  uStack_2f0 = uVar5;
  DAT_1803fe390 = DAT_1803fe390 + 1;
  uStack_2f4 = uVar17;
  iStack_2ec = iVar9;
  local_2e8 = DAT_1803fe390;
  if (local_198[0] != '\0') {
    strncpy_s(acStack_2e4,0x40,local_198,0xffffffffffffffff);
  }
  memcpy(acStack_2e4 + 0x40,local_198 + 0x40,(longlong)iVar9);
  if (DAT_1805c7c38 <= DAT_1805c7c48 + 1) {
    FUN_18022d460();
  }
  DAT_1805c7c40 = DAT_1805c7c40 & DAT_1805c7c38 - 1;
  uVar18 = DAT_1805c7c40 + DAT_1805c7c48;
  lVar15 = (uVar18 & DAT_1805c7c38 - 1) * 8;
  if (*(longlong *)(lVar15 + DAT_1805c7c30) == 0) {
    uVar13 = FUN_1802d8350(0x154);
    *(undefined8 *)(lVar15 + DAT_1805c7c30) = uVar13;
  }
  lVar15 = 2;
  pbVar6 = local_2f8;
  puVar7 = *(undefined8 **)(DAT_1805c7c30 + (DAT_1805c7c38 - 1 & uVar18) * 8);
  do {
    puVar19 = puVar7;
    pbVar14 = pbVar6;
    uVar13 = *(undefined8 *)(pbVar14 + 8);
    *puVar19 = *(undefined8 *)pbVar14;
    puVar19[1] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x18);
    puVar19[2] = *(undefined8 *)(pbVar14 + 0x10);
    puVar19[3] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x28);
    puVar19[4] = *(undefined8 *)(pbVar14 + 0x20);
    puVar19[5] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x38);
    puVar19[6] = *(undefined8 *)(pbVar14 + 0x30);
    puVar19[7] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x48);
    puVar19[8] = *(undefined8 *)(pbVar14 + 0x40);
    puVar19[9] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x58);
    puVar19[10] = *(undefined8 *)(pbVar14 + 0x50);
    puVar19[0xb] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x68);
    puVar19[0xc] = *(undefined8 *)(pbVar14 + 0x60);
    puVar19[0xd] = uVar13;
    uVar13 = *(undefined8 *)(pbVar14 + 0x78);
    puVar19[0xe] = *(undefined8 *)(pbVar14 + 0x70);
    puVar19[0xf] = uVar13;
    lVar15 = lVar15 + -1;
    pbVar6 = pbVar14 + 0x80;
    puVar7 = puVar19 + 0x10;
  } while (lVar15 != 0);
  uVar13 = *(undefined8 *)(pbVar14 + 0x88);
  puVar19[0x10] = *(undefined8 *)(pbVar14 + 0x80);
  puVar19[0x11] = uVar13;
  uVar13 = *(undefined8 *)(pbVar14 + 0x98);
  puVar19[0x12] = *(undefined8 *)(pbVar14 + 0x90);
  puVar19[0x13] = uVar13;
  uVar13 = *(undefined8 *)(pbVar14 + 0xa8);
  puVar19[0x14] = *(undefined8 *)(pbVar14 + 0xa0);
  puVar19[0x15] = uVar13;
  uVar2 = *(undefined4 *)(pbVar14 + 0xb4);
  uVar3 = *(undefined4 *)(pbVar14 + 0xb8);
  uVar4 = *(undefined4 *)(pbVar14 + 0xbc);
  *(undefined4 *)(puVar19 + 0x16) = *(undefined4 *)(pbVar14 + 0xb0);
  *(undefined4 *)((longlong)puVar19 + 0xb4) = uVar2;
  *(undefined4 *)(puVar19 + 0x17) = uVar3;
  *(undefined4 *)((longlong)puVar19 + 0xbc) = uVar4;
  uVar2 = *(undefined4 *)(pbVar14 + 0xc4);
  uVar3 = *(undefined4 *)(pbVar14 + 200);
  uVar4 = *(undefined4 *)(pbVar14 + 0xcc);
  *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(pbVar14 + 0xc0);
  *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar2;
  *(undefined4 *)(puVar19 + 0x19) = uVar3;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar4;
  *(undefined4 *)(puVar19 + 0x1a) = *(undefined4 *)(pbVar14 + 0xd0);
  DAT_1805c7c48 = DAT_1805c7c48 + 1;
  do {
    if (DAT_1805c7c48 < 0x21) {
LAB_18006c47a:
      _Mtx_unlock(&DAT_1803da640);
      return;
    }
    DAT_1805c7c48 = DAT_1805c7c48 - 1;
    if (DAT_1805c7c48 == 0) {
      DAT_1805c7c40 = 0;
      goto LAB_18006c47a;
    }
    DAT_1805c7c40 = DAT_1805c7c40 + 1;
  } while( true );
}


