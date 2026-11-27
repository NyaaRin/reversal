// 0x180256230  FUN_180256230
// size=684 thunk=false
// signature: undefined FUN_180256230()
// status: ok


ulonglong FUN_180256230(longlong *param_1,ulonglong *param_2,char param_3)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  lVar5 = *param_1;
  uVar6 = *param_2;
  uVar4 = (param_1[1] - lVar5 >> 5) * -0x5555555555555555;
  if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  uVar4 = param_2[1];
  if (uVar4 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(uVar6 * 0x60 + lVar5);
  lVar5 = *(longlong *)(uVar6 * 0x60 + 8 + lVar5) - lVar2;
  uVar6 = lVar5 >> 4;
  if (uVar4 == uVar6) {
    if (lVar5 == 0) {
      return 0;
    }
    if (param_3 == '\0') {
      return 1;
    }
    uVar1 = *(ushort *)(lVar2 + -0x10 + uVar6 * 0x10);
    if (uVar1 < 0x7f) {
      if ((uVar1 | 0x20) - 0x61 < 0x1a) {
        return 1;
      }
      if (9 < uVar1 - 0x30) {
        if (uVar1 != 0x5f) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    cVar3 = FUN_180260600(uVar4,uVar1);
    if (cVar3 != '\0') {
      return 1;
    }
    cVar3 = FUN_180260690();
    if (cVar3 == '\0') {
      return 0;
    }
    return 1;
  }
  uVar7 = (uint)*(ushort *)(lVar2 + -0x10 + uVar4 * 0x10);
  uVar1 = *(ushort *)(lVar2 + uVar4 * 0x10);
  if (param_3 != '\0') {
    if (uVar7 < 0x7f) {
      if (((0x19 < (uVar7 | 0x20) - 0x61) && (9 < uVar7 - 0x30)) && (uVar7 != 0x5f)) {
        return 0;
      }
    }
    else {
      cVar3 = FUN_180260600(uVar4 * 2,uVar7);
      if ((cVar3 == '\0') && (cVar3 = FUN_180260690(), cVar3 == '\0')) {
        return 0;
      }
    }
    if (0x7e < uVar1) {
      cVar3 = FUN_180260600();
      if (cVar3 != '\0') {
        return 0;
      }
      cVar3 = FUN_180260690();
      if (cVar3 == '\0') {
        return 1;
      }
      return 0;
    }
    if ((uVar1 | 0x20) - 0x61 < 0x1a) {
      return 0;
    }
    if (uVar1 - 0x30 < 10) {
      return 0;
    }
    if (uVar1 != 0x5f) {
      return 1;
    }
    return 0;
  }
  if (uVar7 < 0x7f) {
    if ((0x19 < (uVar7 | 0x20) - 0x61) && ((9 < uVar7 - 0x30 && (uVar7 != 0x5f)))) {
LAB_180256415:
      cVar3 = FUN_18025f490(uVar7);
      if (cVar3 != '\0') {
        uVar6 = FUN_18025f490(uVar1);
        return uVar6 ^ 1;
      }
      if (uVar1 < 0x7f) {
        if ((uVar1 | 0x20) - 0x61 < 0x1a) {
          return 1;
        }
        if (uVar1 - 0x30 < 10) {
          return 1;
        }
        if (uVar1 == 0x5f) {
          return 1;
        }
      }
      else {
        cVar3 = FUN_180260600();
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = FUN_180260690();
        if (cVar3 != '\0') {
          return 1;
        }
      }
      cVar3 = FUN_18025f490(uVar1);
      if (cVar3 != '\0') {
        return 1;
      }
      return 0;
    }
  }
  else {
    cVar3 = FUN_180260600(uVar4 * 2,uVar7);
    if ((cVar3 == '\0') && (cVar3 = FUN_180260690(), cVar3 == '\0')) goto LAB_180256415;
  }
  if (uVar1 < 0x7f) {
    if (((0x19 < (uVar1 | 0x20) - 0x61) && (9 < uVar1 - 0x30)) && (uVar1 != 0x5f)) {
      return 1;
    }
  }
  else {
    cVar3 = FUN_180260600();
    if ((cVar3 == '\0') && (cVar3 = FUN_180260690(), cVar3 == '\0')) {
      return 1;
    }
  }
  return 0;
}


