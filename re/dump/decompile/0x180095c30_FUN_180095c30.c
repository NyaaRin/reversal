// 0x180095c30  FUN_180095c30
// size=220 thunk=false
// signature: undefined FUN_180095c30()
// status: ok


void FUN_180095c30(longlong *param_1,longlong *param_2)

{
  int iVar1;
  
  if (((int)param_1[2] != 0) &&
     (iVar1 = (int)param_1[2] + -1, *(int *)(param_1 + 2) = iVar1, iVar1 < 1)) {
    if ((param_2 != (longlong *)0x0) && (param_2[1] == *param_1)) {
      iVar1 = (**(code **)*param_2)(param_2);
      (**(code **)(*param_2 + 0x128))(param_2,(int)param_1[1]);
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        (**(code **)(*param_2 + 0xe0))();
      }
      else {
        (**(code **)(*param_2 + 0x128))(param_2);
      }
      FUN_18002da40(param_2[1],iVar1 + 1,"recoilmul");
      (**(code **)(*param_2 + 0x10))(param_2,1);
      (**(code **)(*param_2 + 0x120))(param_2,(int)param_1[1]);
      if (-1 < *(int *)((longlong)param_1 + 0xc)) {
        (**(code **)(*param_2 + 0x120))(param_2);
      }
    }
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}


