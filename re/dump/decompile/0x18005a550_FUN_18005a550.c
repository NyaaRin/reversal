// 0x18005a550  FUN_18005a550
// size=143 thunk=false
// signature: undefined FUN_18005a550()
// status: ok


undefined8 FUN_18005a550(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar3 = *plVar1;
      if (plVar2 != (longlong *)0x0) {
        fVar4 = (float)(**(code **)(*plVar2 + 0x10))(plVar2);
        (**(code **)(lVar3 + 0xf0))(plVar1,(double)fVar4);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


