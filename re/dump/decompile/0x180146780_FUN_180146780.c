// 0x180146780  FUN_180146780
// size=170 thunk=false
// signature: undefined FUN_180146780()
// status: ok


ulonglong FUN_180146780(longlong param_1)

{
  void *lp;
  BOOL BVar1;
  undefined8 in_RAX;
  uint7 uVar3;
  undefined8 *lp_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  
  uVar3 = (uint7)((ulonglong)in_RAX >> 8);
  if (param_1 == 0) {
    return (ulonglong)uVar3 << 8;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    uVar2 = (ulonglong)uVar3 << 8;
  }
  else {
    lp_00 = (undefined8 *)(**(code **)(*DAT_1803fa668 + 0x240))();
    uVar2 = 0;
    if (lp_00 != (undefined8 *)0x0) {
      BVar1 = IsBadReadPtr(lp_00,8);
      uVar2 = CONCAT44(extraout_var,BVar1);
      if (BVar1 == 0) {
        lp = (void *)*lp_00;
        if (lp != (void *)0x0) {
          BVar1 = IsBadReadPtr(lp,0x148);
          uVar2 = CONCAT44(extraout_var_00,BVar1);
          if (BVar1 == 0) {
            uVar2 = 0;
            if (*(code **)((longlong)lp + 0x140) != (code *)0x0) {
              uVar2 = (**(code **)((longlong)lp + 0x140))(lp_00,param_1,1,0);
              return uVar2;
            }
          }
        }
        return uVar2 & 0xffffffffffffff00;
      }
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}


