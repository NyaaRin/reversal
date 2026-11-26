// 0x180067c80  FUN_180067c80
// size=242 thunk=false
// signature: undefined FUN_180067c80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180067c80(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0xffff;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = FUN_1802d7a0c(param_2,local_38,3,0xffffffff);
  param_1[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((local_28 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_1[1] = uVar1;
    if ((local_28 >> 10 & 1) != 0) {
      if (local_24 == -0x5ffffff4) {
        *param_1 = 4;
        return param_1;
      }
      if (local_24 == -0x5ffffffd) {
        *param_1 = 10;
        return param_1;
      }
    }
    uVar1 = (local_28 & 0x10 | 0x20) >> 4;
    goto LAB_180067d55;
  }
  param_1[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar2 = uVar1 == 0x35;
LAB_180067d4a:
      if (!bVar2) {
        uVar1 = 0;
        goto LAB_180067d55;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar2 = uVar1 == 0x10b;
    goto LAB_180067d4a;
  }
  uVar1 = 1;
LAB_180067d55:
  *param_1 = uVar1;
  return param_1;
}


