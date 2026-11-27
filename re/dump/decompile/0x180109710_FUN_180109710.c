// 0x180109710  FUN_180109710
// size=435 thunk=false
// signature: undefined FUN_180109710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180109710(longlong *param_1)

{
  short sVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  uint *local_38;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if ((param_1 != (longlong *)0x0) && (DAT_1803fa668 != (longlong *)0x0)) {
    local_38 = local_1c;
    local_1c[2] = 0;
    local_1c[1] = 0;
    local_20 = 0;
    local_1c[0] = 0;
    (**(code **)(*param_1 + 0x128))(param_1,local_1c + 2,local_1c + 1,&local_20);
    local_28 = 0;
    local_24 = 0;
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_28,&local_24);
    if (((0 < local_28) &&
        (((0 < (int)local_24 && (local_20 == local_28)) && (local_1c[0] == local_24)))) &&
       ((((DAT_1803fa680 == (longlong *)0x0 ||
          (lVar2 = (**(code **)(*DAT_1803fa680 + 0x68))(), lVar2 == 0)) ||
         (sVar1 = _fdclass(DAT_1803db524), 0 < sVar1)) ||
        ((fVar5 = *(float *)(lVar2 + 0x44) - DAT_1803db528,
         fVar4 = *(float *)(lVar2 + 0x40) - DAT_1803db524,
         fVar3 = *(float *)(lVar2 + 0x48) - DAT_1803db52c,
         fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 <= DAT_180380bb0 &&
         ((float)((uint)(*(float *)(lVar2 + 0x38) - DAT_1803db51c) & _DAT_1803817c0) <=
          DAT_180380ac0)))))) {
      lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      if (lVar2 == 0) {
        DAT_1804096ac = '\x01';
      }
      else if (DAT_180401638 == '\0') {
        if (DAT_1804096ac != '\0') {
          return 0;
        }
        DAT_1804096b4 = DAT_1804096b4 + 1;
        if (DAT_1804096b4 != 400) {
          return 0;
        }
        DAT_180401638 = '\x01';
        FUN_180014410(
                     "[GLOW] main-view test: back buffer never bound in 400 draws - falling back to viewport + camera only\n"
                     );
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


