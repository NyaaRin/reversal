// 0x18005c550  FUN_18005c550
// size=218 thunk=false
// signature: undefined FUN_18005c550()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005c550(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar5 = *plVar2;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar5 = *plVar2;
      if (plVar3 != (longlong *)0x0) {
        cVar1 = (**(code **)(lVar5 + 0x138))(plVar2,1,1);
        if (cVar1 == '\0') {
          cVar1 = '\x01';
        }
        else {
          cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);
        }
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        puVar4 = &DAT_1803449c4;
        if (cVar1 != '\0') {
          puVar4 = &DAT_1803449c0;
        }
        FUN_180014410("[LUANET] script set compression -> %s\n",puVar4);
        (**(code **)(*plVar3 + 0x1e8))(plVar3,cVar1);
        return 0;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


