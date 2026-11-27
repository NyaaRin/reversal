// 0x1800b6370  FUN_1800b6370
// size=184 thunk=false
// signature: undefined FUN_1800b6370()
// status: ok


ulonglong FUN_1800b6370(void *param_1,int param_2,float param_3)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  
  if (-1 < DAT_1803e7c84) {
    in_RAX = _fdclass(param_3);
    if (((((short)in_RAX < 1) && (DAT_180381428 <= param_3)) && (param_3 <= DAT_180381210)) &&
       (param_1 != (void *)0x0)) {
      BVar1 = IsBadReadPtr(param_1,8);
      in_RAX = CONCAT44(extraout_var,BVar1);
      if (BVar1 == 0) {
        lVar2 = FUN_1800b58b0();
        in_RAX = 0;
        if (lVar2 != 0) {
          lVar2 = FUN_1800b5940(param_1,lVar2);
          in_RAX = 0;
          if (lVar2 != 0) {
            uVar3 = FUN_1800b59a0((longlong)DAT_1803e7c84 + lVar2 + param_2 * 4,param_3);
            return uVar3;
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


