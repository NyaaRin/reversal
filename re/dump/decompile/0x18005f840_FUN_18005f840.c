// 0x18005f840  FUN_18005f840
// size=209 thunk=false
// signature: undefined FUN_18005f840()
// status: ok


undefined8 FUN_18005f840(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar5;
  if (((0 < (int)uVar4) &&
      (lVar3 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] != '\0')) &&
     (*(uint *)(&DAT_1805b88e4 + lVar3) == uVar4 >> 6)) {
    if ((&DAT_1805b88e1)[lVar3] == '\0') {
      iVar1 = *(int *)(&DAT_1805b8914 + lVar3) - *(int *)(&DAT_1805b8918 + lVar3);
    }
    else {
      iVar1 = *(int *)(&DAT_1805b8934 + lVar3) - *(int *)(&DAT_1805b8938 + lVar3);
    }
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)iVar1);
    return 1;
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


