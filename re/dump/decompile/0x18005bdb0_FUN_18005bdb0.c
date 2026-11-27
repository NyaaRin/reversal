// 0x18005bdb0  FUN_18005bdb0
// size=176 thunk=false
// signature: undefined FUN_18005bdb0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005bdb0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*DAT_1803fa668 + 0x240))(), lVar3 != 0)) {
    if (DAT_1803ff938 == (code *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);
    _DAT_1803ff928 = _DAT_1803ff928 + 1;
    pcVar4 = "false";
    if (cVar1 != '\0') {
      pcVar4 = "true";
    }
    FUN_180014410("[LUANET] script set bSendPacket -> %s\n",pcVar4);
    (*DAT_1803ff938)(cVar1);
    return 0;
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


