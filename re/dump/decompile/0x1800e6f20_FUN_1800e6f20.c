// 0x1800e6f20  FUN_1800e6f20
// size=452 thunk=false
// signature: undefined FUN_1800e6f20()
// status: ok


undefined8 FUN_1800e6f20(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  plVar6 = (longlong *)FUN_180039770();
  piVar2 = DAT_1803ff960;
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  if ((DAT_1803ff960 == (int *)0x0) ||
     (cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,3), cVar3 == '\0')) {
    (**(code **)(*plVar6 + 0xe0))(plVar6);
    return 1;
  }
  dVar11 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,1);
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);
  if (cVar3 == '\0') {
    iVar10 = 0x80;
  }
  else {
    dVar12 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);
    iVar4 = (int)dVar12;
    if (0 < iVar4) {
      iVar9 = *piVar2;
      iVar8 = 0;
      iVar10 = 0x1000;
      if (iVar4 < 0x1001) {
        iVar10 = iVar4;
      }
      goto LAB_1800e7010;
    }
    iVar10 = 1;
  }
  iVar9 = *piVar2;
  iVar8 = 0;
LAB_1800e7010:
  do {
    iVar4 = 0;
    do {
      iVar7 = iVar8;
      if (iVar4 != 0) {
        iVar7 = -iVar8;
      }
      iVar1 = iVar7 + iVar9;
      if ((-1 < iVar1) && (uVar5 = FUN_180015e50(iVar1), (uVar5 & 0x7fffffff) == (int)dVar11)) {
        (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar1);
        (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar7);
        return 2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)((iVar8 != 0) + 1));
    iVar8 = iVar8 + 1;
    if (iVar10 < iVar8) {
      (**(code **)(*plVar6 + 0xe0))(plVar6);
      return 1;
    }
  } while( true );
}


