// 0x1801eca80  FUN_1801eca80
// size=88 thunk=false
// signature: undefined FUN_1801eca80()
// status: ok


ulonglong FUN_1801eca80(longlong *param_1,int param_2)

{
  undefined8 *lp;
  FARPROC lpfn;
  BOOL BVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  uVar2 = (ulonglong)param_2;
  if (param_1 == (longlong *)0x0) {
    return (ulonglong)(uint7)(int7)(int3)((uint)param_2 >> 8) << 8;
  }
  if (*param_1 != 0) {
    lp = (undefined8 *)(*param_1 + uVar2 * 8);
    BVar1 = IsBadReadPtr(lp,8);
    uVar2 = CONCAT44(extraout_var,BVar1);
    if (BVar1 == 0) {
      lpfn = (FARPROC)*lp;
      if (lpfn != (FARPROC)0x0) {
        BVar1 = IsBadCodePtr(lpfn);
        uVar2 = CONCAT44(extraout_var_00,BVar1);
        if (BVar1 == 0) {
          return CONCAT71((int7)(uVar2 >> 8),1);
        }
      }
      return uVar2 & 0xffffffffffffff00;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


