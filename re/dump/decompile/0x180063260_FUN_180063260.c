// 0x180063260  FUN_180063260
// size=352 thunk=false
// signature: undefined FUN_180063260()
// status: ok


undefined8 FUN_180063260(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar13 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar13;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] == '\0')) {
    lVar5 = *plVar4;
  }
  else {
    lVar5 = *plVar4;
    if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
      dVar13 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
      iVar2 = *(int *)(&DAT_1805b8938 + lVar8);
      uVar9 = (ulonglong)iVar2;
      if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 8) {
        *(int *)(&DAT_1805b8938 + lVar8) = *(int *)(&DAT_1805b8934 + lVar8);
        (&DAT_1805b893c)[lVar8] = 1;
      }
      else {
        *(int *)(&DAT_1805b8938 + lVar8) = iVar2 + 8;
        lVar5 = *(longlong *)(&DAT_1805b8928 + lVar8);
        bVar6 = (byte)iVar2 & 0x1f;
        uVar7 = *(uint *)(lVar5 + ((longlong)uVar9 >> 5) * 4);
        puVar1 = (uint *)(lVar5 + ((longlong)uVar9 >> 5) * 4);
        uVar12 = (uint)(longlong)dVar13 << bVar6 | (uint)(longlong)dVar13 >> 0x20 - bVar6;
        uVar3 = 0x7f >> (0x1f - bVar6 & 0x1f);
        uVar11 = uVar3 & 1;
        puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar3;
        uVar7 = (uVar7 ^ uVar12) & 0xff << bVar6 ^ uVar7;
        uVar9 = (ulonglong)uVar7;
        *puVar1 = uVar7;
      }
      lVar5 = *plVar4;
      uVar10 = CONCAT71((int7)(uVar9 >> 8),(&DAT_1805b893c)[lVar8] == '\0');
      goto LAB_18006338e;
    }
  }
  uVar10 = 0;
LAB_18006338e:
  (**(code **)(lVar5 + 0xf8))(plVar4,uVar10);
  return 1;
}


