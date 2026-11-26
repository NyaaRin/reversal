// 0x180049be0  FUN_180049be0
// size=82 thunk=false
// signature: undefined FUN_180049be0()
// status: ok


void FUN_180049be0(char param_1)

{
  char local_res10 [24];
  
  if (DAT_1803edc40 == DAT_1803edc48) {
    local_res10[0] = param_1;
    FUN_1802281d0(&DAT_1803edc38,DAT_1803edc40,local_res10);
  }
  else {
    *DAT_1803edc40 = param_1;
    DAT_1803edc40 = DAT_1803edc40 + 1;
  }
  if ((byte)(param_1 - 1U) < 2) {
    DAT_1803ff8f0 = DAT_1803ff8f0 + 1;
  }
  return;
}


