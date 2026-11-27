// 0x1800617f0  FUN_1800617f0
// size=450 thunk=false
// signature: undefined FUN_1800617f0()
// status: ok


undefined8 FUN_1800617f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    uVar7 = (uint)dVar9;
    if (((((int)uVar7 < 1) ||
         (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] != '\0')) {
      lVar6 = *plVar5;
    }
    else {
      lVar6 = *plVar5;
      if ((longlong *)(&DAT_1805b8908 + lVar8) != (longlong *)0x0) {
        pcVar3 = *(code **)(lVar6 + 0xf0);
        dVar9 = (double)(**(code **)(lVar6 + 0x160))(plVar5,2);
        uVar7 = (uint)dVar9;
        if ((int)uVar7 < 1) {
          uVar7 = 1;
        }
        else if (0x20 < (int)uVar7) {
          uVar7 = 0x20;
        }
        iVar1 = *(int *)(&DAT_1805b8918 + lVar8);
        iVar2 = (&DAT_18033d650)[uVar7 & 0x1f];
        if (*(int *)(&DAT_1805b8914 + lVar8) - iVar1 < (int)uVar7) {
          *(int *)(&DAT_1805b8918 + lVar8) = *(int *)(&DAT_1805b8914 + lVar8);
          uVar7 = 0;
          (&DAT_1805b891c)[lVar8] = 1;
        }
        else {
          lVar6 = *(longlong *)(&DAT_1805b8908 + lVar8);
          *(uint *)(&DAT_1805b8918 + lVar8) = iVar1 + uVar7;
          bVar4 = (byte)iVar1 & 0x1f;
          uVar7 = (*(int *)(lVar6 + (ulonglong)(uint)((int)(iVar1 + uVar7 + -1) >> 5) * 4) <<
                   (0x20 - bVar4 & 0x1f) |
                  *(uint *)(lVar6 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4) &
                  *(uint *)(&DAT_1803fa710 + (longlong)(int)uVar7 * 4);
        }
        (*pcVar3)(plVar5,(double)(float)((DAT_180380e90 / (double)iVar2) * (double)(int)uVar7));
        return 1;
      }
    }
    (**(code **)(lVar6 + 0xe0))(plVar5);
    return 1;
  }
  return 0;
}


