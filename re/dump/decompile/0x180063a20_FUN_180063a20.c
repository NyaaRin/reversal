// 0x180063a20  FUN_180063a20
// size=316 thunk=false
// signature: undefined FUN_180063a20()
// status: ok


undefined8 FUN_180063a20(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar9;
    if (((int)uVar6 < 1) ||
       (((lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0' ||
         (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0'))))
    {
      lVar5 = *plVar3;
    }
    else {
      lVar5 = *plVar3;
      if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
        pcVar4 = (char *)(**(code **)(lVar5 + 0x158))(plVar3,2);
        pcVar2 = *(code **)(*plVar3 + 0xf8);
        if (pcVar4 == (char *)0x0) {
          bVar8 = false;
        }
        else {
          do {
            FUN_180019830(&DAT_1805b8928 + lVar7,(int)*pcVar4,8);
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          bVar8 = (&DAT_1805b893c)[lVar7] == '\0';
        }
        (*pcVar2)(plVar3,bVar8);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


