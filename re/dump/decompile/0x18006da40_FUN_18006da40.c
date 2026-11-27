// 0x18006da40  FUN_18006da40
// size=35 thunk=false
// signature: undefined FUN_18006da40()
// status: ok


ulonglong FUN_18006da40(longlong *param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar1 = (ulonglong)param_3;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x30))();
  }
  return uVar1;
}


