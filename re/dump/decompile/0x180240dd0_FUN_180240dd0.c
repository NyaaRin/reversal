// 0x180240dd0  FUN_180240dd0
// size=81 thunk=false
// signature: undefined FUN_180240dd0()
// status: ok


void FUN_180240dd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_18020d430(lVar2 + 0x28);
    FUN_18021e060();
  }
  return;
}


