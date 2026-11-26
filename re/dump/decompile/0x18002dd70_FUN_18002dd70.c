// 0x18002dd70  FUN_18002dd70
// size=45 thunk=false
// signature: undefined FUN_18002dd70()
// status: ok


void FUN_18002dd70(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 3) != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
                     *(undefined4 *)((longlong)param_1 + 0x14));
  }
  return;
}


