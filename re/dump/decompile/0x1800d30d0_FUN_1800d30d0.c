// 0x1800d30d0  FUN_1800d30d0
// size=133 thunk=false
// signature: undefined FUN_1800d30d0()
// status: ok


bool FUN_1800d30d0(longlong *param_1)

{
  BOOL BVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    BVar1 = IsBadReadPtr(param_1,8);
    if (BVar1 == 0) {
      BVar1 = IsBadReadPtr((void *)*param_1,8);
      if (BVar1 == 0) {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
        iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
        if (0xffe < iVar2 - 1U) {
          return false;
        }
        if ((DAT_1803fa360 != (longlong *)0x0) &&
           (plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar2),
           plVar3 != param_1)) {
          return false;
        }
        iVar2 = FUN_18001c680(param_1);
        return 0 < iVar2;
      }
    }
  }
  return false;
}


