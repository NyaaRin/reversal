// 0x180121100  FUN_180121100
// size=115 thunk=false
// signature: undefined FUN_180121100()
// status: ok


undefined1 FUN_180121100(char *param_1)

{
  char *pcVar1;
  
  if (param_1 < (char *)0x10001) {
    return 0;
  }
  pcVar1 = strstr(param_1,"viewmodel");
  if ((((pcVar1 == (char *)0x0) && (pcVar1 = strstr(param_1,"hands"), pcVar1 == (char *)0x0)) &&
      (pcVar1 = strstr(param_1,"ViewModel"), pcVar1 == (char *)0x0)) &&
     (pcVar1 = strstr(param_1,"Hands"), pcVar1 == (char *)0x0)) {
    return 0;
  }
  return 1;
}


