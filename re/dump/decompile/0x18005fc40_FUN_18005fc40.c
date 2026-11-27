// 0x18005fc40  FUN_18005fc40
// size=242 thunk=false
// signature: undefined FUN_18005fc40()
// status: ok


undefined8 FUN_18005fc40(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar8;
    if (((((int)uVar5 < 1) ||
         (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar6] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if (lVar6 != -0x1805b8908) {
        pcVar1 = *(code **)(lVar4 + 0xf8);
        dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
        iVar2 = (int)dVar8;
        if ((iVar2 < 0) || (*(int *)(&DAT_1805b8914 + lVar6) < iVar2)) {
          iVar2 = *(int *)(&DAT_1805b8914 + lVar6);
          uVar7 = 0;
          (&DAT_1805b891c)[lVar6] = 1;
        }
        else {
          uVar7 = 1;
        }
        *(int *)(&DAT_1805b8918 + lVar6) = iVar2;
        (*pcVar1)(plVar3,uVar7);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


