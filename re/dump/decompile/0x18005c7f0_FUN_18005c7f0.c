// 0x18005c7f0  FUN_18005c7f0
// size=189 thunk=false
// signature: undefined FUN_18005c7f0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005c7f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar4 = *plVar1;
      if (plVar2 != (longlong *)0x0) {
        lVar4 = (**(code **)(lVar4 + 0x160))(plVar1,1);
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        fVar3 = (float)(**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_180014410("[LUANET] script set clear time -> %.3f (now %.3f)\n",lVar4,(double)fVar3);
        plVar2[0x1e] = lVar4;
        return 0;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


