// 0x18005d9b0  FUN_18005d9b0
// size=284 thunk=false
// signature: undefined FUN_18005d9b0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d9b0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar7 = *plVar4;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar7 = *plVar4;
      if (plVar5 != (longlong *)0x0) {
        cVar2 = (**(code **)(lVar7 + 0x138))(plVar4,1,1);
        if (cVar2 == '\0') {
          cVar2 = '\0';
        }
        else {
          cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);
        }
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        pcVar6 = "false";
        if (cVar2 != '\0') {
          pcVar6 = "true";
        }
        FUN_180014410("[LUANET] script forced a transmit (onlyReliable=%s)\n",pcVar6);
        pcVar1 = *(code **)(*plVar4 + 0xf8);
        uVar3 = (**(code **)(*plVar5 + 0x178))(plVar5,cVar2);
        (*pcVar1)(plVar4,uVar3);
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


