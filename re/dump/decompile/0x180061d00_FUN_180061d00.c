// 0x180061d00  FUN_180061d00
// size=351 thunk=false
// signature: undefined FUN_180061d00()
// status: ok


undefined8 FUN_180061d00(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar6 = (uint)dVar2;
  if (((((int)uVar6 < 1) ||
       (lVar8 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar8] != '\0')) {
    lVar5 = *plVar4;
LAB_180061e32:
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  lVar5 = *plVar4;
  if (&DAT_1805b8908 + lVar8 == (undefined *)0x0) goto LAB_180061e32;
  dVar2 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
  iVar9 = (int)dVar2;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  else if (0x20 < iVar9) {
    iVar9 = 0x20;
  }
  cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
  if (cVar3 != '\0') {
    dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
    iVar7 = (int)dVar2;
    if ((-1 < iVar7) && (iVar7 < 3)) goto LAB_180061df2;
  }
  iVar7 = 0;
LAB_180061df2:
  pcVar1 = *(code **)(*plVar4 + 0xf0);
  fVar10 = (float)FUN_18001b5d0(&DAT_1805b8908 + lVar8,iVar9,iVar7);
  (*pcVar1)(plVar4,(double)fVar10);
  return 1;
}


