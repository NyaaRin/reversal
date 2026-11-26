// 0x18005cc20  FUN_18005cc20
// size=242 thunk=false
// signature: undefined FUN_18005cc20()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005cc20(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar5 = *plVar3;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar5 = *plVar3;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(lVar5 + 0x158))(plVar3,1);
        if (lVar5 == 0) {
          (**(code **)(*plVar3 + 0xe0))(plVar3);
          return 1;
        }
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        FUN_180014410("[LUANET] script RequestFile \'%s\'\n",lVar5);
        pcVar1 = *(code **)(*plVar3 + 0xf0);
        uVar2 = (**(code **)(*plVar4 + 0x1f0))(plVar4,lVar5);
        (*pcVar1)(plVar3,(double)uVar2);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


