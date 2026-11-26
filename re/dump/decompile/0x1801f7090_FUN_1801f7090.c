// 0x1801f7090  FUN_1801f7090
// size=167 thunk=false
// signature: undefined FUN_1801f7090()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801f7090(int *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803fa490 == (code *)0x0) {
      return 0;
    }
  }
  else if (DAT_1803fa545 != '\0') {
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_18,&local_14);
    *param_1 = local_18 >> 1;
    param_1[1] = local_14 >> 1;
    return 1;
  }
  uVar1 = (*DAT_1803fa490)();
  return uVar1;
}


