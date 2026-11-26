// 0x1802081c0  FUN_1802081c0
// size=344 thunk=false
// signature: undefined FUN_1802081c0()
// status: ok


ulonglong FUN_1802081c0(longlong *param_1)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined *local_10;
  
  if ((param_1 == (longlong *)0x0) || (BVar2 = IsBadReadPtr(param_1,8), BVar2 != 0)) {
    uVar5 = 0;
  }
  else {
    lVar1 = *param_1;
    local_10 = &DAT_1803e8860;
    local_28 = lVar1;
    iVar3 = _Mtx_lock(&DAT_1803e8860);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
    }
    if (DAT_1803e88ac == 0x7fffffff) {
      DAT_1803e88ac = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_20 = 0xcbf29ce484222325;
    uVar5 = 0;
    for (local_18 = uVar5; local_18 < 8; local_18 = local_18 + 1) {
      local_20 = (local_20 ^ *(byte *)((longlong)&local_28 + local_18)) * 0x100000001b3;
    }
    plVar4 = (longlong *)(DAT_180458ab8 + (DAT_180458ad0 & local_20) * 0x10);
    lVar6 = plVar4[1];
    if (lVar6 != DAT_180458aa8) {
      for (; lVar1 != *(longlong *)(lVar6 + 0x10); lVar6 = *(longlong *)(lVar6 + 8)) {
        if (lVar6 == *plVar4) goto LAB_1802082f7;
      }
      if (lVar6 != DAT_180458aa8) {
        uVar5 = *(ulonglong *)(lVar6 + 0x18);
      }
    }
LAB_1802082f7:
    local_28 = DAT_180458aa8;
    _Mtx_unlock(&DAT_1803e8860);
  }
  return uVar5;
}


