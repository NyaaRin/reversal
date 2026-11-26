// 0x1800612c0  FUN_1800612c0
// size=623 thunk=false
// signature: undefined FUN_1800612c0()
// status: ok


undefined8 FUN_1800612c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  double dVar14;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    dVar14 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar8 = (uint)dVar14;
    if (((((int)uVar8 < 1) ||
         (lVar10 = (ulonglong)(uVar8 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar10] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar10) != uVar8 >> 6)) || ((&DAT_1805b88e1)[lVar10] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar10) != (longlong *)0x0) {
        iVar11 = 0x400;
        cVar3 = (**(code **)(lVar5 + 0x138))(plVar4,2,3);
        if (cVar3 != '\0') {
          dVar14 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
          iVar11 = (int)dVar14;
          if (iVar11 < 1) {
            iVar11 = 1;
          }
          else if (0x2000 < iVar11) {
            iVar11 = 0x2000;
          }
        }
        cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,1);
        if (cVar3 == '\0') {
          cVar3 = '\0';
        }
        else {
          cVar3 = (**(code **)(*plVar4 + 200))(plVar4,3);
        }
        lVar5 = FUN_18005e2e0(iVar11 + 1);
        uVar2 = DAT_1803fa730;
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0xe0))(plVar4);
          uVar6 = 1;
        }
        else {
          bVar1 = false;
          iVar13 = 0;
          while( true ) {
            iVar9 = *(int *)(&DAT_1805b8918 + lVar10);
            if (*(int *)(&DAT_1805b8914 + lVar10) - iVar9 < 8) {
              *(int *)(&DAT_1805b8918 + lVar10) = *(int *)(&DAT_1805b8914 + lVar10);
              bVar12 = 0;
              (&DAT_1805b891c)[lVar10] = 1;
            }
            else {
              lVar7 = *(longlong *)(&DAT_1805b8908 + lVar10);
              *(int *)(&DAT_1805b8918 + lVar10) = iVar9 + 8;
              bVar12 = (byte)iVar9 & 0x1f;
              bVar12 = ((byte)(*(int *)(lVar7 + (ulonglong)(uint)(iVar9 + 7 >> 5) * 4) <<
                              (0x20 - bVar12 & 0x1f)) |
                       (byte)(*(uint *)(lVar7 + (ulonglong)(uint)(iVar9 >> 5) * 4) >> bVar12)) &
                       (byte)uVar2;
            }
            if ((bVar12 == 0) || ((cVar3 != '\0' && (bVar12 == 10)))) break;
            if (iVar13 < iVar11) {
              lVar7 = (longlong)iVar13;
              iVar13 = iVar13 + 1;
              *(byte *)(lVar7 + lVar5) = bVar12;
            }
            else {
              bVar1 = true;
            }
          }
          *(undefined1 *)(iVar13 + lVar5) = 0;
          if (((&DAT_1805b891c)[lVar10] != '\0') || (bVar1)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          iVar9 = 0;
          if (-1 < iVar13) {
            iVar9 = iVar13;
          }
          if (iVar9 <= iVar11) {
            iVar11 = iVar9;
          }
          (**(code **)(*plVar4 + 0xe8))(plVar4,lVar5,iVar11);
          (**(code **)(*plVar4 + 0xf8))(plVar4,uVar6);
          uVar6 = 2;
        }
        return uVar6;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


