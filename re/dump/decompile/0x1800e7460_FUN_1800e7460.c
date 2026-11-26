// 0x1800e7460  FUN_1800e7460
// size=143 thunk=false
// signature: undefined FUN_1800e7460()
// status: ok


undefined8 FUN_1800e7460(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar2 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(DAT_1803ff960 + 0x30));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(lVar1 + 0x32));
    return 2;
  }
  return 0;
}


