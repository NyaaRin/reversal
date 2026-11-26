// 0x18005ff50  FUN_18005ff50
// size=406 thunk=false
// signature: undefined FUN_18005ff50()
// status: ok


undefined8 FUN_18005ff50(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar9;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        dVar9 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
        iVar8 = (int)dVar9;
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        else if (0x20 < iVar8) {
          iVar8 = 0x20;
        }
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < iVar8) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar6 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          lVar5 = *(longlong *)(&DAT_1805b8908 + lVar7);
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + iVar8;
          bVar3 = (byte)iVar1 & 0x1f;
          uVar6 = (*(int *)(lVar5 + (ulonglong)(uint)(iVar1 + iVar8 + -1 >> 5) * 4) <<
                   (0x20 - bVar3 & 0x1f) |
                  *(uint *)(lVar5 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) &
                  *(uint *)(&DAT_1803fa710 + (longlong)iVar8 * 4);
        }
        (*pcVar2)(plVar4,(double)uVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


