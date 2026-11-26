// 0x18005dad0  FUN_18005dad0
// size=302 thunk=false
// signature: undefined FUN_18005dad0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005dad0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar6 = *plVar2;
    }
    else {
      lVar3 = (**(code **)(*DAT_1803fa668 + 0x240))();
      lVar6 = *plVar2;
      if (lVar3 != 0) {
        if (DAT_1803ff930 == (code *)0x0) {
          (**(code **)(lVar6 + 0xf8))(plVar2,0);
          return 1;
        }
        cVar1 = (**(code **)(lVar6 + 0x138))(plVar2,1,4);
        if (cVar1 == '\0') {
          pcVar4 = "Disconnect by user.";
        }
        else {
          pcVar4 = (char *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
        }
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        pcVar5 = "?";
        if (pcVar4 != (char *)0x0) {
          pcVar5 = pcVar4;
        }
        FUN_180014410("[LUANET] script REQUESTED disconnect: %s\n",pcVar5);
        pcVar5 = "Disconnect by user.";
        if (pcVar4 != (char *)0x0) {
          pcVar5 = pcVar4;
        }
        (*DAT_1803ff930)(pcVar5);
        (**(code **)(*plVar2 + 0xf8))(plVar2,1);
        return 1;
      }
    }
    (**(code **)(lVar6 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


