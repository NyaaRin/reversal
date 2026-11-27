// 0x1800e9780  FUN_1800e9780
// size=175 thunk=false
// signature: undefined FUN_1800e9780()
// status: ok


undefined8 FUN_1800e9780(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar5 = 0;
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
  if (cVar1 == '\0') {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    bVar2 = (**(code **)(*plVar3 + 200))(plVar3,2);
    uVar5 = (ulonglong)bVar2;
  }
  if ((int)dVar6 - 1U < 0x80) {
    uVar4 = FUN_1800e81e0(plVar3,(int)dVar6);
    return uVar4;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,*plVar3,uVar5);
  return 1;
}


