// 0x18005c170  FUN_18005c170
// size=158 thunk=false
// signature: undefined FUN_18005c170()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005c170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    else {
      lVar2 = (**(code **)(*DAT_1803fa668 + 0x240))();
      lVar3 = *plVar1;
      if (lVar2 != 0) {
        dVar4 = (double)(**(code **)(lVar3 + 0x160))(plVar1,1);
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        FUN_180014410("[LUANET] script set packet drop %d -> %d\n",*(undefined4 *)(lVar2 + 0x273c),
                      (int)dVar4);
        *(int *)(lVar2 + 0x273c) = (int)dVar4;
        return 0;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


