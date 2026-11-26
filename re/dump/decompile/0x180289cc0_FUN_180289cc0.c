// 0x180289cc0  FUN_180289cc0
// size=118 thunk=false
// signature: undefined FUN_180289cc0()
// status: ok


void FUN_180289cc0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      if (*(longlong *)((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 2) + 8) != 0) {
        FUN_18026f680();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    FUN_18026f680();
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


