// 0x18005d760  FUN_18005d760
// size=270 thunk=false
// signature: undefined FUN_18005d760()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d760(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar5 = *plVar3;
    }
    else {
      lVar4 = (**(code **)(*DAT_1803fa668 + 0x240))();
      lVar5 = *plVar3;
      if (lVar4 != 0) {
        if (DAT_1803ff910 == (code *)0x0) {
          (**(code **)(lVar5 + 0xf8))(plVar3,0);
          return 1;
        }
        lVar5 = (**(code **)(lVar5 + 0x158))(plVar3,1);
        if (lVar5 == 0) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        }
        else {
          _DAT_1803ff928 = _DAT_1803ff928 + 1;
          FUN_180014410("[LUANET] script sent file CRC for \'%s\'\n",lVar5);
          pcVar1 = *(code **)(*plVar3 + 0xf8);
          uVar2 = (*DAT_1803ff910)(lVar5);
          (*pcVar1)(plVar3,uVar2);
        }
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


