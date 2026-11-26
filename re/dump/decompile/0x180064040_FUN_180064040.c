// 0x180064040  FUN_180064040
// size=507 thunk=false
// signature: undefined FUN_180064040()
// status: ok


undefined8 FUN_180064040(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    dVar11 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar11;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if ((longlong *)(&DAT_1805b8928 + lVar7) != (longlong *)0x0) {
        dVar11 = (double)(**(code **)(lVar4 + 0x160))(plVar3,3);
        uVar6 = (uint)dVar11;
        if ((int)uVar6 < 1) {
          uVar6 = 1;
        }
        else if (0x20 < (int)uVar6) {
          uVar6 = 0x20;
        }
        dVar11 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
        iVar10 = *(int *)(&DAT_1805b8938 + lVar7);
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar10 < (int)uVar6) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          bVar5 = (byte)iVar10 & 0x1f;
          uVar8 = (&DAT_18033d650)[uVar6 & 0x1f];
          *(uint *)(&DAT_1805b8938 + lVar7) = iVar10 + uVar6;
          lVar4 = *(longlong *)(&DAT_1805b8928 + lVar7);
          uVar2 = *(uint *)(lVar4 + ((longlong)iVar10 >> 5) * 4);
          puVar1 = (uint *)(lVar4 + ((longlong)iVar10 >> 5) * 4);
          uVar8 = (int)(((double)(float)dVar11 / DAT_180380e90) * (double)uVar8) & uVar8 - 1;
          uVar8 = uVar8 << bVar5 | uVar8 >> 0x20 - bVar5;
          iVar10 = 1 << ((char)uVar6 - 1U & 0x1f);
          uVar6 = iVar10 - 1U >> (0x1f - bVar5 & 0x1f);
          uVar9 = uVar6 & 1;
          puVar1[uVar9] = puVar1[uVar9] ^ (puVar1[uVar9] ^ uVar8) & uVar6;
          *puVar1 = iVar10 * 2 + -1 << bVar5 & (uVar8 ^ uVar2) ^ uVar2;
        }
        (**(code **)(*plVar3 + 0xf8))(plVar3,(&DAT_1805b893c)[lVar7] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


