// 0x1800626d0  FUN_1800626d0
// size=503 thunk=false
// signature: undefined FUN_1800626d0()
// status: ok


undefined8 FUN_1800626d0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
    dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
    uVar10 = (uint)dVar3;
    if (((((int)uVar10 < 1) ||
         (lVar11 = (ulonglong)(uVar10 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar11] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar11) != uVar10 >> 6)) || ((&DAT_1805b88e1)[lVar11] == '\0'))
    {
      lVar8 = *plVar7;
    }
    else {
      lVar8 = *plVar7;
      if ((longlong *)(&DAT_1805b8928 + lVar11) != (longlong *)0x0) {
        dVar4 = (double)(**(code **)(lVar8 + 0x160))(plVar7,2);
        dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,3);
        iVar14 = (int)dVar3;
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        else if (0x20 < iVar14) {
          iVar14 = 0x20;
        }
        cVar5 = (**(code **)(*plVar7 + 0x138))(plVar7,4,1);
        if (cVar5 != '\0') {
          (**(code **)(*plVar7 + 200))(plVar7,4);
        }
        iVar2 = *(int *)(&DAT_1805b8938 + lVar11);
        uVar12 = (ulonglong)iVar2;
        if (*(int *)(&DAT_1805b8934 + lVar11) - iVar2 < iVar14) {
          *(int *)(&DAT_1805b8938 + lVar11) = *(int *)(&DAT_1805b8934 + lVar11);
          (&DAT_1805b893c)[lVar11] = 1;
        }
        else {
          *(int *)(&DAT_1805b8938 + lVar11) = iVar2 + iVar14;
          lVar8 = *(longlong *)(&DAT_1805b8928 + lVar11);
          uVar10 = *(uint *)(lVar8 + ((longlong)uVar12 >> 5) * 4);
          puVar1 = (uint *)(lVar8 + ((longlong)uVar12 >> 5) * 4);
          bVar9 = (byte)iVar2 & 0x1f;
          uVar13 = (uint)(longlong)dVar4 << bVar9 | (uint)(longlong)dVar4 >> 0x20 - bVar9;
          iVar14 = 1 << ((char)iVar14 - 1U & 0x1f);
          uVar6 = iVar14 - 1U >> (0x1f - bVar9 & 0x1f);
          uVar15 = uVar6 & 1;
          puVar1[uVar15] = puVar1[uVar15] ^ (puVar1[uVar15] ^ uVar13) & uVar6;
          uVar10 = iVar14 * 2 + -1 << bVar9 & (uVar10 ^ uVar13) ^ uVar10;
          uVar12 = (ulonglong)uVar10;
          *puVar1 = uVar10;
        }
        (**(code **)(*plVar7 + 0xf8))
                  (plVar7,CONCAT71((int7)(uVar12 >> 8),(&DAT_1805b893c)[lVar11] == '\0'));
        return 1;
      }
    }
    (**(code **)(lVar8 + 0xf8))(plVar7,0);
    return 1;
  }
  return 0;
}


