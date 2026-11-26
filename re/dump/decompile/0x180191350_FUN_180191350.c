// 0x180191350  FUN_180191350
// size=159 thunk=false
// signature: undefined FUN_180191350()
// status: ok


void * FUN_180191350(void)

{
  undefined8 *lp;
  BOOL BVar1;
  void *pvVar2;
  
  if (DAT_1803fa360 != (longlong *)0x0) {
    BVar1 = IsBadReadPtr(DAT_1803fa360,8);
    if ((BVar1 == 0) && (*DAT_1803fa360 != 0)) {
      lp = (undefined8 *)(*DAT_1803fa360 + -8);
      BVar1 = IsBadReadPtr(lp,8);
      if ((BVar1 == 0) && (pvVar2 = (void *)*lp, pvVar2 != (void *)0x0)) {
        BVar1 = IsBadReadPtr(pvVar2,0xc);
        if ((BVar1 == 0) && (*(uint *)((longlong)pvVar2 + 4) < 0x200001)) {
          pvVar2 = (void *)((longlong)DAT_1803fa360 - (ulonglong)*(uint *)((longlong)pvVar2 + 4));
          BVar1 = IsBadReadPtr(pvVar2,8);
          if (BVar1 != 0) {
            pvVar2 = (void *)0x0;
          }
          return pvVar2;
        }
      }
    }
  }
  return (void *)0x0;
}


