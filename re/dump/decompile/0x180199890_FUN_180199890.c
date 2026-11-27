// 0x180199890  FUN_180199890
// size=2526 thunk=false
// signature: undefined FUN_180199890()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180199890(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res8 [2];
  int local_res10 [2];
  
  piVar17 = local_res8;
  if (-1 < DAT_1803fb24c) {
    piVar17 = &DAT_1803fb24c;
  }
  local_res10[0] = 4;
  local_res8[0] = 0;
  piVar15 = local_res10;
  if (DAT_1803fb24c < 5) {
    piVar15 = piVar17;
  }
  DAT_1803fb24c = *piVar15;
  lVar16 = (longlong)DAT_1803fb24c;
  lVar18 = lVar16 * 200;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar12 = DAT_180380a58;
  lVar9 = *(longlong *)(lVar9 + 0xec0);
  *(undefined4 *)(lVar9 + 0xc94) = 0x41100000;
  *(undefined4 *)(lVar9 + 0xcb4) = 0x40e00000;
  *(undefined8 *)(lVar9 + 0xccc) = 0x40a00000;
  *(undefined4 *)(lVar9 + 0xcbc) = 0x40e00000;
  *(undefined4 *)(lVar9 + 0xd00) = 0x41200000;
  *(undefined4 *)(lVar9 + 0xd0c) = 0x41200000;
  *(undefined4 *)(lVar9 + 0xc98) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0xcb8) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0xcd4) = 0x41000000;
  *(undefined4 *)(lVar9 + 0xcd8) = 0x40c00000;
  *(undefined4 *)(lVar9 + 0xcdc) = 0x40e00000;
  *(undefined4 *)(lVar9 + 0xce0) = 0x40800000;
  *(undefined4 *)(lVar9 + 0xcc4) = 0x41000000;
  *(undefined4 *)(lVar9 + 0xcc8) = 0x40800000;
  *(undefined4 *)(lVar9 + 0xcfc) = 0x40c00000;
  *(undefined4 *)(lVar9 + 0xd08) = 0x41400000;
  *(undefined4 *)(lVar9 + 0xdac) = 0x3f400000;
  uVar10 = *(undefined8 *)(&DAT_1803dca20 + lVar18);
  *(undefined8 *)(lVar9 + 0xdb0) = *(undefined8 *)(&DAT_1803dca18 + lVar18);
  *(undefined8 *)(lVar9 + 0xdb8) = uVar10;
  uVar10 = (&DAT_1803dca30)[lVar16 * 0x19];
  *(undefined8 *)(lVar9 + 0xdc0) = *(undefined8 *)(&DAT_1803dca28 + lVar18);
  *(undefined8 *)(lVar9 + 0xdc8) = uVar10;
  uVar10 = *(undefined8 *)(&DAT_1803dc980 + lVar18);
  *(undefined8 *)(lVar9 + 0xdd0) = *(undefined8 *)(&DAT_1803dc978 + lVar18);
  *(undefined8 *)(lVar9 + 0xdd8) = uVar10;
  uVar10 = *(undefined8 *)(&DAT_1803dc9a0 + lVar18);
  *(undefined8 *)(lVar9 + 0xde0) = *(undefined8 *)(&DAT_1803dc998 + lVar18);
  *(undefined8 *)(lVar9 + 0xde8) = uVar10;
  fVar20 = *(float *)(&DAT_1803dc97c + lVar18);
  fVar1 = *(float *)(&DAT_1803dc99c + lVar18);
  fVar2 = *(float *)(&DAT_1803dc980 + lVar18);
  fVar19 = *(float *)(&DAT_1803dc9a0 + lVar18);
  fVar21 = *(float *)(&DAT_1803dc984 + lVar18);
  fVar22 = *(float *)(&DAT_1803dc9a4 + lVar18);
  fVar3 = *(float *)(&DAT_1803dc99c + lVar18);
  fVar4 = *(float *)(&DAT_1803dc9a0 + lVar18);
  fVar5 = *(float *)(&DAT_1803dc9a4 + lVar18);
  *(float *)(lVar9 + 0xdf0) =
       (*(float *)(&DAT_1803dc978 + lVar18) - *(float *)(&DAT_1803dc998 + lVar18)) * fVar12 +
       *(float *)(&DAT_1803dc998 + lVar18);
  *(float *)(lVar9 + 0xdf4) = (fVar20 - fVar1) * fVar12 + fVar3;
  *(float *)(lVar9 + 0xdf8) = (fVar2 - fVar19) * fVar12 + fVar4;
  *(float *)(lVar9 + 0xdfc) = (fVar21 - fVar22) * fVar12 + fVar5;
  fVar11 = DAT_180380ab0;
  uVar10 = *(undefined8 *)(&DAT_1803dc9c0 + lVar18);
  *(undefined8 *)(lVar9 + 0xe00) = *(undefined8 *)(&DAT_1803dc9b8 + lVar18);
  *(undefined8 *)(lVar9 + 0xe08) = uVar10;
  fVar20 = *(float *)(&DAT_1803dc99c + lVar18);
  fVar1 = *(float *)(&DAT_1803dc97c + lVar18);
  fVar2 = *(float *)(&DAT_1803dc9a0 + lVar18);
  fVar19 = *(float *)(&DAT_1803dc980 + lVar18);
  fVar21 = *(float *)(&DAT_1803dc9a4 + lVar18);
  fVar22 = *(float *)(&DAT_1803dc984 + lVar18);
  fVar3 = *(float *)(&DAT_1803dc97c + lVar18);
  fVar4 = *(float *)(&DAT_1803dc980 + lVar18);
  fVar5 = *(float *)(&DAT_1803dc984 + lVar18);
  *(float *)(lVar9 + 0xe20) =
       (*(float *)(&DAT_1803dc998 + lVar18) - *(float *)(&DAT_1803dc978 + lVar18)) * fVar11 +
       *(float *)(&DAT_1803dc978 + lVar18);
  *(float *)(lVar9 + 0xe24) = (fVar20 - fVar1) * fVar11 + fVar3;
  *(float *)(lVar9 + 0xe28) = (fVar2 - fVar19) * fVar11 + fVar4;
  *(float *)(lVar9 + 0xe2c) = (fVar21 - fVar22) * fVar11 + fVar5;
  fVar22 = (*(float *)(&DAT_1803dc9dc + lVar18) - *(float *)(&DAT_1803dc9ac + lVar18)) *
           DAT_180380a88;
  fVar21 = (*(float *)(&DAT_1803dc9e0 + lVar18) - *(float *)(&DAT_1803dc9b0 + lVar18)) *
           DAT_180380a88;
  fVar20 = *(float *)(&DAT_1803dc9ac + lVar18);
  fVar1 = *(float *)(&DAT_1803dc9b0 + lVar18);
  fVar19 = (*(float *)(&DAT_1803dc9e4 + lVar18) - *(float *)(&DAT_1803dc9b4 + lVar18)) *
           DAT_180380a88;
  fVar2 = *(float *)(&DAT_1803dc9b4 + lVar18);
  *(float *)(lVar9 + 0xe30) =
       (*(float *)(&DAT_1803dc9d8 + lVar18) - *(float *)(&DAT_1803dc9a8 + lVar18)) * DAT_180380a88 +
       *(float *)(&DAT_1803dc9a8 + lVar18);
  *(float *)(lVar9 + 0xe34) = fVar22 + fVar20;
  *(float *)(lVar9 + 0xe38) = fVar21 + fVar1;
  *(float *)(lVar9 + 0xe3c) = fVar19 + fVar2;
  fVar11 = DAT_180380a2c;
  fVar22 = (*(float *)(&DAT_1803dc9cc + lVar18) - *(float *)(&DAT_1803dc9dc + lVar18)) *
           DAT_180380a2c;
  fVar19 = (*(float *)(&DAT_1803dc9d4 + lVar18) - *(float *)(&DAT_1803dc9e4 + lVar18)) *
           DAT_180380a2c;
  fVar20 = *(float *)(&DAT_1803dc9dc + lVar18);
  fVar21 = (*(float *)(&DAT_1803dc9d0 + lVar18) - *(float *)(&DAT_1803dc9e0 + lVar18)) *
           DAT_180380a2c;
  fVar1 = *(float *)(&DAT_1803dc9e4 + lVar18);
  fVar2 = *(float *)(&DAT_1803dc9e0 + lVar18);
  *(float *)(lVar9 + 0xe40) =
       (*(float *)(&DAT_1803dc9c8 + lVar18) - *(float *)(&DAT_1803dc9d8 + lVar18)) * DAT_180380a2c +
       *(float *)(&DAT_1803dc9d8 + lVar18);
  *(float *)(lVar9 + 0xe44) = fVar22 + fVar20;
  *(float *)(lVar9 + 0xe48) = fVar21 + fVar2;
  *(float *)(lVar9 + 0xe4c) = fVar19 + fVar1;
  *(undefined4 *)(lVar9 + 0xed0) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0xed4) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0xed8) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0xedc) = 0x3f800000;
  uVar10 = *(undefined8 *)(&DAT_1803dc9d0 + lVar18);
  *(undefined8 *)(lVar9 + 0xee0) = *(undefined8 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined8 *)(lVar9 + 0xee8) = uVar10;
  uVar10 = *(undefined8 *)(&DAT_1803dc9d0 + lVar18);
  *(undefined8 *)(lVar9 + 0xef0) = *(undefined8 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined8 *)(lVar9 + 0xef8) = uVar10;
  fVar20 = *(float *)(&DAT_1803dc9f4 + lVar18);
  fVar1 = *(float *)(&DAT_1803dc9d4 + lVar18);
  fVar2 = *(float *)(&DAT_1803dc9ec + lVar18);
  fVar19 = *(float *)(&DAT_1803dc9cc + lVar18);
  fVar21 = *(float *)(&DAT_1803dc9f0 + lVar18);
  fVar22 = *(float *)(&DAT_1803dc9d0 + lVar18);
  fVar3 = *(float *)(&DAT_1803dc9d4 + lVar18);
  fVar4 = *(float *)(&DAT_1803dc9cc + lVar18);
  fVar5 = *(float *)(&DAT_1803dc9d0 + lVar18);
  *(float *)(lVar9 + 0xf00) =
       (*(float *)(&DAT_1803dc9e8 + lVar18) - *(float *)(&DAT_1803dc9c8 + lVar18)) * fVar12 +
       *(float *)(&DAT_1803dc9c8 + lVar18);
  *(float *)(lVar9 + 0xf04) = (fVar2 - fVar19) * fVar12 + fVar4;
  *(float *)(lVar9 + 0xf08) = (fVar21 - fVar22) * fVar12 + fVar5;
  *(float *)(lVar9 + 0xf0c) = (fVar20 - fVar1) * fVar12 + fVar3;
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xf14) = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  *(undefined4 *)(lVar9 + 0xf18) = uVar6;
  *(undefined4 *)(lVar9 + 0xf10) = uVar7;
  *(float *)(lVar9 + 0xf1c) = fVar20 * fVar11;
  uVar6 = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18) * DAT_180380a70;
  *(undefined4 *)(lVar9 + 0xf20) = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xf24) = uVar6;
  *(undefined4 *)(lVar9 + 0xf28) = uVar7;
  *(float *)(lVar9 + 0xf2c) = fVar20;
  uVar6 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xf34) = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  *(undefined4 *)(lVar9 + 0xf38) = uVar6;
  *(undefined4 *)(lVar9 + 0xf30) = uVar7;
  fVar14 = DAT_180380ab4;
  fVar13 = DAT_180380a68;
  *(float *)(lVar9 + 0xf3c) = fVar20 * DAT_180380ab4;
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xf44) = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  *(undefined4 *)(lVar9 + 0xf48) = uVar6;
  *(undefined4 *)(lVar9 + 0xf40) = uVar7;
  *(float *)(lVar9 + 0xf4c) = fVar20 * fVar11;
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xf54) = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  *(undefined4 *)(lVar9 + 0xf58) = uVar6;
  *(undefined4 *)(lVar9 + 0xf50) = uVar7;
  *(float *)(lVar9 + 0xf5c) = fVar20 * fVar13;
  uVar8 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  *(float *)(lVar9 + 0xf6c) = *(float *)(&DAT_1803dc9d4 + lVar18) * _DAT_180380a8c;
  *(undefined4 *)(lVar9 + 0xf64) = uVar6;
  *(undefined4 *)(lVar9 + 0xf68) = uVar7;
  *(undefined4 *)(lVar9 + 0xf60) = uVar8;
  uVar10 = *(undefined8 *)(&DAT_1803dc9c0 + lVar18);
  *(undefined8 *)(lVar9 + 0xf70) = *(undefined8 *)(&DAT_1803dc9b8 + lVar18);
  *(undefined8 *)(lVar9 + 0xf78) = uVar10;
  fVar20 = *(float *)(&DAT_1803dc97c + lVar18);
  fVar1 = *(float *)(&DAT_1803dc98c + lVar18);
  fVar2 = *(float *)(&DAT_1803dc980 + lVar18);
  fVar19 = *(float *)(&DAT_1803dc990 + lVar18);
  fVar21 = *(float *)(&DAT_1803dc984 + lVar18);
  fVar22 = *(float *)(&DAT_1803dc994 + lVar18);
  fVar3 = *(float *)(&DAT_1803dc98c + lVar18);
  fVar4 = *(float *)(&DAT_1803dc990 + lVar18);
  fVar5 = *(float *)(&DAT_1803dc994 + lVar18);
  *(float *)(lVar9 + 0xe50) =
       (*(float *)(&DAT_1803dc978 + lVar18) - *(float *)(&DAT_1803dc988 + lVar18)) * fVar11 +
       *(float *)(&DAT_1803dc988 + lVar18);
  *(float *)(lVar9 + 0xe54) = (fVar20 - fVar1) * fVar11 + fVar3;
  *(float *)(lVar9 + 0xe58) = (fVar2 - fVar19) * fVar11 + fVar4;
  *(float *)(lVar9 + 0xe5c) = (fVar21 - fVar22) * fVar11 + fVar5;
  fVar12 = DAT_180380a3c;
  fVar22 = (*(float *)(&DAT_1803dc9dc + lVar18) - *(float *)(&DAT_1803dc99c + lVar18)) *
           DAT_180380a3c;
  fVar20 = *(float *)(&DAT_1803dc99c + lVar18);
  fVar21 = (*(float *)(&DAT_1803dc9e0 + lVar18) - *(float *)(&DAT_1803dc9a0 + lVar18)) *
           DAT_180380a3c;
  fVar19 = (*(float *)(&DAT_1803dc9e4 + lVar18) - *(float *)(&DAT_1803dc9a4 + lVar18)) *
           DAT_180380a3c;
  fVar1 = *(float *)(&DAT_1803dc9a0 + lVar18);
  fVar2 = *(float *)(&DAT_1803dc9a4 + lVar18);
  *(float *)(lVar9 + 0xe60) =
       (*(float *)(&DAT_1803dc9d8 + lVar18) - *(float *)(&DAT_1803dc998 + lVar18)) * DAT_180380a3c +
       *(float *)(&DAT_1803dc998 + lVar18);
  *(float *)(lVar9 + 0xe64) = fVar22 + fVar20;
  *(float *)(lVar9 + 0xe68) = fVar21 + fVar1;
  *(float *)(lVar9 + 0xe6c) = fVar19 + fVar2;
  fVar20 = *(float *)(&DAT_1803dc97c + lVar18);
  fVar1 = *(float *)(&DAT_1803dc98c + lVar18);
  fVar2 = *(float *)(&DAT_1803dc984 + lVar18);
  fVar19 = *(float *)(&DAT_1803dc994 + lVar18);
  fVar21 = *(float *)(&DAT_1803dc980 + lVar18);
  fVar22 = *(float *)(&DAT_1803dc990 + lVar18);
  fVar3 = *(float *)(&DAT_1803dc994 + lVar18);
  fVar4 = *(float *)(&DAT_1803dc98c + lVar18);
  fVar5 = *(float *)(&DAT_1803dc990 + lVar18);
  *(float *)(lVar9 + 0xe70) =
       (*(float *)(&DAT_1803dc978 + lVar18) - *(float *)(&DAT_1803dc988 + lVar18)) * fVar13 +
       *(float *)(&DAT_1803dc988 + lVar18);
  *(float *)(lVar9 + 0xe74) = (fVar20 - fVar1) * fVar13 + fVar4;
  *(float *)(lVar9 + 0xe78) = (fVar21 - fVar22) * fVar13 + fVar5;
  *(float *)(lVar9 + 0xe7c) = (fVar2 - fVar19) * fVar13 + fVar3;
  uVar10 = *(undefined8 *)(&DAT_1803dc9a0 + lVar18);
  *(undefined8 *)(lVar9 + 0xe80) = *(undefined8 *)(&DAT_1803dc998 + lVar18);
  *(undefined8 *)(lVar9 + 0xe88) = uVar10;
  uVar7 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  *(undefined4 *)(lVar9 + 0xfa8) = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  *(undefined4 *)(lVar9 + 0xfa4) = uVar6;
  *(undefined4 *)(lVar9 + 4000) = uVar7;
  *(float *)(lVar9 + 0xfac) = fVar20 * fVar11;
  uVar6 = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18) * DAT_180380a6c;
  *(undefined4 *)(lVar9 + 0xfb0) = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xfb8) = uVar7;
  *(undefined4 *)(lVar9 + 0xfb4) = uVar6;
  *(float *)(lVar9 + 0xfbc) = fVar20;
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0xfc4) = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  *(undefined4 *)(lVar9 + 0xfc8) = uVar6;
  *(undefined4 *)(lVar9 + 0xfc0) = uVar7;
  *(float *)(lVar9 + 0xfcc) = fVar20 * fVar14;
  fVar20 = *(float *)(&DAT_1803dc984 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc980 + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc978 + lVar18);
  *(undefined4 *)(lVar9 + 0xe94) = *(undefined4 *)(&DAT_1803dc97c + lVar18);
  *(undefined4 *)(lVar9 + 0xe98) = uVar6;
  *(undefined4 *)(lVar9 + 0xe90) = uVar7;
  *(float *)(lVar9 + 0xe9c) = fVar20 * fVar12;
  uVar6 = *(undefined4 *)(&DAT_1803dca30 + lVar16 * 0x19);
  uVar7 = *(undefined4 *)(&DAT_1803dca2c + lVar18);
  fVar20 = *(float *)((longlong)&DAT_1803dca30 + lVar18 + 4) * DAT_180380a6c;
  *(undefined4 *)(lVar9 + 0xea0) = *(undefined4 *)(&DAT_1803dca28 + lVar18);
  *(undefined4 *)(lVar9 + 0xea4) = uVar7;
  *(undefined4 *)(lVar9 + 0xea8) = uVar6;
  *(float *)(lVar9 + 0xeac) = fVar20;
  fVar20 = *(float *)((longlong)&DAT_1803dca30 + lVar18 + 4);
  uVar6 = *(undefined4 *)(&DAT_1803dca30 + lVar16 * 0x19);
  uVar7 = *(undefined4 *)(&DAT_1803dca28 + lVar18);
  *(undefined4 *)(lVar9 + 0xeb4) = *(undefined4 *)(&DAT_1803dca2c + lVar18);
  *(undefined4 *)(lVar9 + 0xeb8) = uVar6;
  *(undefined4 *)(lVar9 + 0xeb0) = uVar7;
  *(float *)(lVar9 + 0xebc) = fVar20 * fVar14;
  uVar10 = *(undefined8 *)(&DAT_1803dc9a0 + lVar18);
  *(undefined8 *)(lVar9 + 0xff0) = *(undefined8 *)(&DAT_1803dc998 + lVar18);
  *(undefined8 *)(lVar9 + 0xff8) = uVar10;
  uVar8 = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  uVar6 = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  *(float *)(lVar9 + 0xfec) = *(float *)(&DAT_1803dc9d4 + lVar18) * DAT_180380a74;
  *(undefined4 *)(lVar9 + 0xfe4) = uVar6;
  *(undefined4 *)(lVar9 + 0xfe8) = uVar7;
  *(undefined4 *)(lVar9 + 0xfe0) = uVar8;
  uVar6 = *(undefined4 *)(&DAT_1803dc9cc + lVar18);
  uVar7 = *(undefined4 *)(&DAT_1803dc9d0 + lVar18);
  fVar20 = *(float *)(&DAT_1803dc9d4 + lVar18) * _DAT_180380a5c;
  *(undefined4 *)(lVar9 + 0x1000) = *(undefined4 *)(&DAT_1803dc9c8 + lVar18);
  *(undefined4 *)(lVar9 + 0x1004) = uVar6;
  *(undefined4 *)(lVar9 + 0x1008) = uVar7;
  *(float *)(lVar9 + 0x100c) = fVar20;
  DAT_1803fa8e0 = *(undefined8 *)(&DAT_1803dc978 + lVar18);
  _DAT_1803fa8e8 = *(undefined8 *)(&DAT_1803dc980 + lVar18);
  DAT_1803fa8f0 = *(undefined8 *)(&DAT_1803dc9b8 + lVar18);
  _DAT_1803fa8f8 = *(undefined8 *)(&DAT_1803dc9c0 + lVar18);
  DAT_1803fa900 = *(undefined8 *)(&DAT_1803dca18 + lVar18);
  _DAT_1803fa908 = *(undefined8 *)(&DAT_1803dca20 + lVar18);
  DAT_1803fa910 = *(undefined8 *)(&DAT_1803dca28 + lVar18);
  _DAT_1803fa918 = (&DAT_1803dca30)[lVar16 * 0x19];
  _DAT_1803fa920 = *(undefined8 *)(&DAT_1803dc9c8 + lVar18);
  _DAT_1803fa928 = *(undefined8 *)(&DAT_1803dc9d0 + lVar18);
  _DAT_1803fa930 = *(undefined8 *)(&DAT_1803dc9e8 + lVar18);
  _DAT_1803fa938 = *(undefined8 *)(&DAT_1803dc9f0 + lVar18);
  _DAT_1803fa940 = *(undefined8 *)(&DAT_1803dc9f8 + lVar18);
  _DAT_1803fa948 = *(undefined8 *)(&DAT_1803dca00 + lVar18);
  _DAT_1803fa950 = *(undefined8 *)(&DAT_1803dca08 + lVar18);
  _DAT_1803fa958 = *(undefined8 *)(&DAT_1803dca10 + lVar18);
  return;
}


