// 0x18006cb90  FUN_18006cb90
// size=135 thunk=false
// signature: undefined FUN_18006cb90()
// status: ok


ulonglong FUN_18006cb90(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *lp;
  BOOL BVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 *lp_00;
  undefined4 extraout_var_01;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    BVar2 = IsBadReadPtr(param_1,8);
    in_RAX = CONCAT44(extraout_var,BVar2);
    if (BVar2 == 0) {
      lp = (void *)*param_1;
      if (lp != (void *)0x0) {
        BVar2 = IsBadReadPtr(lp,0x18);
        in_RAX = CONCAT44(extraout_var_00,BVar2);
        if (BVar2 == 0) {
          lp_00 = (undefined4 *)(**(code **)((longlong)lp + 0x10))(param_1);
          uVar3 = 0;
          if (lp_00 != (undefined4 *)0x0) {
            BVar2 = IsBadReadPtr(lp_00,4);
            uVar3 = CONCAT44(extraout_var_01,BVar2);
            if (BVar2 == 0) {
              uVar1 = *lp_00;
              *param_2 = uVar1;
              return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
            }
          }
          return uVar3 & 0xffffffffffffff00;
        }
      }
      return in_RAX & 0xffffffffffffff00;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


