// 0x18005ddc0  FUN_18005ddc0
// size=141 thunk=false
// signature: undefined FUN_18005ddc0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005ddc0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803fa620;
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa620 == 0) {
      (**(code **)(*plVar2 + 0xe0))();
      return 1;
    }
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    _DAT_1803ff928 = _DAT_1803ff928 + 1;
    FUN_180014410("[LUANET] script set lastoutgoingcommand %d -> %d\n",
                  *(undefined4 *)(lVar1 + 0x20b84),(int)dVar3);
    *(int *)(lVar1 + 0x20b84) = (int)dVar3;
    return 0;
  }
  return 0;
}


