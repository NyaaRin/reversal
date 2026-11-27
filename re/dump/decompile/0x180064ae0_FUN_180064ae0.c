// 0x180064ae0  FUN_180064ae0
// size=219 thunk=false
// signature: undefined FUN_180064ae0()
// status: ok


undefined8 FUN_180064ae0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar6;
  if ((((0 < (int)uVar4) &&
       (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] != '\0')) &&
      (*(uint *)(&DAT_1805b88e4 + lVar5) == uVar4 >> 6)) && ((&DAT_1805b88e1)[lVar5] != '\0')) {
    lVar3 = *plVar2;
    if (lVar5 == -0x1805b8928) goto LAB_180064b93;
    dVar6 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
    iVar1 = (int)dVar6;
    if ((-1 < iVar1) && (iVar1 <= *(int *)(&DAT_1805b8934 + lVar5))) {
      *(int *)(&DAT_1805b8938 + lVar5) = iVar1;
      (**(code **)(*plVar2 + 0xf8))(plVar2,1);
      return 1;
    }
  }
  lVar3 = *plVar2;
LAB_180064b93:
  (**(code **)(lVar3 + 0xf8))(plVar2,0);
  return 1;
}


