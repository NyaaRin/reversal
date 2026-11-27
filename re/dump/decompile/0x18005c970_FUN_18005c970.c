// 0x18005c970  FUN_18005c970
// size=193 thunk=false
// signature: undefined FUN_18005c970()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005c970(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar4 = *plVar2;
      if (plVar3 != (longlong *)0x0) {
        dVar1 = (double)(**(code **)(lVar4 + 0x160))(plVar2,1);
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        fVar5 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_180014410("[LUANET] script set last received -> %.3f (now %.3f)\n",(double)(float)dVar1,
                      (double)fVar5);
        *(float *)(plVar3 + 0x1b) = (float)dVar1;
        return 0;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


