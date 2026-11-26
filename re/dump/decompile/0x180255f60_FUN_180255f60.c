// 0x180255f60  FUN_180255f60
// size=713 thunk=false
// signature: undefined FUN_180255f60()
// status: ok


ulonglong FUN_180255f60(longlong *param_1,ulonglong *param_2,char param_3)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = *param_1;
  uVar5 = *param_2;
  uVar4 = (param_1[1] - lVar6 >> 5) * -0x5555555555555555;
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  uVar4 = param_2[1];
  puVar2 = *(ushort **)(uVar5 * 0x60 + lVar6);
  lVar6 = *(longlong *)(uVar5 * 0x60 + 8 + lVar6) - (longlong)puVar2;
  if (uVar4 != lVar6 >> 4) {
    if (uVar4 == 0) {
      if (lVar6 == 0) {
        return 0;
      }
      if (param_3 == '\0') {
        return 1;
      }
      uVar1 = *puVar2;
      if (uVar1 < 0x7f) {
        if ((uVar1 | 0x20) - 0x61 < 0x1a) {
          return 1;
        }
        if (uVar1 - 0x30 < 10) {
          return 1;
        }
        if (uVar1 != 0x5f) {
          return 0;
        }
        return 1;
      }
      cVar3 = FUN_180260600(lVar6,uVar1);
      if (cVar3 != '\0') {
        return 1;
      }
      cVar3 = FUN_180260690();
    }
    else {
      uVar1 = puVar2[uVar4 * 8 + -8];
      uVar7 = (uint)puVar2[uVar4 * 8];
      if (param_3 == '\0') {
        if (uVar7 < 0x7f) {
          if (((uVar7 | 0x20) - 0x61 < 0x1a) || ((uVar7 - 0x30 < 10 || (uVar7 == 0x5f)))) {
LAB_180256116:
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
        }
        else {
          cVar3 = FUN_180260600(lVar6,uVar7);
          if ((cVar3 != '\0') || (cVar3 = FUN_180260690(), cVar3 != '\0')) goto LAB_180256116;
        }
        cVar3 = FUN_18025f490(uVar7);
        if (cVar3 != '\0') {
          uVar5 = FUN_18025f490(uVar1);
          return uVar5 ^ 1;
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
      }
      else {
        if (uVar1 < 0x7f) {
          if ((uVar1 | 0x20) - 0x61 < 0x1a) {
            return 0;
          }
          if (uVar1 - 0x30 < 10) {
            return 0;
          }
          if (uVar1 == 0x5f) {
            return 0;
          }
        }
        else {
          cVar3 = FUN_180260600(lVar6,uVar1);
          if (cVar3 != '\0') {
            return 0;
          }
          cVar3 = FUN_180260690();
          if (cVar3 != '\0') {
            return 0;
          }
        }
        if (uVar7 < 0x7f) {
          if ((uVar7 | 0x20) - 0x61 < 0x1a) {
            return 1;
          }
          if (uVar7 - 0x30 < 10) {
            return 1;
          }
          if (uVar7 != 0x5f) {
            return 0;
          }
          return 1;
        }
        cVar3 = FUN_180260600();
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = FUN_180260690();
      }
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}


