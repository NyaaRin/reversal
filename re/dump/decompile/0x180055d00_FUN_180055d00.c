// 0x180055d00  FUN_180055d00
// size=203 thunk=false
// signature: undefined FUN_180055d00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180055d00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_58 [32];
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    uStack_30 = 0;
    local_28 = _DAT_1803814b0;
    uStack_20 = _UNK_1803814b8;
    local_38 = (undefined8 ***)0x0;
    cVar1 = FUN_1800542b0(&local_38);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xe0))();
      FUN_18020e450(&local_38);
      uVar3 = 1;
    }
    else {
      pppuVar4 = &local_38;
      if (0xf < uStack_20) {
        pppuVar4 = (undefined8 ***)local_38;
      }
      (**(code **)(*plVar2 + 0xe8))(plVar2,pppuVar4,0);
      FUN_18020e450(&local_38);
      uVar3 = 1;
    }
  }
  return uVar3;
}


