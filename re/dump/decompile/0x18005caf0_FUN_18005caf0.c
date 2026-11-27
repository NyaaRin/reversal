// 0x18005caf0  FUN_18005caf0
// size=293 thunk=false
// signature: undefined FUN_18005caf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005caf0(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  
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
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        }
        else {
          dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
          _DAT_1803ff928 = _DAT_1803ff928 + 1;
          FUN_180014410("[LUANET] script SendFile \'%s\' (id %u)\n",lVar5,
                        (longlong)dVar6 & 0xffffffff);
          pcVar1 = *(code **)(*plVar3 + 0xf8);
          uVar2 = (**(code **)(*plVar4 + 0x150))(plVar4,lVar5,(longlong)dVar6 & 0xffffffff);
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


