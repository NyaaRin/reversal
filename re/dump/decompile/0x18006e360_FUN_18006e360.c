// 0x18006e360  FUN_18006e360
// size=135 thunk=false
// signature: undefined FUN_18006e360()
// status: ok


int FUN_18006e360(longlong param_1,void *param_2)

{
  void *lp;
  int iVar1;
  BOOL BVar2;
  
  iVar1 = FUN_18006df10();
  if (0 < iVar1) {
    iVar1 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
    if (0x1000 < iVar1) {
      iVar1 = 0x1000;
    }
    BVar2 = IsBadReadPtr((void *)(param_1 + 0x60),8);
    if ((BVar2 == 0) && (lp = *(void **)(param_1 + 0x60), lp != (void *)0x0)) {
      BVar2 = IsBadReadPtr(lp,(longlong)iVar1);
      if (BVar2 == 0) {
        memcpy(param_2,lp,(longlong)iVar1);
        return iVar1;
      }
    }
  }
  return 0;
}


