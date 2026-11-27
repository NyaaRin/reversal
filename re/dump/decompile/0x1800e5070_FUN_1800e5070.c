// 0x1800e5070  FUN_1800e5070
// size=231 thunk=false
// signature: undefined FUN_1800e5070()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e5070(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_188 [32];
  char local_168 [127];
  undefined1 local_e9;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);
    memset(local_168,0,0x144);
    if ((((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),
        cVar1 != '\0')) && (local_168[0] != '\0')) {
      local_e9 = 0;
      (**(code **)(*plVar2 + 0xe8))(plVar2,local_168,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    uVar3 = 1;
  }
  return uVar3;
}


