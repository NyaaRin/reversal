// 0x18005d870  FUN_18005d870
// size=319 thunk=false
// signature: undefined FUN_18005d870()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d870(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar8 = *plVar4;
    }
    else {
      lVar5 = (**(code **)(*DAT_1803fa668 + 0x240))();
      lVar8 = *plVar4;
      if (lVar5 != 0) {
        if (DAT_1803ff948 == (code *)0x0) {
          (**(code **)(lVar8 + 0xf8))(plVar4,0);
          return 1;
        }
        cVar2 = (**(code **)(lVar8 + 0x138))(plVar4,1,4);
        if (cVar2 == '\0') {
          pcVar6 = "Disconnect";
        }
        else {
          pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
        }
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        pcVar7 = "?";
        if (pcVar6 != (char *)0x0) {
          pcVar7 = pcVar6;
        }
        FUN_180014410("[LUANET] script sent net_Disconnect: %s\n",pcVar7);
        pcVar7 = "Disconnect";
        if (pcVar6 != (char *)0x0) {
          pcVar7 = pcVar6;
        }
        pcVar1 = *(code **)(*plVar4 + 0xf8);
        uVar3 = (*DAT_1803ff948)(pcVar7);
        (*pcVar1)(plVar4,uVar3);
        return 1;
      }
    }
    (**(code **)(lVar8 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


