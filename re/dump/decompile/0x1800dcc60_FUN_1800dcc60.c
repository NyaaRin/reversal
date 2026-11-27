// 0x1800dcc60  FUN_1800dcc60
// size=1515 thunk=false
// signature: undefined FUN_1800dcc60()
// status: ok


void FUN_1800dcc60(ulonglong *param_1,double param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar10 = param_2 * DAT_180380d50 + DAT_180380d40;
  dVar3 = (double)((longlong)dVar10 + 2);
  if (1 < (ulonglong)dVar10) {
    dVar3 = dVar10;
  }
  dVar11 = dVar10 * DAT_180380d50 + DAT_180380d40;
  dVar10 = (double)((longlong)dVar11 + 0x40);
  if (0x3f < (ulonglong)dVar11) {
    dVar10 = dVar11;
  }
  dVar12 = dVar11 * DAT_180380d50 + DAT_180380d40;
  dVar11 = (double)((longlong)dVar12 + 0x200);
  if (0x1ff < (ulonglong)dVar12) {
    dVar11 = dVar12;
  }
  dVar12 = dVar12 * DAT_180380d50 + DAT_180380d40;
  if ((ulonglong)dVar12 < 0x20000) {
    dVar12 = (double)((longlong)dVar12 + 0x20000);
  }
  uVar2 = ((ulonglong)dVar3 >> 0x1f ^ (ulonglong)dVar3 & 0x1ffffc000) >> 0xe ^
          ((ulonglong)dVar3 & 0xfffffffffffffffe) << 0x12;
  uVar4 = ((ulonglong)dVar10 >> 0x13 ^ (ulonglong)dVar10 & 0x1ffffffff800) >> 0xb ^
          ((ulonglong)dVar10 & 0xffffffffffffffc0) << 0x1c;
  uVar6 = ((ulonglong)dVar11 >> 0x18 ^ (ulonglong)dVar11 & 0xffff000000) >> 0x18 ^
          ((ulonglong)dVar11 & 0xfffffffffffffe00) << 7;
  uVar7 = ((ulonglong)dVar12 >> 0x15 ^ (ulonglong)dVar12 & 0x7fffffc0000) >> 0x12 ^
          ((ulonglong)dVar12 & 0xfffffffffffe0000) << 8;
  uVar1 = (((ulonglong)dVar3 & 0x3ffffffffffe) >> 0xd ^ uVar2 & 0x1ffffc000) >> 0xe ^
          (uVar2 & 0xfffffffffffffffe) << 0x12;
  uVar4 = (uVar4 >> 0x13 ^ uVar4 & 0x1ffffffff800) >> 0xb ^ (uVar4 & 0xffffffffffffffc0) << 0x1c;
  uVar5 = (((ulonglong)dVar11 & 0x1fffffffffffe00) >> 0x11 ^ uVar6 & 0xffff000000) >> 0x18 ^
          (uVar6 & 0xfffffffffffffe00) << 7;
  uVar7 = (uVar7 >> 0x15 ^ uVar7 & 0x7fffffc0000) >> 0x12 ^ (uVar7 & 0xfffffffffffe0000) << 8;
  uVar8 = ((uVar2 & 0x3ffffffffffe) >> 0xd ^ uVar1 & 0x1ffffc000) >> 0xe ^
          (uVar1 & 0xfffffffffffffffe) << 0x12;
  uVar2 = (uVar4 >> 0x13 ^ uVar4 & 0x1ffffffff800) >> 0xb ^ (uVar4 & 0xffffffffffffffc0) << 0x1c;
  uVar4 = ((uVar6 & 0x1fffffffffffe00) >> 0x11 ^ uVar5 & 0xffff000000) >> 0x18 ^
          (uVar5 & 0xfffffffffffffe00) << 7;
  uVar6 = (uVar7 >> 0x15 ^ uVar7 & 0x7fffffc0000) >> 0x12 ^ (uVar7 & 0xfffffffffffe0000) << 8;
  uVar7 = ((uVar1 & 0x3ffffffffffe) >> 0xd ^ uVar8 & 0x1ffffc000) >> 0xe ^
          (uVar8 & 0xfffffffffffffffe) << 0x12;
  uVar9 = (uVar2 >> 0x13 ^ uVar2 & 0x1ffffffff800) >> 0xb ^ (uVar2 & 0xffffffffffffffc0) << 0x1c;
  uVar1 = ((uVar5 & 0x1fffffffffffe00) >> 0x11 ^ uVar4 & 0xffff000000) >> 0x18 ^
          (uVar4 & 0xfffffffffffffe00) << 7;
  uVar2 = (uVar6 >> 0x15 ^ uVar6 & 0x7fffffc0000) >> 0x12 ^ (uVar6 & 0xfffffffffffe0000) << 8;
  uVar5 = ((uVar8 & 0x3ffffffffffe) >> 0xd ^ uVar7 & 0x1ffffc000) >> 0xe ^
          (uVar7 & 0xfffffffffffffffe) << 0x12;
  uVar6 = (uVar9 >> 0x13 ^ uVar9 & 0x1ffffffff800) >> 0xb ^ (uVar9 & 0xffffffffffffffc0) << 0x1c;
  uVar8 = ((uVar4 & 0x1fffffffffffe00) >> 0x11 ^ uVar1 & 0xffff000000) >> 0x18 ^
          (uVar1 & 0xfffffffffffffe00) << 7;
  uVar2 = (uVar2 >> 0x15 ^ uVar2 & 0x7fffffc0000) >> 0x12 ^ (uVar2 & 0xfffffffffffe0000) << 8;
  uVar4 = ((uVar7 & 0x3ffffffffffe) >> 0xd ^ uVar5 & 0x1ffffc000) >> 0xe ^
          (uVar5 & 0xfffffffffffffffe) << 0x12;
  uVar6 = (uVar6 >> 0x13 ^ uVar6 & 0x1ffffffff800) >> 0xb ^ (uVar6 & 0xffffffffffffffc0) << 0x1c;
  uVar7 = ((uVar1 & 0x1fffffffffffe00) >> 0x11 ^ uVar8 & 0xffff000000) >> 0x18 ^
          (uVar8 & 0xfffffffffffffe00) << 7;
  uVar9 = (uVar2 >> 0x15 ^ uVar2 & 0x7fffffc0000) >> 0x12 ^ (uVar2 & 0xfffffffffffe0000) << 8;
  uVar1 = ((uVar5 & 0x3ffffffffffe) >> 0xd ^ uVar4 & 0x1ffffc000) >> 0xe ^
          (uVar4 & 0xfffffffffffffffe) << 0x12;
  uVar2 = (uVar6 >> 0x13 ^ uVar6 & 0x1ffffffff800) >> 0xb ^ (uVar6 & 0xffffffffffffffc0) << 0x1c;
  uVar5 = ((uVar8 & 0x1fffffffffffe00) >> 0x11 ^ uVar7 & 0xffff000000) >> 0x18 ^
          (uVar7 & 0xfffffffffffffe00) << 7;
  uVar6 = (uVar9 & 0x7fffffc0000 ^ uVar9 >> 0x15) >> 0x12 ^ (uVar9 & 0xfffffffffffe0000) << 8;
  uVar8 = (uVar1 & 0x1ffffc000 ^ (uVar4 & 0x3ffffffffffe) >> 0xd) >> 0xe ^
          (uVar1 & 0xfffffffffffffffe) << 0x12;
  uVar2 = (uVar2 & 0x1ffffffff800 ^ uVar2 >> 0x13) >> 0xb ^ (uVar2 & 0xffffffffffffffc0) << 0x1c;
  uVar4 = ((uVar7 & 0x1fffffffffffe00) >> 0x11 ^ uVar5 & 0xffff000000) >> 0x18 ^
          (uVar5 & 0xfffffffffffffe00) << 7;
  uVar6 = (uVar6 & 0x7fffffc0000 ^ uVar6 >> 0x15) >> 0x12 ^ (uVar6 & 0xfffffffffffe0000) << 8;
  uVar1 = (uVar8 & 0x1ffffc000 ^ (uVar1 & 0x3ffffffffffe) >> 0xd) >> 0xe ^
          (uVar8 & 0xfffffffffffffffe) << 0x12;
  uVar2 = (uVar2 & 0x1ffffffff800 ^ uVar2 >> 0x13) >> 0xb ^ (uVar2 & 0xffffffffffffffc0) << 0x1c;
  uVar5 = ((uVar5 & 0x1fffffffffffe00) >> 0x11 ^ uVar4 & 0xffff000000) >> 0x18 ^
          (uVar4 & 0xfffffffffffffe00) << 7;
  *param_1 = (uVar1 & 0x1ffffc000 ^ (uVar8 & 0x3ffffffffffe) >> 0xd) >> 0xe ^
             (uVar1 & 0xfffffffffffffffe) << 0x12;
  uVar1 = (uVar6 >> 0x15 ^ uVar6 & 0x7fffffc0000) >> 0x12 ^ (uVar6 & 0xfffffffffffe0000) << 8;
  param_1[1] = (uVar2 & 0x1ffffffff800 ^ uVar2 >> 0x13) >> 0xb ^
               (uVar2 & 0xffffffffffffffc0) << 0x1c;
  param_1[2] = ((uVar4 & 0x1fffffffffffe00) >> 0x11 ^ uVar5 & 0xffff000000) >> 0x18 ^
               (uVar5 & 0xfffffffffffffe00) << 7;
  param_1[3] = (uVar1 >> 0x15 ^ uVar1 & 0x7fffffc0000) >> 0x12 ^ (uVar1 & 0xfffffffffffe0000) << 8;
  return;
}


