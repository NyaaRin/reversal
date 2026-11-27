// 0x18018a2e0  FUN_18018a2e0
// size=84 thunk=false
// signature: undefined FUN_18018a2e0()
// status: ok


ulonglong FUN_18018a2e0(longlong *param_1)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_1 != (longlong *)0x0) {
    BVar1 = IsBadReadPtr(param_1,8);
    in_RAX = CONCAT44(extraout_var,BVar1);
    if (BVar1 == 0) {
      BVar1 = IsBadReadPtr((void *)*param_1,8);
      in_RAX = CONCAT44(extraout_var_00,BVar1);
      if (BVar1 == 0) {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
        if (plVar2 == (longlong *)0x0) {
          return 1;
        }
        uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


