// 0x1800ee540  FUN_1800ee540
// size=222 thunk=false
// signature: undefined FUN_1800ee540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee540(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char *_Str2;
  char *_Str1;
  int iVar3;
  ulonglong *puVar4;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18 = 0;
    puVar4 = (ulonglong *)&local_18;
    local_14 = 2;
    do {
      plVar2 = (longlong *)FUN_1800ebf80((int)*puVar4);
      if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
        _Str2 = (char *)(**(code **)(*plVar2 + 0x158))(plVar2,1);
        if (_Str2 == (char *)0x0) {
          return 0;
        }
        iVar3 = 1;
        do {
          _Str1 = (char *)FUN_1802d2b60(iVar3);
          iVar1 = _stricmp(_Str1,_Str2);
          if (iVar1 == 0) {
            (**(code **)(*plVar2 + 0xf0))(plVar2,(double)iVar3);
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0xff);
        return 0;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != &local_10);
  }
  return 0;
}


