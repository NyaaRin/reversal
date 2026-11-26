// 0x18005fd40  FUN_18005fd40
// size=248 thunk=false
// signature: undefined FUN_18005fd40()
// status: ok


undefined8 FUN_18005fd40(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar8;
    if (((((int)uVar5 < 1) ||
         (lVar7 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if (lVar7 != -0x1805b8908) {
        pcVar1 = *(code **)(lVar4 + 0xf8);
        dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
        iVar6 = *(int *)(&DAT_1805b8918 + lVar7) + (int)dVar8;
        if ((iVar6 < 0) || (*(int *)(&DAT_1805b8914 + lVar7) < iVar6)) {
          iVar6 = *(int *)(&DAT_1805b8914 + lVar7);
          uVar2 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          uVar2 = 1;
        }
        *(int *)(&DAT_1805b8918 + lVar7) = iVar6;
        (*pcVar1)(plVar3,uVar2);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


