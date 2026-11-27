// 0x180118760  FUN_180118760
// size=155 thunk=false
// signature: undefined FUN_180118760()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180118760(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint7 uVar3;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  uVar3 = (uint7)((ulonglong)DAT_1803fa580 >> 8);
  if ((param_2 != (longlong *)0x0) && (param_2 == DAT_1803fa580)) {
    return CONCAT71(uVar3,1);
  }
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa580 == (longlong *)0x0)) {
    lVar2 = (ulonglong)uVar3 << 8;
  }
  else {
    local_18 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x130))(param_1,0,&local_18);
    if ((iVar1 < 0) || (local_18 != DAT_1803fa580)) {
      lVar2 = 0;
    }
    else {
      lVar2 = 1;
    }
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return lVar2;
}


