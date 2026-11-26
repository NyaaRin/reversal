// 0x180062450  FUN_180062450
// size=285 thunk=false
// signature: undefined FUN_180062450()
// status: ok


undefined8 FUN_180062450(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar7;
  if (((((int)uVar4 < 1) ||
       (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] == '\0')) {
    lVar3 = *plVar2;
  }
  else {
    lVar3 = *plVar2;
    if ((longlong *)(&DAT_1805b8928 + lVar5) != (longlong *)0x0) {
      dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
      uVar4 = *(uint *)(&DAT_1805b8938 + lVar5);
      if ((int)uVar4 < *(int *)(&DAT_1805b8934 + lVar5)) {
        lVar3 = *(longlong *)(&DAT_1805b8928 + lVar5);
        if ((int)dVar7 == 0) {
          puVar1 = (uint *)(lVar3 + ((longlong)(int)uVar4 >> 5) * 4);
          *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
        }
        else {
          puVar1 = (uint *)(lVar3 + ((longlong)(int)uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
        }
        *(int *)(&DAT_1805b8938 + lVar5) = *(int *)(&DAT_1805b8938 + lVar5) + 1;
      }
      else {
        (&DAT_1805b893c)[lVar5] = 1;
      }
      bVar6 = (&DAT_1805b893c)[lVar5] == '\0';
      lVar3 = *plVar2;
      goto LAB_18006253b;
    }
  }
  bVar6 = false;
LAB_18006253b:
  (**(code **)(lVar3 + 0xf8))(plVar2,bVar6);
  return 1;
}


