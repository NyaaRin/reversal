// 0x180064600  FUN_180064600
// size=379 thunk=false
// signature: undefined FUN_180064600()
// status: ok


undefined8 FUN_180064600(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar5 = (uint)dVar8;
  if (((((int)uVar5 < 1) ||
       (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar6] == '\0')) {
    lVar4 = *plVar3;
LAB_18006474e:
    (**(code **)(lVar4 + 0xf8))(plVar3,0);
    return 1;
  }
  lVar4 = *plVar3;
  if (&DAT_1805b8928 + lVar6 == (undefined *)0x0) goto LAB_18006474e;
  dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
  dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);
  iVar7 = (int)dVar9;
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  else if (0x20 < iVar7) {
    iVar7 = 0x20;
  }
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
  if (cVar1 != '\0') {
    dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
    iVar2 = (int)dVar9;
    if ((-1 < iVar2) && (iVar2 < 3)) goto LAB_18006470d;
  }
  iVar2 = 0;
LAB_18006470d:
  FUN_18001a770(&DAT_1805b8928 + lVar6,(float)dVar8,iVar7,iVar2);
  (**(code **)(*plVar3 + 0xf8))(plVar3,(&DAT_1805b893c)[lVar6] == '\0');
  return 1;
}


