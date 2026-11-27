// 0x1800e72c0  FUN_1800e72c0
// size=155 thunk=false
// signature: undefined FUN_1800e72c0()
// status: ok


undefined8 FUN_1800e72c0(longlong param_1)

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
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 0x40));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x44));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x48));
    return 3;
  }
  return 0;
}


