// 0x180061020  FUN_180061020
// size=429 thunk=false
// signature: undefined FUN_180061020()
// status: ok


undefined8 FUN_180061020(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  double dVar12;
  undefined8 local_res8;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
    dVar12 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
    uVar8 = (uint)dVar12;
    if (((((int)uVar8 < 1) ||
         (lVar9 = (ulonglong)(uVar8 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar9] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar9) != uVar8 >> 6)) || ((&DAT_1805b88e1)[lVar9] != '\0')) {
      lVar7 = *plVar6;
    }
    else {
      lVar7 = *plVar6;
      plVar11 = (longlong *)(&DAT_1805b8908 + lVar9);
      if (plVar11 != (longlong *)0x0) {
        iVar1 = *(int *)(&DAT_1805b8914 + lVar9);
        iVar2 = *(int *)(&DAT_1805b8918 + lVar9);
        pcVar3 = *(code **)(lVar7 + 0xf0);
        if (iVar1 - iVar2 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
          uVar8 = 0;
          (&DAT_1805b891c)[lVar9] = 1;
          iVar10 = iVar1;
        }
        else {
          iVar10 = iVar2 + 0x20;
          *(int *)(&DAT_1805b8918 + lVar9) = iVar10;
          bVar4 = (byte)iVar2 & 0x1f;
          uVar8 = (*(int *)(*plVar11 + (ulonglong)(uint)(iVar2 + 0x1f >> 5) * 4) << (-bVar4 & 0x1f)
                  | *(uint *)(*plVar11 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar4) &
                  DAT_1803fa790;
        }
        if (iVar1 - iVar10 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
          uVar5 = 0;
          (&DAT_1805b891c)[lVar9] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar9) = iVar10 + 0x20;
          bVar4 = (byte)iVar10 & 0x1f;
          uVar5 = (*(int *)(*plVar11 + (ulonglong)(uint)(iVar10 + 0x1f >> 5) * 4) <<
                   (0x20 - bVar4 & 0x1f) |
                  *(uint *)(*plVar11 + (ulonglong)(uint)(iVar10 >> 5) * 4) >> bVar4) & DAT_1803fa790
          ;
        }
        local_res8 = CONCAT44(uVar5,uVar8);
        (*pcVar3)(plVar6,(double)local_res8);
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xe0))(plVar6);
    return 1;
  }
  return 0;
}


