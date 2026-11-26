// 0x1800564f0  FUN_1800564f0
// size=190 thunk=false
// signature: undefined FUN_1800564f0()
// status: ok


undefined8 FUN_1800564f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
    if (lVar3 != 0) {
      lVar4 = FUN_180016fb0(lVar3);
      lVar3 = *plVar2;
      if (lVar4 != 0) {
        fVar5 = (float)FUN_180019700(lVar4);
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)fVar5);
        return 1;
      }
      goto LAB_180056588;
    }
  }
  lVar3 = *plVar2;
LAB_180056588:
  (**(code **)(lVar3 + 0xe0))(plVar2);
  return 1;
}


