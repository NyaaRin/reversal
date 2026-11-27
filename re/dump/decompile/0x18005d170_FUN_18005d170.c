// 0x18005d170  FUN_18005d170
// size=265 thunk=false
// signature: undefined FUN_18005d170()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d170(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    lVar4 = *plVar2;
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa668 + 0x240))();
    lVar4 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = (**(code **)(lVar4 + 0x158))(plVar2,1);
      if (lVar4 == 0) {
        return 0;
      }
      if (DAT_1803fa668 == (longlong *)0x0) {
        return 0;
      }
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,1);
      if (cVar1 == '\0') {
        cVar1 = '\x01';
      }
      else {
        cVar1 = (**(code **)(*plVar2 + 200))(plVar2,2);
      }
      _DAT_1803ff928 = _DAT_1803ff928 + 1;
      pcVar5 = "unreliable";
      if (cVar1 != '\0') {
        pcVar5 = "reliable";
      }
      FUN_180014410("[LUANET] script SENT string cmd (%s): %s\n",pcVar5,lVar4);
      (**(code **)(*DAT_1803fa668 + 0x30))(DAT_1803fa668,lVar4,cVar1);
      return 0;
    }
  }
  (**(code **)(lVar4 + 0xe0))(plVar2);
  return 1;
}


