// 0x180023650  FUN_180023650
// size=207 thunk=false
// signature: undefined FUN_180023650()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180023650(ulonglong param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)DAT_1803fa7f0[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar5 = DAT_1803fa7f0;
  while (cVar1 == '\0') {
    plVar4 = plVar2;
    if ((ulonglong)plVar2[4] < param_1) {
      plVar2 = plVar2 + 2;
      plVar4 = plVar5;
    }
    plVar2 = (longlong *)*plVar2;
    plVar5 = plVar4;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (param_1 < (ulonglong)plVar5[4])) {
    plVar5 = DAT_1803fa7f0;
  }
  if (plVar5 != DAT_1803fa7f0) {
    uVar6 = plVar5[5] & 0x7fffffffffff;
    cVar1 = FUN_1800234d0(uVar6);
    if (cVar1 == '\0') {
      FUN_18021db70();
    }
    else if (((*(byte *)(uVar6 + 8) & 3) != 0) &&
            (pcVar3 = (code *)FUN_180023290(), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1,uVar6);
    }
  }
  if (DAT_1803fa5b8 != (code *)0x0) {
    (*DAT_1803fa5b8)(param_1);
  }
  return;
}


