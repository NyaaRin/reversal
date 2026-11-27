// 0x180064480  FUN_180064480
// size=374 thunk=false
// signature: undefined FUN_180064480()
// status: ok


undefined8 FUN_180064480(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
        dVar8 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
        cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,1);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar4 + 200))(plVar4,3);
        }
        cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,1);
        if (cVar1 == '\0') {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 200))(plVar4,4);
        }
        FUN_18001a3b0(&DAT_1805b8928 + lVar7,(float)dVar8,uVar2,uVar3);
        (**(code **)(*plVar4 + 0xf8))(plVar4,(&DAT_1805b893c)[lVar7] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xf8))(plVar4,0);
    return 1;
  }
  return 0;
}


