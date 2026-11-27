// 0x180063700  FUN_180063700
// size=525 thunk=false
// signature: undefined FUN_180063700()
// status: ok


undefined8 FUN_180063700(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    dVar13 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar13;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      plVar10 = (longlong *)(&DAT_1805b8928 + lVar7);
      if (plVar10 != (longlong *)0x0) {
        dVar13 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
        iVar2 = *(int *)(&DAT_1805b8938 + lVar7);
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar2 < 0x20) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8938 + lVar7) = iVar2 + 0x20;
          bVar5 = (byte)iVar2 & 0x1f;
          uVar6 = *(uint *)(*plVar10 + ((longlong)iVar2 >> 5) * 4);
          puVar1 = (uint *)(*plVar10 + ((longlong)iVar2 >> 5) * 4);
          uVar9 = (uint)(longlong)dVar13;
          uVar12 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
          uVar9 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
          uVar11 = uVar9 & 1;
          puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar9;
          *puVar1 = (uVar6 ^ uVar12) & -1 << bVar5 ^ uVar6;
        }
        iVar2 = *(int *)(&DAT_1805b8938 + lVar7);
        uVar8 = (ulonglong)iVar2;
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar2 < 0x20) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          bVar5 = (byte)iVar2 & 0x1f;
          *(int *)(&DAT_1805b8938 + lVar7) = iVar2 + 0x20;
          uVar6 = *(uint *)(*plVar10 + ((longlong)uVar8 >> 5) * 4);
          puVar1 = (uint *)(*plVar10 + ((longlong)uVar8 >> 5) * 4);
          uVar9 = (uint)((ulonglong)(longlong)dVar13 >> 0x20);
          uVar9 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
          uVar12 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
          uVar11 = uVar12 & 1;
          puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar9) & uVar12;
          uVar6 = (uVar6 ^ uVar9) & -1 << bVar5 ^ uVar6;
          uVar8 = (ulonglong)uVar6;
          *puVar1 = uVar6;
        }
        (**(code **)(*plVar3 + 0xf8))
                  (plVar3,CONCAT71((int7)(uVar8 >> 8),(&DAT_1805b893c)[lVar7] == '\0'));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


