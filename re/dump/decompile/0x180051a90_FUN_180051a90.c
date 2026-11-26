// 0x180051a90  FUN_180051a90
// size=157 thunk=false
// signature: undefined FUN_180051a90()
// status: ok


undefined8 FUN_180051a90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    iVar3 = 1;
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
    }
    if (DAT_1803ff7ac < iVar3) {
      iVar3 = DAT_1803ff7ac;
    }
    if (iVar3 < 1) {
      FUN_180049960("ImGui.PopStyleVar without a matching PushStyleVar -- ignored");
      return 0;
    }
    DAT_1803ff7ac = DAT_1803ff7ac - iVar3;
    FUN_18026abb0(iVar3);
  }
  return 0;
}


