// 0x18005f6b0  FUN_18005f6b0
// size=206 thunk=false
// signature: undefined FUN_18005f6b0()
// status: ok


undefined8 FUN_18005f6b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar3 = (uint)dVar4;
  if (((0 < (int)uVar3) &&
      (lVar2 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar2] != '\0')) &&
     (*(uint *)(&DAT_1805b88e4 + lVar2) == uVar3 >> 6)) {
    if ((&DAT_1805b88e1)[lVar2] == '\0') {
      *(undefined4 *)(&DAT_1805b8918 + lVar2) = 0;
      (&DAT_1805b891c)[lVar2] = 0;
    }
    else {
      *(undefined4 *)(&DAT_1805b8938 + lVar2) = 0;
      (&DAT_1805b893c)[lVar2] = 0;
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1,CONCAT71((uint7)(uint3)(uVar3 >> 0xe),1));
    return 1;
  }
  (**(code **)(*plVar1 + 0xf8))(plVar1,0);
  return 1;
}


