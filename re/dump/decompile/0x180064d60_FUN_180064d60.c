// 0x180064d60  FUN_180064d60
// size=239 thunk=false
// signature: undefined FUN_180064d60()
// status: ok


undefined8 FUN_180064d60(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar2 = (uint)dVar4;
  if ((((0 < (int)uVar2) &&
       (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] != '\0')) &&
      (*(uint *)(&DAT_1805b88e4 + lVar3) == uVar2 >> 6)) &&
     (((&DAT_1805b88e1)[lVar3] != '\0' &&
      ((undefined8 *)(&DAT_1805b8928 + lVar3) != (undefined8 *)0x0)))) {
    if (*(int *)(&DAT_1805b8938 + lVar3) + 7 >> 3 < 1) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,&DAT_18033e5ea,0);
      return 1;
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(&DAT_1805b8928 + lVar3));
    return 1;
  }
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  return 1;
}


