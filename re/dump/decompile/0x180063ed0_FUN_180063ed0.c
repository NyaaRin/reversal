// 0x180063ed0  FUN_180063ed0
// size=368 thunk=false
// signature: undefined FUN_180063ed0()
// status: ok


undefined8 FUN_180063ed0(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar10 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar10;
    if (((((int)uVar5 < 1) ||
         (lVar7 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar8 = *plVar3;
    }
    else {
      lVar8 = *plVar3;
      if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
        dVar10 = (double)(**(code **)(lVar8 + 0x160))(plVar3,2);
        uVar5 = (uint)dVar10;
        if ((((int)uVar5 < 1) ||
            (lVar8 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
           ((*(uint *)(&DAT_1805b88e4 + lVar8) != uVar5 >> 6 || ((&DAT_1805b88e1)[lVar8] != '\0'))))
        {
          lVar4 = *plVar3;
        }
        else {
          lVar4 = *plVar3;
          if (&DAT_1805b8908 + lVar8 != (undefined *)0x0) {
            dVar10 = (double)(**(code **)(lVar4 + 0x160))(plVar3,3);
            iVar6 = 0;
            if (-1 < (int)dVar10) {
              iVar6 = (int)dVar10;
            }
            pcVar1 = *(code **)(*plVar3 + 0xf8);
            iVar9 = 0x80000;
            if ((iVar6 < 0x80001) && (iVar9 = iVar6, iVar6 < 1)) {
              uVar2 = 1;
            }
            else {
              uVar2 = FUN_18001a130(&DAT_1805b8928 + lVar7,&DAT_1805b8908 + lVar8,iVar9);
            }
            (*pcVar1)(plVar3,uVar2);
            return 1;
          }
        }
        (**(code **)(lVar4 + 0xf8))(plVar3,0);
        return 1;
      }
    }
    (**(code **)(lVar8 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


