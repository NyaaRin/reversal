// 0x1800565b0  FUN_1800565b0
// size=191 thunk=false
// signature: undefined FUN_1800565b0()
// status: ok


undefined8 FUN_1800565b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
  if (cVar1 != '\0') {
    lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
    if (lVar4 != 0) {
      lVar5 = FUN_180016fb0(lVar4);
      lVar4 = *plVar3;
      if (lVar5 != 0) {
        iVar2 = FUN_1800197a0(lVar5);
        (**(code **)(lVar4 + 0xf0))(plVar3,(double)iVar2);
        return 1;
      }
      goto LAB_180056649;
    }
  }
  lVar4 = *plVar3;
LAB_180056649:
  (**(code **)(lVar4 + 0xe0))(plVar3);
  return 1;
}


