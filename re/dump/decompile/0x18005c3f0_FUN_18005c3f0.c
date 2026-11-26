// 0x18005c3f0  FUN_18005c3f0
// size=179 thunk=false
// signature: undefined FUN_18005c3f0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005c3f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar3 = *plVar1;
      if (plVar2 != (longlong *)0x0) {
        dVar4 = (double)(**(code **)(lVar3 + 0x160))(plVar1,1);
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        FUN_180014410("[LUANET] script set timeout -> %.1fs\n",(double)(float)dVar4);
        (**(code **)(*plVar2 + 0xf8))(plVar2,(float)dVar4);
        return 0;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


