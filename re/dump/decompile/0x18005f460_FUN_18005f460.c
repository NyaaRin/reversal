// 0x18005f460  FUN_18005f460
// size=139 thunk=false
// signature: undefined FUN_18005f460()
// status: ok


undefined8 FUN_18005f460(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
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
  if (0 < (int)uVar5) {
    lVar4 = (ulonglong)(uVar5 & 0x3f) * 0x68;
    pcVar3 = &DAT_1805b88e0 + lVar4;
    if ((*pcVar3 != '\0') &&
       (uVar6 = (ulonglong)(uVar5 >> 6), *(uint *)(&DAT_1805b88e4 + lVar4) == uVar5 >> 6))
    goto LAB_18005f4c3;
  }
  pcVar3 = (char *)0x0;
LAB_18005f4c3:
  (*pcVar1)(plVar2,CONCAT71((int7)(uVar6 >> 8),pcVar3 != (char *)0x0));
  return 1;
}


