// 0x180060c60  FUN_180060c60
// size=316 thunk=false
// signature: undefined FUN_180060c60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180060c60(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
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
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x10) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar8 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 0x10;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          uVar8 = ((ushort)(*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 0xf >> 5) * 4) <<
                           (0x20 - bVar3 & 0x1f)) |
                  (ushort)(*(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3)) &
                  (ushort)_DAT_1803fa750;
        }
        (*pcVar2)(plVar4,(double)(int)(short)uVar8);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


