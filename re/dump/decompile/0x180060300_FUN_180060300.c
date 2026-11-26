// 0x180060300  FUN_180060300
// size=516 thunk=false
// signature: undefined FUN_180060300()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180060300(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar12 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar12;
  if (((((int)uVar7 < 1) ||
       (lVar9 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar9] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar9) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar9] != '\0')) {
    lVar6 = *plVar5;
LAB_1800604e1:
    (**(code **)(lVar6 + 0xe0))(plVar5);
    return 1;
  }
  lVar6 = *plVar5;
  if ((longlong *)(&DAT_1805b8908 + lVar9) == (longlong *)0x0) goto LAB_1800604e1;
  iVar1 = *(int *)(&DAT_1805b8914 + lVar9);
  iVar2 = *(int *)(&DAT_1805b8918 + lVar9);
  pcVar3 = *(code **)(lVar6 + 0xf0);
  if (iVar1 - iVar2 < 6) {
    *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
    uVar11 = 0;
    (&DAT_1805b891c)[lVar9] = 1;
  }
  else {
    lVar6 = *(longlong *)(&DAT_1805b8908 + lVar9);
    *(int *)(&DAT_1805b8918 + lVar9) = iVar2 + 6;
    bVar4 = (byte)iVar2 & 0x1f;
    uVar11 = (*(int *)(lVar6 + (ulonglong)(uint)(iVar2 + 5 >> 5) * 4) << (-bVar4 & 0x1f) |
             *(uint *)(lVar6 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar4) & _DAT_1803fa728;
    uVar7 = uVar11 & 3;
    if (uVar7 != 0) {
      iVar10 = iVar2 + 2;
      *(int *)(&DAT_1805b8918 + lVar9) = iVar10;
      uVar7 = ((int)(2 - uVar7) >> 0x1f & 0x10U) + uVar7 * 4;
      iVar8 = uVar7 + 4;
      if ((iVar1 - (iVar2 + 6)) + 4 < iVar8) {
        uVar11 = 0;
        *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
        (&DAT_1805b891c)[lVar9] = 1;
      }
      else {
        iVar8 = iVar2 + 2 + iVar8;
        bVar4 = (byte)iVar10 & 0x1f;
        *(int *)(&DAT_1805b8918 + lVar9) = iVar8;
        uVar11 = (*(int *)(lVar6 + (ulonglong)(uint)(iVar8 + -1 >> 5) * 4) << (0x20 - bVar4 & 0x1f)
                 | *(uint *)(lVar6 + (ulonglong)(uint)(iVar10 >> 5) * 4) >> bVar4) &
                 *(uint *)(&DAT_1803fa720 + (ulonglong)uVar7 * 4);
      }
      goto LAB_1800603d6;
    }
  }
  uVar11 = uVar11 >> 2;
LAB_1800603d6:
  (*pcVar3)(plVar5,(double)uVar11);
  return 1;
}


