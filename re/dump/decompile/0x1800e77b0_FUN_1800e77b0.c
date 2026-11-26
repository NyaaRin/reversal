// 0x1800e77b0  FUN_1800e77b0
// size=308 thunk=false
// signature: undefined FUN_1800e77b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800e77b0(byte *param_1,byte *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    return (longlong *)0x0;
  }
  uVar6 = 0x14650fb0739d0383;
  uVar7 = 0x14650fb0739d0383;
  do {
    if (*param_1 == 0) break;
    uVar7 = (uVar7 ^ *param_1) * 0x100000001b3;
    param_1 = param_1 + 1;
  } while (param_1 != (byte *)0x0);
  plVar2 = (longlong *)DAT_1803fadf0[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar3 = DAT_1803fadf0;
  while (cVar1 == '\0') {
    plVar5 = plVar2;
    if ((ulonglong)plVar2[4] < uVar7) {
      plVar2 = plVar2 + 2;
      plVar5 = plVar3;
    }
    plVar2 = (longlong *)*plVar2;
    plVar3 = plVar5;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)plVar3 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar3[4])) {
    plVar3 = DAT_1803fadf0;
  }
  if ((plVar3 == DAT_1803fadf0) || (plVar3 + 5 == (longlong *)0x0)) {
    return (longlong *)0x0;
  }
  do {
    if (*param_2 == 0) break;
    uVar6 = (uVar6 ^ *param_2) * 0x100000001b3;
    param_2 = param_2 + 1;
  } while (param_2 != (byte *)0x0);
  plVar2 = (longlong *)plVar3[5];
  plVar3 = (longlong *)plVar2[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar5 = plVar2;
  while (cVar1 == '\0') {
    plVar4 = plVar3;
    if ((ulonglong)plVar3[4] < uVar6) {
      plVar3 = plVar3 + 2;
      plVar4 = plVar5;
    }
    plVar3 = (longlong *)*plVar3;
    plVar5 = plVar4;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar5[4])) {
    plVar5 = plVar2;
  }
  plVar3 = (longlong *)0x0;
  if (plVar5 != plVar2) {
    plVar3 = plVar5 + 5;
  }
  return plVar3;
}


