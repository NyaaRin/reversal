// 0x1800600f0  FUN_1800600f0
// size=255 thunk=false
// signature: undefined FUN_1800600f0()
// status: ok


undefined8 FUN_1800600f0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar4 = (uint)dVar7;
    if (((((int)uVar4 < 1) ||
         (lVar6 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar6] != '\0')) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
      if (&DAT_1805b8908 + lVar6 != (undefined *)0x0) {
        pcVar1 = *(code **)(lVar3 + 0xf0);
        dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
        iVar5 = (int)dVar7;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        else if (0x20 < iVar5) {
          iVar5 = 0x20;
        }
        iVar5 = FUN_18001afe0(&DAT_1805b8908 + lVar6,iVar5);
        (*pcVar1)(plVar2,(double)iVar5);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


