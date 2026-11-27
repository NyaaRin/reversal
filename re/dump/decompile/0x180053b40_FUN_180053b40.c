// 0x180053b40  FUN_180053b40
// size=72 thunk=false
// signature: undefined FUN_180053b40()
// status: ok


void FUN_180053b40(longlong *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_18001d620(*param_1);
    *puVar1 = (int)param_1[1];
    puVar1[1] = *(undefined4 *)((longlong)param_1 + 0xc);
    puVar1[2] = (int)param_1[2];
    FUN_18001d810(*param_1);
    *param_1 = 0;
    return;
  }
  return;
}


