// 0x18006a150  FUN_18006a150
// size=68 thunk=false
// signature: undefined FUN_18006a150()
// status: ok


undefined8 FUN_18006a150(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    uVar2 = (**(code **)(*plVar1 + 0x158))(plVar1,1);
    lVar3 = FUN_180068950(uVar2);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x38) = 1;
    }
  }
  return 0;
}


