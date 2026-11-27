// 0x180121180  FUN_180121180
// size=120 thunk=false
// signature: undefined FUN_180121180()
// status: ok


undefined8 FUN_180121180(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (0 < param_1) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar4 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_18001dbf0(lVar4);
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      if ((plVar5 != (longlong *)0x0) &&
         (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == param_1)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


