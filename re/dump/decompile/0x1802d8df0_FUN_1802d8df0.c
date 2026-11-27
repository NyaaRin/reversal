// 0x1802d8df0  FUN_1802d8df0
// size=667 thunk=false
// signature: undefined FUN_1802d8df0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001802d8edb) */
/* WARNING: Removing unreachable block (ram,0x0001802d8ecb) */
/* WARNING: Removing unreachable block (ram,0x0001802d8ea6) */
/* WARNING: Removing unreachable block (ram,0x0001802d8e2a) */
/* WARNING: Removing unreachable block (ram,0x0001802d8e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802d8df0(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_1803da518 = 0x8000;
    _DAT_1803da520 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1803f8f94 = DAT_1803f8f94 | 1;
    }
  }
  uVar11 = 0;
  uVar8 = 0;
  if (*piVar1 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1803f8f94 = DAT_1803f8f94 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar8 = *(uint *)(lVar4 + 4);
    }
  }
  DAT_1803da510 = 1;
  DAT_1803da514 = 2;
  uVar9 = DAT_1803da528 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1803da510 = 2;
    DAT_1803da514 = 6;
    uVar9 = DAT_1803da528 & 0xffffffffffffffee;
  }
  DAT_1803da528 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6)) {
      DAT_1803da510 = 3;
      uVar5 = DAT_1803da514 | 8;
      uVar7 = DAT_1803da528;
      if ((uVar12 & 0x20) != 0) {
        DAT_1803da510 = 5;
        uVar5 = DAT_1803da514 | 0x28;
        uVar7 = DAT_1803da528 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_1803da514 = DAT_1803da514 | 0x68;
          DAT_1803da510 = 6;
          uVar5 = DAT_1803da514;
          uVar7 = DAT_1803da528 & 0xffffffffffffffd9;
        }
      }
      DAT_1803da528 = uVar7;
      DAT_1803da514 = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_1803da528 = DAT_1803da528 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_1803f8f98 = uVar8 & 0x400ff;
        DAT_1803da528 = DAT_1803da528 & ~((ulonglong)(uVar8 >> 0x10 & 6) | 0x1000029);
        if (1 < (byte)_DAT_1803f8f98) {
          DAT_1803da528 = DAT_1803da528 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_1803da528 = DAT_1803da528 & 0xffffffffffffff7f;
    }
  }
  return 0;
}


