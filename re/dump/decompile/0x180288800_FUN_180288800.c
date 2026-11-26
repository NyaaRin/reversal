// 0x180288800  FUN_180288800
// size=229 thunk=false
// signature: undefined FUN_180288800()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180288800(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1802671a0(param_4,"Pos=%i,%i",local_28,local_24);
  if (iVar1 == 2) {
    *(undefined2 *)(param_3 + 4) = local_28[0];
    *(undefined2 *)(param_3 + 6) = local_24[0];
  }
  else {
    iVar1 = FUN_1802671a0(param_4,"Size=%i,%i",local_28,local_24);
    if (iVar1 == 2) {
      *(undefined2 *)(param_3 + 8) = local_28[0];
      *(undefined2 *)(param_3 + 10) = local_24[0];
    }
    else {
      iVar1 = FUN_1802671a0(param_4,"Collapsed=%d",local_20);
      if (iVar1 == 1) {
        *(bool *)(param_3 + 0xc) = local_20[0] != 0;
      }
      else {
        iVar1 = FUN_1802671a0(param_4,"IsChild=%d",local_20);
        if (iVar1 == 1) {
          *(bool *)(param_3 + 0xd) = local_20[0] != 0;
        }
      }
    }
  }
  return;
}


