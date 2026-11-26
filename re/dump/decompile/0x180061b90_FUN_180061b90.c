// 0x180061b90  FUN_180061b90
// size=354 thunk=false
// signature: undefined FUN_180061b90()
// status: ok


undefined8 FUN_180061b90(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
    uVar8 = (uint)dVar2;
    if (((((int)uVar8 < 1) ||
         (lVar9 = (ulonglong)(uVar8 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar9] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar9) != uVar8 >> 6)) || ((&DAT_1805b88e1)[lVar9] != '\0')) {
      lVar7 = *plVar6;
    }
    else {
      lVar7 = *plVar6;
      if (&DAT_1805b8908 + lVar9 != (undefined *)0x0) {
        cVar3 = (**(code **)(lVar7 + 0x138))(plVar6,2,1);
        if (cVar3 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 200))(plVar6,2);
        }
        uVar10 = 0;
        cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,3,1);
        if (cVar3 == '\0') {
          uVar10 = uVar10 & 0xffffffffffffff00;
        }
        else {
          bVar5 = (**(code **)(*plVar6 + 200))(plVar6,3);
          uVar10 = (ulonglong)bVar5;
        }
        pcVar1 = *(code **)(*plVar6 + 0xf0);
        fVar11 = (float)FUN_18001b390(&DAT_1805b8908 + lVar9,uVar4,uVar10);
        (*pcVar1)(plVar6,(double)fVar11);
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xe0))(plVar6);
    return 1;
  }
  return 0;
}


