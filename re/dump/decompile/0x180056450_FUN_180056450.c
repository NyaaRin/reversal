// 0x180056450  FUN_180056450
// size=155 thunk=false
// signature: undefined FUN_180056450()
// status: ok


undefined8 FUN_180056450(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
  if (cVar1 == '\0') {
    pcVar5 = *(code **)(*plVar2 + 0xf8);
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
    pcVar5 = *(code **)(*plVar2 + 0xf8);
    if (lVar3 != 0) {
      lVar3 = FUN_180016fb0(lVar3);
      if (lVar3 != 0) {
        uVar4 = 1;
        goto LAB_180056498;
      }
    }
  }
  uVar4 = 0;
LAB_180056498:
  (*pcVar5)(plVar2,uVar4);
  return 1;
}


