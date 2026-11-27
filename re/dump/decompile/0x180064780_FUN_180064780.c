// 0x180064780  FUN_180064780
// size=303 thunk=false
// signature: undefined FUN_180064780()
// status: ok


undefined8 FUN_180064780(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar4 = (uint)dVar8;
    if (((((int)uVar4 < 1) ||
         (lVar6 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar4 >> 6)) ||
       (((&DAT_1805b88e1)[lVar6] == '\0' ||
        ((longlong *)(&DAT_1805b8928 + lVar6) == (longlong *)0x0)))) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    }
    else {
      if (*(int *)(&DAT_1805b8934 + lVar6) - *(int *)(&DAT_1805b8938 + lVar6) < 1) {
        (&DAT_1805b893c)[lVar6] = 1;
        uVar7 = 0;
        lVar5 = *plVar3;
      }
      else {
        dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
        lVar2 = *(longlong *)(&DAT_1805b8928 + lVar6);
        lVar5 = (longlong)(int)*(uint *)(&DAT_1805b8938 + lVar6) >> 5;
        if ((int)dVar8 == 0) {
          puVar1 = (uint *)(lVar2 + lVar5 * 4);
          *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 +
                                        (ulonglong)(*(uint *)(&DAT_1805b8938 + lVar6) & 0x1f) * 4);
        }
        else {
          puVar1 = (uint *)(lVar2 + lVar5 * 4);
          *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 +
                                       (ulonglong)(*(uint *)(&DAT_1805b8938 + lVar6) & 0x1f) * 4);
        }
        *(int *)(&DAT_1805b8938 + lVar6) = *(int *)(&DAT_1805b8938 + lVar6) + 1;
        lVar5 = *plVar3;
        uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),(&DAT_1805b893c)[lVar6] == '\0');
      }
      (**(code **)(lVar5 + 0xf8))(plVar3,uVar7);
    }
    return 1;
  }
  return 0;
}


