// 0x180064f80  FUN_180064f80
// size=185 thunk=false
// signature: undefined FUN_180064f80()
// status: ok


undefined8 FUN_180064f80(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    lVar3 = 0;
    if ((DAT_180381238 <= dVar6) && (dVar6 = dVar6 - DAT_180381238, dVar6 < DAT_180381238)) {
      lVar3 = -0x8000000000000000;
    }
    iVar5 = 1;
    for (uVar4 = (longlong)dVar6 + lVar3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      iVar5 = iVar5 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar5);
    return 1;
  }
  return 0;
}


