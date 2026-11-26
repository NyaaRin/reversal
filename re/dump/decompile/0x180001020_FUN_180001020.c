// 0x180001020  FUN_180001020
// size=1456 thunk=false
// signature: undefined FUN_180001020()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001020(void)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar5 = 0;
  do {
    uVar3 = (uint)uVar5;
    uVar2 = 0;
    lVar8 = uVar5 * 0x21;
    uVar6 = uVar3 + 1;
    uVar7 = (&DAT_18033d650)[uVar3 & 0x1f] - 1;
    do {
      iVar1 = (int)uVar2;
      (&DAT_1803f92a0)[uVar5 * 0x21 + uVar2] = uVar7;
      if (iVar1 + uVar3 < 0x20) {
        (&DAT_1803f92a0)[uVar2 + lVar8] = -(&DAT_18033d650)[iVar1 + uVar3 & 0x1f] | uVar7;
      }
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 1U)] = uVar7;
      if (uVar6 + iVar1 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 1U)] =
             -(&DAT_18033d650)[uVar6 + iVar1 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 2 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 2U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 2U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 3 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 3U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 3U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 4 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 4U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 4U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 5 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 5U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 5U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = iVar1 + uVar3 + 6;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 6U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 6U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = iVar1 + uVar3 + 7;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 7U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 7U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 8 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 8U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 8U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 9 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 9U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 9U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 10 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 10U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 10U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7
        ;
      }
      uVar2 = (ulonglong)(iVar1 + 0xbU);
    } while (iVar1 + 0xbU < 0x21);
    uVar5 = (ulonglong)uVar6;
  } while (uVar6 < 0x20);
  _DAT_1803fa710 = 0;
  DAT_1803fa714 = 1;
  _DAT_1803fa718 = 3;
  DAT_1803fa71c = 7;
  _DAT_1803fa720 = 0xf;
  _DAT_1803fa724 = 0x1f;
  _DAT_1803fa728 = 0x3f;
  _DAT_1803fa72c = 0x7f;
  DAT_1803fa730 = 0xff;
  _DAT_1803fa734 = 0x1ff;
  _DAT_1803fa738 = 0x3ff;
  _DAT_1803fa73c = 0x7ff;
  _DAT_1803fa740 = 0xfff;
  _DAT_1803fa744 = 0x1fff;
  _DAT_1803fa748 = 0x3fff;
  DAT_1803fa74c = 0x7fff;
  _DAT_1803fa750 = 0xffff;
  _DAT_1803fa754 = 0x1ffff;
  _DAT_1803fa758 = 0x3ffff;
  _DAT_1803fa75c = 0x7ffff;
  _DAT_1803fa760 = 0xfffff;
  _DAT_1803fa764 = 0x1fffff;
  _DAT_1803fa768 = 0x3fffff;
  _DAT_1803fa76c = 0x7fffff;
  _DAT_1803fa770 = 0xffffff;
  _DAT_1803fa774 = 0x1ffffff;
  _DAT_1803fa778 = 0x3ffffff;
  _DAT_1803fa77c = 0x7ffffff;
  _DAT_1803fa780 = 0xfffffff;
  _DAT_1803fa784 = 0x1fffffff;
  _DAT_1803fa788 = 0x3fffffff;
  _DAT_1803fa78c = 0x7fffffff;
  DAT_1803fa790 = 0xffffffff;
  _DAT_1803fa690 = 1;
  _DAT_1803fa694 = 2;
  _DAT_1803fa698 = 4;
  _DAT_1803fa69c = 8;
  _DAT_1803fa6a0 = 0x10;
  _DAT_1803fa6a4 = 0x20;
  _DAT_1803fa6a8 = 0x40;
  _DAT_1803fa6ac = 0x80;
  _DAT_1803fa6b0 = 0x100;
  _DAT_1803fa6b4 = 0x200;
  _DAT_1803fa6b8 = 0x400;
  _DAT_1803fa6bc = 0x800;
  _DAT_1803fa6c0 = 0x1000;
  _DAT_1803fa6c4 = 0x2000;
  _DAT_1803fa6c8 = 0x4000;
  _DAT_1803fa6cc = 0x8000;
  _DAT_1803fa6d0 = 0x10000;
  _DAT_1803fa6d4 = 0x20000;
  _DAT_1803fa6d8 = 0x40000;
  _DAT_1803fa6dc = 0x80000;
  _DAT_1803fa6e0 = 0x100000;
  _DAT_1803fa6e4 = 0x200000;
  _DAT_1803fa6e8 = 0x400000;
  _DAT_1803fa6ec = 0x800000;
  _DAT_1803fa6f0 = 0x1000000;
  _DAT_1803fa6f4 = 0x2000000;
  _DAT_1803fa6f8 = 0x4000000;
  _DAT_1803fa6fc = 0x8000000;
  _DAT_1803fa700 = 0x10000000;
  _DAT_1803fa704 = 0x20000000;
  _DAT_1803fa708 = 0x40000000;
  _DAT_1803fa70c = 0x80000000;
  return;
}


