// 0x1800bab10  FUN_1800bab10
// size=97 thunk=false
// signature: undefined FUN_1800bab10()
// status: ok


void FUN_1800bab10(longlong *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_18001d620(*param_1);
    *puVar1 = (int)param_1[1];
    puVar1[1] = *(undefined4 *)((longlong)param_1 + 0xc);
    puVar1[2] = (int)param_1[2];
    if (-1 < *(int *)((longlong)param_1 + 0x14)) {
      FUN_1800ba3b0(*param_1,(int)param_1[3],*(int *)((longlong)param_1 + 0x14),
                    *(undefined4 *)((longlong)param_1 + 0x1c));
    }
    FUN_18001d810(*param_1);
    *param_1 = 0;
    return;
  }
  return;
}


