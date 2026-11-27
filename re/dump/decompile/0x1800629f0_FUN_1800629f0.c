// 0x1800629f0  FUN_1800629f0
// size=591 thunk=false
// signature: undefined FUN_1800629f0()
// status: ok


undefined8 FUN_1800629f0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  double dVar16;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_2)) {
    dVar16 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar5 = (uint)dVar16;
    if (((((int)uVar5 < 1) ||
         (lVar7 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
      plVar15 = (longlong *)(&DAT_1805b8928 + lVar7);
      if (plVar15 != (longlong *)0x0) {
        dVar16 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
        iVar14 = *(int *)(&DAT_1805b8938 + lVar7);
        uVar8 = (ulonglong)iVar14;
        uVar5 = (uint)(longlong)dVar16;
        iVar11 = (-(uint)(uVar5 < 0x100) - (uint)(uVar5 < 0x1000)) - (uint)(uVar5 < 0x10);
        iVar10 = iVar11 * 4 + 0x12;
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar14 < iVar10) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8938 + lVar7) = iVar14 + iVar10;
          uVar9 = iVar11 + 3 + uVar5 * 4;
          uVar6 = *(uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
          puVar1 = (uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
          bVar4 = (byte)iVar14 & 0x1f;
          uVar13 = uVar9 << bVar4 | uVar9 >> 0x20 - bVar4;
          iVar14 = 1 << ((char)iVar10 - 1U & 0x1f);
          uVar9 = iVar14 - 1U >> (0x1f - bVar4 & 0x1f);
          uVar12 = uVar9 & 1;
          puVar1[uVar12] = puVar1[uVar12] ^ (puVar1[uVar12] ^ uVar13) & uVar9;
          uVar6 = iVar14 * 2 + -1 << bVar4 & (uVar6 ^ uVar13) ^ uVar6;
          uVar8 = (ulonglong)uVar6;
          *puVar1 = uVar6;
        }
        if (0xfff < uVar5) {
          iVar14 = *(int *)(&DAT_1805b8938 + lVar7);
          uVar8 = (ulonglong)iVar14;
          if (*(int *)(&DAT_1805b8934 + lVar7) - iVar14 < 0x10) {
            *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
            (&DAT_1805b893c)[lVar7] = 1;
          }
          else {
            *(int *)(&DAT_1805b8938 + lVar7) = iVar14 + 0x10;
            bVar4 = (byte)iVar14 & 0x1f;
            uVar6 = *(uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
            puVar1 = (uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
            uVar9 = (uVar5 >> 0x10) << bVar4 | (uVar5 >> 0x10) >> 0x20 - bVar4;
            uVar5 = 0x7fff >> (0x1f - bVar4 & 0x1f);
            uVar13 = uVar5 & 1;
            puVar1[uVar13] = puVar1[uVar13] ^ (puVar1[uVar13] ^ uVar9) & uVar5;
            uVar8 = (ulonglong)(uint)(0xffff << bVar4);
            *puVar1 = (uVar6 ^ uVar9) & 0xffff << bVar4 ^ uVar6;
          }
        }
        (**(code **)(*plVar2 + 0xf8))
                  (plVar2,CONCAT71((int7)(uVar8 >> 8),(&DAT_1805b893c)[lVar7] == '\0'));
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xf8))(plVar2,0);
    return 1;
  }
  return 0;
}


