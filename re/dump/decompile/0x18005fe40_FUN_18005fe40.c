// 0x18005fe40  FUN_18005fe40
// size=261 thunk=false
// signature: undefined FUN_18005fe40()
// status: ok


undefined8 FUN_18005fe40(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar4 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 1) {
          (&DAT_1805b891c)[lVar7] = 1;
          bVar5 = 0;
        }
        else {
          bVar5 = *(byte *)(((longlong)iVar1 >> 3) + *(longlong *)(&DAT_1805b8908 + lVar7));
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 1;
          bVar5 = bVar5 >> ((byte)iVar1 & 7) & 1;
        }
        (*pcVar2)(plVar3,(double)bVar5);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


