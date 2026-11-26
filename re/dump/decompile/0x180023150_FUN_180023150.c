// 0x180023150  FUN_180023150
// size=45 thunk=false
// signature: undefined FUN_180023150()
// status: ok


void FUN_180023150(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 3) != '\0') && (DAT_1803fae90 != (code *)0x0)) {
    (*DAT_1803fae90)(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
                     *(undefined4 *)((longlong)param_1 + 0x14));
  }
  return;
}


