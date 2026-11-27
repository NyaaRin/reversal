// 0x18005f310  FUN_18005f310
// size=219 thunk=false
// signature: undefined FUN_18005f310()
// status: ok


undefined8 FUN_18005f310(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  iVar3 = 0x400;
  cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
  if (cVar1 != '\0') {
    dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
    iVar3 = (int)dVar4;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    else if (0x10000 < iVar3) {
      iVar3 = 0x10000;
    }
  }
  iVar3 = FUN_18005dff0(1,iVar3,0,0,0,1);
  if (iVar3 != 0) {
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)iVar3);
    return 1;
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


