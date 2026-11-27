// 0x1801f1ad0  FUN_1801f1ad0
// size=42 thunk=false
// signature: undefined FUN_1801f1ad0()
// status: ok


void FUN_1801f1ad0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,0);
  }
  DAT_18040a389 = 0;
  DAT_1803ff230 = 1;
  FUN_180114560();
  return;
}


