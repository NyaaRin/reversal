// 0x180062ff0  FUN_180062ff0
// size=371 thunk=false
// signature: undefined FUN_180062ff0()
// status: ok


undefined8 FUN_180062ff0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_1)) {
    return 0;
  }
  dVar13 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar13;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] == '\0')) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = *plVar5;
    if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
      dVar13 = (double)(**(code **)(lVar6 + 0x160))(plVar5,2);
      iVar2 = *(int *)(&DAT_1805b8938 + lVar8);
      uVar9 = (ulonglong)iVar2;
      if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 0x20) {
        *(int *)(&DAT_1805b8938 + lVar8) = *(int *)(&DAT_1805b8934 + lVar8);
        (&DAT_1805b893c)[lVar8] = 1;
      }
      else {
        *(int *)(&DAT_1805b8938 + lVar8) = iVar2 + 0x20;
        lVar6 = *(longlong *)(&DAT_1805b8928 + lVar8);
        bVar3 = (byte)iVar2 & 0x1f;
        uVar7 = *(uint *)(lVar6 + ((longlong)uVar9 >> 5) * 4);
        puVar1 = (uint *)(lVar6 + ((longlong)uVar9 >> 5) * 4);
        uVar12 = (uint)(float)dVar13 >> (0x20 - bVar3 & 0x1f) | (int)(float)dVar13 << bVar3;
        uVar4 = 0x7fffffff >> (0x1f - bVar3 & 0x1f);
        uVar11 = uVar4 & 1;
        puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar4;
        uVar7 = (uVar7 ^ uVar12) & -1 << bVar3 ^ uVar7;
        uVar9 = (ulonglong)uVar7;
        *puVar1 = uVar7;
      }
      lVar6 = *plVar5;
      uVar10 = CONCAT71((int7)(uVar9 >> 8),(&DAT_1805b893c)[lVar8] == '\0');
      goto LAB_180063131;
    }
  }
  uVar10 = 0;
LAB_180063131:
  (**(code **)(lVar6 + 0xf8))(plVar5,uVar10);
  return 1;
}


