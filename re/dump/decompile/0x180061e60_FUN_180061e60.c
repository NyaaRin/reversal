// 0x180061e60  FUN_180061e60
// size=487 thunk=false
// signature: undefined FUN_180061e60()
// status: ok


undefined8 FUN_180061e60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  code *pcVar11;
  double dVar12;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar12 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar12;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] != '\0')) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = *plVar5;
    plVar10 = (longlong *)(&DAT_1805b8908 + lVar8);
    if (plVar10 != (longlong *)0x0) {
      cVar4 = (**(code **)(lVar6 + 0x138))(plVar5,2,1);
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar5 + 200))(plVar5,2);
      }
      iVar1 = *(int *)(&DAT_1805b8914 + lVar8);
      iVar2 = *(int *)(&DAT_1805b8918 + lVar8);
      iVar9 = iVar1 - iVar2;
      if (iVar9 < 0x20) {
        if ((cVar4 != '\0') || (iVar9 < 1)) {
          (&DAT_1805b891c)[lVar8] = 1;
          (**(code **)(*plVar5 + 0xe0))(plVar5);
          return 1;
        }
        lVar6 = *plVar5;
        bVar3 = (byte)iVar2 & 0x1f;
        *(int *)(&DAT_1805b8918 + lVar8) = iVar1;
        pcVar11 = *(code **)(lVar6 + 0xf0);
        uVar7 = (*(int *)(*plVar10 + (ulonglong)(uint)(iVar1 + -1 >> 5) * 4) <<
                 (0x20 - bVar3 & 0x1f) |
                *(uint *)(*plVar10 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar3) &
                *(uint *)(&DAT_1803fa710 + (longlong)iVar9 * 4);
      }
      else {
        bVar3 = (byte)iVar2 & 0x1f;
        pcVar11 = *(code **)(*plVar5 + 0xf0);
        *(int *)(&DAT_1805b8918 + lVar8) = iVar2 + 0x20;
        uVar7 = (*(int *)(*plVar10 + (ulonglong)(uint)(iVar2 + 0x1f >> 5) * 4) <<
                 (0x20 - bVar3 & 0x1f) |
                *(uint *)(*plVar10 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar3) & DAT_1803fa790;
      }
      (*pcVar11)(plVar5,(double)uVar7);
      return 1;
    }
  }
  (**(code **)(lVar6 + 0xe0))(plVar5);
  return 1;
}


