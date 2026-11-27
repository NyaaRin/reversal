// 0x1800b5be0  FUN_1800b5be0
// size=597 thunk=false
// signature: undefined FUN_1800b5be0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b5be0(void *param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  BOOL BVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [336];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  if (((((DAT_1804097a4 == '\0') && (sVar2 = _fdclass(*param_2), sVar2 < 1)) &&
       (sVar2 = _fdclass(param_2[1]), sVar2 < 1)) &&
      ((param_1 != (void *)0x0 && (BVar3 = IsBadReadPtr(param_1,8), BVar3 == 0)))) &&
     ((lVar4 = FUN_1800b58b0(), lVar4 != 0 &&
      ((lVar4 = FUN_1800b5940(param_1,lVar4), lVar4 != 0 &&
       (cVar1 = FUN_1800b59b0(lVar4,local_188), cVar1 != '\0')))))) {
    uVar8 = FUN_1802d3e00(param_2[1]);
    uVar9 = FUN_1802d3e00(*param_2);
    iVar5 = -1;
    if (-1 < DAT_1803e7c84) {
      cVar1 = FUN_1800b5a40(local_188,DAT_1803e7c84,uVar8,uVar9);
      if (cVar1 != '\0') {
        DAT_1804097a4 = 1;
        DAT_18040979c = 0;
        FUN_180014410("[LBY] field base +0x%X verified against live sample\n");
        return;
      }
      if (-1 < DAT_1803e7c84) {
        DAT_18040979c = DAT_18040979c + 1;
        if (DAT_18040979c < 0x28) {
          return;
        }
        FUN_180014410("[LBY] known field base +0x%X failed %d live samples - rescanning\n");
        DAT_1803e7c84 = -1;
      }
    }
    iVar7 = 0x10;
    iVar6 = 0;
    do {
      cVar1 = FUN_1800b5a40(local_188,iVar7,uVar8,uVar9);
      if ((cVar1 != '\0') && (iVar6 = iVar6 + 1, iVar5 < 0)) {
        iVar5 = iVar7;
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x141);
    if ((-1 < iVar5) && (iVar6 == 1)) {
      if (iVar5 == DAT_1803e7c80) {
        uVar10 = FUN_180022110(uVar8,DAT_180409798);
        if ((DAT_180380f00 <= (float)(uVar10 & _DAT_1803817c0)) &&
           (DAT_1804097a0 = DAT_1804097a0 + 1, DAT_180409798 = uVar8, 2 < DAT_1804097a0)) {
          DAT_1804097a4 = '\x01';
          DAT_18040979c = 0;
          DAT_1803e7c84 = iVar5;
          FUN_180014410("[LBY] field base +0x%X found by scan (eyeYaw/eyePitch/goalFeet/curFeet)\n",
                        iVar5);
        }
      }
      else {
        DAT_1804097a0 = 1;
        DAT_1803e7c80 = iVar5;
        DAT_180409798 = uVar8;
      }
    }
  }
  return;
}


