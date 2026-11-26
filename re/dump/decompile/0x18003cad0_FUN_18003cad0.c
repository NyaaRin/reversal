// 0x18003cad0  FUN_18003cad0
// size=162 thunk=false
// signature: undefined FUN_18003cad0()
// status: ok


undefined8 FUN_18003cad0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char *pcVar4;
  uint uVar5;
  double dVar7;
  ulonglong uVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  pcVar1 = *(code **)(*plVar2 + 0xf8);
  dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar5 = (uint)dVar7;
  uVar6 = (ulonglong)uVar5;
  if ((0 < (int)uVar5) && (uVar3 = (ulonglong)(uVar5 & 0xf), (uVar5 & 0xf) < 8)) {
    pcVar4 = &DAT_1803e75c0 + uVar3 * 0x30;
    if ((*pcVar4 != '\0') &&
       (((uVar6 = (ulonglong)(uVar5 >> 4), *(uint *)(&DAT_1803e75c4 + uVar3 * 0x30) == uVar5 >> 4 &&
         ((&DAT_1803e75d0)[uVar3 * 6] != 0)) && ((&DAT_1803e75d8)[uVar3 * 6] != 0))))
    goto LAB_18003cb4a;
  }
  pcVar4 = (char *)0x0;
LAB_18003cb4a:
  (*pcVar1)(plVar2,CONCAT71((int7)(uVar6 >> 8),pcVar4 != (char *)0x0));
  return 1;
}


