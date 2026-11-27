// 0x1801a0ae0  FUN_1801a0ae0
// size=127 thunk=false
// signature: undefined FUN_1801a0ae0()
// status: ok


void FUN_1801a0ae0(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int local_18 [4];
  
  local_18[1] = 4;
  local_18[0] = 0;
  piVar2 = local_18;
  if (-1 < DAT_1803fb24c) {
    piVar2 = &DAT_1803fb24c;
  }
  piVar1 = local_18 + 1;
  if (DAT_1803fb24c < 5) {
    piVar1 = piVar2;
  }
  DAT_1803fb24c = *piVar1;
  FUN_18026a810(0,&DAT_1803dca28 + (longlong)DAT_1803fb24c * 200);
  FUN_1802aac80(&DAT_1803431ac,param_1);
  FUN_18026a890(1);
  return;
}


