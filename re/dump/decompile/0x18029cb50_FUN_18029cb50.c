// 0x18029cb50  FUN_18029cb50
// size=156 thunk=false
// signature: undefined FUN_18029cb50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18029cb50(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  fVar1 = *(float *)(param_1 + 0x14);
  if ((DAT_180381148 <= fVar1) || ((*(uint *)(param_1 + 0x4c) & 0x10000000) != 0)) {
    local_18[0] = 0;
    lVar2 = FUN_18029c810(fVar1,param_2,local_18);
    if (lVar2 == 0) {
      return local_18[0];
    }
  }
  else {
    lVar2 = FUN_18029c810(fVar1,param_2,0);
    if (lVar2 == 0) {
      return *(undefined4 *)(param_1 + 0x10);
    }
  }
  return *(undefined4 *)(lVar2 + 4);
}


