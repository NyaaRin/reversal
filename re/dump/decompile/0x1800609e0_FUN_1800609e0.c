// 0x1800609e0  FUN_1800609e0
// size=316 thunk=false
// signature: undefined FUN_1800609e0()
// status: ok


undefined8 FUN_1800609e0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
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
      if ((longlong *)(&DAT_1805b8908 + lVar6) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar4 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar6);
        if (*(int *)(&DAT_1805b8914 + lVar6) - iVar1 < 8) {
          *(int *)(&DAT_1805b8918 + lVar6) = *(int *)(&DAT_1805b8914 + lVar6);
          bVar7 = 0;
          (&DAT_1805b891c)[lVar6] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar6) = iVar1 + 8;
          bVar7 = (byte)iVar1 & 0x1f;
          lVar6 = *(longlong *)(&DAT_1805b8908 + lVar6);
          bVar7 = ((byte)(*(int *)(lVar6 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) <<
                         (0x20 - bVar7 & 0x1f)) |
                  (byte)(*(uint *)(lVar6 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar7)) &
                  (byte)DAT_1803fa730;
        }
        (*pcVar2)(plVar3,(double)(int)(char)bVar7);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


