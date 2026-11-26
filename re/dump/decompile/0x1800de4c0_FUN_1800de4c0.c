// 0x1800de4c0  FUN_1800de4c0
// size=246 thunk=false
// signature: undefined FUN_1800de4c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1800de4c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 uVar5;
  double dVar6;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      DAT_18040a55c = 0;
      return 0;
    }
    cVar1 = FUN_1800de470();
    if ((cVar1 != '\0') && (cVar1 = FUN_1800dde30(param_1), cVar1 != '\0')) {
      dVar4 = (double)FUN_18001eff0(param_1);
      dVar6 = dVar4;
      iVar2 = FUN_18001e5b0(param_1);
      if ((dVar4 != _DAT_1803e9098) &&
         ((iVar2 != 0 && (_DAT_1803e9098 = dVar4, DAT_18040a55c == '\0')))) {
        cVar1 = '\x01';
        uVar5 = 1;
        plVar3 = (longlong *)FUN_180076750(param_1);
        if (plVar3 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,param_1,*plVar3,param_4,uVar5,dVar6);
        }
        if (cVar1 == '\0') {
          DAT_18040a55c = '\x01';
        }
        return 1;
      }
    }
  }
  return 0;
}


