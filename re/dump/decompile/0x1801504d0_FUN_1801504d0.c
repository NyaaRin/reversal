// 0x1801504d0  FUN_1801504d0
// size=113 thunk=false
// signature: undefined FUN_1801504d0()
// status: ok


char * FUN_1801504d0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  FUN_18016d4c0();
  pcVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar1 = *(char **)param_1;
  }
  pcVar2 = pcVar1 + *(longlong *)(param_1 + 0x10);
  for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 1) {
    if ((byte)(*pcVar1 + 0xbfU) < 0x1a) {
      *pcVar1 = *pcVar1 + ' ';
    }
  }
  return param_1;
}


