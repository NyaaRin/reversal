// 0x180182bd0  FUN_180182bd0
// size=249 thunk=false
// signature: undefined FUN_180182bd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180182bd0(ulonglong param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  byte local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  uVar3 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (((param_1 == 0) ||
      (local_20 = param_1, local_18 = uVar3, uVar3 = FUN_180182a10(), DAT_18040a3d8 == 0)) ||
     (DAT_18040a3e8 == (code *)0x0)) {
    return uVar3 & 0xffffffffffffff00;
  }
  plVar4 = (longlong *)DAT_180458200[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar6 = DAT_180458200;
  while (cVar1 == '\0') {
    plVar5 = plVar4;
    if ((ulonglong)plVar4[4] < local_20) {
      plVar4 = plVar4 + 2;
      plVar5 = plVar6;
    }
    plVar4 = (longlong *)*plVar4;
    plVar6 = plVar5;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (local_20 < (ulonglong)plVar6[4])) {
    plVar6 = DAT_180458200;
  }
  if (plVar6 != DAT_180458200) {
    return (ulonglong)*(byte *)(plVar6 + 5);
  }
  bVar2 = (*DAT_18040a3e8)(DAT_18040a3d8,local_20,4);
  local_38 = bVar2;
  plVar4 = (longlong *)FUN_180215480();
  *(byte *)(*plVar4 + 0x28) = bVar2;
  return (ulonglong)bVar2;
}


