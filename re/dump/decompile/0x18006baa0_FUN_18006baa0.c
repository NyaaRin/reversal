// 0x18006baa0  FUN_18006baa0
// size=263 thunk=false
// signature: undefined FUN_18006baa0()
// status: ok


ulonglong FUN_18006baa0(void *param_1)

{
  uint uVar1;
  uint *lp;
  BOOL BVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  
  if ((param_1 == (void *)0x0) || (BVar2 = IsBadReadPtr(param_1,0x81), BVar2 != 0)) {
    uVar3 = 0xffffffffffffffff;
  }
  else if (*(int *)((longlong)param_1 + 0x20) - 0x18U < 0xffffe9) {
    uVar1 = *(uint *)((longlong)param_1 + 0x44);
    if (uVar1 < 0x21) {
      bVar4 = (byte)uVar1;
      if (uVar1 == 0x20) {
        uVar5 = 0xffffffff;
      }
      else if (uVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (1 << (bVar4 & 0x1f)) - 1;
      }
      uVar5 = *(uint *)((longlong)param_1 + 0x40) & uVar5;
      if ((int)uVar1 < 0x18) {
        lp = *(uint **)((longlong)param_1 + 0x48);
        if ((((lp == (uint *)0x0) || (*(uint **)((longlong)param_1 + 0x50) == (uint *)0x0)) ||
            (*(uint **)((longlong)param_1 + 0x50) <= lp)) ||
           (BVar2 = IsBadReadPtr(lp,4), BVar2 != 0)) {
          return 0xffffffffffffffff;
        }
        uVar5 = ((1 << (0x18 - bVar4 & 0x1f)) - 1U & *lp) << (bVar4 & 0x3f) | uVar5;
      }
      uVar3 = (ulonglong)(uVar5 & 0xffffff);
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}


