// 0x180190fd0  FUN_180190fd0
// size=69 thunk=false
// signature: undefined FUN_180190fd0()
// status: ok


void FUN_180190fd0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_180208060();
  FUN_180121960(param_1,param_2 == 0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2);
  }
  return;
}


