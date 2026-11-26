// 0x18006df50  FUN_18006df50
// size=294 thunk=false
// signature: undefined FUN_18006df50()
// status: ok


ulonglong FUN_18006df50(void *param_1)

{
  uint uVar1;
  uint *lp;
  BOOL BVar2;
  ulonglong uVar3;
  byte bVar4;
  
  if ((param_1 == (void *)0x0) || (BVar2 = IsBadReadPtr(param_1,0x81), BVar2 != 0)) {
    uVar3 = 0xffffffff;
  }
  else if (*(char *)((longlong)param_1 + 0x80) == '\0') {
    if ((*(int *)((longlong)param_1 + 0x20) - 0x18U < 0xffffe9) &&
       (*(char *)((longlong)param_1 + 0x30) == '\0')) {
      uVar1 = *(uint *)((longlong)param_1 + 0x44);
      if (uVar1 < 0x21) {
        bVar4 = (byte)uVar1;
        if (uVar1 == 0x20) {
          uVar3 = 0xffffffff;
        }
        else if (uVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (ulonglong)((1 << (bVar4 & 0x1f)) - 1);
        }
        uVar3 = *(uint *)((longlong)param_1 + 0x40) & uVar3;
        if ((int)uVar1 < 0x18) {
          lp = *(uint **)((longlong)param_1 + 0x48);
          if ((((lp == (uint *)0x0) || (*(uint **)((longlong)param_1 + 0x50) == (uint *)0x0)) ||
              (*(uint **)((longlong)param_1 + 0x50) <= lp)) ||
             (BVar2 = IsBadReadPtr(lp,4), BVar2 != 0)) {
            return 0xffffffff;
          }
          uVar3 = (ulonglong)((1 << (0x18 - bVar4 & 0x1f)) - 1U & *lp) << (bVar4 & 0x3f) | uVar3;
        }
        if ((char)uVar3 == '\0') {
          uVar3 = uVar3 >> 8 & 0xffff;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


