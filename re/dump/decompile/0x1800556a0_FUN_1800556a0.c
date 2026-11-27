// 0x1800556a0  FUN_1800556a0
// size=201 thunk=false
// signature: undefined FUN_1800556a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800556a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else {
    if (((DAT_1803fa668 != (longlong *)0x0) &&
        (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\0')) &&
       (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\0')) {
      pcVar1 = *(code **)(*plVar4 + 0xf8);
      uVar3 = (**(code **)(*DAT_1803fa668 + 0x228))(DAT_1803fa668,local_28,local_38);
      (*pcVar1)(plVar4,uVar3);
      return 1;
    }
    (**(code **)(*plVar4 + 0xe0))(plVar4);
    uVar5 = 1;
  }
  return uVar5;
}


