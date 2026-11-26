// 0x1800ed2c0  FUN_1800ed2c0
// size=333 thunk=false
// signature: undefined FUN_1800ed2c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ed2c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char cVar6;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    return 0;
  }
  puVar5 = (ulonglong *)&local_18;
  local_18 = 0;
  local_14 = 2;
  while ((plVar2 = (longlong *)FUN_1800ebf80((int)*puVar5), plVar2 == (longlong *)0x0 ||
         (plVar2[1] != param_1))) {
    puVar5 = (ulonglong *)((longlong)puVar5 + 4);
    if (puVar5 == &local_10) {
      return 0;
    }
  }
  lVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,1);
  lVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
  if (lVar3 == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  if ((DAT_1803faff8 == (code *)0x0) || (plVar2[1] == 0)) {
    cVar6 = (**(code **)(*plVar2 + 0x138))(plVar2,3,6);
  }
  else {
    iVar1 = (*DAT_1803faff8)(plVar2[1],3);
    cVar6 = iVar1 == 6;
  }
  if (cVar6 == '\0') {
    return 0;
  }
  if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
    (**(code **)(*plVar2 + 8))(plVar2,3);
  }
  else {
    (*DAT_1803faf38)(plVar2[1],3);
  }
  FUN_180039b80(plVar2,lVar3,lVar4);
  return 0;
}


