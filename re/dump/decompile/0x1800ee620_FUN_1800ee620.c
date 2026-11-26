// 0x1800ee620  FUN_1800ee620
// size=248 thunk=false
// signature: undefined FUN_1800ee620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee620(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  double dVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    return 0;
  }
  puVar4 = (ulonglong *)&local_18;
  local_18 = 0;
  local_14 = 2;
  while ((plVar3 = (longlong *)FUN_1800ebf80((int)*puVar4), plVar3 == (longlong *)0x0 ||
         (plVar3[1] != param_1))) {
    puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    if (puVar4 == &local_10) {
      return 0;
    }
  }
  dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 200))(plVar3,2);
  }
  if (0x1fe < (int)dVar5 - 1U) {
    return 0;
  }
  (&DAT_1803ff990)[(int)dVar5] = uVar2;
  return 0;
}


