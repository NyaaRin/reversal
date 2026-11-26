// 0x180239dc0  FUN_180239dc0
// size=452 thunk=false
// signature: undefined FUN_180239dc0()
// status: ok


void FUN_180239dc0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    lVar3 = param_2 - uVar1;
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      local_38 = -((~uVar1 >> 5) * 4 + 4);
    }
    else {
      local_38 = (uVar1 >> 5) * 4;
    }
    local_38 = *param_1 + local_38;
    local_30 = (ulonglong)((uint)uVar1 & 0x1f);
    uVar1 = FUN_180239b60(param_1,&local_38,lVar3);
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      local_28 = -((~uVar1 >> 5) * 4 + 4);
    }
    else {
      local_28 = (uVar1 >> 5) * 4;
    }
    local_28 = *param_1 + local_28;
    if (lVar3 != 0) {
      uVar2 = (uint)uVar1 & 0x1f;
      local_20 = (ulonglong)uVar2;
      if ((lVar3 < 0) && (local_20 < (ulonglong)-lVar3)) {
        local_38 = -((~(local_20 + lVar3) >> 5) * 4 + 4);
      }
      else {
        local_38 = (local_20 + lVar3 >> 5) * 4;
      }
      local_38 = local_28 + local_38;
      local_30 = (ulonglong)(uVar2 + (int)lVar3 & 0x1f);
      FUN_18023b1d0(&local_28,&local_38,0);
      return;
    }
  }
  else if (param_2 < uVar1) {
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      local_28 = -((~uVar1 >> 5) * 4 + 4);
    }
    else {
      local_28 = (uVar1 >> 5) * 4;
    }
    local_28 = *param_1 + local_28;
    local_20 = (ulonglong)((uint)uVar1 & 0x1f);
    if (((longlong)param_2 < 0) && (param_2 != 0)) {
      local_38 = -((~param_2 >> 5) * 4 + 4);
    }
    else {
      local_38 = (param_2 >> 5) * 4;
    }
    local_38 = *param_1 + local_38;
    local_30 = (ulonglong)((uint)param_2 & 0x1f);
    FUN_18023c7e0(param_1,local_18,&local_38,&local_28);
  }
  return;
}


