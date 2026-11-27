// 0x180084f80  FUN_180084f80
// size=1642 thunk=false
// signature: undefined FUN_180084f80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180084f80(longlong param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_568 [32];
  int local_548 [36];
  double local_4b8 [128];
  ulonglong local_b8;
  
  dVar7 = DAT_180380d90;
  dVar6 = DAT_180380d08;
  dVar5 = DAT_180380d00;
  dVar4 = DAT_180380a08;
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_568;
  if ((*(char *)(param_1 + 0x61) == '\0') || (iVar11 = *(int *)(param_1 + 0x18), iVar11 < 2)) {
    *(undefined1 *)(param_1 + 0x468) = 0;
  }
  else if (((*(char *)(param_1 + 0x468) == '\0') ||
           (*(int *)(param_1 + 0x46c) != *(int *)(param_1 + 100))) ||
          (*(int *)(param_1 + 0x470) != iVar11)) {
    pdVar9 = local_4b8;
    lVar10 = 0x40;
    iVar2 = 0x40;
    if (iVar11 < 0x40) {
      iVar2 = iVar11;
    }
    local_548[0] = -*(int *)(param_1 + 100);
    if (-*(int *)(param_1 + 100) < 0) {
      local_548[0] = *(int *)(param_1 + 100);
    }
    local_548[0] = -local_548[0];
    uVar12 = 0;
    local_548[1] = 0;
    dVar1 = DAT_180380d08 / (double)iVar2;
    local_548[2] = 0;
    local_548[3] = 0;
    local_548[4] = 0;
    local_548[5] = 0;
    local_548[6] = 0;
    local_548[7] = 0;
    local_548[8] = 0;
    local_548[9] = 0;
    local_548[10] = 0;
    local_548[0xb] = 0;
    local_548[0xc] = 0;
    local_548[0xd] = 0;
    local_548[0xe] = 0;
    local_548[0xf] = 0;
    local_548[0x10] = 0;
    local_548[0x11] = 0;
    local_548[0x12] = 0;
    local_548[0x13] = 0;
    local_548[0x14] = 0;
    local_548[0x15] = 0;
    local_548[0x16] = 0;
    local_548[0x17] = 0;
    local_548[0x18] = 0;
    local_548[0x19] = 0;
    local_548[0x1a] = 0;
    local_548[0x1b] = 0;
    local_548[0x1c] = 0;
    local_548[0x1d] = 0;
    local_548[0x1e] = 0;
    local_548[0x1f] = 0;
    local_548[0x20] = 0;
    local_548[0x21] = 0;
    do {
      *pdVar9 = 0.0;
      pdVar9[1] = 0.0;
      pdVar9 = pdVar9 + 2;
      lVar10 = lVar10 + -1;
      uVar13 = uVar12;
    } while (lVar10 != 0);
    do {
      iVar11 = 0;
      if ((int)uVar12 < iVar2) {
        iVar11 = (int)uVar12;
      }
      iVar8 = FUN_180083d00(local_548);
      uVar12 = (ulonglong)(iVar11 + 1U);
      dVar17 = (double)iVar11 * dVar1;
      dVar15 = (double)iVar8 * dVar4;
      dVar3 = dVar5;
      if (dVar15 <= dVar5) {
        dVar3 = dVar15;
      }
      iVar8 = FUN_180083d00(local_548);
      dVar16 = (double)iVar8 * dVar4;
      dVar15 = dVar5;
      if (dVar16 <= dVar5) {
        dVar15 = dVar16;
      }
      dVar17 = dVar15 * ((double)(int)(iVar11 + 1U) * dVar1 - dVar17) + dVar17;
      if (dVar17 < 0.0) {
        dVar17 = 0.0;
      }
      else if (dVar6 <= dVar17) {
        dVar17 = dVar6;
      }
      uVar14 = uVar13 + 1;
      local_4b8[uVar13 * 2 + 1] = dVar17;
      local_4b8[uVar13 * 2] = dVar3 * dVar7 + 0.0;
      uVar13 = uVar14;
    } while (uVar14 != 0x40);
    *(double *)(param_1 + 0x458) = local_4b8[0];
    *(double *)(param_1 + 0x460) = local_4b8[1];
    *(double *)(param_1 + 0x68) = local_4b8[2];
    *(double *)(param_1 + 0x70) = local_4b8[3];
    *(double *)(param_1 + 0x78) = local_4b8[4];
    *(double *)(param_1 + 0x80) = local_4b8[5];
    *(double *)(param_1 + 0x88) = local_4b8[6];
    *(double *)(param_1 + 0x90) = local_4b8[7];
    *(double *)(param_1 + 0x98) = local_4b8[8];
    *(double *)(param_1 + 0xa0) = local_4b8[9];
    *(double *)(param_1 + 0xa8) = local_4b8[10];
    *(double *)(param_1 + 0xb0) = local_4b8[0xb];
    *(double *)(param_1 + 0xb8) = local_4b8[0xc];
    *(double *)(param_1 + 0xc0) = local_4b8[0xd];
    *(double *)(param_1 + 200) = local_4b8[0xe];
    *(double *)(param_1 + 0xd0) = local_4b8[0xf];
    *(double *)(param_1 + 0xd8) = local_4b8[0x10];
    *(double *)(param_1 + 0xe0) = local_4b8[0x11];
    *(double *)(param_1 + 0xe8) = local_4b8[0x12];
    *(double *)(param_1 + 0xf0) = local_4b8[0x13];
    *(double *)(param_1 + 0xf8) = local_4b8[0x14];
    *(double *)(param_1 + 0x100) = local_4b8[0x15];
    *(double *)(param_1 + 0x108) = local_4b8[0x16];
    *(double *)(param_1 + 0x110) = local_4b8[0x17];
    *(double *)(param_1 + 0x118) = local_4b8[0x18];
    *(double *)(param_1 + 0x120) = local_4b8[0x19];
    *(double *)(param_1 + 0x128) = local_4b8[0x1a];
    *(double *)(param_1 + 0x130) = local_4b8[0x1b];
    *(double *)(param_1 + 0x138) = local_4b8[0x1c];
    *(double *)(param_1 + 0x140) = local_4b8[0x1d];
    *(double *)(param_1 + 0x148) = local_4b8[0x1e];
    *(double *)(param_1 + 0x150) = local_4b8[0x1f];
    *(double *)(param_1 + 0x158) = local_4b8[0x20];
    *(double *)(param_1 + 0x160) = local_4b8[0x21];
    *(double *)(param_1 + 0x168) = local_4b8[0x22];
    *(double *)(param_1 + 0x170) = local_4b8[0x23];
    *(double *)(param_1 + 0x178) = local_4b8[0x24];
    *(double *)(param_1 + 0x180) = local_4b8[0x25];
    *(double *)(param_1 + 0x188) = local_4b8[0x26];
    *(double *)(param_1 + 400) = local_4b8[0x27];
    *(double *)(param_1 + 0x198) = local_4b8[0x28];
    *(double *)(param_1 + 0x1a0) = local_4b8[0x29];
    *(double *)(param_1 + 0x1a8) = local_4b8[0x2a];
    *(double *)(param_1 + 0x1b0) = local_4b8[0x2b];
    *(double *)(param_1 + 0x1b8) = local_4b8[0x2c];
    *(double *)(param_1 + 0x1c0) = local_4b8[0x2d];
    *(double *)(param_1 + 0x1c8) = local_4b8[0x2e];
    *(double *)(param_1 + 0x1d0) = local_4b8[0x2f];
    *(double *)(param_1 + 0x1d8) = local_4b8[0x30];
    *(double *)(param_1 + 0x1e0) = local_4b8[0x31];
    *(double *)(param_1 + 0x1e8) = local_4b8[0x32];
    *(double *)(param_1 + 0x1f0) = local_4b8[0x33];
    *(double *)(param_1 + 0x1f8) = local_4b8[0x34];
    *(double *)(param_1 + 0x200) = local_4b8[0x35];
    *(double *)(param_1 + 0x208) = local_4b8[0x36];
    *(double *)(param_1 + 0x210) = local_4b8[0x37];
    *(double *)(param_1 + 0x218) = local_4b8[0x38];
    *(double *)(param_1 + 0x220) = local_4b8[0x39];
    *(double *)(param_1 + 0x228) = local_4b8[0x3a];
    *(double *)(param_1 + 0x230) = local_4b8[0x3b];
    *(double *)(param_1 + 0x238) = local_4b8[0x3c];
    *(double *)(param_1 + 0x240) = local_4b8[0x3d];
    *(double *)(param_1 + 0x248) = local_4b8[0x3e];
    *(double *)(param_1 + 0x250) = local_4b8[0x3f];
    *(double *)(param_1 + 600) = local_4b8[0x40];
    *(double *)(param_1 + 0x260) = local_4b8[0x41];
    *(double *)(param_1 + 0x268) = local_4b8[0x42];
    *(double *)(param_1 + 0x270) = local_4b8[0x43];
    *(double *)(param_1 + 0x278) = local_4b8[0x44];
    *(double *)(param_1 + 0x280) = local_4b8[0x45];
    *(double *)(param_1 + 0x288) = local_4b8[0x46];
    *(double *)(param_1 + 0x290) = local_4b8[0x47];
    *(double *)(param_1 + 0x298) = local_4b8[0x48];
    *(double *)(param_1 + 0x2a0) = local_4b8[0x49];
    *(double *)(param_1 + 0x2a8) = local_4b8[0x4a];
    *(double *)(param_1 + 0x2b0) = local_4b8[0x4b];
    *(double *)(param_1 + 0x2b8) = local_4b8[0x4c];
    *(double *)(param_1 + 0x2c0) = local_4b8[0x4d];
    *(double *)(param_1 + 0x2c8) = local_4b8[0x4e];
    *(double *)(param_1 + 0x2d0) = local_4b8[0x4f];
    *(double *)(param_1 + 0x2d8) = local_4b8[0x50];
    *(double *)(param_1 + 0x2e0) = local_4b8[0x51];
    *(double *)(param_1 + 0x2e8) = local_4b8[0x52];
    *(double *)(param_1 + 0x2f0) = local_4b8[0x53];
    *(double *)(param_1 + 0x2f8) = local_4b8[0x54];
    *(double *)(param_1 + 0x300) = local_4b8[0x55];
    *(double *)(param_1 + 0x308) = local_4b8[0x56];
    *(double *)(param_1 + 0x310) = local_4b8[0x57];
    *(double *)(param_1 + 0x318) = local_4b8[0x58];
    *(double *)(param_1 + 800) = local_4b8[0x59];
    *(double *)(param_1 + 0x328) = local_4b8[0x5a];
    *(double *)(param_1 + 0x330) = local_4b8[0x5b];
    *(double *)(param_1 + 0x338) = local_4b8[0x5c];
    *(double *)(param_1 + 0x340) = local_4b8[0x5d];
    *(double *)(param_1 + 0x348) = local_4b8[0x5e];
    *(double *)(param_1 + 0x350) = local_4b8[0x5f];
    *(double *)(param_1 + 0x358) = local_4b8[0x60];
    *(double *)(param_1 + 0x360) = local_4b8[0x61];
    *(double *)(param_1 + 0x368) = local_4b8[0x62];
    *(double *)(param_1 + 0x370) = local_4b8[99];
    *(double *)(param_1 + 0x378) = local_4b8[100];
    *(double *)(param_1 + 0x380) = local_4b8[0x65];
    *(double *)(param_1 + 0x388) = local_4b8[0x66];
    *(double *)(param_1 + 0x390) = local_4b8[0x67];
    *(double *)(param_1 + 0x398) = local_4b8[0x68];
    *(double *)(param_1 + 0x3a0) = local_4b8[0x69];
    *(double *)(param_1 + 0x3a8) = local_4b8[0x6a];
    *(double *)(param_1 + 0x3b0) = local_4b8[0x6b];
    *(double *)(param_1 + 0x3b8) = local_4b8[0x6c];
    *(double *)(param_1 + 0x3c0) = local_4b8[0x6d];
    *(double *)(param_1 + 0x3c8) = local_4b8[0x6e];
    *(double *)(param_1 + 0x3d0) = local_4b8[0x6f];
    *(double *)(param_1 + 0x3d8) = local_4b8[0x70];
    *(double *)(param_1 + 0x3e0) = local_4b8[0x71];
    *(double *)(param_1 + 1000) = local_4b8[0x72];
    *(double *)(param_1 + 0x3f0) = local_4b8[0x73];
    *(double *)(param_1 + 0x3f8) = local_4b8[0x74];
    *(double *)(param_1 + 0x400) = local_4b8[0x75];
    *(double *)(param_1 + 0x408) = local_4b8[0x76];
    *(double *)(param_1 + 0x410) = local_4b8[0x77];
    *(double *)(param_1 + 0x418) = local_4b8[0x78];
    *(double *)(param_1 + 0x420) = local_4b8[0x79];
    *(double *)(param_1 + 0x428) = local_4b8[0x7a];
    *(double *)(param_1 + 0x430) = local_4b8[0x7b];
    *(double *)(param_1 + 0x438) = local_4b8[0x7c];
    *(double *)(param_1 + 0x440) = local_4b8[0x7d];
    *(double *)(param_1 + 0x448) = local_4b8[0x7e];
    *(double *)(param_1 + 0x450) = local_4b8[0x7f];
    *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x468) = 1;
  }
  return;
}


