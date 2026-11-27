// 0x180060ee0  FUN_180060ee0
// size=313 thunk=false
// signature: undefined FUN_180060ee0()
// status: ok


undefined8 FUN_180060ee0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar6 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 0x20;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          uVar6 = (*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 0x1f >> 5) * 4) <<
                   (0x20 - bVar3 & 0x1f) |
                  *(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) & DAT_1803fa790;
        }
        (*pcVar2)(plVar4,(double)(int)uVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


