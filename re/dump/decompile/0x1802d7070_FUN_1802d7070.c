// 0x1802d7070  FUN_1802d7070
// size=69 thunk=false
// signature: undefined FUN_1802d7070()
// status: ok


void FUN_1802d7070(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  
  if (((byte)DAT_1803da514 & 4) != 0) {
    FUN_1802d6790(param_1,(longlong)param_2 - (longlong)param_1,param_3,
                  (longlong)param_4 - (longlong)param_3);
    return;
  }
  do {
    if (param_1 == param_2) {
      return;
    }
    if (param_3 != param_4) {
      pcVar1 = param_3;
      do {
        if (*param_1 == *pcVar1) {
          return;
        }
        pcVar1 = pcVar1 + 1;
      } while (pcVar1 != param_4);
    }
    param_1 = param_1 + 1;
  } while( true );
}


