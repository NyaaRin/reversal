// 0x180056d40  FUN_180056d40
// size=311 thunk=false
// signature: undefined FUN_180056d40()
// status: ok


undefined8 FUN_180056d40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
  lVar4 = 0;
  lVar3 = lVar4;
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
  }
  cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);
  if (cVar1 != '\0') {
    lVar4 = (**(code **)(*plVar2 + 0xb8))(plVar2,2,0);
  }
  if (((lVar3 != 0) && (lVar4 != 0)) && (lVar5 = FUN_180016fb0(lVar3), lVar5 != 0)) {
    cVar1 = FUN_180053ba0(lVar5,lVar4);
    if (cVar1 != '\0') {
      FUN_180014410("[LUAENGINE] script set default of %s -> \"%s\"\n",lVar3,lVar4);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  (**(code **)(*plVar2 + 0xf8))(plVar2,0);
  return 1;
}


