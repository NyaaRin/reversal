// 0x180267a60  FUN_180267a60
// size=188 thunk=false
// signature: undefined FUN_180267a60()
// status: ok


void FUN_180267a60(longlong param_1,ushort param_2)

{
  if (((param_2 != 0) || (*(short *)(param_1 + 0xba6) != 0)) && (*(char *)(param_1 + 0xba5) != '\0')
     ) {
    if ((param_2 & 0xfc00) == 0xd800) {
      if (*(short *)(param_1 + 0xba6) != 0) {
        FUN_180267940(param_1,0xfffd);
      }
      *(ushort *)(param_1 + 0xba6) = param_2;
      return;
    }
    if (*(short *)(param_1 + 0xba6) != 0) {
      if ((param_2 & 0xfc00) == 0xdc00) {
        param_2 = 0xfffd;
      }
      else {
        FUN_180267940(param_1,0xfffd);
      }
      *(undefined2 *)(param_1 + 0xba6) = 0;
    }
    FUN_180267940(param_1,param_2);
  }
  return;
}


